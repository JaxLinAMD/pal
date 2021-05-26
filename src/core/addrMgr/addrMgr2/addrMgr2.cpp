/*
 ***********************************************************************************************************************
 *
 *  Copyright (c) 2015-2021 Advanced Micro Devices, Inc. All Rights Reserved.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 *
 **********************************************************************************************************************/

#include "core/device.h"
#include "core/image.h"
#include "core/addrMgr/addrMgr2/addrMgr2.h"
#include "palFormatInfo.h"
#include "core/settingsLoader.h"

using namespace Util;

namespace Pal
{
namespace AddrMgr2
{

// Maximum number of mipmap levels we expect to see in an Image.
constexpr uint32 MaxImageMipLevels = 15;

// =====================================================================================================================
AddrMgr2::AddrMgr2(
    const Device* pDevice)
    :
    // Note: Each subresource for AddrMgr2 hardware needs the following tiling information: the actual tiling
    // information for itself as computed by the AddrLib.
    AddrMgr(pDevice, sizeof(TileInfo)),
    m_varBlockSize(pDevice->GetGfxDevice()->GetVarBlockSize())
{
}

// =====================================================================================================================
Result Create(
    const Device*  pDevice,
    void*          pPlacementAddr,
    AddrMgr**      ppAddrMgr)
{
    PAL_ASSERT((pDevice != nullptr) && (pPlacementAddr != nullptr) && (ppAddrMgr != nullptr));

    AddrMgr* pAddrMgr = PAL_PLACEMENT_NEW(pPlacementAddr) AddrMgr2(pDevice);

    Result result = pAddrMgr->Init();

    if (result == Result::Success)
    {
        (*ppAddrMgr) = pAddrMgr;
    }
    else
    {
        pAddrMgr->Destroy();
    }

    return result;
}

// =====================================================================================================================
// Returns the size, in bytes, required to support an AddrMgr1 object
size_t GetSize()
{
    return sizeof(AddrMgr2);
}

// =====================================================================================================================
AddrResourceType AddrMgr2::GetAddrResourceType(
    const Pal::Image*  pImage)
{
    // Lookup table for converting between ImageType enums and AddrResourceType enums.
    constexpr AddrResourceType AddrResType[] =
    {
        ADDR_RSRC_TEX_1D,
        ADDR_RSRC_TEX_2D,
        ADDR_RSRC_TEX_3D,
    };

    const GfxImage*  pGfxImage = pImage->GetGfxImage();
    const ImageType  imageType = pGfxImage->GetOverrideImageType();

    return AddrResType[static_cast<uint32>(imageType)];
}

// =====================================================================================================================
// Returns the number of slices an 3D image was *created* by the *address library* with.
uint32 AddrMgr2::GetNumAddrLib3dSlices(
    const Pal::Image*                               pImage,
    const ADDR2_GET_PREFERRED_SURF_SETTING_OUTPUT&  surfSetting,
    const ADDR2_COMPUTE_SURFACE_INFO_OUTPUT&        surfInfoOut)
{
    const auto&  createInfo = pImage->GetImageCreateInfo();

    // It's the callers responsibility to verify that the image type is 3D
    PAL_ASSERT(createInfo.imageType == ImageType::Tex3d);

    // The number of slices used by the addrlib is what you'd expect for linear images and for tiled
    // images is based on the "numSlices" field
    const uint32  numSlices = (IsLinearSwizzleMode(surfSetting.swizzleMode)
                               ? createInfo.extent.depth
                               : surfInfoOut.numSlices);

    return numSlices;
}

// =====================================================================================================================
// Assembles the tile token for the given subresource. The tile token is a generated key which can determine if two
// optimally tiled images are compatible for copying when the supportsMismatchedTileTokenCopy capability flag is false.
void AddrMgr2::BuildTileToken(
    SubResourceInfo* pSubResInfo,
    AddrSwizzleMode  swizzleMode
    ) const
{
    TileToken token = { };

    token.bits.elementSize = Log2(pSubResInfo->bitsPerTexel >> 3);
    token.bits.swizzleMode = GetSwizzleType(swizzleMode);

    pSubResInfo->tileToken = token.u32All;
}

// =====================================================================================================================
// Initializes all subresources for an Image object.
Result AddrMgr2::InitSubresourcesForImage(
    Image*             pImage,
    gpusize*           pGpuMemSize,
    gpusize*           pGpuMemAlignment,
    ImageMemoryLayout* pGpuMemLayout,
    SubResourceInfo*   pSubResInfoList,
    void*              pSubResTileInfoList,
    bool*              pDccUnsupported
) const
{
    // For AddrMgr2 style addressing, there's no chance of a single subresource being incapable of supporting DCC.
    *pDccUnsupported = false;

    Result result = Result::Success;

    const ImageCreateInfo& createInfo = pImage->GetImageCreateInfo();
    const ImageInfo&       imageInfo  = pImage->GetImageInfo();

    const uint32 subResourcesPerPlane = (createInfo.mipLevels * createInfo.arraySize);
    for (uint32 plane = 0; plane < imageInfo.numPlanes; ++plane)
    {
        // Base subresource for the current plane:
        SubResourceInfo*const pBaseSubRes    = (pSubResInfoList + (plane * subResourcesPerPlane));
        TileInfo*const        pBaseTileInfo  = NonConstTileInfo(pSubResTileInfoList, (plane * subResourcesPerPlane));
        ADDR_QBSTEREOINFO     addrStereoInfo = { };

        ADDR2_GET_PREFERRED_SURF_SETTING_OUTPUT surfSettingOut = { };
        surfSettingOut.size = sizeof(surfSettingOut);

        ADDR2_MIP_INFO mipInfo[MaxImageMipLevels] = { };
        ADDR2_COMPUTE_SURFACE_INFO_OUTPUT surfInfoOut = { };
        surfInfoOut.size     = sizeof(surfInfoOut);
        surfInfoOut.pMipInfo = &mipInfo[0];

        result = ComputePlaneSwizzleMode(pImage, pBaseSubRes, false, &surfSettingOut);
        if (result == Result::Success)
        {
            surfInfoOut.pStereoInfo = &addrStereoInfo;

            // Use AddrLib to compute the padded and aligned dimensions of the entire mip-chain.
            result = ComputeAlignedPlaneDimensions(pImage,
                                                   pBaseSubRes,
                                                   pBaseTileInfo,
                                                   surfSettingOut.swizzleMode,
                                                   &surfInfoOut);
        }

        if (createInfo.flags.stereo == 1)
        {
            const uint32 tileSwizzleRight = surfInfoOut.pStereoInfo->rightSwizzle << 8;

            pGpuMemLayout->stereoLineOffset       = surfInfoOut.pStereoInfo->eyeHeight;
            pSubResInfoList->extentTexels.height += pGpuMemLayout->stereoLineOffset;
            pSubResInfoList->stereoLineOffset     = pGpuMemLayout->stereoLineOffset;
            pSubResInfoList->stereoOffset         = (surfInfoOut.pStereoInfo->rightOffset | tileSwizzleRight);
        }

        if (result == Result::Success)
        {
            if (plane == 0)
            {
                pGpuMemLayout->prtTileWidth  = surfInfoOut.blockWidth;
                pGpuMemLayout->prtTileHeight = surfInfoOut.blockHeight;
                pGpuMemLayout->prtTileDepth  = surfInfoOut.blockSlices;
            }

            pBaseTileInfo->mip0InMipTail = (surfInfoOut.mipChainInTail != 0) ? true : false;
            pBaseTileInfo->mipTailMask   = ((surfInfoOut.bpp / 8) * surfInfoOut.blockWidth *
                                            surfInfoOut.blockHeight * surfInfoOut.blockSlices) - 1;

            result = pImage->GetGfxImage()->Addr2FinalizePlane(pBaseSubRes, pBaseTileInfo, surfSettingOut, surfInfoOut);
        }

        if (result == Result::Success)
        {
            SubresId subRes = pBaseSubRes->subresId;
            for (subRes.mipLevel = 0; subRes.mipLevel < createInfo.mipLevels; ++subRes.mipLevel)
            {
                for (subRes.arraySlice = 0; subRes.arraySlice < createInfo.arraySize; ++subRes.arraySlice)
                {
                    const uint32          subResIdx = pImage->CalcSubresourceId(subRes);
                    SubResourceInfo*const pSubRes   = (pSubResInfoList + subResIdx);
                    TileInfo*const        pTileInfo = NonConstTileInfo(pSubResTileInfoList, subResIdx);

                    // Each subresource in the plane uses the same tiling info as the base subresource.
                    *pTileInfo = *pBaseTileInfo;

                    result = InitSubresourceInfo(pImage, pSubRes, pTileInfo, surfSettingOut, surfInfoOut);
                    if (result != Result::Success)
                    {
                        PAL_ALERT_ALWAYS();
                        break;
                    }
                } // End loop over slices

                // Stop initialize next mipLevel since error occurs
                if (result != Result::Success)
                {
                    break;
                }

                // Update the memory layout's swizzle equation information. These propagate down from index 0 to index
                // 1 so this check should skip this logic once we're found both swizzle equations.
                subRes.arraySlice = 0;
                const SubResourceInfo*const pSubResSlice0 = pImage->SubresourceInfo(subRes);
                // Use eqIdx already set by InitSubresourceInfo().
                const uint8 eqIdx = pSubResSlice0->swizzleEqIndex;
                if ((pGpuMemLayout->swizzleEqIndices[1] != eqIdx) &&
                    // Don't give the caller the swizzle equations unless they've actually been requested.  Giving
                    // DX unrequested swizzle equations causes them to believe that they did request swizzle eqs,
                    // which causes all kinds of bizarre side effects, including requesting tile-swizzles for surfaces
                    // that don't support them.
                    (createInfo.flags.preferSwizzleEqs || createInfo.flags.needSwizzleEqs))
                {
                    if (pGpuMemLayout->swizzleEqIndices[0] == InvalidSwizzleEqIndex)
                    {
                        // We set both indices because they must both be valid even if the image only uses one.
                        pGpuMemLayout->swizzleEqIndices[0] = eqIdx;
                        pGpuMemLayout->swizzleEqIndices[1] = eqIdx;
                    }
                    else if (pGpuMemLayout->swizzleEqIndices[0] == pGpuMemLayout->swizzleEqIndices[1])
                    {
                        // We've just transitioned to the second swizzle index.
                        pGpuMemLayout->swizzleEqIndices[1]    = eqIdx;

                        // The transition cound happen either between two mip levels, or between two planes.
#if PAL_CLIENT_INTERFACE_MAJOR_VERSION < 642
                        const uint32 planeIndex = PlaneIndex(subRes.aspect);
                        if ((pImage->GetImageInfo().numPlanes > 1) && (planeIndex != 0))
                        {
                            pGpuMemLayout->swizzleEqTransitionPlane = static_cast<uint8>(planeIndex);
                        }
#else
                        if ((pImage->GetImageInfo().numPlanes > 1) && (subRes.plane != 0))
                        {
                            pGpuMemLayout->swizzleEqTransitionPlane = static_cast<uint8>(subRes.plane);
                        }
#endif
                        else
                        {
                            pGpuMemLayout->swizzleEqTransitionMip = static_cast<uint8>(subRes.mipLevel);
                        }
                    }
                    else
                    {
                        // We found an unexpected third swizzle index.
                        PAL_ASSERT(pGpuMemLayout->swizzleEqIndices[0] == eqIdx);
                    }
                }
            } // End loop over mip levels

            // Update the Image's alignment. We will update the GPU memory size in the loop at the end of this method.
            *pGpuMemAlignment = Max<gpusize>(*pGpuMemAlignment, surfInfoOut.baseAlign);

            // The loop below will work through each sub-resource to calculate its offset and maintain a running total
            // of the image size that is ultimately reported back to the caller.  Adress library considers one slice
            // to be:
            //      a) A single slice of a 2D array.  This is good as it matches the PAL definition of a slice.
            //      b) A single slice of a 3D volume.  This is bad as PAL considers one slice of a volume to be all
            //         the slices.
            //
            // Calculate the number of slices that the address-library "sees" so that the slice size (should) match the
            // reported surface size.
            const uint32 numSlices = ((createInfo.imageType == ImageType::Tex3d)
                                      ? GetNumAddrLib3dSlices(pImage, surfSettingOut, surfInfoOut)
                                      : createInfo.arraySize);

            PAL_ASSERT(surfInfoOut.surfSize == (surfInfoOut.sliceSize * numSlices));
        }

        // Stop initialize next plane since error occurs
        if (result != Result::Success)
        {
            break;
        }

    } // End loop over planes

    // Depth/stencil and YUV images have different orderings of subresources and planes. To handle this, we'll loop
    // through again to compute the final offsets for each subresource.
    if (result == Result::Success)
    {
        // Depth/stencil and YUV images have different orderings of subresources and planes. To handle this, we'll
        // loop through again to compute the final offsets for each subresource.
        //
        // This loops through all the slices of a mip level first before incrementing the mip-level part of
        // the subResId.
        SubResIterator subResIt(*pImage);
        do
        {
            pImage->GetGfxImage()->Addr2InitSubResInfo(subResIt,
                                                       pSubResInfoList,
                                                       pSubResTileInfoList,
                                                       pGpuMemSize);
            SubResourceInfo*const pSubResInfo = (pSubResInfoList + subResIt.Index());
            const uint32 swizzleMode          = pImage->GetGfxImage()->GetSwTileMode(pSubResInfo);

            // For linear modes or with on-mipmap or non 2d and non arrayed textures, the swizzleOffset is the same as
            // mem offset.
            if (IsLinearSwizzleMode(static_cast<AddrSwizzleMode>(swizzleMode)) ||
                ((createInfo.mipLevels == 1) ||
                 ((createInfo.imageType != Pal::ImageType::Tex2d) && (createInfo.arraySize == 1))))
            {
                pSubResInfo->swizzleOffset = pSubResInfo->offset;
            }
        } while (subResIt.Next());
    }

    return result;
}

// =====================================================================================================================
// Computes the size (in PRT tiles) of the mip tail for a particular Image plane.
void AddrMgr2::ComputeTilesInMipTail(
    const Image&       image,
#if PAL_CLIENT_INTERFACE_MAJOR_VERSION < 642
    ImageAspect        aspect,
#else
    uint32             plane,
#endif
    ImageMemoryLayout* pGpuMemLayout
    ) const
{
    const ImageCreateInfo& createInfo = image.GetImageCreateInfo();
#if PAL_CLIENT_INTERFACE_MAJOR_VERSION < 642
    const SubresId baseSubresId       = image.GetBaseSubResource();
#endif
    // This function is only supposed to be called for PRT Images which have a mip tail.
    PAL_ASSERT((createInfo.flags.prt != 0) && (pGpuMemLayout->prtMinPackedLod < createInfo.mipLevels));

    // AddrMgr2 only supports GPU's whose tiling has a single mip tail per array slice.
    const auto& imageProperties = GetDevice()->ChipProperties().imageProperties;
    PAL_ASSERT((imageProperties.prtFeatures & PrtFeaturePerSliceMipTail) != 0);

    // 3D image may need one more tiles for mip tail considering depth.
    if (createInfo.imageType == ImageType::Tex3d)
    {
#if PAL_CLIENT_INTERFACE_MAJOR_VERSION < 642
        const SubresId              subResId    = { baseSubresId.aspect, pGpuMemLayout->prtMinPackedLod, 0 };
#else
        const SubresId              subResId    = { 0, pGpuMemLayout->prtMinPackedLod, 0 };
#endif
        const SubResourceInfo*const pSubResInfo = image.SubresourceInfo(subResId);
        pGpuMemLayout->prtMipTailTileCount      =
            static_cast<uint32>(RoundUpQuotient(pSubResInfo->extentElements.depth, pGpuMemLayout->prtTileDepth));
    }
    else
    {
        // The GPU addressing document states that if a mip tail is present, it is always exactly one tile block per
        // array slice.
        pGpuMemLayout->prtMipTailTileCount = 1;
    }
}

// =====================================================================================================================
// Computes the swizzling mode for an Fmask surface associated with the color plane of an Image.
Result AddrMgr2::ComputeFmaskSwizzleMode(
    const Image&                             image,
    ADDR2_GET_PREFERRED_SURF_SETTING_OUTPUT* pOut
    ) const
{
    return ComputePlaneSwizzleMode(&image, image.SubresourceInfo(0), true, pOut);
}

// =====================================================================================================================
// Determines the tiling capabilities for a plane of this Image.
void AddrMgr2::InitTilingCaps(
    const Image*        pImage,
    ADDR2_SURFACE_FLAGS surfaceFlags,
    ADDR2_BLOCK_SET*    pBlockSettings
    ) const
{
    const PalSettings&     settings       = m_pDevice->Settings();
    const ImageCreateInfo& createInfo     = pImage->GetImageCreateInfo();
    const bool             isRenderTarget = pImage->IsRenderTarget();
    const bool             isDepthStencil = pImage->IsDepthStencilTarget();

    const bool varSwizzleDefault   = settings.addr2UseVarSwizzleMode == Addr2UseVarSwizzleDefault;
    const bool varSwizzleFull      = TestAnyFlagSet(settings.addr2UseVarSwizzleMode, Addr2UseVarSwizzleFull);
    const bool varSwizzleRt1xAa    = TestAnyFlagSet(settings.addr2UseVarSwizzleMode, Addr2UseVarSwizzleRt1xAa);
    const bool varSwizzleDs1xAa    = TestAnyFlagSet(settings.addr2UseVarSwizzleMode, Addr2UseVarSwizzleDs1xAa);
    const bool varSwizzleRtMsaa    = TestAnyFlagSet(settings.addr2UseVarSwizzleMode, Addr2UseVarSwizzleRtMsaa);
    const bool varSwizzleDsMsaa    = TestAnyFlagSet(settings.addr2UseVarSwizzleMode, Addr2UseVarSwizzleDsMsaa);
    const bool varSwizzleNotRtOrDs = TestAnyFlagSet(settings.addr2UseVarSwizzleMode, Addr2UseVarSwizzleNotRtOrDs);

    pBlockSettings->value = 0; // All modes (256B, 4kb, 64kb) are valid
    pBlockSettings->var   = 1; // but don't allow variable-size block modes.

    // Check if flag to disable micro mode is true
    pBlockSettings->micro = settings.addr2Disable256BSwizzleMode;

    // Default to whatever tiling capabilities the settings have selected. This will be overridden for some types
    // of Images.
    // Note: Most YUV-packed formats can be interpreted in a shader as having a different effective bits-per-pixel than
    // the YUV format actually has. This requires that we use linear tiling because the tile swizzle pattern depends
    // highly on the bits-per-pixel of the tiled Image. The exception is NV12/P010 format. This needs to support
    // tiling because NV12/P010 Images can be presentable for some API's, and the display hardware requires tiling.
    if ((createInfo.tiling == ImageTiling::Linear) ||
        (Formats::IsYuv(createInfo.swizzledFormat.format) &&
        (pImage->GetGfxImage()->IsRestrictedTiledMultiMediaSurface() == false)))
    {
        // This Image is using linear tiling, so disable all other modes.
        pBlockSettings->micro          = 1;
        pBlockSettings->macroThin4KB   = 1;
        pBlockSettings->macroThick4KB  = 1;
        pBlockSettings->macroThin64KB  = 1;
        pBlockSettings->macroThick64KB = 1;
    }
    else if (createInfo.flags.prt)
    {
        // Tiled resource must use 64KB block size and all other flags must be set as well (forbidden).
        pBlockSettings->micro         = 1;
        pBlockSettings->macroThin4KB  = 1;
        pBlockSettings->macroThick4KB = 1;
        pBlockSettings->linear        = 1;
    }
    else if ((surfaceFlags.display == 0)                                       &&
             (varSwizzleFull                                                   ||
             (varSwizzleRt1xAa && isRenderTarget && (createInfo.samples == 1)) ||
             (varSwizzleDs1xAa && isDepthStencil && (createInfo.samples == 1)) ||
             (varSwizzleRtMsaa && isRenderTarget && (createInfo.samples > 1))  ||
             (varSwizzleDsMsaa && isDepthStencil && (createInfo.samples > 1))  ||
             (varSwizzleNotRtOrDs && (isDepthStencil == false) && (isRenderTarget == false))))
    {
        // VAR swizzle modes are not supported by display engine on GFX10 we can only force to use VAR swizzle mode for
        // non-flippable surface...
        pBlockSettings->var = 0;
    }
    else
    {
        if (varSwizzleDefault                                                 ||
            varSwizzleFull                                                    ||
            (varSwizzleRt1xAa && isRenderTarget && (createInfo.samples == 1)) ||
            (varSwizzleDs1xAa && isDepthStencil && (createInfo.samples == 1)) ||
            (varSwizzleRtMsaa && isRenderTarget && (createInfo.samples > 1))  ||
            (varSwizzleDsMsaa && isDepthStencil && (createInfo.samples > 1))  ||
            (varSwizzleNotRtOrDs && (isDepthStencil == false) && (isRenderTarget == false)))
        {
            // Allow VAR swizzle mode usage if setting allows it.
            pBlockSettings->var = 0;
        }

        // We have to allow linear as linear format is required for some format types (1D-color and 32-32-32 for
        // some examples).  Address library should guarantee that we don't actually get a linear surface unless
        // it's the only option.
        pBlockSettings->linear        = 0;
        pBlockSettings->macroThin4KB  = 0;
        pBlockSettings->macroThick4KB = 0;

        // Disable 4kB swizzle mode so more surfaces get DCC memory.
        // Should only set disable4kBSwizzleMode for testing purposes.
        const uint32 disable4KBSwizzleMode = settings.addr2Disable4kBSwizzleMode;

        const auto imageType = pImage->GetGfxImage()->GetOverrideImageType();

        const bool disable1D = ((imageType == ImageType::Tex1d) &&
                                TestAnyFlagSet(disable4KBSwizzleMode, Addr2Disable4kBSwizzleColor1D));
        const bool disable2D = ((imageType == ImageType::Tex2d) &&
                                TestAnyFlagSet(disable4KBSwizzleMode, Addr2Disable4kBSwizzleColor2D));
        const bool disable3D = ((imageType == ImageType::Tex3d) &&
                                TestAnyFlagSet(disable4KBSwizzleMode, Addr2Disable4kBSwizzleColor3D));

        if ((isDepthStencil && TestAnyFlagSet(disable4KBSwizzleMode, Addr2Disable4kBSwizzleDepth)) ||
            (isRenderTarget && (disable1D || disable2D || disable3D)))
        {
            pBlockSettings->macroThin4KB  = 1;
            pBlockSettings->macroThick4KB = 1;
        }
    }

    // GFX10 and newer products have addressing changes that allow YUV+DCC to be a possibility.  The need to
    // address slices individually makes YUV+DCC an impossibility on GFX9 platforms; without any possibility for
    // compression, there isn't any benefit to enabling tiling on YUV surfaces either.
    if (IsGfx10Plus(*m_pDevice)                     &&
        (createInfo.tiling == ImageTiling::Optimal) &&
        Formats::IsYuvPlanar(createInfo.swizzledFormat.format))
    {
        {
            // Do allow some of the macro modes so that this surfac will potentially get compression.
            pBlockSettings->macroThin64KB  = 0;
            pBlockSettings->macroThick64KB = 0;
        }
    }
}

// =====================================================================================================================
// Helper function for determining the ADDR2 surface flags for a specific plane of an Image.
ADDR2_SURFACE_FLAGS AddrMgr2::DetermineSurfaceFlags(
    const Image& image,
#if PAL_CLIENT_INTERFACE_MAJOR_VERSION < 642
    ImageAspect  aspect
#else
    uint32       plane,
    bool         forFmask
#endif
    ) const
{
    ADDR2_SURFACE_FLAGS flags = { };

    const ImageCreateInfo& createInfo = image.GetImageCreateInfo();

#if PAL_CLIENT_INTERFACE_MAJOR_VERSION < 642
    switch (aspect)
    {
    case ImageAspect::Fmask:
        flags.fmask = 1;
        break;
    case ImageAspect::Stencil:
        flags.stencil = 1;
        break;
    case ImageAspect::Depth:
        flags.depth = 1;
        break;
    case ImageAspect::Color:
        // We should always set the color flag for non-Depth/Stencil resources. Color block has more strict surface
        // alignments and a texture may be the destination of an image copy.
        flags.color = 1;
        break;

    case ImageAspect::YCbCr:
    case ImageAspect::Y:
    case ImageAspect::CbCr:
    case ImageAspect::Cb:
    case ImageAspect::Cr:
        if ((image.GetImageCreateInfo().usageFlags.colorTarget != 0)
            )
        {
            // We should always set the color flag for YUV resources.
            flags.color = 1;
        }
        break;
    default:
        PAL_NEVER_CALLED();
        break;
    }
#else
    if (forFmask)
    {
        PAL_ASSERT(plane == 0);
        flags.fmask = 1;
    }
    else if (image.IsStencilPlane(plane))
    {
        flags.stencil = image.IsDepthStencilTarget();
    }
    else if (image.IsDepthPlane(plane))
    {
        flags.depth = image.IsDepthStencilTarget();
    }
    else if (image.IsColorPlane(plane))
    {
        // We should always set the color flag for non-Depth/Stencil resources. Color block has more strict surface
        // alignments and a texture may be the destination of an image copy.
        flags.color = 1;
    }
    else if (Formats::IsYuv(createInfo.swizzledFormat.format))
    {
        if ((image.GetImageCreateInfo().usageFlags.colorTarget != 0)
            )
        {
            // We should always set the color flag for YUV resources.
            flags.color = 1;
        }
    }
    else
    {
        PAL_ASSERT_ALWAYS();
    }
#endif

    // Note: We should always set the texture flag since even Color or Depth/Stencil resources could be bound as a
    // shader resource for RPM blts.
    if (Formats::IsBlockCompressed(createInfo.swizzledFormat.format) && (createInfo.tiling == ImageTiling::Linear))
    {
        // A linear block compressed image can only be used as staging resource, so leave texture flag to 0 to let
        // AddrLib correctly choose preferred linear mode (otherwise AddrLib returns ADDR_INVALIDPARAMS).
        PAL_ASSERT((createInfo.usageFlags.shaderRead == 0) && (createInfo.usageFlags.shaderWrite == 0));
    }
    else
    {
        if (Formats::IsBlockCompressed(createInfo.swizzledFormat.format))
        {
            // We should only set color flag when the resource will be used with RTV. This will not happen for
            // block-compressed format since they can never be used as RTV by client and will always use compute
            // engine for copies.
            flags.color = 0;
        }

        flags.texture = 1;
    }

    // The interleaved flag informs the address library that there is extra padding between subresources due to YUV
    // packed and/or YUV planar formats.
    flags.interleaved = Formats::IsYuv(createInfo.swizzledFormat.format);

    flags.display = createInfo.flags.flippable     |
                    image.IsPrivateScreenPresent() |
                    image.IsTurboSyncSurface()     |
                    createInfo.flags.pipSwapChain;

    if (IsGfx10(m_gfxLevel) && ((flags.depth == 1) || (createInfo.samples > 1)))
    {
        // Gfx10 doesn't support PRT synonyms for depth or MSAA resource; so set prt to 0 to allow suporting
        // non-synonyms case. If prt is set to 1, Gfx10Lib::HwlComputeSurfaceInfoSanityCheck will
        // return ADDR_INVALIDPARAMS.
        flags.prt = 0;
    }
    else
    {
        flags.prt = createInfo.flags.prt;
    }

    // Note: AddrLib does not compute the byte offset to nonzero mipmap levels for us. We need to do this manually,
    // using the overall starting location (in texels) of each mip within the whole array slice. However, AddrLib only
    // tells us that texel location if the 'needSwizzleEqs' flag is set. The AddrLib team has confirmed that setting
    // this flag will not affect the resulting swizzle mode for the Image.
    flags.needEquation = ((GetAddrResourceType(&image) != ADDR_RSRC_TEX_1D) &&
                          ((createInfo.flags.needSwizzleEqs != 0) ||
                           (createInfo.tiling != ImageTiling::Linear))) ? 1 : 0;

    flags.qbStereo = createInfo.flags.stereo;

    return flags;
}

// =====================================================================================================================
// Determine if preferred swizzle mode caculated by address library is valid to be overridden by the primaryTilingCaps
// that is returned by KMD
bool AddrMgr2::IsValidToOverride(
    AddrSwizzleMode  primarySwMode,
    ADDR2_SWMODE_SET validSwModeSet)
{
    return TestAnyFlagSet(validSwModeSet.value, (1u << primarySwMode));
}

// =====================================================================================================================
// Computes the swizzling mode for all subresources for the plane associated with the specified subresource.
Result AddrMgr2::ComputePlaneSwizzleMode(
    const Image*                             pImage,
    const SubResourceInfo*                   pBaseSubRes,
    bool                                     forFmask,
    ADDR2_GET_PREFERRED_SURF_SETTING_OUTPUT* pOut
    ) const
{
    PAL_ASSERT((pBaseSubRes->subresId.mipLevel == 0) && (pBaseSubRes->subresId.arraySlice == 0));

    Result result = Result::ErrorUnknown;

    const ImageCreateInfo& createInfo = pImage->GetImageCreateInfo();
    const ImageInfo&       imageInfo  = pImage->GetImageInfo();
    const PalSettings&     settings   = m_pDevice->Settings();
#if PAL_CLIENT_INTERFACE_MAJOR_VERSION < 642
    const ImageAspect      aspect     = (forFmask ? ImageAspect::Fmask : pBaseSubRes->subresId.aspect);
#endif

    ADDR2_GET_PREFERRED_SURF_SETTING_INPUT surfSettingInput = { };
    surfSettingInput.size            = sizeof(surfSettingInput);
    surfSettingInput.format          = Image::GetAddrFormat(pBaseSubRes->format.format);
    surfSettingInput.noXor           = false;
    surfSettingInput.bpp             = Formats::BitsPerPixel(pBaseSubRes->format.format);
    surfSettingInput.width           = createInfo.extent.width;
    surfSettingInput.height          = createInfo.extent.height;
    surfSettingInput.numSlices       = ((createInfo.imageType != ImageType::Tex3d) ? createInfo.arraySize
                                                                                   : createInfo.extent.depth);
    surfSettingInput.numMipLevels    = createInfo.mipLevels;
    surfSettingInput.numSamples      = createInfo.samples;
    surfSettingInput.numFrags        = createInfo.fragments;
#if PAL_CLIENT_INTERFACE_MAJOR_VERSION < 642
    surfSettingInput.flags           = DetermineSurfaceFlags(*pImage, aspect);
#else
    surfSettingInput.flags           = DetermineSurfaceFlags(*pImage, pBaseSubRes->subresId.plane, forFmask);
#endif
    surfSettingInput.resourceType    = GetAddrResourceType(pImage);
    surfSettingInput.resourceLoction = ADDR_RSRC_LOC_UNDEF;

    // Note: This is used by the AddrLib as an additional clamp on 4kB vs. 64kB swizzle modes. It can be set to zero
    // to force the AddrLib to chose the most optimal mode.
    surfSettingInput.maxAlign = createInfo.maxBaseAlign;

    InitTilingCaps(pImage, surfSettingInput.flags, &surfSettingInput.forbiddenBlock);

    // Enable gfx9 to handle 2d sampling on 3d despite its hardware always interpreting as 3d
    // The tile size doesn't matter, though, so we still let AddrLib handle this case.
    // D-mode isn't supported in all cases (PRT, depth-major mipmaps), so watch for overrides.
    if (createInfo.imageType == ImageType::Tex3d)
    {
        surfSettingInput.flags.view3dAs2dArray = createInfo.flags.view3dAs2dArray;
    }

    // Start by building a permitted set of swizzle types. From there we will apply performance optimizations to come
    // up with a preferred set. We need a separate permitted set as a fall-back if we can't create our preferred image.
    ADDR2_SWTYPE_SET permittedSwSet = {};

    if (createInfo.tilingPreference != ImageTilingPattern::Default)
    {
        permittedSwSet.sw_Z = (createInfo.tilingPreference == ImageTilingPattern::Interleaved);
        permittedSwSet.sw_S = (createInfo.tilingPreference == ImageTilingPattern::Standard);
        permittedSwSet.sw_D = (createInfo.tilingPreference == ImageTilingPattern::XMajor);
        permittedSwSet.sw_R = (createInfo.tilingPreference == ImageTilingPattern::YMajor);
    }
    else
    {
        // Otherwise, enable whichever modes are enabled in our setting. By default this should set all bits.
        permittedSwSet.sw_Z = TestAnyFlagSet(settings.addr2PreferredSwizzleTypeSet, Addr2PreferredSW_Z);
        permittedSwSet.sw_S = TestAnyFlagSet(settings.addr2PreferredSwizzleTypeSet, Addr2PreferredSW_S);
        permittedSwSet.sw_D = TestAnyFlagSet(settings.addr2PreferredSwizzleTypeSet, Addr2PreferredSW_D);
        permittedSwSet.sw_R = TestAnyFlagSet(settings.addr2PreferredSwizzleTypeSet, Addr2PreferredSW_R);
    }

    // The permitted set is finalized.
    surfSettingInput.preferredSwSet = permittedSwSet;

    // If this workaround is enabled we must avoid using an S swizzle mode on 8bpp color targets because using
    // blending on such an image can cause corruption on some hardware. In almost all cases we can simply fall back
    // to another swizzle mode like D. However, on some hardware 3D PRT resources must use S modes.
    //
    // In practice this bug is very hard to trigger so we've never actually seen any issues with 3D PRTs using S modes.
    // Rather than disable 3D PRT support we will modify the preferred set and leave S enabled in our permitted set.
    // That way we will end up falling back to an S mode instead of returning an error to the client.
    const bool disableSModes8BppColor =
        (pImage->IsRenderTarget() &&
        // Check format is NV12 as the CbCr plane is 16 bit but it should have the same swizzle mode as Y plane.
        ((surfSettingInput.bpp == 8) || (createInfo.swizzledFormat.format == ChNumFormat::NV12)) &&
        settings.addr2DisableSModes8BppColor);

    if (disableSModes8BppColor)
    {
        surfSettingInput.preferredSwSet.sw_S = 0;
    }

    // Before Vega 20, the sDMA engine couldn't execute 2D 128bpp S micro tiling copies at full rate. This seems to be
    // because that swizzle mode uses the y[0] bit as its first address bit which tends to make neighboring elements
    // non-contiguous. The 128-bpp D micro tiling would be preferred because it uses x[0] instead, making even/odd
    // pairs contiguous. This has a significant impact on linear-to-tiled copy speeds and should help in general.
    // However, benchmarking shows that S modes can be more efficient if DCC is in use so we shouldn't apply this
    // optimization to render targets.
    //
    // Note that we must make sure the preferred set is not a power of two before we remove this S bit because we would
    // otherwise unset the last bit, giving addrlib a value of zero. That's a special value which tells addrlib to pick
    // its own defaults which is definitely not what the above code intended.
    if ((IsVega10(*m_pDevice) || IsVega12(*m_pDevice)) &&
        (createInfo.imageType == ImageType::Tex2d)     &&
        (pImage->IsRenderTarget() == false)            &&
        (surfSettingInput.bpp == 128)                  &&
        (IsPowerOfTwo(surfSettingInput.preferredSwSet.value) == false))
    {
        surfSettingInput.preferredSwSet.sw_S = 0;
    }

    //
    // Getting 3% better performance when "R" swizzle modes are removed. Sampler feedback operations have decreased
    // performance for "R" swizzle modes. The hardware team isn't sure why this is the case, but see no harm in
    // disallowing "R" swizzle modes for this use case.
    if (createInfo.prtPlus.mapType != PrtMapType::None)
    {
        surfSettingInput.preferredSwSet.sw_R = 0;
    }

    ADDR_E_RETURNCODE addrRet = Addr2GetPreferredSurfaceSetting(AddrLibHandle(), &surfSettingInput, pOut);

    // It's possible that we can't get what we preferr so retry using the full permitted mask.
    if ((addrRet != ADDR_OK) && (surfSettingInput.preferredSwSet.value != permittedSwSet.value))
    {
        surfSettingInput.preferredSwSet = permittedSwSet;
        addrRet = Addr2GetPreferredSurfaceSetting(AddrLibHandle(), &surfSettingInput, pOut);
    }

    if (addrRet == ADDR_OK)
    {
        result = Result::Success;

        // Alert if we're supposed to disable S swizzle modes but ended up picking one. See the comment block above
        // for more details about why this is currently OK but could theoretically cause blending corruption.
        PAL_ALERT(disableSModes8BppColor && IsStandardSwzzle(pOut->swizzleMode));

        if (IsGfx10(*m_pDevice) &&
            Formats::IsMacroPixelPackedRgbOnly(createInfo.swizzledFormat.format))
        {
            pOut->swizzleMode = ADDR_SW_LINEAR;
        }
        else if (createInfo.tiling == ImageTiling::Standard64Kb)
        {
            pOut->swizzleMode = ADDR_SW_64KB_S;
        }
        else if (imageInfo.internalCreateInfo.flags.useSharedTilingOverrides &&
                 (imageInfo.internalCreateInfo.gfx9.sharedSwizzleMode != ADDR_SW_MAX_TYPE) &&
                 (forFmask == false))
        {
            pOut->swizzleMode = imageInfo.internalCreateInfo.gfx9.sharedSwizzleMode;
        }
        else if (pImage->GetGfxImage()->IsRestrictedTiledMultiMediaSurface() &&
                 (createInfo.tiling == ImageTiling::Optimal))
        {
            if (createInfo.flags.videoReferenceOnly)
            {
                pOut->swizzleMode = ADDR_SW_256B_D;
            }
            else if (IsVega10(*m_pDevice) || IsVega12(*m_pDevice) || IsVega20(*m_pDevice))
            {
                pOut->swizzleMode = ADDR_SW_64KB_D;
            }
            // Use linear swizzle mode if it's a render target.
            else
            {
                pOut->swizzleMode = (disableSModes8BppColor) ? ADDR_SW_LINEAR : ADDR_SW_64KB_S;
            }
        }
        else if (pImage->IsFlippable())
        {
        }

#if PAL_CLIENT_INTERFACE_MAJOR_VERSION < 642
        else if ((pBaseSubRes->subresId.aspect == ImageAspect::Stencil) &&
                 pImage->IsAspectValid(ImageAspect::Depth))
#else
        else if (pImage->IsStencilPlane(pBaseSubRes->subresId.plane) &&
                 pImage->HasDepthPlane())
#endif
        {
            // If this is a stencil surface that also has a Z component, then the swizzle modes need to match if
            // this surface has hTile data.  There's no good way to know at this level if this surface is destined
            // to have hTile data or not, so just make the swizzle modes match.
#if PAL_CLIENT_INTERFACE_MAJOR_VERSION < 642
            const SubresId  depthSubResId    = { ImageAspect::Depth,
                                                 pBaseSubRes->subresId.mipLevel,
                                                 pBaseSubRes->subresId.arraySlice };
#else
            const SubresId  depthSubResId    = { 0, pBaseSubRes->subresId.mipLevel, pBaseSubRes->subresId.arraySlice };
#endif
            const auto*     pDepthSubResInfo = pImage->SubresourceInfo(depthSubResId);

            pOut->swizzleMode = static_cast<AddrSwizzleMode>(pImage->GetGfxImage()->GetSwTileMode(pDepthSubResInfo));
        }

        if (pImage->IsPeer())
        {
            // Todo: Peer Images must have the same swizzle mode as the original Image (this is implemented for
            // AddrMgr1/Gfx6).
            PAL_NOT_IMPLEMENTED();
        }

        // Fmask surfaces can only use Z-swizzle modes; verify that here.
        PAL_ASSERT((forFmask == false) || IsZSwizzle(pOut->swizzleMode));

        // view3dAs2dArray can only use D-swizzle for gfx9, so fail if the hint was overriden. See full details above.
        if (createInfo.flags.view3dAs2dArray != 0)
        {
            if (IsGfx9(*m_pDevice) && (IsDisplayableSwizzle(pOut->swizzleMode) == false))
            {
                result = Result::ErrorInvalidFlags;
            }
            else if (IsGfx10(*m_pDevice)                      &&
                     (IsZSwizzle(pOut->swizzleMode) == false) &&
                     (IsRotatedSwizzle(pOut->swizzleMode) == false))
            {
                result = Result::ErrorInvalidFlags;
            }
        }
    }

    return result;
}

// =====================================================================================================================
// Computes the padded dimensions for all subresources for the plane associated with the specified subresource.
Result AddrMgr2::ComputeAlignedPlaneDimensions(
    Image*                             pImage,
    SubResourceInfo*                   pBaseSubRes,     // Base subresource for the plane
    TileInfo*                          pBaseTileInfo,   // Base subresource tiling info for the plane
    AddrSwizzleMode                    swizzleMode,
    ADDR2_COMPUTE_SURFACE_INFO_OUTPUT* pOut
    ) const
{
    PAL_ASSERT((pBaseSubRes->subresId.mipLevel == 0) && (pBaseSubRes->subresId.arraySlice == 0));

    Result result = Result::ErrorUnknown;

    const ImageCreateInfo& createInfo = pImage->GetImageCreateInfo();
    const ImageInfo&       imageInfo  = pImage->GetImageInfo();

    ADDR2_COMPUTE_SURFACE_INFO_INPUT surfInfoIn = { };
    surfInfoIn.size = sizeof(surfInfoIn);
    surfInfoIn.width        = pBaseSubRes->extentTexels.width;
    surfInfoIn.height       = pBaseSubRes->extentTexels.height;
    surfInfoIn.resourceType = GetAddrResourceType(pImage);
    surfInfoIn.format       = Image::GetAddrFormat(pBaseSubRes->format.format);
    surfInfoIn.bpp          = Formats::BitsPerPixel(pBaseSubRes->format.format);
    surfInfoIn.numSlices    = ((createInfo.imageType != ImageType::Tex3d) ? createInfo.arraySize
                                                                          : createInfo.extent.depth);
    surfInfoIn.numMipLevels = createInfo.mipLevels;
    surfInfoIn.numSamples   = createInfo.samples;
    surfInfoIn.numFrags     = createInfo.fragments;
    surfInfoIn.swizzleMode  = swizzleMode;
#if PAL_CLIENT_INTERFACE_MAJOR_VERSION < 642
    surfInfoIn.flags        = DetermineSurfaceFlags(*pImage, pBaseSubRes->subresId.aspect);
#else
    surfInfoIn.flags        = DetermineSurfaceFlags(*pImage, pBaseSubRes->subresId.plane, false);
#endif

    if ((createInfo.rowPitch > 0) && (createInfo.depthPitch > 0))
    {
        // We must convert our byte pitches into units of elements. For most formats (including BC formats) the subresource
        // bitsPerTexel is already the size of an element. The exception is 96-bit formats which have three 32-bit element
        // per texel.
        const uint32 bytesPerElement = CalcBytesPerElement(pBaseSubRes);

        PAL_ASSERT((createInfo.rowPitch % bytesPerElement) == 0);

        surfInfoIn.pitchInElement = createInfo.rowPitch / bytesPerElement;
        surfInfoIn.sliceAlign     = createInfo.depthPitch;
    }
    else if ((IsGfx9(*m_pDevice) == true) &&
             (createInfo.swizzledFormat.format == ChNumFormat::YV12) &&
#if PAL_CLIENT_INTERFACE_MAJOR_VERSION < 642
             (pBaseSubRes->subresId.aspect == ImageAspect::Y))
#else
             (pBaseSubRes->subresId.plane == 0))
#endif
    {
        // For YV12, all UBM clients (UDX/DXX/KMD, etc) and UBM assume pitch of Y plane is exactly twice pitch of U/V
        // plane. This assumption is also there between MMD and MMD client (UDX/DXX, etc).
        // Force PAL to follow same assumption, though it is not necessary in theory. Do so to fix DX9 WHQL failure
        // caused by different pitch requirement of Y plane in KMD(UBM) and DX9P(PAL).
        // Per Lawrence Liu, limit this change to YV12 format only as well as GFX9 only, in case unexpected regressions.
        constexpr uint32 Gfx9LinearAlign = 256;
        surfInfoIn.pitchInElement = Util::Pow2Align(surfInfoIn.width, Gfx9LinearAlign * 2);
    }

