/*
 ***********************************************************************************************************************
 *
 *  Copyright (c) 2015-2020 Advanced Micro Devices, Inc. All Rights Reserved.
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

#pragma once

#include "palDepthStencilView.h"
#include "core/hw/gfxip/gfx9/gfx9Chip.h"
#include "core/hw/gfxip/gfx9/gfx9Device.h"
#include "core/hw/gfxip/gfx9/gfx9Image.h"
#include "core/hw/gfxip/gfx9/gfx9MaskRam.h"
#include "core/hw/gfxip/universalCmdBuffer.h"

namespace Pal
{

class CmdStream;
class Device;
class Image;

namespace Gfx9
{

// =====================================================================================================================
// Gfx9 HW-specific implementation of the Pal::IDepthStencilView interface
class DepthStencilView : public IDepthStencilView
{
public:
    DepthStencilView(
        const Device*                             pDevice,
        const DepthStencilViewCreateInfo&         createInfo,
        const DepthStencilViewInternalCreateInfo& internalInfo);

    virtual uint32* WriteCommands(
        ImageLayout depthLayout,
        ImageLayout stencilLayout,
        CmdStream*  pCmdStream,
        uint32*     pCmdSpace) const = 0;

    virtual uint32* UpdateZRangePrecision(
        bool       requiresCondExec,
        CmdStream* pCmdStream,
        uint32*    pCmdSpace) const
    {
        return pCmdSpace;
    }

    const Image* GetImage() const { return m_pImage; }
    uint32 MipLevel() const { return m_depthSubresource.mipLevel; }

    bool IsVaLocked() const { return m_flags.viewVaLocked; }
    bool WaitOnMetadataMipTail() const { return m_flags.waitOnMetadataMipTail; }
    bool ReadOnlyDepth() const { return m_flags.readOnlyDepth; }
    bool ReadOnlyStencil() const { return m_flags.readOnlyStencil; }

    static uint32* WriteUpdateFastClearDepthStencilValue(
        uint32     metaDataClearFlags,
        float      depth,
        uint8      stencil,
        CmdStream* pCmdStream,
        uint32*    pCmdSpace);

    static uint32* HandleBoundTargetChanged(uint32* pCmdSpace);

    TargetExtent2d GetExtent() const { return m_extent; }

protected:
    virtual ~DepthStencilView()
    {
        // This destructor, and the destructors of all member and base classes, must always be empty: PAL depth stencil
        // views guarantee to the client that they do not have to be explicitly destroyed.
        PAL_NEVER_CALLED();
    }

    template <typename RegistersType, typename FmtInfoType>
    void InitRegistersCommon(
        const Device&                             device,
        const DepthStencilViewCreateInfo&         createInfo,
        const DepthStencilViewInternalCreateInfo& internalInfo,
        const FmtInfoType*                        pFmtInfo,
        RegistersType*                            pRegs);

    template <typename RegistersType>
    void UpdateImageVa(RegistersType* pRegs) const;

    template <typename RegistersType>
    uint32* WriteCommandsCommon(
        ImageLayout    depthLayout,
        ImageLayout    stencilLayout,
        CmdStream*     pCmdStream,
        uint32*        pCmdSpace,
        RegistersType* pRegs) const;

    // Bitfield describing the metadata and settings that are supported by this view.
    union
    {
        struct
        {
            uint32 hTile                   :  1;
            uint32 depth                   :  1;
            uint32 stencil                 :  1;
            uint32 readOnlyDepth           :  1; // Set if the depth aspect is present and is read-only
            uint32 readOnlyStencil         :  1; // Set if the stencil aspect is present and is read-only
            uint32 depthMetadataTexFetch   :  1;
            uint32 stencilMetadataTexFetch :  1;
            uint32 vrsOnlyDepth            :  1; // Set if the image is used for VRS-only depth
            uint32 waitOnMetadataMipTail   :  1; // Set if the CmdBindTargets should insert a stall when binding this
                                                 // view object.
            uint32 viewVaLocked            :  1; // Whether the view's VA range is locked and won't change.
            uint32 hiSPretests             :  1; // Set if the image has HiS pretest metadata
            uint32 dbRenderOverrideLocked  :  1; // Set if DB_RENDER_OVERRIDE cannot change due to bind-time
                                                 // compression state.
            uint32 dbRenderControlLocked   :  1; // Set if DB_RENDER_CONTROL cannot change due to bind-time
                                                 // compression state.
            uint32 waTcCompatZRange        :  1; // Set if the TC-compatible ZRange precision workaround is active
            uint32 reserved                : 18;
        };

        uint32 u32All;
    } m_flags;

    const Image*const  m_pImage;
    TargetExtent2d     m_extent;

    SubresId  m_depthSubresource;   // Sub-resource associated with the Depth plane
    SubresId  m_stencilSubresource; // Sub-resource associated with the Stencil plane

    DepthStencilLayoutToState  m_depthLayoutToState;
    DepthStencilLayoutToState  m_stencilLayoutToState;

private:
    uint32 CalcDecompressOnZPlanesValue(const Device& device, ZFormat hwZFmt) const;

    HtileUsageFlags  m_hTileUsage;

    PAL_DISALLOW_DEFAULT_CTOR(DepthStencilView);
    PAL_DISALLOW_COPY_AND_ASSIGN(DepthStencilView);
};

// Set of context registers associated with a depth/stencil view object (Gfx9 version).
struct Gfx9DepthStencilViewRegs
{
    regDB_Z_INFO                     dbZInfo;
    regDB_STENCIL_INFO               dbStencilInfo;
    regDB_Z_READ_BASE                dbZReadBase;
    regDB_Z_READ_BASE_HI             dbZReadBaseHi;
    regDB_STENCIL_READ_BASE          dbStencilReadBase;
    regDB_STENCIL_READ_BASE_HI       dbStencilReadBaseHi;
    regDB_Z_WRITE_BASE               dbZWriteBase;
    regDB_Z_WRITE_BASE_HI            dbZWriteBaseHi;
    regDB_STENCIL_WRITE_BASE         dbStencilWriteBase;
    regDB_STENCIL_WRITE_BASE_HI      dbStencilWriteBaseHi;
    regDB_Z_INFO2                    dbZInfo2;
    regDB_STENCIL_INFO2              dbStencilInfo2;
    regDB_DEPTH_VIEW                 dbDepthView;
    regDB_RENDER_OVERRIDE2           dbRenderOverride2;
    regDB_HTILE_DATA_BASE            dbHtileDataBase;
    regDB_HTILE_DATA_BASE_HI         dbHtileDataBaseHi;
    regDB_DEPTH_SIZE                 dbDepthSize;
    regDB_HTILE_SURFACE              dbHtileSurface;
    regDB_PRELOAD_CONTROL            dbPreloadControl;
    regDB_RENDER_CONTROL             dbRenderControl;
    regPA_SU_POLY_OFFSET_DB_FMT_CNTL paSuPolyOffsetDbFmtCntl;
    regCOHER_DEST_BASE_0             coherDestBase0;
    regDB_RENDER_OVERRIDE            dbRenderOverride;

    gpusize  fastClearMetadataGpuVa;
    gpusize  hiSPretestMetadataGpuVa;
};

// =====================================================================================================================
// Gfx9 HW-specific implementation of the Pal::IDepthStencilView interface
class Gfx9DepthStencilView : public DepthStencilView
{
public:
    Gfx9DepthStencilView(
        const Device*                             pDevice,
        const DepthStencilViewCreateInfo&         createInfo,
        const DepthStencilViewInternalCreateInfo& internalInfo);

    uint32* WriteCommands(
        ImageLayout depthLayout,
        ImageLayout stencilLayout,
        CmdStream*  pCmdStream,
        uint32*     pCmdSpace) const override;

    virtual uint32* UpdateZRangePrecision(
        bool       requiresCondExec,
        CmdStream* pCmdStream,
        uint32*    pCmdSpace) const override;

protected:
    virtual ~Gfx9DepthStencilView()
    {
        // This destructor, and the destructors of all member and base classes, must always be empty: PAL depth stencil
        // views guarantee to the client that they do not have to be explicitly destroyed.
        PAL_NEVER_CALLED();
    }

private:
    void InitRegisters(
        const Device&                             device,
        const DepthStencilViewCreateInfo&         createInfo,
        const DepthStencilViewInternalCreateInfo& internalInfo);

    Gfx9DepthStencilViewRegs  m_regs;

    PAL_DISALLOW_DEFAULT_CTOR(Gfx9DepthStencilView);
    PAL_DISALLOW_COPY_AND_ASSIGN(Gfx9DepthStencilView);
};

// Set of context registers associated with a depth/stencil view object (Gfx10 version).
struct Gfx10DepthStencilViewRegs
{
    regDB_RENDER_CONTROL             dbRenderControl;
    regDB_DEPTH_VIEW                 dbDepthView;
    regDB_RENDER_OVERRIDE2           dbRenderOverride2;
    regDB_HTILE_DATA_BASE            dbHtileDataBase;
    regDB_DEPTH_SIZE_XY              dbDepthSizeXy;
    regDB_Z_INFO                     dbZInfo;
    regDB_STENCIL_INFO               dbStencilInfo;
    regDB_Z_READ_BASE                dbZReadBase;
    regDB_STENCIL_READ_BASE          dbStencilReadBase;
    regDB_Z_WRITE_BASE               dbZWriteBase;
    regDB_STENCIL_WRITE_BASE         dbStencilWriteBase;
    regDB_HTILE_SURFACE              dbHtileSurface;
    regDB_PRELOAD_CONTROL            dbPreloadControl;
    regPA_SU_POLY_OFFSET_DB_FMT_CNTL paSuPolyOffsetDbFmtCntl;
    regCOHER_DEST_BASE_0             coherDestBase0;
    regDB_RENDER_OVERRIDE            dbRenderOverride;
    regDB_RMI_L2_CACHE_CONTROL       dbRmiL2CacheControl;

    gpusize  fastClearMetadataGpuVa;
    gpusize  hiSPretestMetadataGpuVa;
};

// =====================================================================================================================
// Gfx10 HW-specific implementation of the Pal::IDepthStencilView interface
class Gfx10DepthStencilView : public DepthStencilView
{
public:
    Gfx10DepthStencilView(
        const Device*                             pDevice,
        const DepthStencilViewCreateInfo&         createInfo,
        const DepthStencilViewInternalCreateInfo& internalInfo);

    uint32* WriteCommands(
        ImageLayout depthLayout,
        ImageLayout stencilLayout,
        CmdStream*  pCmdStream,
        uint32*     pCmdSpace) const override;

    uint32 BaseArraySlice() const { return m_baseArraySlice; }
    uint32 ArraySize() const { return m_arraySize; }

protected:
    virtual ~Gfx10DepthStencilView()
    {
        // This destructor, and the destructors of all member and base classes, must always be empty: PAL depth stencil
        // views guarantee to the client that they do not have to be explicitly destroyed.
        PAL_NEVER_CALLED();
    }

private:
    void InitRegisters(
        const Device&                             device,
        const DepthStencilViewCreateInfo&         createInfo,
        const DepthStencilViewInternalCreateInfo& internalInfo);

    Gfx10DepthStencilViewRegs  m_regs;

    static constexpr uint32 DbDepthViewSliceStartMaskNumBits = 11;
    static constexpr uint32 DbDepthViewSliceMaxMaskNumBits   = 11;

    const uint32  m_baseArraySlice;
    const uint32  m_arraySize;

    PAL_DISALLOW_DEFAULT_CTOR(Gfx10DepthStencilView);
    PAL_DISALLOW_COPY_AND_ASSIGN(Gfx10DepthStencilView);
};

} // Gfx9
} // Pal