    ADDR_E_RETURNCODE addrRet = Addr2ComputeSurfaceInfo(AddrLibHandle(), &surfInfoIn, pOut);
    if (addrRet == ADDR_OK)
    {
        pBaseTileInfo->ePitch = CalcEpitch(pOut);

        result = Result::Success;
    }

    return result;
}

// =====================================================================================================================
// Compute the pipe-bank xor of right eye surface for DXGI stereo
uint32 AddrMgr2::GetStereoRightEyePipeBankXor(
    const Image&                                   image,
    const SubResourceInfo*                         pSubResInfo,
    const ADDR2_GET_PREFERRED_SURF_SETTING_OUTPUT& surfaceSetting,
    uint32                                         basePipeBankXor
    ) const
{
    ADDR2_COMPUTE_SLICE_PIPEBANKXOR_INPUT  inSliceXor      = { 0 };
    ADDR2_COMPUTE_SLICE_PIPEBANKXOR_OUTPUT outSliceXor     = { 0 };
    const ImageCreateInfo&                 imageCreateInfo = image.GetImageCreateInfo();
    Pal::Device*                           pDevice         = image.GetDevice();

    inSliceXor.size            = sizeof(ADDR2_COMPUTE_SLICE_PIPEBANKXOR_INPUT);
    inSliceXor.swizzleMode     = surfaceSetting.swizzleMode;
    inSliceXor.resourceType    = surfaceSetting.resourceType;
    inSliceXor.bpe             = ElemSize(AddrLibHandle(), Image::GetAddrFormat(pSubResInfo->format.format));
    // We always have DXGI stereo primary's base PipeBankXor as zero for GFX9
    PAL_ASSERT(basePipeBankXor == 0);
    inSliceXor.basePipeBankXor = basePipeBankXor;
    inSliceXor.slice           = 1;
    inSliceXor.numSamples      = imageCreateInfo.samples;

    ADDR_E_RETURNCODE addrRetCode = Addr2ComputeSlicePipeBankXor(pDevice->AddrLibHandle(),
                                                                 &inSliceXor,
                                                                 &outSliceXor);
    PAL_ASSERT(addrRetCode == ADDR_OK);

    return outSliceXor.pipeBankXor;
}

// =====================================================================================================================
// Initialize the information for a single subresource given the properties of its plane (as computed by
// AddrLib).
Result AddrMgr2::InitSubresourceInfo(
    Image*                                         pImage,
    SubResourceInfo*                               pSubResInfo,
    TileInfo*                                      pTileInfo,
    const ADDR2_GET_PREFERRED_SURF_SETTING_OUTPUT& surfaceSetting,
    const ADDR2_COMPUTE_SURFACE_INFO_OUTPUT&       surfaceInfo
    ) const
{
    Result result = Result::Success;

    const ImageCreateInfo& createInfo = pImage->GetImageCreateInfo();
    const ADDR2_MIP_INFO&  mipInfo    = surfaceInfo.pMipInfo[pSubResInfo->subresId.mipLevel];

    // The actual element extents come directly from AddrLib.
    pSubResInfo->actualExtentElements.width  = mipInfo.pitch;
    pSubResInfo->actualExtentElements.height = mipInfo.height;
    pSubResInfo->actualExtentElements.depth  = mipInfo.depth;
    pSubResInfo->mipTailCoord.x              = mipInfo.mipTailCoordX;
    pSubResInfo->mipTailCoord.y              = mipInfo.mipTailCoordY;
    pSubResInfo->mipTailCoord.z              = mipInfo.mipTailCoordZ;

    // AddrLib doesn't tell us the values for extentElements or actualExtentTexels so we must compute them ourselves.
    // It also doesn't tell us the exact ratios between texels and elements but we can compute them from the pitch
    // and height data which is returned in both texels and elements.
    if (surfaceInfo.pixelPitch >= surfaceInfo.pitch)
    {
        const uint32 texelsPerElem = (surfaceInfo.pixelPitch / surfaceInfo.pitch);

        // We must round to the nearest element because the caller is not required to pad the texel extent.
        pSubResInfo->extentElements.width     = RoundUpQuotient(pSubResInfo->extentTexels.width, texelsPerElem);
        pSubResInfo->actualExtentTexels.width = (pSubResInfo->actualExtentElements.width * texelsPerElem);
    }
    else
    {
        const uint32 elemsPerTexel = (surfaceInfo.pitch / surfaceInfo.pixelPitch);

        pSubResInfo->extentElements.width     = (pSubResInfo->extentTexels.width         * elemsPerTexel);
        pSubResInfo->actualExtentTexels.width = (pSubResInfo->actualExtentElements.width / elemsPerTexel);
    }

    if (surfaceInfo.pixelHeight >= surfaceInfo.height)
    {
        const uint32 texelsPerElem = (surfaceInfo.pixelHeight / surfaceInfo.height);

        // We must round to the nearest element because the caller is not required to pad the texel extent.
        pSubResInfo->extentElements.height     = RoundUpQuotient(pSubResInfo->extentTexels.height, texelsPerElem);
        pSubResInfo->actualExtentTexels.height = (pSubResInfo->actualExtentElements.height * texelsPerElem);
    }
    else
    {
        const uint32 elemsPerTexel = (surfaceInfo.height / surfaceInfo.pixelHeight);

        pSubResInfo->extentElements.height     = (pSubResInfo->extentTexels.height         * elemsPerTexel);
        pSubResInfo->actualExtentTexels.height = (pSubResInfo->actualExtentElements.height / elemsPerTexel);
    }

    // The depth values are always equal.
    pSubResInfo->extentElements.depth     = pSubResInfo->extentTexels.depth;
    pSubResInfo->actualExtentTexels.depth = pSubResInfo->actualExtentElements.depth;
    pSubResInfo->actualArraySize          = createInfo.arraySize;

    // Finish with the subresource's memory layout data.
    pSubResInfo->baseAlign = surfaceInfo.baseAlign;

    // Note that because the mipmap levels in an array slice are tightly packed, the size of a single subresource
    // is a somewhat meaningless quantity for AddrMgr2. Just use the whole array slice's size for each subresource,
    // even though this isn't accurate.
    //
    // From the address library's perspective, one "slice" is either one slice of a 2D array or one slice of a volume
    // texture.  From PAL's perspective, one sub-resource of a 2D array is one slice...  However, we consider one-sub
    // resource of a volume texture to be the entire thing.  Further complicating things is that, due to padding
    // requirements, the number of slices in a 3D image can be far larger than the number requested.
    pSubResInfo->size = surfaceInfo.sliceSize *
                        ((createInfo.imageType == ImageType::Tex3d)
                            ? GetNumAddrLib3dSlices(pImage, surfaceSetting, surfaceInfo)
                            : 1);

    if (pImage->GetImageCreateInfo().flags.stereo == 1)
    {
        pSubResInfo->size = surfaceInfo.surfSize;
    }

    // Compute the exact row pitch in bytes. This math must be done in terms of elements instead of texels
    // because some formats (e.g., R32G32B32) have pitches that are not multiples of their texel size.
    if (IsLinearSwizzleMode(surfaceSetting.swizzleMode) || IsGfx10Plus(*m_pDevice))
    {
        // GFX10+ devices and linear images do not have tightly packed mipmap levels, so the rowPitch
        // of a subresource is the size in bytes of one row of that subresource.
        pSubResInfo->rowPitch = (pSubResInfo->actualExtentElements.width * (surfaceInfo.bpp >> 3));
    }
    else
    {
        // The rowPitch of a tiled Image is the distance between the same X position in consecutive rows of the
        // subresource. Because the mipmap levels in an array slice are tightly packed, this works out to be the
        // same overall pitch as the whole mip-slice.
        pSubResInfo->rowPitch = (surfaceInfo.mipChainPitch * (surfaceInfo.bpp >> 3));
    }

    // The depth pitch is a constant for each plane.  This is the number of bytes it takes to get to the next
    // slice of any given mip-level (i.e., each slice has the exact same layout).
    pSubResInfo->depthPitch = surfaceInfo.sliceSize;

    // Note: The full offset to this subresource will be computed later. For now, just set it to the offset of
    // the mipmap level within the current array-slice.
    if (IsLinearSwizzleMode(surfaceSetting.swizzleMode))
    {
        // For linear Images, the mip offset computed by AddrLib is correct.
        pSubResInfo->offset = mipInfo.offset;

        // Linear resource must have block sizes of zero. This is assumed by DdiResource::CheckSubresourceInfo().
        pSubResInfo->blockSize.width  = 0;
        pSubResInfo->blockSize.height = 0;
        pSubResInfo->blockSize.depth  = 0;
    }
    else
    {
        // For GFX9 tiled Images, the mip offset to the beginning of the subresource should be the macro-block offset
        // plus mipTailOffset (for tail mips) which AddrLib computes for us.
        // On GFX10+, mips are stored in reverse order (i.e., the largest mip is farthest away from the start), so this
        // assert is meaningless on that platform.
        pSubResInfo->offset = mipInfo.macroBlockOffset + mipInfo.mipTailOffset;

        PAL_ASSERT((pSubResInfo->subresId.mipLevel > 0) ||
                   (mipInfo.macroBlockOffset == 0)      ||
                   IsGfx10Plus(m_gfxLevel));

        pSubResInfo->blockSize.width  = surfaceInfo.blockWidth;
        pSubResInfo->blockSize.height = surfaceInfo.blockHeight;
        pSubResInfo->blockSize.depth  = surfaceInfo.blockSlices;

#if PAL_CLIENT_INTERFACE_MAJOR_VERSION >= 612
        // Initialize the pipe-bank xor of right eye surface for DXGI stereo.
        if ((pImage->GetImageCreateInfo().flags.dxgiStereo == 1) && (pSubResInfo->subresId.arraySlice == 1))
        {
#if PAL_CLIENT_INTERFACE_MAJOR_VERSION < 642
            const SubresId baseSubRes    = { ImageAspect::Color, 0, 0 };
#else
            const SubresId baseSubRes    = {};
#endif
            const uint32 basePipeBankXor = GetTileSwizzle(pImage, baseSubRes);

            pTileInfo->pipeBankXor = GetStereoRightEyePipeBankXor(*pImage,
                                                                  pSubResInfo,
                                                                  surfaceSetting,
                                                                  basePipeBankXor);
        }
#endif

        // In order to support Parameterized Swizzle for mipmapped arrays and for mipmapped tex2d resources,
        // we must call into AddrLib to calculate a special offset for this subresource. This offset should
        // not be altered outside of AddrLib.
        if ((createInfo.mipLevels > 1) &&
            ((createInfo.arraySize > 1) || (createInfo.imageType == Pal::ImageType::Tex2d)))
        {
            ADDR2_COMPUTE_SUBRESOURCE_OFFSET_FORSWIZZLEPATTERN_INPUT  addr2Input  = {};
            ADDR2_COMPUTE_SUBRESOURCE_OFFSET_FORSWIZZLEPATTERN_OUTPUT addr2Output = {};

            addr2Input.size             = sizeof(ADDR2_COMPUTE_SUBRESOURCE_OFFSET_FORSWIZZLEPATTERN_INPUT);
            addr2Input.resourceType     = GetAddrResourceType(pImage);
            addr2Input.pipeBankXor      = pTileInfo->pipeBankXor;
            addr2Input.swizzleMode      = surfaceSetting.swizzleMode;
            addr2Input.slice            = pSubResInfo->subresId.arraySlice;
            addr2Input.sliceSize        = surfaceInfo.sliceSize;
            addr2Input.macroBlockOffset = mipInfo.macroBlockOffset;
            addr2Input.mipTailOffset    = mipInfo.mipTailOffset;

            addr2Output.size = sizeof(ADDR2_COMPUTE_SUBRESOURCE_OFFSET_FORSWIZZLEPATTERN_OUTPUT);

            ADDR_E_RETURNCODE addrRet = Addr2ComputeSubResourceOffsetForSwizzlePattern(AddrLibHandle(),
                                                                                       &addr2Input,
                                                                                       &addr2Output);
            if (addrRet == ADDR_OK)
            {
                pSubResInfo->swizzleOffset = addr2Output.offset;
            }
            else
            {
                result = Result::ErrorUnknown;
            }
        }
    }

    if (result == Result::Success)
    {
        // KMD maintains a backing store copy in nonlocal memory for some Images. This backing store is always
        // linear-tiled, so the offset to each mipmap level is different than for the original Image. Track the linear
        // offset to each mip level as though the Image were linear tiled* so we can report this offset to the KMD.
        // Fortunately, AddrLib will provide this offset to us in the ADDR2_MIP_INFO structure.
        pTileInfo->backingStoreOffset = mipInfo.offset;

        // Give the GfxIp HWL a chance to finalize or override any subresource properties.
        pImage->GetGfxImage()->Addr2FinalizeSubresource(pSubResInfo, surfaceSetting);

        BuildTileToken(pSubResInfo, surfaceSetting.swizzleMode);

        // Convert the address library's swizzle equation index into Pal's representation. Note that linear swizzle
        // modes will result in an invalid equation index. To give our clients a way to handle linear modes we set the
        // index to LinearSwizzleEqIndex.
        const uint32 eqIdx = mipInfo.equationIndex;
        if (surfaceSetting.swizzleMode == ADDR_SW_LINEAR)
        {
            pSubResInfo->swizzleEqIndex = LinearSwizzleEqIndex;
        }
        else if (eqIdx == ADDR_INVALID_EQUATION_INDEX)
        {
            pSubResInfo->swizzleEqIndex = InvalidSwizzleEqIndex;
        }
        else
        {
            pSubResInfo->swizzleEqIndex = static_cast<uint8>(eqIdx);
        }

        if (pSubResInfo->subresId.mipLevel == 0)
        {
            // Fail if we didn't satisfy the client's requested row and depth pitches.
            if ((createInfo.rowPitch != 0) && (pSubResInfo->rowPitch != createInfo.rowPitch))
            {
                result = Result::ErrorMismatchedImageRowPitch;
            }
            else if ((createInfo.depthPitch != 0) && (pSubResInfo->depthPitch != createInfo.depthPitch))
            {
                result = Result::ErrorMismatchedImageDepthPitch;
            }
        }
    }

    return result;
}

// =====================================================================================================================
// Returns the size of one block (i.e., one tile) in terms of bytes.
uint32 AddrMgr2::GetBlockSize(
    AddrSwizzleMode swizzleMode
    ) const
{
    uint32  blockSize = 0;

    switch (swizzleMode)
    {
    case ADDR_SW_256B_S:
    case ADDR_SW_256B_D:
    case ADDR_SW_256B_R:
        blockSize = 256;
        break;

    case ADDR_SW_4KB_Z:
    case ADDR_SW_4KB_S:
    case ADDR_SW_4KB_D:
    case ADDR_SW_4KB_R:
    case ADDR_SW_4KB_Z_X:
    case ADDR_SW_4KB_S_X:
    case ADDR_SW_4KB_D_X:
    case ADDR_SW_4KB_R_X:
        blockSize = 4096;
        break;

    case ADDR_SW_64KB_Z:
    case ADDR_SW_64KB_S:
    case ADDR_SW_64KB_D:
    case ADDR_SW_64KB_R:
    case ADDR_SW_64KB_Z_T:
    case ADDR_SW_64KB_S_T:
    case ADDR_SW_64KB_D_T:
    case ADDR_SW_64KB_R_T:
    case ADDR_SW_64KB_Z_X:
    case ADDR_SW_64KB_S_X:
    case ADDR_SW_64KB_D_X:
    case ADDR_SW_64KB_R_X:
        blockSize = 65536;
        break;

    case ADDR_SW_VAR_Z_X:
    case ADDR_SW_VAR_R_X:
        blockSize = m_varBlockSize;
        break;

    default:
        break;
    }

    PAL_ASSERT(blockSize != 0);

    return blockSize;
}

// =====================================================================================================================
// Returns the HW tiling / swizzle mode that corresponds to the specified subresource.
Pal::Gfx9::SWIZZLE_MODE_ENUM AddrMgr2::GetHwSwizzleMode(
    AddrSwizzleMode  swizzleMode
    ) const
{
    using namespace Pal::Gfx9;

    SWIZZLE_MODE_ENUM  retSwizzle = SW_LINEAR;

    {
        static constexpr SWIZZLE_MODE_ENUM  hwSwizzleMode[]=
        {
            SW_LINEAR,             // ADDR_SW_LINEAR
            SW_256B_S,             // ADDR_SW_256B_S
            SW_256B_D,             // ADDR_SW_256B_D
            SW_256B_R,             // ADDR_SW_256B_R
            SW_4KB_Z,              // ADDR_SW_4KB_Z
            SW_4KB_S,              // ADDR_SW_4KB_S
            SW_4KB_D,              // ADDR_SW_4KB_D
            SW_4KB_R,              // ADDR_SW_4KB_R
            SW_64KB_Z,             // ADDR_SW_64KB_Z
            SW_64KB_S,             // ADDR_SW_64KB_S
            SW_64KB_D,             // ADDR_SW_64KB_D
            SW_64KB_R,             // ADDR_SW_64KB_R
            SW_VAR_Z__GFX10CORE,   // ADDR_SW_RESERVED0
            SW_VAR_S__GFX10CORE,   // ADDR_SW_RESERVED1
            SW_VAR_D__GFX10CORE,   // ADDR_SW_RESERVED2
            SW_VAR_R__GFX10CORE,   // ADDR_SW_RESERVED3
            SW_64KB_Z_T,           // ADDR_SW_64KB_Z_T
            SW_64KB_S_T,           // ADDR_SW_64KB_S_T
            SW_64KB_D_T,           // ADDR_SW_64KB_D_T
            SW_64KB_R_T,           // ADDR_SW_64KB_R_T
            SW_4KB_Z_X,            // ADDR_SW_4KB_Z_X
            SW_4KB_S_X,            // ADDR_SW_4KB_S_X
            SW_4KB_D_X,            // ADDR_SW_4KB_D_X
            SW_4KB_R_X,            // ADDR_SW_4KB_R_X
            SW_64KB_Z_X,           // ADDR_SW_64KB_Z_X
            SW_64KB_S_X,           // ADDR_SW_64KB_S_X
            SW_64KB_D_X,           // ADDR_SW_64KB_D_X
            SW_64KB_R_X,           // ADDR_SW_64KB_R_X
            SW_VAR_Z_X__GFX09_10,  // ADDR_SW_VAR_Z_X
            SW_VAR_S_X__GFX10CORE, // ADDR_SW_RESERVED4
            SW_VAR_D_X__GFX10CORE, // ADDR_SW_RESERVED5
            SW_VAR_R_X__GFX09_10,  // ADDR_SW_VAR_R_X
            SW_LINEAR,             // ADDR_SW_LINEAR_GENERAL
        };

        PAL_ASSERT (swizzleMode < Util::ArrayLen(hwSwizzleMode));

        retSwizzle = hwSwizzleMode[swizzleMode];
    }

    return retSwizzle;
}

} // AddrMgr2
} // Pal
