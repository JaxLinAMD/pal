/*
 ***********************************************************************************************************************
 *
 *  Copyright (c) 2019 Advanced Micro Devices, Inc. All Rights Reserved.
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

typedef enum ABM_SOFT_RESET {
    ABM_SOFT_RESET_0                                   = 0x00000000,
    ABM_SOFT_RESET_1                                   = 0x00000001,
} ABM_SOFT_RESET;

typedef enum ALPHA_DCP_GRPH_ALPHA_CHANGE_MODE {
    DCP_GRPH_ALPHA_CHANGE_MODE_0                       = 0x00000000,
    DCP_GRPH_ALPHA_CHANGE_MODE_1                       = 0x00000001,
} ALPHA_DCP_GRPH_ALPHA_CHANGE_MODE;

typedef enum AOUT_EN {
    AOUT_DISABLE                                       = 0x00000000,
    AOUT_ENABLE                                        = 0x00000001,
} AOUT_EN;

typedef enum AOUT_FIFO_START_ADDR {
    AOUT_FIFO_START_ADDR_2                             = 0x00000000,
    AOUT_FIFO_START_ADDR_3                             = 0x00000001,
} AOUT_FIFO_START_ADDR;

typedef enum ArrayMode {
    ARRAY_LINEAR_GENERAL                               = 0x00000000,
    ARRAY_LINEAR_ALIGNED                               = 0x00000001,
    ARRAY_1D_TILED_THIN1                               = 0x00000002,
    ARRAY_1D_TILED_THICK                               = 0x00000003,
    ARRAY_2D_TILED_THIN1                               = 0x00000004,
    ARRAY_PRT_TILED_THIN1                              = 0x00000005,
    ARRAY_PRT_2D_TILED_THIN1                           = 0x00000006,
    ARRAY_2D_TILED_THICK                               = 0x00000007,
    ARRAY_2D_TILED_XTHICK                              = 0x00000008,
    ARRAY_PRT_TILED_THICK                              = 0x00000009,
    ARRAY_PRT_2D_TILED_THICK                           = 0x0000000a,
    ARRAY_PRT_3D_TILED_THIN1                           = 0x0000000b,
    ARRAY_3D_TILED_THIN1                               = 0x0000000c,
    ARRAY_3D_TILED_THICK                               = 0x0000000d,
    ARRAY_3D_TILED_XTHICK                              = 0x0000000e,
    ARRAY_PRT_3D_TILED_THICK                           = 0x0000000f,
} ArrayMode;

typedef enum BankHeight {
    ADDR_SURF_BANK_HEIGHT_1                            = 0x00000000,
    ADDR_SURF_BANK_HEIGHT_2                            = 0x00000001,
    ADDR_SURF_BANK_HEIGHT_4                            = 0x00000002,
    ADDR_SURF_BANK_HEIGHT_8                            = 0x00000003,
} BankHeight;

typedef enum BankInterleaveSize {
    ADDR_CONFIG_BANK_INTERLEAVE_1                      = 0x00000000,
    ADDR_CONFIG_BANK_INTERLEAVE_2                      = 0x00000001,
    ADDR_CONFIG_BANK_INTERLEAVE_4                      = 0x00000002,
    ADDR_CONFIG_BANK_INTERLEAVE_8                      = 0x00000003,
} BankInterleaveSize;

typedef enum BankSwapBytes {
    CONFIG_128B_SWAPS                                  = 0x00000000,
    CONFIG_256B_SWAPS                                  = 0x00000001,
    CONFIG_512B_SWAPS                                  = 0x00000002,
    CONFIG_1KB_SWAPS                                   = 0x00000003,
} BankSwapBytes;

typedef enum BankTiling {
    CONFIG_4_BANK                                      = 0x00000000,
    CONFIG_8_BANK                                      = 0x00000001,
} BankTiling;

typedef enum BankWidth {
    ADDR_SURF_BANK_WIDTH_1                             = 0x00000000,
    ADDR_SURF_BANK_WIDTH_2                             = 0x00000001,
    ADDR_SURF_BANK_WIDTH_4                             = 0x00000002,
    ADDR_SURF_BANK_WIDTH_8                             = 0x00000003,
} BankWidth;

typedef enum BankWidthHeight {
    ADDR_SURF_BANK_WH_1                                = 0x00000000,
    ADDR_SURF_BANK_WH_2                                = 0x00000001,
    ADDR_SURF_BANK_WH_4                                = 0x00000002,
    ADDR_SURF_BANK_WH_8                                = 0x00000003,
} BankWidthHeight;

typedef enum BinEventCntl {
    BINNER_BREAK_BATCH                                 = 0x00000000,
    BINNER_PIPELINE                                    = 0x00000001,
    BINNER_DROP                                        = 0x00000002,
    BINNER_DROP_ASSERT__GFX09                          = 0x00000003,
    BINNER_PIPELINE_BREAK__GFX10                       = 0x00000003,
} BinEventCntl;

typedef enum BinMapMode {
    BIN_MAP_MODE_NONE                                  = 0x00000000,
    BIN_MAP_MODE_RTA_INDEX                             = 0x00000001,
    BIN_MAP_MODE_POPS                                  = 0x00000002,
} BinMapMode;

typedef enum BinningMode {
    BINNING_ALLOWED                                    = 0x00000000,
    FORCE_BINNING_ON                                   = 0x00000001,
    DISABLE_BINNING_USE_NEW_SC                         = 0x00000002,
    DISABLE_BINNING_USE_LEGACY_SC                      = 0x00000003,
} BinningMode;

typedef enum BinSizeExtend {
    BIN_SIZE_32_PIXELS                                 = 0x00000000,
    BIN_SIZE_64_PIXELS                                 = 0x00000001,
    BIN_SIZE_128_PIXELS                                = 0x00000002,
    BIN_SIZE_256_PIXELS                                = 0x00000003,
    BIN_SIZE_512_PIXELS                                = 0x00000004,
} BinSizeExtend;

typedef enum BlendOp {
    BLEND_ZERO                                         = 0x00000000,
    BLEND_ONE                                          = 0x00000001,
    BLEND_SRC_COLOR                                    = 0x00000002,
    BLEND_ONE_MINUS_SRC_COLOR                          = 0x00000003,
    BLEND_SRC_ALPHA                                    = 0x00000004,
    BLEND_ONE_MINUS_SRC_ALPHA                          = 0x00000005,
    BLEND_DST_ALPHA                                    = 0x00000006,
    BLEND_ONE_MINUS_DST_ALPHA                          = 0x00000007,
    BLEND_DST_COLOR                                    = 0x00000008,
    BLEND_ONE_MINUS_DST_COLOR                          = 0x00000009,
    BLEND_SRC_ALPHA_SATURATE                           = 0x0000000a,
    BLEND_BOTH_SRC_ALPHA                               = 0x0000000b,
    BLEND_BOTH_INV_SRC_ALPHA                           = 0x0000000c,
    BLEND_CONSTANT_COLOR                               = 0x0000000d,
    BLEND_ONE_MINUS_CONSTANT_COLOR                     = 0x0000000e,
    BLEND_SRC1_COLOR                                   = 0x0000000f,
    BLEND_INV_SRC1_COLOR                               = 0x00000010,
    BLEND_SRC1_ALPHA                                   = 0x00000011,
    BLEND_INV_SRC1_ALPHA                               = 0x00000012,
    BLEND_CONSTANT_ALPHA                               = 0x00000013,
    BLEND_ONE_MINUS_CONSTANT_ALPHA                     = 0x00000014,
} BlendOp;

typedef enum BlendOpt {
    FORCE_OPT_AUTO                                     = 0x00000000,
    FORCE_OPT_DISABLE                                  = 0x00000001,
    FORCE_OPT_ENABLE_IF_SRC_A_0                        = 0x00000002,
    FORCE_OPT_ENABLE_IF_SRC_RGB_0                      = 0x00000003,
    FORCE_OPT_ENABLE_IF_SRC_ARGB_0                     = 0x00000004,
    FORCE_OPT_ENABLE_IF_SRC_A_1                        = 0x00000005,
    FORCE_OPT_ENABLE_IF_SRC_RGB_1                      = 0x00000006,
    FORCE_OPT_ENABLE_IF_SRC_ARGB_1                     = 0x00000007,
} BlendOpt;

typedef enum BLNDV_CONTROL2_BLND_SUPERAA_DEGAMMA_EN {
    BLNDV_CONTROL2_BLND_SUPERAA_DEGAMMA_EN_FALSE       = 0x00000000,
    BLNDV_CONTROL2_BLND_SUPERAA_DEGAMMA_EN_TRUE        = 0x00000001,
} BLNDV_CONTROL2_BLND_SUPERAA_DEGAMMA_EN;

typedef enum BLNDV_CONTROL2_BLND_SUPERAA_REGAMMA_EN {
    BLNDV_CONTROL2_BLND_SUPERAA_REGAMMA_EN_FALSE       = 0x00000000,
    BLNDV_CONTROL2_BLND_SUPERAA_REGAMMA_EN_TRUE        = 0x00000001,
} BLNDV_CONTROL2_BLND_SUPERAA_REGAMMA_EN;

typedef enum BLNDV_CONTROL2_PTI_ENABLE {
    BLNDV_CONTROL2_PTI_ENABLE_FALSE                    = 0x00000000,
    BLNDV_CONTROL2_PTI_ENABLE_TRUE                     = 0x00000001,
} BLNDV_CONTROL2_PTI_ENABLE;

typedef enum BLNDV_CONTROL_BLND_ACTIVE_OVERLAP_ONLY {
    BLNDV_CONTROL_BLND_ACTIVE_OVERLAP_ONLY_FALSE       = 0x00000000,
    BLNDV_CONTROL_BLND_ACTIVE_OVERLAP_ONLY_TRUE        = 0x00000001,
} BLNDV_CONTROL_BLND_ACTIVE_OVERLAP_ONLY;

typedef enum BLNDV_CONTROL_BLND_ALPHA_MODE {
    BLNDV_CONTROL_BLND_ALPHA_MODE_CURRENT_PIXEL_ALPHA  = 0x00000000,
    BLNDV_CONTROL_BLND_ALPHA_MODE_PIXEL_ALPHA_COMBINED_GLOBAL_GAIN = 0x00000001,
    BLNDV_CONTROL_BLND_ALPHA_MODE_GLOBAL_ALPHA_ONLY    = 0x00000002,
    BLNDV_CONTROL_BLND_ALPHA_MODE_UNUSED               = 0x00000003,
} BLNDV_CONTROL_BLND_ALPHA_MODE;

typedef enum BLNDV_CONTROL_BLND_FEEDTHROUGH_EN {
    BLNDV_CONTROL_BLND_FEEDTHROUGH_EN_FALSE            = 0x00000000,
    BLNDV_CONTROL_BLND_FEEDTHROUGH_EN_TRUE             = 0x00000001,
} BLNDV_CONTROL_BLND_FEEDTHROUGH_EN;

typedef enum BLNDV_CONTROL_BLND_MODE {
    BLNDV_CONTROL_BLND_MODE_CURRENT_PIPE_ONLY          = 0x00000000,
    BLNDV_CONTROL_BLND_MODE_OTHER_PIPE_ONLY            = 0x00000001,
    BLNDV_CONTROL_BLND_MODE_ALPHA_BLENDING_MODE        = 0x00000002,
    BLNDV_CONTROL_BLND_MODE_OTHER_STEREO_TYPE          = 0x00000003,
} BLNDV_CONTROL_BLND_MODE;

typedef enum BLNDV_CONTROL_BLND_MULTIPLIED_MODE {
    BLNDV_CONTROL_BLND_MULTIPLIED_MODE_FALSE           = 0x00000000,
    BLNDV_CONTROL_BLND_MULTIPLIED_MODE_TRUE            = 0x00000001,
} BLNDV_CONTROL_BLND_MULTIPLIED_MODE;

typedef enum BLNDV_CONTROL_BLND_STEREO_POLARITY {
    BLNDV_CONTROL_BLND_STEREO_POLARITY_LOW             = 0x00000000,
    BLNDV_CONTROL_BLND_STEREO_POLARITY_HIGH            = 0x00000001,
} BLNDV_CONTROL_BLND_STEREO_POLARITY;

typedef enum BLNDV_CONTROL_BLND_STEREO_TYPE {
    BLNDV_CONTROL_BLND_STEREO_TYPE_NON_SINGLE_PIPE_STEREO = 0x00000000,
    BLNDV_CONTROL_BLND_STEREO_TYPE_SIDE_BY_SIDE_SINGLE_PIPE_STEREO = 0x00000001,
    BLNDV_CONTROL_BLND_STEREO_TYPE_TOP_BOTTOM_SINGLE_PIPE_STEREO = 0x00000002,
    BLNDV_CONTROL_BLND_STEREO_TYPE_UNUSED              = 0x00000003,
} BLNDV_CONTROL_BLND_STEREO_TYPE;

typedef enum BLNDV_DEBUG_BLND_CNV_MUX_SELECT {
    BLNDV_DEBUG_BLND_CNV_MUX_SELECT_LOW                = 0x00000000,
    BLNDV_DEBUG_BLND_CNV_MUX_SELECT_HIGH               = 0x00000001,
} BLNDV_DEBUG_BLND_CNV_MUX_SELECT;

typedef enum BLNDV_SM_CONTROL2_SM_FIELD_ALTERNATE {
    BLNDV_SM_CONTROL2_SM_FIELD_ALTERNATE_FALSE         = 0x00000000,
    BLNDV_SM_CONTROL2_SM_FIELD_ALTERNATE_TRUE          = 0x00000001,
} BLNDV_SM_CONTROL2_SM_FIELD_ALTERNATE;

typedef enum BLNDV_SM_CONTROL2_SM_FORCE_NEXT_FRAME_POL {
    BLNDV_SM_CONTROL2_SM_FORCE_NEXT_FRAME_POL_NO_FORCE = 0x00000000,
    BLNDV_SM_CONTROL2_SM_FORCE_NEXT_FRAME_POL_RESERVED = 0x00000001,
    BLNDV_SM_CONTROL2_SM_FORCE_NEXT_FRAME_POL_FORCE_LOW = 0x00000002,
    BLNDV_SM_CONTROL2_SM_FORCE_NEXT_FRAME_POL_FORCE_HIGH = 0x00000003,
} BLNDV_SM_CONTROL2_SM_FORCE_NEXT_FRAME_POL;

typedef enum BLNDV_SM_CONTROL2_SM_FORCE_NEXT_TOP_POL {
    BLNDV_SM_CONTROL2_SM_FORCE_NEXT_TOP_POL_NO_FORCE   = 0x00000000,
    BLNDV_SM_CONTROL2_SM_FORCE_NEXT_TOP_POL_RESERVED   = 0x00000001,
    BLNDV_SM_CONTROL2_SM_FORCE_NEXT_TOP_POL_FORCE_LOW  = 0x00000002,
    BLNDV_SM_CONTROL2_SM_FORCE_NEXT_TOP_POL_FORCE_HIGH = 0x00000003,
} BLNDV_SM_CONTROL2_SM_FORCE_NEXT_TOP_POL;

typedef enum BLNDV_SM_CONTROL2_SM_FRAME_ALTERNATE {
    BLNDV_SM_CONTROL2_SM_FRAME_ALTERNATE_FALSE         = 0x00000000,
    BLNDV_SM_CONTROL2_SM_FRAME_ALTERNATE_TRUE          = 0x00000001,
} BLNDV_SM_CONTROL2_SM_FRAME_ALTERNATE;

typedef enum BLNDV_SM_CONTROL2_SM_MODE {
    BLNDV_SM_CONTROL2_SM_MODE_SINGLE_PLANE             = 0x00000000,
    BLNDV_SM_CONTROL2_SM_MODE_ROW_SUBSAMPLING          = 0x00000002,
    BLNDV_SM_CONTROL2_SM_MODE_COLUMN_SUBSAMPLING       = 0x00000004,
    BLNDV_SM_CONTROL2_SM_MODE_CHECKERBOARD_SUBSAMPLING = 0x00000006,
} BLNDV_SM_CONTROL2_SM_MODE;

typedef enum BLNDV_TEST_DEBUG_INDEX_BLND_TEST_DEBUG_WRITE_EN {
    BLNDV_TEST_DEBUG_INDEX_BLND_TEST_DEBUG_WRITE_EN_FALSE = 0x00000000,
    BLNDV_TEST_DEBUG_INDEX_BLND_TEST_DEBUG_WRITE_EN_TRUE = 0x00000001,
} BLNDV_TEST_DEBUG_INDEX_BLND_TEST_DEBUG_WRITE_EN;

typedef enum BLNDV_UNDERFLOW_INTERRUPT_BLND_UNDERFLOW_INT_ACK {
    BLNDV_UNDERFLOW_INTERRUPT_BLND_UNDERFLOW_INT_ACK_FALSE = 0x00000000,
    BLNDV_UNDERFLOW_INTERRUPT_BLND_UNDERFLOW_INT_ACK_TRUE = 0x00000001,
} BLNDV_UNDERFLOW_INTERRUPT_BLND_UNDERFLOW_INT_ACK;

typedef enum BLNDV_UNDERFLOW_INTERRUPT_BLND_UNDERFLOW_INT_MASK {
    BLNDV_UNDERFLOW_INTERRUPT_BLND_UNDERFLOW_INT_MASK_FALSE = 0x00000000,
    BLNDV_UNDERFLOW_INTERRUPT_BLND_UNDERFLOW_INT_MASK_TRUE = 0x00000001,
} BLNDV_UNDERFLOW_INTERRUPT_BLND_UNDERFLOW_INT_MASK;

typedef enum BLNDV_V_UPDATE_LOCK_BLND_BLND_V_UPDATE_LOCK {
    BLNDV_V_UPDATE_LOCK_BLND_BLND_V_UPDATE_LOCK_FALSE  = 0x00000000,
    BLNDV_V_UPDATE_LOCK_BLND_BLND_V_UPDATE_LOCK_TRUE   = 0x00000001,
} BLNDV_V_UPDATE_LOCK_BLND_BLND_V_UPDATE_LOCK;

typedef enum BLNDV_V_UPDATE_LOCK_BLND_DCP_CUR2_V_UPDATE_LOCK {
    BLNDV_V_UPDATE_LOCK_BLND_DCP_CUR2_V_UPDATE_LOCK_FALSE = 0x00000000,
    BLNDV_V_UPDATE_LOCK_BLND_DCP_CUR2_V_UPDATE_LOCK_TRUE = 0x00000001,
} BLNDV_V_UPDATE_LOCK_BLND_DCP_CUR2_V_UPDATE_LOCK;

typedef enum BLNDV_V_UPDATE_LOCK_BLND_DCP_CUR_V_UPDATE_LOCK {
    BLNDV_V_UPDATE_LOCK_BLND_DCP_CUR_V_UPDATE_LOCK_FALSE = 0x00000000,
    BLNDV_V_UPDATE_LOCK_BLND_DCP_CUR_V_UPDATE_LOCK_TRUE = 0x00000001,
} BLNDV_V_UPDATE_LOCK_BLND_DCP_CUR_V_UPDATE_LOCK;

typedef enum BLNDV_V_UPDATE_LOCK_BLND_DCP_GRPH_SURF_V_UPDATE_LOCK {
    BLNDV_V_UPDATE_LOCK_BLND_DCP_GRPH_SURF_V_UPDATE_LOCK_FALSE = 0x00000000,
    BLNDV_V_UPDATE_LOCK_BLND_DCP_GRPH_SURF_V_UPDATE_LOCK_TRUE = 0x00000001,
} BLNDV_V_UPDATE_LOCK_BLND_DCP_GRPH_SURF_V_UPDATE_LOCK;

typedef enum BLNDV_V_UPDATE_LOCK_BLND_DCP_GRPH_V_UPDATE_LOCK {
    BLNDV_V_UPDATE_LOCK_BLND_DCP_GRPH_V_UPDATE_LOCK_FALSE = 0x00000000,
    BLNDV_V_UPDATE_LOCK_BLND_DCP_GRPH_V_UPDATE_LOCK_TRUE = 0x00000001,
} BLNDV_V_UPDATE_LOCK_BLND_DCP_GRPH_V_UPDATE_LOCK;

typedef enum BLNDV_V_UPDATE_LOCK_BLND_SCL_V_UPDATE_LOCK {
    BLNDV_V_UPDATE_LOCK_BLND_SCL_V_UPDATE_LOCK_FALSE   = 0x00000000,
    BLNDV_V_UPDATE_LOCK_BLND_SCL_V_UPDATE_LOCK_TRUE    = 0x00000001,
} BLNDV_V_UPDATE_LOCK_BLND_SCL_V_UPDATE_LOCK;

typedef enum BLNDV_V_UPDATE_LOCK_BLND_V_UPDATE_LOCK_MODE {
    BLNDV_V_UPDATE_LOCK_BLND_V_UPDATE_LOCK_MODE_FALSE  = 0x00000000,
    BLNDV_V_UPDATE_LOCK_BLND_V_UPDATE_LOCK_MODE_TRUE   = 0x00000001,
} BLNDV_V_UPDATE_LOCK_BLND_V_UPDATE_LOCK_MODE;

typedef enum BLND_CONTROL2_BLND_SUPERAA_DEGAMMA_EN {
    BLND_CONTROL2_BLND_SUPERAA_DEGAMMA_EN_FALSE        = 0x00000000,
    BLND_CONTROL2_BLND_SUPERAA_DEGAMMA_EN_TRUE         = 0x00000001,
} BLND_CONTROL2_BLND_SUPERAA_DEGAMMA_EN;

typedef enum BLND_CONTROL2_BLND_SUPERAA_REGAMMA_EN {
    BLND_CONTROL2_BLND_SUPERAA_REGAMMA_EN_FALSE        = 0x00000000,
    BLND_CONTROL2_BLND_SUPERAA_REGAMMA_EN_TRUE         = 0x00000001,
} BLND_CONTROL2_BLND_SUPERAA_REGAMMA_EN;

typedef enum BLND_CONTROL2_PTI_ENABLE {
    BLND_CONTROL2_PTI_ENABLE_FALSE                     = 0x00000000,
    BLND_CONTROL2_PTI_ENABLE_TRUE                      = 0x00000001,
} BLND_CONTROL2_PTI_ENABLE;

typedef enum BLND_CONTROL_BLND_ACTIVE_OVERLAP_ONLY {
    BLND_CONTROL_BLND_ACTIVE_OVERLAY_ONLY_FALSE        = 0x00000000,
    BLND_CONTROL_BLND_ACTIVE_OVERLAY_ONLY_TRUE         = 0x00000001,
} BLND_CONTROL_BLND_ACTIVE_OVERLAP_ONLY;

typedef enum BLND_CONTROL_BLND_ALPHA_MODE {
    BLND_CONTROL_BLND_ALPHA_MODE_CURRENT_PIXEL_ALPHA   = 0x00000000,
    BLND_CONTROL_BLND_ALPHA_MODE_PIXEL_ALPHA_COMBINED_GLOBAL_GAIN = 0x00000001,
    BLND_CONTROL_BLND_ALPHA_MODE_GLOBAL_ALPHA_ONLY     = 0x00000002,
    BLND_CONTROL_BLND_ALPHA_MODE_UNUSED                = 0x00000003,
} BLND_CONTROL_BLND_ALPHA_MODE;

typedef enum BLND_CONTROL_BLND_FEEDTHROUGH_EN {
    BLND_CONTROL_BLND_FEEDTHROUGH_EN_FALSE             = 0x00000000,
    BLND_CONTROL_BLND_FEEDTHROUGH_EN_TRUE              = 0x00000001,
} BLND_CONTROL_BLND_FEEDTHROUGH_EN;

typedef enum BLND_CONTROL_BLND_MODE {
    BLND_CONTROL_BLND_MODE_CURRENT_PIPE_ONLY           = 0x00000000,
    BLND_CONTROL_BLND_MODE_OTHER_PIPE_ONLY             = 0x00000001,
    BLND_CONTROL_BLND_MODE_ALPHA_BLENDING_MODE         = 0x00000002,
    BLND_CONTROL_BLND_MODE_OTHER_STEREO_TYPE           = 0x00000003,
} BLND_CONTROL_BLND_MODE;

typedef enum BLND_CONTROL_BLND_MULTIPLIED_MODE {
    BLND_CONTROL_BLND_MULTIPLIED_MODE_FALSE            = 0x00000000,
    BLND_CONTROL_BLND_MULTIPLIED_MODE_TRUE             = 0x00000001,
} BLND_CONTROL_BLND_MULTIPLIED_MODE;

typedef enum BLND_CONTROL_BLND_STEREO_POLARITY {
    BLND_CONTROL_BLND_STEREO_POLARITY_LOW              = 0x00000000,
    BLND_CONTROL_BLND_STEREO_POLARITY_HIGH             = 0x00000001,
} BLND_CONTROL_BLND_STEREO_POLARITY;

typedef enum BLND_CONTROL_BLND_STEREO_TYPE {
    BLND_CONTROL_BLND_STEREO_TYPE_NON_SINGLE_PIPE_STEREO = 0x00000000,
    BLND_CONTROL_BLND_STEREO_TYPE_SIDE_BY_SIDE_SINGLE_PIPE_STEREO = 0x00000001,
    BLND_CONTROL_BLND_STEREO_TYPE_TOP_BOTTOM_SINGLE_PIPE_STEREO = 0x00000002,
    BLND_CONTROL_BLND_STEREO_TYPE_UNUSED               = 0x00000003,
} BLND_CONTROL_BLND_STEREO_TYPE;

typedef enum BLND_DEBUG_BLND_CNV_MUX_SELECT {
    BLND_DEBUG_BLND_CNV_MUX_SELECT_LOW                 = 0x00000000,
    BLND_DEBUG_BLND_CNV_MUX_SELECT_HIGH                = 0x00000001,
} BLND_DEBUG_BLND_CNV_MUX_SELECT;

typedef enum BLND_SM_CONTROL2_SM_FIELD_ALTERNATE {
    BLND_SM_CONTROL2_SM_FIELD_ALTERNATE_FALSE          = 0x00000000,
    BLND_SM_CONTROL2_SM_FIELD_ALTERNATE_TRUE           = 0x00000001,
} BLND_SM_CONTROL2_SM_FIELD_ALTERNATE;

typedef enum BLND_SM_CONTROL2_SM_FORCE_NEXT_FRAME_POL {
    BLND_SM_CONTROL2_SM_FORCE_NEXT_FRAME_POL_NO_FORCE  = 0x00000000,
    BLND_SM_CONTROL2_SM_FORCE_NEXT_FRAME_POL_RESERVED  = 0x00000001,
    BLND_SM_CONTROL2_SM_FORCE_NEXT_FRAME_POL_FORCE_LOW = 0x00000002,
    BLND_SM_CONTROL2_SM_FORCE_NEXT_FRAME_POL_FORCE_HIGH = 0x00000003,
} BLND_SM_CONTROL2_SM_FORCE_NEXT_FRAME_POL;

typedef enum BLND_SM_CONTROL2_SM_FORCE_NEXT_TOP_POL {
    BLND_SM_CONTROL2_SM_FORCE_NEXT_TOP_POL_NO_FORCE    = 0x00000000,
    BLND_SM_CONTROL2_SM_FORCE_NEXT_TOP_POL_RESERVED    = 0x00000001,
    BLND_SM_CONTROL2_SM_FORCE_NEXT_TOP_POL_FORCE_LOW   = 0x00000002,
    BLND_SM_CONTROL2_SM_FORCE_NEXT_TOP_POL_FORCE_HIGH  = 0x00000003,
} BLND_SM_CONTROL2_SM_FORCE_NEXT_TOP_POL;

typedef enum BLND_SM_CONTROL2_SM_FRAME_ALTERNATE {
    BLND_SM_CONTROL2_SM_FRAME_ALTERNATE_FALSE          = 0x00000000,
    BLND_SM_CONTROL2_SM_FRAME_ALTERNATE_TRUE           = 0x00000001,
} BLND_SM_CONTROL2_SM_FRAME_ALTERNATE;

typedef enum BLND_SM_CONTROL2_SM_MODE {
    BLND_SM_CONTROL2_SM_MODE_SINGLE_PLANE              = 0x00000000,
    BLND_SM_CONTROL2_SM_MODE_ROW_SUBSAMPLING           = 0x00000002,
    BLND_SM_CONTROL2_SM_MODE_COLUMN_SUBSAMPLING        = 0x00000004,
    BLND_SM_CONTROL2_SM_MODE_CHECKERBOARD_SUBSAMPLING  = 0x00000006,
} BLND_SM_CONTROL2_SM_MODE;

typedef enum BLND_TEST_DEBUG_INDEX_BLND_TEST_DEBUG_WRITE_EN {
    BLND_TEST_DEBUG_INDEX_BLND_TEST_DEBUG_WRITE_EN_FALSE = 0x00000000,
    BLND_TEST_DEBUG_INDEX_BLND_TEST_DEBUG_WRITE_EN_TRUE = 0x00000001,
} BLND_TEST_DEBUG_INDEX_BLND_TEST_DEBUG_WRITE_EN;

typedef enum BLND_UNDERFLOW_INTERRUPT_BLND_UNDERFLOW_INT_ACK {
    BLND_UNDERFLOW_INTERRUPT_BLND_UNDERFLOW_INT_ACK_FALSE = 0x00000000,
    BLND_UNDERFLOW_INTERRUPT_BLND_UNDERFLOW_INT_ACK_TRUE = 0x00000001,
} BLND_UNDERFLOW_INTERRUPT_BLND_UNDERFLOW_INT_ACK;

typedef enum BLND_UNDERFLOW_INTERRUPT_BLND_UNDERFLOW_INT_MASK {
    BLND_UNDERFLOW_INTERRUPT_BLND_UNDERFLOW_INT_MASK_FALSE = 0x00000000,
    BLND_UNDERFLOW_INTERRUPT_BLND_UNDERFLOW_INT_MASK_TRUE = 0x00000001,
} BLND_UNDERFLOW_INTERRUPT_BLND_UNDERFLOW_INT_MASK;

typedef enum BLND_V_UPDATE_LOCK_BLND_BLND_V_UPDATE_LOCK {
    BLND_V_UPDATE_LOCK_BLND_BLND_V_UPDATE_LOCK_FALSE   = 0x00000000,
    BLND_V_UPDATE_LOCK_BLND_BLND_V_UPDATE_LOCK_TRUE    = 0x00000001,
} BLND_V_UPDATE_LOCK_BLND_BLND_V_UPDATE_LOCK;

typedef enum BLND_V_UPDATE_LOCK_BLND_DCP_CUR2_V_UPDATE_LOCK {
    BLND_V_UPDATE_LOCK_BLND_DCP_CUR2_V_UPDATE_LOCK_FALSE = 0x00000000,
    BLND_V_UPDATE_LOCK_BLND_DCP_CUR2_V_UPDATE_LOCK_TRUE = 0x00000001,
} BLND_V_UPDATE_LOCK_BLND_DCP_CUR2_V_UPDATE_LOCK;

typedef enum BLND_V_UPDATE_LOCK_BLND_DCP_CUR_V_UPDATE_LOCK {
    BLND_V_UPDATE_LOCK_BLND_DCP_CUR_V_UPDATE_LOCK_FALSE = 0x00000000,
    BLND_V_UPDATE_LOCK_BLND_DCP_CUR_V_UPDATE_LOCK_TRUE = 0x00000001,
} BLND_V_UPDATE_LOCK_BLND_DCP_CUR_V_UPDATE_LOCK;

typedef enum BLND_V_UPDATE_LOCK_BLND_DCP_GRPH_SURF_V_UPDATE_LOCK {
    BLND_V_UPDATE_LOCK_BLND_DCP_GRPH_SURF_V_UPDATE_LOCK_FALSE = 0x00000000,
    BLND_V_UPDATE_LOCK_BLND_DCP_GRPH_SURF_V_UPDATE_LOCK_TRUE = 0x00000001,
} BLND_V_UPDATE_LOCK_BLND_DCP_GRPH_SURF_V_UPDATE_LOCK;

typedef enum BLND_V_UPDATE_LOCK_BLND_DCP_GRPH_V_UPDATE_LOCK {
    BLND_V_UPDATE_LOCK_BLND_DCP_GRPH_V_UPDATE_LOCK_FALSE = 0x00000000,
    BLND_V_UPDATE_LOCK_BLND_DCP_GRPH_V_UPDATE_LOCK_TRUE = 0x00000001,
} BLND_V_UPDATE_LOCK_BLND_DCP_GRPH_V_UPDATE_LOCK;

typedef enum BLND_V_UPDATE_LOCK_BLND_SCL_V_UPDATE_LOCK {
    BLND_V_UPDATE_LOCK_BLND_SCL_V_UPDATE_LOCK_FALSE    = 0x00000000,
    BLND_V_UPDATE_LOCK_BLND_SCL_V_UPDATE_LOCK_TRUE     = 0x00000001,
} BLND_V_UPDATE_LOCK_BLND_SCL_V_UPDATE_LOCK;

typedef enum BLND_V_UPDATE_LOCK_BLND_V_UPDATE_LOCK_MODE {
    BLND_V_UPDATE_LOCK_BLND_V_UPDATE_LOCK_MODE_FALSE   = 0x00000000,
    BLND_V_UPDATE_LOCK_BLND_V_UPDATE_LOCK_MODE_TRUE    = 0x00000001,
} BLND_V_UPDATE_LOCK_BLND_V_UPDATE_LOCK_MODE;

typedef enum BUF_DATA_FORMAT {
    BUF_DATA_FORMAT_INVALID                            = 0x00000000,
    BUF_DATA_FORMAT_8                                  = 0x00000001,
    BUF_DATA_FORMAT_16                                 = 0x00000002,
    BUF_DATA_FORMAT_8_8                                = 0x00000003,
    BUF_DATA_FORMAT_32                                 = 0x00000004,
    BUF_DATA_FORMAT_16_16                              = 0x00000005,
    BUF_DATA_FORMAT_10_11_11                           = 0x00000006,
    BUF_DATA_FORMAT_11_11_10                           = 0x00000007,
    BUF_DATA_FORMAT_10_10_10_2                         = 0x00000008,
    BUF_DATA_FORMAT_2_10_10_10                         = 0x00000009,
    BUF_DATA_FORMAT_8_8_8_8                            = 0x0000000a,
    BUF_DATA_FORMAT_32_32                              = 0x0000000b,
    BUF_DATA_FORMAT_16_16_16_16                        = 0x0000000c,
    BUF_DATA_FORMAT_32_32_32                           = 0x0000000d,
    BUF_DATA_FORMAT_32_32_32_32                        = 0x0000000e,
    BUF_DATA_FORMAT_RESERVED_15                        = 0x0000000f,
} BUF_DATA_FORMAT;

typedef enum BUF_FMT {
    BUF_FMT_INVALID                                    = 0x00000000,
    BUF_FMT_8_UNORM                                    = 0x00000001,
    BUF_FMT_8_SNORM                                    = 0x00000002,
    BUF_FMT_8_USCALED                                  = 0x00000003,
    BUF_FMT_8_SSCALED                                  = 0x00000004,
    BUF_FMT_8_UINT                                     = 0x00000005,
    BUF_FMT_8_SINT                                     = 0x00000006,
    BUF_FMT_16_UNORM                                   = 0x00000007,
    BUF_FMT_16_SNORM                                   = 0x00000008,
    BUF_FMT_16_USCALED                                 = 0x00000009,
    BUF_FMT_16_SSCALED                                 = 0x0000000a,
    BUF_FMT_16_UINT                                    = 0x0000000b,
    BUF_FMT_16_SINT                                    = 0x0000000c,
    BUF_FMT_16_FLOAT                                   = 0x0000000d,
    BUF_FMT_8_8_UNORM                                  = 0x0000000e,
    BUF_FMT_8_8_SNORM                                  = 0x0000000f,
    BUF_FMT_8_8_USCALED                                = 0x00000010,
    BUF_FMT_8_8_SSCALED                                = 0x00000011,
    BUF_FMT_8_8_UINT                                   = 0x00000012,
    BUF_FMT_8_8_SINT                                   = 0x00000013,
    BUF_FMT_32_UINT                                    = 0x00000014,
    BUF_FMT_32_SINT                                    = 0x00000015,
    BUF_FMT_32_FLOAT                                   = 0x00000016,
    BUF_FMT_16_16_UNORM                                = 0x00000017,
    BUF_FMT_16_16_SNORM                                = 0x00000018,
    BUF_FMT_16_16_USCALED                              = 0x00000019,
    BUF_FMT_16_16_SSCALED                              = 0x0000001a,
    BUF_FMT_16_16_UINT                                 = 0x0000001b,
    BUF_FMT_16_16_SINT                                 = 0x0000001c,
    BUF_FMT_16_16_FLOAT                                = 0x0000001d,
    BUF_FMT_10_11_11_UNORM                             = 0x0000001e,
    BUF_FMT_10_11_11_SNORM                             = 0x0000001f,
    BUF_FMT_10_11_11_USCALED                           = 0x00000020,
    BUF_FMT_10_11_11_SSCALED                           = 0x00000021,
    BUF_FMT_10_11_11_UINT                              = 0x00000022,
    BUF_FMT_10_11_11_SINT                              = 0x00000023,
    BUF_FMT_10_11_11_FLOAT                             = 0x00000024,
    BUF_FMT_11_11_10_UNORM                             = 0x00000025,
    BUF_FMT_11_11_10_SNORM                             = 0x00000026,
    BUF_FMT_11_11_10_USCALED                           = 0x00000027,
    BUF_FMT_11_11_10_SSCALED                           = 0x00000028,
    BUF_FMT_11_11_10_UINT                              = 0x00000029,
    BUF_FMT_11_11_10_SINT                              = 0x0000002a,
    BUF_FMT_11_11_10_FLOAT                             = 0x0000002b,
    BUF_FMT_10_10_10_2_UNORM                           = 0x0000002c,
    BUF_FMT_10_10_10_2_SNORM                           = 0x0000002d,
    BUF_FMT_10_10_10_2_USCALED                         = 0x0000002e,
    BUF_FMT_10_10_10_2_SSCALED                         = 0x0000002f,
    BUF_FMT_10_10_10_2_UINT                            = 0x00000030,
    BUF_FMT_10_10_10_2_SINT                            = 0x00000031,
    BUF_FMT_2_10_10_10_UNORM                           = 0x00000032,
    BUF_FMT_2_10_10_10_SNORM                           = 0x00000033,
    BUF_FMT_2_10_10_10_USCALED                         = 0x00000034,
    BUF_FMT_2_10_10_10_SSCALED                         = 0x00000035,
    BUF_FMT_2_10_10_10_UINT                            = 0x00000036,
    BUF_FMT_2_10_10_10_SINT                            = 0x00000037,
    BUF_FMT_8_8_8_8_UNORM                              = 0x00000038,
    BUF_FMT_8_8_8_8_SNORM                              = 0x00000039,
    BUF_FMT_8_8_8_8_USCALED                            = 0x0000003a,
    BUF_FMT_8_8_8_8_SSCALED                            = 0x0000003b,
    BUF_FMT_8_8_8_8_UINT                               = 0x0000003c,
    BUF_FMT_8_8_8_8_SINT                               = 0x0000003d,
    BUF_FMT_32_32_UINT                                 = 0x0000003e,
    BUF_FMT_32_32_SINT                                 = 0x0000003f,
    BUF_FMT_32_32_FLOAT                                = 0x00000040,
    BUF_FMT_16_16_16_16_UNORM                          = 0x00000041,
    BUF_FMT_16_16_16_16_SNORM                          = 0x00000042,
    BUF_FMT_16_16_16_16_USCALED                        = 0x00000043,
    BUF_FMT_16_16_16_16_SSCALED                        = 0x00000044,
    BUF_FMT_16_16_16_16_UINT                           = 0x00000045,
    BUF_FMT_16_16_16_16_SINT                           = 0x00000046,
    BUF_FMT_16_16_16_16_FLOAT                          = 0x00000047,
    BUF_FMT_32_32_32_UINT                              = 0x00000048,
    BUF_FMT_32_32_32_SINT                              = 0x00000049,
    BUF_FMT_32_32_32_FLOAT                             = 0x0000004a,
    BUF_FMT_32_32_32_32_UINT                           = 0x0000004b,
    BUF_FMT_32_32_32_32_SINT                           = 0x0000004c,
    BUF_FMT_32_32_32_32_FLOAT                          = 0x0000004d,
    BUF_FMT_RESERVED_78                                = 0x0000004e,
    BUF_FMT_RESERVED_79                                = 0x0000004f,
    BUF_FMT_RESERVED_80                                = 0x00000050,
    BUF_FMT_RESERVED_81                                = 0x00000051,
    BUF_FMT_RESERVED_82                                = 0x00000052,
    BUF_FMT_RESERVED_83                                = 0x00000053,
    BUF_FMT_RESERVED_84                                = 0x00000054,
    BUF_FMT_RESERVED_85                                = 0x00000055,
    BUF_FMT_RESERVED_86                                = 0x00000056,
    BUF_FMT_RESERVED_87                                = 0x00000057,
    BUF_FMT_RESERVED_88                                = 0x00000058,
    BUF_FMT_RESERVED_89                                = 0x00000059,
    BUF_FMT_RESERVED_90                                = 0x0000005a,
    BUF_FMT_RESERVED_91                                = 0x0000005b,
    BUF_FMT_RESERVED_92                                = 0x0000005c,
    BUF_FMT_RESERVED_93                                = 0x0000005d,
    BUF_FMT_RESERVED_94                                = 0x0000005e,
    BUF_FMT_RESERVED_95                                = 0x0000005f,
    BUF_FMT_RESERVED_96                                = 0x00000060,
    BUF_FMT_RESERVED_97                                = 0x00000061,
    BUF_FMT_RESERVED_98                                = 0x00000062,
    BUF_FMT_RESERVED_99                                = 0x00000063,
    BUF_FMT_RESERVED_100                               = 0x00000064,
    BUF_FMT_RESERVED_101                               = 0x00000065,
    BUF_FMT_RESERVED_102                               = 0x00000066,
    BUF_FMT_RESERVED_103                               = 0x00000067,
    BUF_FMT_RESERVED_104                               = 0x00000068,
    BUF_FMT_RESERVED_105                               = 0x00000069,
    BUF_FMT_RESERVED_106                               = 0x0000006a,
    BUF_FMT_RESERVED_107                               = 0x0000006b,
    BUF_FMT_RESERVED_108                               = 0x0000006c,
    BUF_FMT_RESERVED_109                               = 0x0000006d,
    BUF_FMT_RESERVED_110                               = 0x0000006e,
    BUF_FMT_RESERVED_111                               = 0x0000006f,
    BUF_FMT_RESERVED_112                               = 0x00000070,
    BUF_FMT_RESERVED_113                               = 0x00000071,
    BUF_FMT_RESERVED_114                               = 0x00000072,
    BUF_FMT_RESERVED_115                               = 0x00000073,
    BUF_FMT_RESERVED_116                               = 0x00000074,
    BUF_FMT_RESERVED_117                               = 0x00000075,
    BUF_FMT_RESERVED_118                               = 0x00000076,
    BUF_FMT_RESERVED_119                               = 0x00000077,
    BUF_FMT_RESERVED_120                               = 0x00000078,
    BUF_FMT_RESERVED_121                               = 0x00000079,
    BUF_FMT_RESERVED_122                               = 0x0000007a,
    BUF_FMT_RESERVED_123                               = 0x0000007b,
    BUF_FMT_RESERVED_124                               = 0x0000007c,
    BUF_FMT_RESERVED_125                               = 0x0000007d,
    BUF_FMT_RESERVED_126                               = 0x0000007e,
    BUF_FMT_RESERVED_127                               = 0x0000007f,
} BUF_FMT;

typedef enum BUF_NUM_FORMAT {
    BUF_NUM_FORMAT_UNORM                               = 0x00000000,
    BUF_NUM_FORMAT_SNORM                               = 0x00000001,
    BUF_NUM_FORMAT_USCALED                             = 0x00000002,
    BUF_NUM_FORMAT_SSCALED                             = 0x00000003,
    BUF_NUM_FORMAT_UINT                                = 0x00000004,
    BUF_NUM_FORMAT_SINT                                = 0x00000005,
    BUF_NUM_FORMAT_FLOAT                               = 0x00000007,
    BUF_NUM_FORMAT_RESERVED_6__GFX09                   = 0x00000006,
    BUF_NUM_FORMAT_SNORM_NZ__GFX10                     = 0x00000006,
} BUF_NUM_FORMAT;

typedef enum CBMode {
    CB_DISABLE                                         = 0x00000000,
    CB_NORMAL                                          = 0x00000001,
    CB_ELIMINATE_FAST_CLEAR                            = 0x00000002,
    CB_RESOLVE                                         = 0x00000003,
    CB_DECOMPRESS                                      = 0x00000004,
    CB_FMASK_DECOMPRESS                                = 0x00000005,
    CB_DCC_DECOMPRESS                                  = 0x00000006,
    CB_RESERVED__GFX10                                 = 0x00000007,
} CBMode;

typedef enum CBPerfClearFilterSel {
    CB_PERF_CLEAR_FILTER_SEL_NONCLEAR                  = 0x00000000,
    CB_PERF_CLEAR_FILTER_SEL_CLEAR                     = 0x00000001,
} CBPerfClearFilterSel;

constexpr unsigned int MaxCBPerfClearFilterSel         = CB_PERF_CLEAR_FILTER_SEL_CLEAR;

typedef enum CBPerfOpFilterSel {
    CB_PERF_OP_FILTER_SEL_WRITE_ONLY                   = 0x00000000,
    CB_PERF_OP_FILTER_SEL_NEEDS_DESTINATION            = 0x00000001,
    CB_PERF_OP_FILTER_SEL_RESOLVE                      = 0x00000002,
    CB_PERF_OP_FILTER_SEL_DECOMPRESS                   = 0x00000003,
    CB_PERF_OP_FILTER_SEL_FMASK_DECOMPRESS             = 0x00000004,
    CB_PERF_OP_FILTER_SEL_ELIMINATE_FAST_CLEAR         = 0x00000005,
} CBPerfOpFilterSel;

constexpr unsigned int MaxCBPerfOpFilterSel            = CB_PERF_OP_FILTER_SEL_ELIMINATE_FAST_CLEAR;

typedef enum CBPerfSel {
    CB_PERF_SEL_NONE                                   = 0x00000000,
    CB_PERF_SEL_BUSY                                   = 0x00000001,
    CB_PERF_SEL_CORE_SCLK_VLD                          = 0x00000002,
    CB_PERF_SEL_REG_SCLK0_VLD                          = 0x00000003,
    CB_PERF_SEL_REG_SCLK1_VLD                          = 0x00000004,
    CB_PERF_SEL_DRAWN_QUAD                             = 0x00000005,
    CB_PERF_SEL_DRAWN_PIXEL                            = 0x00000006,
    CB_PERF_SEL_DRAWN_QUAD_FRAGMENT                    = 0x00000007,
    CB_PERF_SEL_DRAWN_TILE                             = 0x00000008,
    CB_PERF_SEL_DB_CB_TILE_VALID_READY                 = 0x00000009,
    CB_PERF_SEL_DB_CB_TILE_VALID_READYB                = 0x0000000a,
    CB_PERF_SEL_DB_CB_TILE_VALIDB_READY                = 0x0000000b,
    CB_PERF_SEL_DB_CB_TILE_VALIDB_READYB               = 0x0000000c,
    CB_PERF_SEL_CM_FC_TILE_VALID_READY                 = 0x0000000d,
    CB_PERF_SEL_CM_FC_TILE_VALID_READYB                = 0x0000000e,
    CB_PERF_SEL_CM_FC_TILE_VALIDB_READY                = 0x0000000f,
    CB_PERF_SEL_CM_FC_TILE_VALIDB_READYB               = 0x00000010,
    CB_PERF_SEL_MERGE_TILE_ONLY_VALID_READY            = 0x00000011,
    CB_PERF_SEL_MERGE_TILE_ONLY_VALID_READYB           = 0x00000012,
    CB_PERF_SEL_DB_CB_LQUAD_VALID_READY                = 0x00000013,
    CB_PERF_SEL_DB_CB_LQUAD_VALID_READYB               = 0x00000014,
    CB_PERF_SEL_DB_CB_LQUAD_VALIDB_READY               = 0x00000015,
    CB_PERF_SEL_DB_CB_LQUAD_VALIDB_READYB              = 0x00000016,
    CB_PERF_SEL_LQUAD_NO_TILE                          = 0x00000017,
    CB_PERF_SEL_LQUAD_FORMAT_IS_EXPORT_32_R            = 0x00000018,
    CB_PERF_SEL_LQUAD_FORMAT_IS_EXPORT_32_AR           = 0x00000019,
    CB_PERF_SEL_LQUAD_FORMAT_IS_EXPORT_32_GR           = 0x0000001a,
    CB_PERF_SEL_LQUAD_FORMAT_IS_EXPORT_32_ABGR         = 0x0000001b,
    CB_PERF_SEL_LQUAD_FORMAT_IS_EXPORT_FP16_ABGR       = 0x0000001c,
    CB_PERF_SEL_LQUAD_FORMAT_IS_EXPORT_SIGNED16_ABGR   = 0x0000001d,
    CB_PERF_SEL_LQUAD_FORMAT_IS_EXPORT_UNSIGNED16_ABGR = 0x0000001e,
    CB_PERF_SEL_QUAD_KILLED_BY_EXTRA_PIXEL_EXPORT      = 0x0000001f,
    CB_PERF_SEL_QUAD_KILLED_BY_COLOR_INVALID           = 0x00000020,
    CB_PERF_SEL_QUAD_KILLED_BY_NULL_TARGET_SHADER_MASK = 0x00000021,
    CB_PERF_SEL_QUAD_KILLED_BY_NULL_SAMPLE_MASK        = 0x00000022,
    CB_PERF_SEL_QUAD_KILLED_BY_DISCARD_PIXEL           = 0x00000023,
    CB_PERF_SEL_FC_CLEAR_QUAD_VALID_READY              = 0x00000024,
    CB_PERF_SEL_FC_CLEAR_QUAD_VALID_READYB             = 0x00000025,
    CB_PERF_SEL_FC_CLEAR_QUAD_VALIDB_READY             = 0x00000026,
    CB_PERF_SEL_FC_CLEAR_QUAD_VALIDB_READYB            = 0x00000027,
    CB_PERF_SEL_FOP_IN_VALID_READY                     = 0x00000028,
    CB_PERF_SEL_FOP_IN_VALID_READYB                    = 0x00000029,
    CB_PERF_SEL_FOP_IN_VALIDB_READY                    = 0x0000002a,
    CB_PERF_SEL_FOP_IN_VALIDB_READYB                   = 0x0000002b,
    CB_PERF_SEL_FC_CC_QUADFRAG_VALID_READY             = 0x0000002c,
    CB_PERF_SEL_FC_CC_QUADFRAG_VALID_READYB            = 0x0000002d,
    CB_PERF_SEL_FC_CC_QUADFRAG_VALIDB_READY            = 0x0000002e,
    CB_PERF_SEL_FC_CC_QUADFRAG_VALIDB_READYB           = 0x0000002f,
    CB_PERF_SEL_CC_IB_SR_FRAG_VALID_READY              = 0x00000030,
    CB_PERF_SEL_CC_IB_SR_FRAG_VALID_READYB             = 0x00000031,
    CB_PERF_SEL_CC_IB_SR_FRAG_VALIDB_READY             = 0x00000032,
    CB_PERF_SEL_CC_IB_SR_FRAG_VALIDB_READYB            = 0x00000033,
    CB_PERF_SEL_CC_IB_TB_FRAG_VALID_READY              = 0x00000034,
    CB_PERF_SEL_CC_IB_TB_FRAG_VALID_READYB             = 0x00000035,
    CB_PERF_SEL_CC_IB_TB_FRAG_VALIDB_READY             = 0x00000036,
    CB_PERF_SEL_CC_IB_TB_FRAG_VALIDB_READYB            = 0x00000037,
    CB_PERF_SEL_CC_RB_BC_EVENFRAG_VALID_READY          = 0x00000038,
    CB_PERF_SEL_CC_RB_BC_EVENFRAG_VALID_READYB         = 0x00000039,
    CB_PERF_SEL_CC_RB_BC_EVENFRAG_VALIDB_READY         = 0x0000003a,
    CB_PERF_SEL_CC_RB_BC_EVENFRAG_VALIDB_READYB        = 0x0000003b,
    CB_PERF_SEL_CC_RB_BC_ODDFRAG_VALID_READY           = 0x0000003c,
    CB_PERF_SEL_CC_RB_BC_ODDFRAG_VALID_READYB          = 0x0000003d,
    CB_PERF_SEL_CC_RB_BC_ODDFRAG_VALIDB_READY          = 0x0000003e,
    CB_PERF_SEL_CC_RB_BC_ODDFRAG_VALIDB_READYB         = 0x0000003f,
    CB_PERF_SEL_CC_BC_CS_FRAG_VALID                    = 0x00000040,
    CB_PERF_SEL_CM_CACHE_HIT                           = 0x00000041,
    CB_PERF_SEL_CM_CACHE_TAG_MISS                      = 0x00000042,
    CB_PERF_SEL_CM_CACHE_SECTOR_MISS                   = 0x00000043,
    CB_PERF_SEL_CM_CACHE_REEVICTION_STALL              = 0x00000044,
    CB_PERF_SEL_CM_CACHE_EVICT_NONZERO_INFLIGHT_STALL  = 0x00000045,
    CB_PERF_SEL_CM_CACHE_REPLACE_PENDING_EVICT_STALL   = 0x00000046,
    CB_PERF_SEL_CM_CACHE_INFLIGHT_COUNTER_MAXIMUM_STALL = 0x00000047,
    CB_PERF_SEL_CM_CACHE_READ_OUTPUT_STALL             = 0x00000048,
    CB_PERF_SEL_CM_CACHE_WRITE_OUTPUT_STALL            = 0x00000049,
    CB_PERF_SEL_CM_CACHE_ACK_OUTPUT_STALL              = 0x0000004a,
    CB_PERF_SEL_CM_CACHE_STALL                         = 0x0000004b,
    CB_PERF_SEL_CM_CACHE_FLUSH                         = 0x0000004c,
    CB_PERF_SEL_CM_CACHE_TAGS_FLUSHED                  = 0x0000004d,
    CB_PERF_SEL_CM_CACHE_SECTORS_FLUSHED               = 0x0000004e,
    CB_PERF_SEL_CM_CACHE_DIRTY_SECTORS_FLUSHED         = 0x0000004f,
    CB_PERF_SEL_FC_CACHE_HIT                           = 0x00000050,
    CB_PERF_SEL_FC_CACHE_TAG_MISS                      = 0x00000051,
    CB_PERF_SEL_FC_CACHE_SECTOR_MISS                   = 0x00000052,
    CB_PERF_SEL_FC_CACHE_REEVICTION_STALL              = 0x00000053,
    CB_PERF_SEL_FC_CACHE_EVICT_NONZERO_INFLIGHT_STALL  = 0x00000054,
    CB_PERF_SEL_FC_CACHE_REPLACE_PENDING_EVICT_STALL   = 0x00000055,
    CB_PERF_SEL_FC_CACHE_INFLIGHT_COUNTER_MAXIMUM_STALL = 0x00000056,
    CB_PERF_SEL_FC_CACHE_READ_OUTPUT_STALL             = 0x00000057,
    CB_PERF_SEL_FC_CACHE_WRITE_OUTPUT_STALL            = 0x00000058,
    CB_PERF_SEL_FC_CACHE_ACK_OUTPUT_STALL              = 0x00000059,
    CB_PERF_SEL_FC_CACHE_STALL                         = 0x0000005a,
    CB_PERF_SEL_FC_CACHE_FLUSH                         = 0x0000005b,
    CB_PERF_SEL_FC_CACHE_TAGS_FLUSHED                  = 0x0000005c,
    CB_PERF_SEL_FC_CACHE_SECTORS_FLUSHED               = 0x0000005d,
    CB_PERF_SEL_FC_CACHE_DIRTY_SECTORS_FLUSHED         = 0x0000005e,
    CB_PERF_SEL_CC_CACHE_HIT                           = 0x0000005f,
    CB_PERF_SEL_CC_CACHE_TAG_MISS                      = 0x00000060,
    CB_PERF_SEL_CC_CACHE_SECTOR_MISS                   = 0x00000061,
    CB_PERF_SEL_CC_CACHE_REEVICTION_STALL              = 0x00000062,
    CB_PERF_SEL_CC_CACHE_EVICT_NONZERO_INFLIGHT_STALL  = 0x00000063,
    CB_PERF_SEL_CC_CACHE_REPLACE_PENDING_EVICT_STALL   = 0x00000064,
    CB_PERF_SEL_CC_CACHE_INFLIGHT_COUNTER_MAXIMUM_STALL = 0x00000065,
    CB_PERF_SEL_CC_CACHE_READ_OUTPUT_STALL             = 0x00000066,
    CB_PERF_SEL_CC_CACHE_WRITE_OUTPUT_STALL            = 0x00000067,
    CB_PERF_SEL_CC_CACHE_ACK_OUTPUT_STALL              = 0x00000068,
    CB_PERF_SEL_CC_CACHE_STALL                         = 0x00000069,
    CB_PERF_SEL_CC_CACHE_FLUSH                         = 0x0000006a,
    CB_PERF_SEL_CC_CACHE_TAGS_FLUSHED                  = 0x0000006b,
    CB_PERF_SEL_CC_CACHE_SECTORS_FLUSHED               = 0x0000006c,
    CB_PERF_SEL_CC_CACHE_DIRTY_SECTORS_FLUSHED         = 0x0000006d,
    CB_PERF_SEL_CC_CACHE_WA_TO_RMW_CONVERSION          = 0x0000006e,
    CB_PERF_SEL_CC_CACHE_READS_SAVED_DUE_TO_DCC        = 0x0000006f,
    CB_PERF_SEL_CB_TAP_WRREQ_VALID_READY               = 0x00000070,
    CB_PERF_SEL_CB_TAP_WRREQ_VALID_READYB              = 0x00000071,
    CB_PERF_SEL_CB_TAP_WRREQ_VALIDB_READY              = 0x00000072,
    CB_PERF_SEL_CB_TAP_WRREQ_VALIDB_READYB             = 0x00000073,
    CB_PERF_SEL_CM_MC_WRITE_REQUEST                    = 0x00000074,
    CB_PERF_SEL_FC_MC_WRITE_REQUEST                    = 0x00000075,
    CB_PERF_SEL_CC_MC_WRITE_REQUEST                    = 0x00000076,
    CB_PERF_SEL_CM_MC_WRITE_REQUESTS_IN_FLIGHT         = 0x00000077,
    CB_PERF_SEL_FC_MC_WRITE_REQUESTS_IN_FLIGHT         = 0x00000078,
    CB_PERF_SEL_CC_MC_WRITE_REQUESTS_IN_FLIGHT         = 0x00000079,
    CB_PERF_SEL_CB_TAP_RDREQ_VALID_READY               = 0x0000007a,
    CB_PERF_SEL_CB_TAP_RDREQ_VALID_READYB              = 0x0000007b,
    CB_PERF_SEL_CB_TAP_RDREQ_VALIDB_READY              = 0x0000007c,
    CB_PERF_SEL_CB_TAP_RDREQ_VALIDB_READYB             = 0x0000007d,
    CB_PERF_SEL_CM_MC_READ_REQUEST                     = 0x0000007e,
    CB_PERF_SEL_FC_MC_READ_REQUEST                     = 0x0000007f,
    CB_PERF_SEL_CC_MC_READ_REQUEST                     = 0x00000080,
    CB_PERF_SEL_CM_MC_READ_REQUESTS_IN_FLIGHT          = 0x00000081,
    CB_PERF_SEL_FC_MC_READ_REQUESTS_IN_FLIGHT          = 0x00000082,
    CB_PERF_SEL_CC_MC_READ_REQUESTS_IN_FLIGHT          = 0x00000083,
    CB_PERF_SEL_CM_TQ_FULL                             = 0x00000084,
    CB_PERF_SEL_CM_TQ_FIFO_TILE_RESIDENCY_STALL        = 0x00000085,
    CB_PERF_SEL_FC_QUAD_RDLAT_FIFO_FULL                = 0x00000086,
    CB_PERF_SEL_FC_TILE_RDLAT_FIFO_FULL                = 0x00000087,
    CB_PERF_SEL_FC_RDLAT_FIFO_QUAD_RESIDENCY_STALL     = 0x00000088,
    CB_PERF_SEL_FOP_FMASK_RAW_STALL                    = 0x00000089,
    CB_PERF_SEL_FOP_FMASK_BYPASS_STALL                 = 0x0000008a,
    CB_PERF_SEL_CC_SF_FULL                             = 0x0000008b,
    CB_PERF_SEL_CC_RB_FULL                             = 0x0000008c,
    CB_PERF_SEL_CC_EVENFIFO_QUAD_RESIDENCY_STALL       = 0x0000008d,
    CB_PERF_SEL_CC_ODDFIFO_QUAD_RESIDENCY_STALL        = 0x0000008e,
    CB_PERF_SEL_BLENDER_RAW_HAZARD_STALL               = 0x0000008f,
    CB_PERF_SEL_EVENT                                  = 0x00000090,
    CB_PERF_SEL_EVENT_CACHE_FLUSH_TS                   = 0x00000091,
    CB_PERF_SEL_EVENT_CONTEXT_DONE                     = 0x00000092,
    CB_PERF_SEL_EVENT_CACHE_FLUSH                      = 0x00000093,
    CB_PERF_SEL_EVENT_CACHE_FLUSH_AND_INV_TS_EVENT     = 0x00000094,
    CB_PERF_SEL_EVENT_CACHE_FLUSH_AND_INV_EVENT        = 0x00000095,
    CB_PERF_SEL_EVENT_FLUSH_AND_INV_CB_DATA_TS         = 0x00000096,
    CB_PERF_SEL_EVENT_FLUSH_AND_INV_CB_META            = 0x00000097,
    CB_PERF_SEL_CC_SURFACE_SYNC                        = 0x00000098,
    CB_PERF_SEL_CMASK_READ_DATA_0xC                    = 0x00000099,
    CB_PERF_SEL_CMASK_READ_DATA_0xD                    = 0x0000009a,
    CB_PERF_SEL_CMASK_READ_DATA_0xE                    = 0x0000009b,
    CB_PERF_SEL_CMASK_READ_DATA_0xF                    = 0x0000009c,
    CB_PERF_SEL_CMASK_WRITE_DATA_0xC                   = 0x0000009d,
    CB_PERF_SEL_CMASK_WRITE_DATA_0xD                   = 0x0000009e,
    CB_PERF_SEL_CMASK_WRITE_DATA_0xE                   = 0x0000009f,
    CB_PERF_SEL_CMASK_WRITE_DATA_0xF                   = 0x000000a0,
    CB_PERF_SEL_TWO_PROBE_QUAD_FRAGMENT                = 0x000000a1,
    CB_PERF_SEL_EXPORT_32_ABGR_QUAD_FRAGMENT           = 0x000000a2,
    CB_PERF_SEL_DUAL_SOURCE_COLOR_QUAD_FRAGMENT        = 0x000000a3,
    CB_PERF_SEL_QUAD_HAS_1_FRAGMENT_BEFORE_UPDATE      = 0x000000a4,
    CB_PERF_SEL_QUAD_HAS_2_FRAGMENTS_BEFORE_UPDATE     = 0x000000a5,
    CB_PERF_SEL_QUAD_HAS_3_FRAGMENTS_BEFORE_UPDATE     = 0x000000a6,
    CB_PERF_SEL_QUAD_HAS_4_FRAGMENTS_BEFORE_UPDATE     = 0x000000a7,
    CB_PERF_SEL_QUAD_HAS_5_FRAGMENTS_BEFORE_UPDATE     = 0x000000a8,
    CB_PERF_SEL_QUAD_HAS_6_FRAGMENTS_BEFORE_UPDATE     = 0x000000a9,
    CB_PERF_SEL_QUAD_HAS_7_FRAGMENTS_BEFORE_UPDATE     = 0x000000aa,
    CB_PERF_SEL_QUAD_HAS_8_FRAGMENTS_BEFORE_UPDATE     = 0x000000ab,
    CB_PERF_SEL_QUAD_HAS_1_FRAGMENT_AFTER_UPDATE       = 0x000000ac,
    CB_PERF_SEL_QUAD_HAS_2_FRAGMENTS_AFTER_UPDATE      = 0x000000ad,
    CB_PERF_SEL_QUAD_HAS_3_FRAGMENTS_AFTER_UPDATE      = 0x000000ae,
    CB_PERF_SEL_QUAD_HAS_4_FRAGMENTS_AFTER_UPDATE      = 0x000000af,
    CB_PERF_SEL_QUAD_HAS_5_FRAGMENTS_AFTER_UPDATE      = 0x000000b0,
    CB_PERF_SEL_QUAD_HAS_6_FRAGMENTS_AFTER_UPDATE      = 0x000000b1,
    CB_PERF_SEL_QUAD_HAS_7_FRAGMENTS_AFTER_UPDATE      = 0x000000b2,
    CB_PERF_SEL_QUAD_HAS_8_FRAGMENTS_AFTER_UPDATE      = 0x000000b3,
    CB_PERF_SEL_QUAD_ADDED_1_FRAGMENT                  = 0x000000b4,
    CB_PERF_SEL_QUAD_ADDED_2_FRAGMENTS                 = 0x000000b5,
    CB_PERF_SEL_QUAD_ADDED_3_FRAGMENTS                 = 0x000000b6,
    CB_PERF_SEL_QUAD_ADDED_4_FRAGMENTS                 = 0x000000b7,
    CB_PERF_SEL_QUAD_ADDED_5_FRAGMENTS                 = 0x000000b8,
    CB_PERF_SEL_QUAD_ADDED_6_FRAGMENTS                 = 0x000000b9,
    CB_PERF_SEL_QUAD_ADDED_7_FRAGMENTS                 = 0x000000ba,
    CB_PERF_SEL_QUAD_REMOVED_1_FRAGMENT                = 0x000000bb,
    CB_PERF_SEL_QUAD_REMOVED_2_FRAGMENTS               = 0x000000bc,
    CB_PERF_SEL_QUAD_REMOVED_3_FRAGMENTS               = 0x000000bd,
    CB_PERF_SEL_QUAD_REMOVED_4_FRAGMENTS               = 0x000000be,
    CB_PERF_SEL_QUAD_REMOVED_5_FRAGMENTS               = 0x000000bf,
    CB_PERF_SEL_QUAD_REMOVED_6_FRAGMENTS               = 0x000000c0,
    CB_PERF_SEL_QUAD_REMOVED_7_FRAGMENTS               = 0x000000c1,
    CB_PERF_SEL_QUAD_READS_FRAGMENT_0                  = 0x000000c2,
    CB_PERF_SEL_QUAD_READS_FRAGMENT_1                  = 0x000000c3,
    CB_PERF_SEL_QUAD_READS_FRAGMENT_2                  = 0x000000c4,
    CB_PERF_SEL_QUAD_READS_FRAGMENT_3                  = 0x000000c5,
    CB_PERF_SEL_QUAD_READS_FRAGMENT_4                  = 0x000000c6,
    CB_PERF_SEL_QUAD_READS_FRAGMENT_5                  = 0x000000c7,
    CB_PERF_SEL_QUAD_READS_FRAGMENT_6                  = 0x000000c8,
    CB_PERF_SEL_QUAD_READS_FRAGMENT_7                  = 0x000000c9,
    CB_PERF_SEL_QUAD_WRITES_FRAGMENT_0                 = 0x000000ca,
    CB_PERF_SEL_QUAD_WRITES_FRAGMENT_1                 = 0x000000cb,
    CB_PERF_SEL_QUAD_WRITES_FRAGMENT_2                 = 0x000000cc,
    CB_PERF_SEL_QUAD_WRITES_FRAGMENT_3                 = 0x000000cd,
    CB_PERF_SEL_QUAD_WRITES_FRAGMENT_4                 = 0x000000ce,
    CB_PERF_SEL_QUAD_WRITES_FRAGMENT_5                 = 0x000000cf,
    CB_PERF_SEL_QUAD_WRITES_FRAGMENT_6                 = 0x000000d0,
    CB_PERF_SEL_QUAD_WRITES_FRAGMENT_7                 = 0x000000d1,
    CB_PERF_SEL_QUAD_BLEND_OPT_DONT_READ_DST           = 0x000000d2,
    CB_PERF_SEL_QUAD_BLEND_OPT_BLEND_BYPASS            = 0x000000d3,
    CB_PERF_SEL_QUAD_BLEND_OPT_DISCARD_PIXELS          = 0x000000d4,
    CB_PERF_SEL_QUAD_DST_READ_COULD_HAVE_BEEN_OPTIMIZED = 0x000000d5,
    CB_PERF_SEL_QUAD_BLENDING_COULD_HAVE_BEEN_BYPASSED = 0x000000d6,
    CB_PERF_SEL_QUAD_COULD_HAVE_BEEN_DISCARDED         = 0x000000d7,
    CB_PERF_SEL_BLEND_OPT_PIXELS_RESULT_EQ_DEST        = 0x000000d8,
    CB_PERF_SEL_DRAWN_BUSY                             = 0x000000d9,
    CB_PERF_SEL_TILE_TO_CMR_REGION_BUSY                = 0x000000da,
    CB_PERF_SEL_CMR_TO_FCR_REGION_BUSY                 = 0x000000db,
    CB_PERF_SEL_FCR_TO_CCR_REGION_BUSY                 = 0x000000dc,
    CB_PERF_SEL_CCR_TO_CCW_REGION_BUSY                 = 0x000000dd,
    CB_PERF_SEL_FC_PF_SLOW_MODE_QUAD_EMPTY_HALF_DROPPED = 0x000000de,
    CB_PERF_SEL_FC_SEQUENCER_CLEAR                     = 0x000000df,
    CB_PERF_SEL_FC_SEQUENCER_ELIMINATE_FAST_CLEAR      = 0x000000e0,
    CB_PERF_SEL_FC_SEQUENCER_FMASK_DECOMPRESS          = 0x000000e1,
    CB_PERF_SEL_FC_SEQUENCER_FMASK_COMPRESSION_DISABLE = 0x000000e2,
    CB_PERF_SEL_FC_KEYID_RDLAT_FIFO_FULL               = 0x000000e3,
    CB_PERF_SEL_FC_DOC_IS_STALLED                      = 0x000000e4,
    CB_PERF_SEL_FC_DOC_MRTS_NOT_COMBINED               = 0x000000e5,
    CB_PERF_SEL_FC_DOC_MRTS_COMBINED                   = 0x000000e6,
    CB_PERF_SEL_FC_DOC_QTILE_CAM_MISS                  = 0x000000e7,
    CB_PERF_SEL_FC_DOC_QTILE_CAM_HIT                   = 0x000000e8,
    CB_PERF_SEL_FC_DOC_CLINE_CAM_MISS                  = 0x000000e9,
    CB_PERF_SEL_FC_DOC_CLINE_CAM_HIT                   = 0x000000ea,
    CB_PERF_SEL_FC_DOC_QUAD_PTR_FIFO_IS_FULL           = 0x000000eb,
    CB_PERF_SEL_FC_DOC_OVERWROTE_1_SECTOR              = 0x000000ec,
    CB_PERF_SEL_FC_DOC_OVERWROTE_2_SECTORS             = 0x000000ed,
    CB_PERF_SEL_FC_DOC_OVERWROTE_3_SECTORS             = 0x000000ee,
    CB_PERF_SEL_FC_DOC_OVERWROTE_4_SECTORS             = 0x000000ef,
    CB_PERF_SEL_FC_DOC_TOTAL_OVERWRITTEN_SECTORS       = 0x000000f0,
    CB_PERF_SEL_FC_DCC_CACHE_HIT                       = 0x000000f1,
    CB_PERF_SEL_FC_DCC_CACHE_TAG_MISS                  = 0x000000f2,
    CB_PERF_SEL_FC_DCC_CACHE_SECTOR_MISS               = 0x000000f3,
    CB_PERF_SEL_FC_DCC_CACHE_REEVICTION_STALL          = 0x000000f4,
    CB_PERF_SEL_FC_DCC_CACHE_EVICT_NONZERO_INFLIGHT_STALL = 0x000000f5,
    CB_PERF_SEL_FC_DCC_CACHE_REPLACE_PENDING_EVICT_STALL = 0x000000f6,
    CB_PERF_SEL_FC_DCC_CACHE_INFLIGHT_COUNTER_MAXIMUM_STALL = 0x000000f7,
    CB_PERF_SEL_FC_DCC_CACHE_READ_OUTPUT_STALL         = 0x000000f8,
    CB_PERF_SEL_FC_DCC_CACHE_WRITE_OUTPUT_STALL        = 0x000000f9,
    CB_PERF_SEL_FC_DCC_CACHE_ACK_OUTPUT_STALL          = 0x000000fa,
    CB_PERF_SEL_FC_DCC_CACHE_STALL                     = 0x000000fb,
    CB_PERF_SEL_FC_DCC_CACHE_FLUSH                     = 0x000000fc,
    CB_PERF_SEL_CC_DCC_BEYOND_TILE_SPLIT               = 0x00000100,
    CB_PERF_SEL_FC_MC_DCC_WRITE_REQUEST                = 0x00000101,
    CB_PERF_SEL_FC_MC_DCC_WRITE_REQUESTS_IN_FLIGHT     = 0x00000102,
    CB_PERF_SEL_FC_MC_DCC_READ_REQUEST                 = 0x00000103,
    CB_PERF_SEL_FC_MC_DCC_READ_REQUESTS_IN_FLIGHT      = 0x00000104,
    CB_PERF_SEL_CC_DCC_RDREQ_STALL                     = 0x00000105,
    CB_PERF_SEL_CC_DCC_DECOMPRESS_TIDS_IN              = 0x00000106,
    CB_PERF_SEL_CC_DCC_DECOMPRESS_TIDS_OUT             = 0x00000107,
    CB_PERF_SEL_CC_DCC_COMPRESS_TIDS_IN                = 0x00000108,
    CB_PERF_SEL_CC_DCC_COMPRESS_TIDS_OUT               = 0x00000109,
    CB_PERF_SEL_FC_DCC_KEY_VALUE__CLEAR                = 0x0000010a,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__4_BLOCKS__2TO1       = 0x0000010b,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__3BLOCKS_2TO1__1BLOCK_2TO2 = 0x0000010c,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__2BLOCKS_2TO1__1BLOCK_2TO2__1BLOCK_2TO1 = 0x0000010d,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_2TO2__2BLOCKS_2TO1 = 0x0000010e,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__3BLOCKS_2TO1 = 0x0000010f,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__2BLOCKS_2TO1__2BLOCKS_2TO2 = 0x00000110,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__2BLOCKS_2TO2__1BLOCK_2TO1 = 0x00000111,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_2TO2__1BLOCK_2TO1__1BLOCK_2TO2 = 0x00000112,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_2TO1__1BLOCK_2TO2__1BLOCK_2TO1 = 0x00000113,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__2BLOCKS_2TO2__2BLOCKS_2TO1 = 0x00000114,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__2BLOCKS_2TO1__1BLOCK_2TO2 = 0x00000115,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__3BLOCKS_2TO2 = 0x00000116,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_2TO1__2BLOCKS_2TO2 = 0x00000117,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__2BLOCKS_2TO2__1BLOCK_2TO1__1BLOCK_2TO2 = 0x00000118,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__3BLOCKS_2TO2__1BLOCK_2TO1 = 0x00000119,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__2BLOCKS_4TO1         = 0x0000011a,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO1__1BLOCK_4TO2 = 0x0000011b,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO1__1BLOCK_4TO3 = 0x0000011c,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO1__1BLOCK_4TO4 = 0x0000011d,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO2__1BLOCK_4TO1 = 0x0000011e,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__2BLOCKS_4TO2         = 0x0000011f,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO2__1BLOCK_4TO3 = 0x00000120,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO2__1BLOCK_4TO4 = 0x00000121,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO3__1BLOCK_4TO1 = 0x00000122,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO3__1BLOCK_4TO2 = 0x00000123,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__2BLOCKS_4TO3         = 0x00000124,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO3__1BLOCK_4TO4 = 0x00000125,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO4__1BLOCK_4TO1 = 0x00000126,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO4__1BLOCK_4TO2 = 0x00000127,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO4__1BLOCK_4TO3 = 0x00000128,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__2BLOCKS_2TO1__1BLOCK_4TO1 = 0x00000129,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__2BLOCKS_2TO1__1BLOCK_4TO2 = 0x0000012a,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__2BLOCKS_2TO1__1BLOCK_4TO3 = 0x0000012b,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__2BLOCKS_2TO1__1BLOCK_4TO4 = 0x0000012c,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_2TO2__1BLOCK_4TO1 = 0x0000012d,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_2TO2__1BLOCK_4TO2 = 0x0000012e,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_2TO2__1BLOCK_4TO3 = 0x0000012f,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_2TO2__1BLOCK_4TO4 = 0x00000130,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_2TO1__1BLOCK_4TO1 = 0x00000131,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_2TO1__1BLOCK_4TO2 = 0x00000132,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_2TO1__1BLOCK_4TO3 = 0x00000133,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_2TO1__1BLOCK_4TO4 = 0x00000134,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__2BLOCKS_2TO2__1BLOCK_4TO1 = 0x00000135,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__2BLOCKS_2TO2__1BLOCK_4TO2 = 0x00000136,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__2BLOCKS_2TO2__1BLOCK_4TO3 = 0x00000137,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_4TO1__1BLOCK_2TO1 = 0x00000138,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_4TO2__1BLOCK_2TO1 = 0x00000139,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_4TO3__1BLOCK_2TO1 = 0x0000013a,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_4TO4__1BLOCK_2TO1 = 0x0000013b,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_4TO1__1BLOCK_2TO1 = 0x0000013c,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_4TO2__1BLOCK_2TO1 = 0x0000013d,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_4TO3__1BLOCK_2TO1 = 0x0000013e,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_4TO4__1BLOCK_2TO1 = 0x0000013f,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_4TO1__1BLOCK_2TO2 = 0x00000140,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_4TO2__1BLOCK_2TO2 = 0x00000141,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_4TO3__1BLOCK_2TO2 = 0x00000142,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_4TO4__1BLOCK_2TO2 = 0x00000143,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_4TO1__1BLOCK_2TO2 = 0x00000144,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_4TO2__1BLOCK_2TO2 = 0x00000145,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_4TO3__1BLOCK_2TO2 = 0x00000146,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO1__2BLOCKS_2TO1 = 0x00000147,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO2__2BLOCKS_2TO1 = 0x00000148,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO3__2BLOCKS_2TO1 = 0x00000149,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO4__2BLOCKS_2TO1 = 0x0000014a,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO1__2BLOCKS_2TO2 = 0x0000014b,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO2__2BLOCKS_2TO2 = 0x0000014c,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO3__2BLOCKS_2TO2 = 0x0000014d,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO1__1BLOCK_2TO1__1BLOCK_2TO2 = 0x0000014e,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO2__1BLOCK_2TO1__1BLOCK_2TO2 = 0x0000014f,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO3__1BLOCK_2TO1__1BLOCK_2TO2 = 0x00000150,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO4__1BLOCK_2TO1__1BLOCK_2TO2 = 0x00000151,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO1__1BLOCK_2TO2__1BLOCK_2TO1 = 0x00000152,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO2__1BLOCK_2TO2__1BLOCK_2TO1 = 0x00000153,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO3__1BLOCK_2TO2__1BLOCK_2TO1 = 0x00000154,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_4TO4__1BLOCK_2TO2__1BLOCK_2TO1 = 0x00000155,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_6TO1 = 0x00000156,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_6TO2 = 0x00000157,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_6TO3 = 0x00000158,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_6TO4 = 0x00000159,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_6TO5 = 0x0000015a,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__1BLOCK_6TO6 = 0x0000015b,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__INV0    = 0x0000015c,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO1__INV1    = 0x0000015d,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_6TO1 = 0x0000015e,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_6TO2 = 0x0000015f,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_6TO3 = 0x00000160,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_6TO4 = 0x00000161,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__1BLOCK_6TO5 = 0x00000162,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__INV0    = 0x00000163,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_2TO2__INV1    = 0x00000164,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_6TO1__1BLOCK_2TO1 = 0x00000165,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_6TO2__1BLOCK_2TO1 = 0x00000166,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_6TO3__1BLOCK_2TO1 = 0x00000167,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_6TO4__1BLOCK_2TO1 = 0x00000168,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_6TO5__1BLOCK_2TO1 = 0x00000169,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_6TO6__1BLOCK_2TO1 = 0x0000016a,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__INV0__1BLOCK_2TO1    = 0x0000016b,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__INV1__1BLOCK_2TO1    = 0x0000016c,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_6TO1__1BLOCK_2TO2 = 0x0000016d,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_6TO2__1BLOCK_2TO2 = 0x0000016e,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_6TO3__1BLOCK_2TO2 = 0x0000016f,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_6TO4__1BLOCK_2TO2 = 0x00000170,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_6TO5__1BLOCK_2TO2 = 0x00000171,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__INV0__1BLOCK_2TO2    = 0x00000172,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__INV1__1BLOCK_2TO2    = 0x00000173,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_8TO1          = 0x00000174,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_8TO2          = 0x00000175,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_8TO3          = 0x00000176,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_8TO4          = 0x00000177,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_8TO5          = 0x00000178,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_8TO6          = 0x00000179,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__1BLOCK_8TO7          = 0x0000017a,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__UNCOMPRESSED         = 0x0000017b,
    CB_PERF_SEL_CC_DCC_COMPRESS_RATIO_2TO1             = 0x0000017c,
    CB_PERF_SEL_CC_DCC_COMPRESS_RATIO_4TO1             = 0x0000017d,
    CB_PERF_SEL_CC_DCC_COMPRESS_RATIO_4TO2             = 0x0000017e,
    CB_PERF_SEL_CC_DCC_COMPRESS_RATIO_4TO3             = 0x0000017f,
    CB_PERF_SEL_CC_DCC_COMPRESS_RATIO_6TO1             = 0x00000180,
    CB_PERF_SEL_CC_DCC_COMPRESS_RATIO_6TO2             = 0x00000181,
    CB_PERF_SEL_CC_DCC_COMPRESS_RATIO_6TO3             = 0x00000182,
    CB_PERF_SEL_CC_DCC_COMPRESS_RATIO_6TO4             = 0x00000183,
    CB_PERF_SEL_CC_DCC_COMPRESS_RATIO_6TO5             = 0x00000184,
    CB_PERF_SEL_CC_DCC_COMPRESS_RATIO_8TO1             = 0x00000185,
    CB_PERF_SEL_CC_DCC_COMPRESS_RATIO_8TO2             = 0x00000186,
    CB_PERF_SEL_CC_DCC_COMPRESS_RATIO_8TO3             = 0x00000187,
    CB_PERF_SEL_CC_DCC_COMPRESS_RATIO_8TO4             = 0x00000188,
    CB_PERF_SEL_CC_DCC_COMPRESS_RATIO_8TO5             = 0x00000189,
    CB_PERF_SEL_CC_DCC_COMPRESS_RATIO_8TO6             = 0x0000018a,
    CB_PERF_SEL_CC_DCC_COMPRESS_RATIO_8TO7             = 0x0000018b,
    CB_PERF_SEL_RBP_EXPORT_8PIX_LIT_BOTH               = 0x0000018c,
    CB_PERF_SEL_RBP_EXPORT_8PIX_LIT_LEFT               = 0x0000018d,
    CB_PERF_SEL_RBP_EXPORT_8PIX_LIT_RIGHT              = 0x0000018e,
    CB_PERF_SEL_RBP_SPLIT_MICROTILE                    = 0x0000018f,
    CB_PERF_SEL_RBP_SPLIT_AA_SAMPLE_MASK               = 0x00000190,
    CB_PERF_SEL_RBP_SPLIT_PARTIAL_TARGET_MASK          = 0x00000191,
    CB_PERF_SEL_RBP_SPLIT_LINEAR_ADDRESSING            = 0x00000192,
    CB_PERF_SEL_RBP_SPLIT_AA_NO_FMASK_COMPRESS         = 0x00000193,
    CB_PERF_SEL_RBP_INSERT_MISSING_LAST_QUAD           = 0x00000194,
    CB_PERF_SEL_NACK_CM_READ                           = 0x00000195,
    CB_PERF_SEL_NACK_CM_WRITE                          = 0x00000196,
    CB_PERF_SEL_NACK_FC_READ                           = 0x00000197,
    CB_PERF_SEL_NACK_FC_WRITE                          = 0x00000198,
    CB_PERF_SEL_NACK_DC_READ                           = 0x00000199,
    CB_PERF_SEL_NACK_DC_WRITE                          = 0x0000019a,
    CB_PERF_SEL_NACK_CC_READ                           = 0x0000019b,
    CB_PERF_SEL_NACK_CC_WRITE                          = 0x0000019c,
    CB_PERF_SEL_CM_MC_EARLY_WRITE_RETURN               = 0x0000019d,
    CB_PERF_SEL_FC_MC_EARLY_WRITE_RETURN               = 0x0000019e,
    CB_PERF_SEL_DC_MC_EARLY_WRITE_RETURN               = 0x0000019f,
    CB_PERF_SEL_CC_MC_EARLY_WRITE_RETURN               = 0x000001a0,
    CB_PERF_SEL_CM_MC_EARLY_WRITE_REQUESTS_IN_FLIGHT   = 0x000001a1,
    CB_PERF_SEL_FC_MC_EARLY_WRITE_REQUESTS_IN_FLIGHT   = 0x000001a2,
    CB_PERF_SEL_DC_MC_EARLY_WRITE_REQUESTS_IN_FLIGHT   = 0x000001a3,
    CB_PERF_SEL_CC_MC_EARLY_WRITE_REQUESTS_IN_FLIGHT   = 0x000001a4,
    CB_PERF_SEL_CM_MC_WRITE_ACK64B                     = 0x000001a5,
    CB_PERF_SEL_FC_MC_WRITE_ACK64B                     = 0x000001a6,
    CB_PERF_SEL_DC_MC_WRITE_ACK64B                     = 0x000001a7,
    CB_PERF_SEL_CC_MC_WRITE_ACK64B                     = 0x000001a8,
    CB_PERF_SEL_EVENT_BOTTOM_OF_PIPE_TS                = 0x000001a9,
    CB_PERF_SEL_EVENT_FLUSH_AND_INV_DB_DATA_TS         = 0x000001aa,
    CB_PERF_SEL_EVENT_FLUSH_AND_INV_CB_PIXEL_DATA      = 0x000001ab,
    CB_PERF_SEL_DB_CB_TILE_TILENOTEVENT                = 0x000001ac,
    CB_PERF_SEL_LQUAD_FORMAT_IS_EXPORT_32BPP_8PIX      = 0x000001ad,
    CB_PERF_SEL_LQUAD_FORMAT_IS_EXPORT_16_16_UNSIGNED_8PIX = 0x000001ae,
    CB_PERF_SEL_LQUAD_FORMAT_IS_EXPORT_16_16_SIGNED_8PIX = 0x000001af,
    CB_PERF_SEL_LQUAD_FORMAT_IS_EXPORT_16_16_FLOAT_8PIX = 0x000001b0,
    CB_PERF_SEL_MERGE_PIXELS_WITH_BLEND_ENABLED        = 0x000001b1,
    CB_PERF_SEL_DB_CB_CONTEXT_DONE                     = 0x000001b2,
    CB_PERF_SEL_DB_CB_EOP_DONE                         = 0x000001b3,
    CB_PERF_SEL_CC_MC_WRITE_REQUEST_PARTIAL            = 0x000001b4,
    CB_PERF_SEL_CC_BB_BLEND_PIXEL_VLD                  = 0x000001b5,
    CB_PERF_SEL_FC_DCC_CACHE_SECTORS_FLUSHED__GFX10    = 0x000000fd,
    CB_PERF_SEL_FC_DCC_CACHE_DIRTY_SECTORS_FLUSHED__GFX10 = 0x000000fe,
    CB_PERF_SEL_FC_DCC_CACHE_TAGS_FLUSHED__GFX10       = 0x000000ff,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__CONST_CLEAR_REG__GFX10 = 0x000001b6,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__CONST_CLEAR_SINGLE__GFX10 = 0x000001b7,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__CONST_CLEAR_AC00__GFX10 = 0x000001b8,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__CONST_CLEAR_AC01__GFX10 = 0x000001b9,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__CONST_CLEAR_AC10__GFX10 = 0x000001ba,
    CB_PERF_SEL_CC_DCC_KEY_VALUE__CONST_CLEAR_AC11__GFX10 = 0x000001bb,
    CB_PERF_SEL_TQ_STUTTER_STALL__GFX10                = 0x000001bc,
    CB_PERF_SEL_FC_TILE_STUTTER_STALL__GFX10           = 0x000001bd,
    CB_PERF_SEL_FC_QUAD_STUTTER_STALL__GFX10           = 0x000001be,
    CB_PERF_SEL_FC_KEYID_STUTTER_STALL__GFX10          = 0x000001bf,
    CB_PERF_SEL_CC_EVENFIFO_STUTTER_STALL__GFX10       = 0x000001c0,
    CB_PERF_SEL_CC_ODDFIFO_STUTTER_STALL__GFX10        = 0x000001c1,
    CB_PERF_SEL_CC_CACHE_256BS_SAVED_DUE_TO_QSB__GFX10 = 0x000001c2,
    CB_PERF_SEL_FC_CACHE_FMASK_NO_FETCH__GFX10         = 0x000001c3,
    CB_PERF_SEL_CC_CACHE_SECTOR_HIT__GFX10             = 0x000001c4,
    CB_PERF_SEL_FC_DCC_CACHE_TAGS_FLUSHED__RV1X        = 0x000000fd,
    CB_PERF_SEL_FC_DCC_CACHE_SECTORS_FLUSHED__RV1X     = 0x000000fe,
    CB_PERF_SEL_FC_DCC_CACHE_DIRTY_SECTORS_FLUSHED__RV1X = 0x000000ff,
    CB_PERF_SEL_FC_DCC_CACHE_TAGS_FLUSHED__RV2X        = 0x000000fd,
    CB_PERF_SEL_FC_DCC_CACHE_SECTORS_FLUSHED__RV2X     = 0x000000fe,
    CB_PERF_SEL_FC_DCC_CACHE_DIRTY_SECTORS_FLUSHED__RV2X = 0x000000ff,
    CB_PERF_SEL_FC_DCC_CACHE_TAGS_FLUSHED__VEGA        = 0x000000fd,
    CB_PERF_SEL_FC_DCC_CACHE_SECTORS_FLUSHED__VEGA     = 0x000000fe,
    CB_PERF_SEL_FC_DCC_CACHE_DIRTY_SECTORS_FLUSHED__VEGA = 0x000000ff,
} CBPerfSel;

constexpr unsigned int MaxCBPerfSelVega                = CB_PERF_SEL_CC_BB_BLEND_PIXEL_VLD;
constexpr unsigned int MaxCBPerfSelRv2x                = CB_PERF_SEL_CC_BB_BLEND_PIXEL_VLD;
constexpr unsigned int MaxCBPerfSelRv1x                = CB_PERF_SEL_CC_BB_BLEND_PIXEL_VLD;
constexpr unsigned int MaxCBPerfSelGfx10               = CB_PERF_SEL_CC_CACHE_SECTOR_HIT__GFX10;

typedef enum CHA_PERF_SEL {
    CHA_PERF_SEL_BUSY                                  = 0x00000000,
    CHA_PERF_SEL_STALL_CHC0                            = 0x00000001,
    CHA_PERF_SEL_STALL_CHC1                            = 0x00000002,
    CHA_PERF_SEL_STALL_CHC2                            = 0x00000003,
    CHA_PERF_SEL_STALL_CHC3                            = 0x00000004,
    CHA_PERF_SEL_STALL_CHC4                            = 0x00000005,
    CHA_PERF_SEL_STALL_CHC5                            = 0x00000006,
    CHA_PERF_SEL_REQUEST_CHC0                          = 0x00000007,
    CHA_PERF_SEL_REQUEST_CHC1                          = 0x00000008,
    CHA_PERF_SEL_REQUEST_CHC2                          = 0x00000009,
    CHA_PERF_SEL_REQUEST_CHC3                          = 0x0000000a,
    CHA_PERF_SEL_REQUEST_CHC4                          = 0x0000000b,
    CHA_PERF_SEL_MEM_32B_WDS_CHC0                      = 0x0000000c,
    CHA_PERF_SEL_MEM_32B_WDS_CHC1                      = 0x0000000d,
    CHA_PERF_SEL_MEM_32B_WDS_CHC2                      = 0x0000000e,
    CHA_PERF_SEL_MEM_32B_WDS_CHC3                      = 0x0000000f,
    CHA_PERF_SEL_MEM_32B_WDS_CHC4                      = 0x00000010,
    CHA_PERF_SEL_IO_32B_WDS_CHC0                       = 0x00000011,
    CHA_PERF_SEL_IO_32B_WDS_CHC1                       = 0x00000012,
    CHA_PERF_SEL_IO_32B_WDS_CHC2                       = 0x00000013,
    CHA_PERF_SEL_IO_32B_WDS_CHC3                       = 0x00000014,
    CHA_PERF_SEL_IO_32B_WDS_CHC4                       = 0x00000015,
    CHA_PERF_SEL_MEM_BURST_COUNT_CHC0                  = 0x00000016,
    CHA_PERF_SEL_MEM_BURST_COUNT_CHC1                  = 0x00000017,
    CHA_PERF_SEL_MEM_BURST_COUNT_CHC2                  = 0x00000018,
    CHA_PERF_SEL_MEM_BURST_COUNT_CHC3                  = 0x00000019,
    CHA_PERF_SEL_MEM_BURST_COUNT_CHC4                  = 0x0000001a,
    CHA_PERF_SEL_IO_BURST_COUNT_CHC0                   = 0x0000001b,
    CHA_PERF_SEL_IO_BURST_COUNT_CHC1                   = 0x0000001c,
    CHA_PERF_SEL_IO_BURST_COUNT_CHC2                   = 0x0000001d,
    CHA_PERF_SEL_IO_BURST_COUNT_CHC3                   = 0x0000001e,
    CHA_PERF_SEL_IO_BURST_COUNT_CHC4                   = 0x0000001f,
    CHA_PERF_SEL_ARB_REQUESTS                          = 0x00000020,
    CHA_PERF_SEL_REQ_ARB_LEVEL_CHC0__NV10              = 0x00000021,
    CHA_PERF_SEL_REQ_ARB_LEVEL_CHC1__NV10              = 0x00000022,
    CHA_PERF_SEL_REQ_ARB_LEVEL_CHC2__NV10              = 0x00000023,
    CHA_PERF_SEL_REQ_ARB_LEVEL_CHC3__NV10              = 0x00000024,
    CHA_PERF_SEL_REQ_ARB_LEVEL_CHC4__NV10              = 0x00000025,
    CHA_PERF_SEL_REQ_INFLIGHT_LEVEL__NV10              = 0x00000026,
    CHA_PERF_SEL_STALL_RET_CONFLICT_CHC0__NV10         = 0x00000027,
    CHA_PERF_SEL_STALL_RET_CONFLICT_CHC1__NV10         = 0x00000028,
    CHA_PERF_SEL_STALL_RET_CONFLICT_CHC2__NV10         = 0x00000029,
    CHA_PERF_SEL_STALL_RET_CONFLICT_CHC3__NV10         = 0x0000002a,
    CHA_PERF_SEL_STALL_RET_CONFLICT_CHC4__NV10         = 0x0000002b,
    CHA_PERF_SEL_CYCLE__NV10                           = 0x0000002c,
} CHA_PERF_SEL;

constexpr unsigned int MaxChaPerfSelNv10               = CHA_PERF_SEL_CYCLE__NV10;

typedef enum CHCG_PERF_SEL {
    CHCG_PERF_SEL_CYCLE                                = 0x00000000,
    CHCG_PERF_SEL_BUSY                                 = 0x00000001,
    CHCG_PERF_SEL_STARVE__GFX101PLUS                   = 0x00000002,
    CHCG_PERF_SEL_ARB_RET_LEVEL__GFX101PLUS            = 0x00000003,
    CHCG_PERF_SEL_GL2_REQ_READ_LATENCY__GFX101PLUS     = 0x00000004,
    CHCG_PERF_SEL_GL2_REQ_WRITE_LATENCY__GFX101PLUS    = 0x00000005,
    CHCG_PERF_SEL_REQ__GFX101PLUS                      = 0x00000006,
    CHCG_PERF_SEL_REQ_ATOMIC_WITH_RET__GFX101PLUS      = 0x00000007,
    CHCG_PERF_SEL_REQ_ATOMIC_WITHOUT_RET__GFX101PLUS   = 0x00000008,
    CHCG_PERF_SEL_REQ_NOP_ACK__GFX101PLUS              = 0x00000009,
    CHCG_PERF_SEL_REQ_NOP_RTN0__GFX101PLUS             = 0x0000000a,
    CHCG_PERF_SEL_REQ_READ__GFX101PLUS                 = 0x0000000b,
    CHCG_PERF_SEL_REQ_READ_128B__GFX101PLUS            = 0x0000000c,
    CHCG_PERF_SEL_REQ_READ_32B__GFX101PLUS             = 0x0000000d,
    CHCG_PERF_SEL_REQ_READ_64B__GFX101PLUS             = 0x0000000e,
    CHCG_PERF_SEL_REQ_WRITE__GFX101PLUS                = 0x0000000f,
    CHCG_PERF_SEL_REQ_WRITE_32B__GFX101PLUS            = 0x00000010,
    CHCG_PERF_SEL_REQ_WRITE_64B__GFX101PLUS            = 0x00000011,
    CHCG_PERF_SEL_STALL_GUS_GL1__GFX101PLUS            = 0x00000012,
    CHCG_PERF_SEL_STALL_BUFFER_FULL__GFX101PLUS        = 0x00000013,
    CHCG_PERF_SEL_REQ_CLIENT0__GFX101PLUS              = 0x00000014,
    CHCG_PERF_SEL_REQ_CLIENT1__GFX101PLUS              = 0x00000015,
    CHCG_PERF_SEL_REQ_CLIENT2__GFX101PLUS              = 0x00000016,
    CHCG_PERF_SEL_REQ_CLIENT3__GFX101PLUS              = 0x00000017,
    CHCG_PERF_SEL_REQ_CLIENT4__GFX101PLUS              = 0x00000018,
    CHCG_PERF_SEL_REQ_CLIENT5__GFX101PLUS              = 0x00000019,
    CHCG_PERF_SEL_REQ_CLIENT6__GFX101PLUS              = 0x0000001a,
    CHCG_PERF_SEL_REQ_CLIENT7__GFX101PLUS              = 0x0000001b,
    CHCG_PERF_SEL_REQ_CLIENT8__GFX101PLUS              = 0x0000001c,
    CHCG_PERF_SEL_REQ_CLIENT9__GFX101PLUS              = 0x0000001d,
    CHCG_PERF_SEL_REQ_CLIENT10__GFX101PLUS             = 0x0000001e,
    CHCG_PERF_SEL_REQ_CLIENT11__GFX101PLUS             = 0x0000001f,
    CHCG_PERF_SEL_REQ_CLIENT12__GFX101PLUS             = 0x00000020,
    CHCG_PERF_SEL_REQ_CLIENT13__GFX101PLUS             = 0x00000021,
    CHCG_PERF_SEL_REQ_CLIENT14__GFX101PLUS             = 0x00000022,
} CHCG_PERF_SEL;

constexpr unsigned int MaxChcgPerfSelGfx101            = CHCG_PERF_SEL_REQ_CLIENT14__GFX101PLUS;

typedef enum CHC_PERF_SEL {
    CHC_PERF_SEL_CYCLE                                 = 0x00000000,
    CHC_PERF_SEL_BUSY                                  = 0x00000001,
    CHC_PERF_SEL_STARVE__GFX101PLUS                    = 0x00000002,
    CHC_PERF_SEL_ARB_RET_LEVEL__GFX101PLUS             = 0x00000003,
    CHC_PERF_SEL_GL2_REQ_READ_LATENCY__GFX101PLUS      = 0x00000004,
    CHC_PERF_SEL_GL2_REQ_WRITE_LATENCY__GFX101PLUS     = 0x00000005,
    CHC_PERF_SEL_REQ__GFX101PLUS                       = 0x00000006,
    CHC_PERF_SEL_REQ_ATOMIC_WITH_RET__GFX101PLUS       = 0x00000007,
    CHC_PERF_SEL_REQ_ATOMIC_WITHOUT_RET__GFX101PLUS    = 0x00000008,
    CHC_PERF_SEL_REQ_NOP_ACK__GFX101PLUS               = 0x00000009,
    CHC_PERF_SEL_REQ_NOP_RTN0__GFX101PLUS              = 0x0000000a,
    CHC_PERF_SEL_REQ_READ__GFX101PLUS                  = 0x0000000b,
    CHC_PERF_SEL_REQ_READ_128B__GFX101PLUS             = 0x0000000c,
    CHC_PERF_SEL_REQ_READ_32B__GFX101PLUS              = 0x0000000d,
    CHC_PERF_SEL_REQ_READ_64B__GFX101PLUS              = 0x0000000e,
    CHC_PERF_SEL_REQ_WRITE__GFX101PLUS                 = 0x0000000f,
    CHC_PERF_SEL_REQ_WRITE_32B__GFX101PLUS             = 0x00000010,
    CHC_PERF_SEL_REQ_WRITE_64B__GFX101PLUS             = 0x00000011,
    CHC_PERF_SEL_STALL_GL2_GL1__GFX101PLUS             = 0x00000012,
    CHC_PERF_SEL_STALL_BUFFER_FULL__GFX101PLUS         = 0x00000013,
    CHC_PERF_SEL_REQ_CLIENT0__GFX101PLUS               = 0x00000014,
    CHC_PERF_SEL_REQ_CLIENT1__GFX101PLUS               = 0x00000015,
    CHC_PERF_SEL_REQ_CLIENT2__GFX101PLUS               = 0x00000016,
    CHC_PERF_SEL_REQ_CLIENT3__GFX101PLUS               = 0x00000017,
    CHC_PERF_SEL_REQ_CLIENT4__GFX101PLUS               = 0x00000018,
    CHC_PERF_SEL_REQ_CLIENT5__GFX101PLUS               = 0x00000019,
    CHC_PERF_SEL_REQ_CLIENT6__GFX101PLUS               = 0x0000001a,
    CHC_PERF_SEL_REQ_CLIENT7__GFX101PLUS               = 0x0000001b,
    CHC_PERF_SEL_REQ_CLIENT8__GFX101PLUS               = 0x0000001c,
    CHC_PERF_SEL_REQ_CLIENT9__GFX101PLUS               = 0x0000001d,
    CHC_PERF_SEL_REQ_CLIENT10__GFX101PLUS              = 0x0000001e,
    CHC_PERF_SEL_REQ_CLIENT11__GFX101PLUS              = 0x0000001f,
    CHC_PERF_SEL_REQ_CLIENT12__GFX101PLUS              = 0x00000020,
    CHC_PERF_SEL_REQ_CLIENT13__GFX101PLUS              = 0x00000021,
    CHC_PERF_SEL_REQ_CLIENT14__GFX101PLUS              = 0x00000022,
} CHC_PERF_SEL;

constexpr unsigned int MaxChcPerfSelGfx101             = CHC_PERF_SEL_REQ_CLIENT14__GFX101PLUS;

typedef enum CLKGATE_BASE_MODE {
    MULT_8                                             = 0x00000000,
    MULT_16                                            = 0x00000001,
} CLKGATE_BASE_MODE;

typedef enum CLKGATE_SM_MODE {
    ON_SEQ                                             = 0x00000000,
    OFF_SEQ                                            = 0x00000001,
    PROG_SEQ                                           = 0x00000002,
    READ_SEQ                                           = 0x00000003,
    SM_MODE_RESERVED                                   = 0x00000004,
} CLKGATE_SM_MODE;

typedef enum CmaskAddr {
    CMASK_ADDR_TILED                                   = 0x00000000,
    CMASK_ADDR_LINEAR                                  = 0x00000001,
    CMASK_ADDR_COMPATIBLE                              = 0x00000002,
} CmaskAddr;

typedef enum CmaskCode {
    CMASK_CLR00_F0                                     = 0x00000000,
    CMASK_CLR00_F1                                     = 0x00000001,
    CMASK_CLR00_F2                                     = 0x00000002,
    CMASK_CLR00_FX                                     = 0x00000003,
    CMASK_CLR01_F0                                     = 0x00000004,
    CMASK_CLR01_F1                                     = 0x00000005,
    CMASK_CLR01_F2                                     = 0x00000006,
    CMASK_CLR01_FX                                     = 0x00000007,
    CMASK_CLR10_F0                                     = 0x00000008,
    CMASK_CLR10_F1                                     = 0x00000009,
    CMASK_CLR10_F2                                     = 0x0000000a,
    CMASK_CLR10_FX                                     = 0x0000000b,
    CMASK_CLR11_F0                                     = 0x0000000c,
    CMASK_CLR11_F1                                     = 0x0000000d,
    CMASK_CLR11_F2                                     = 0x0000000e,
    CMASK_CLR11_FX                                     = 0x0000000f,
} CmaskCode;

typedef enum CmaskMode {
    CMASK_CLEAR_NONE                                   = 0x00000000,
    CMASK_CLEAR_ONE                                    = 0x00000001,
    CMASK_CLEAR_ALL                                    = 0x00000002,
    CMASK_ANY_EXPANDED                                 = 0x00000003,
    CMASK_ALPHA0_FRAG1                                 = 0x00000004,
    CMASK_ALPHA0_FRAG2                                 = 0x00000005,
    CMASK_ALPHA0_FRAG4                                 = 0x00000006,
    CMASK_ALPHA0_FRAGS                                 = 0x00000007,
    CMASK_ALPHA1_FRAG1                                 = 0x00000008,
    CMASK_ALPHA1_FRAG2                                 = 0x00000009,
    CMASK_ALPHA1_FRAG4                                 = 0x0000000a,
    CMASK_ALPHA1_FRAGS                                 = 0x0000000b,
    CMASK_ALPHAX_FRAG1                                 = 0x0000000c,
    CMASK_ALPHAX_FRAG2                                 = 0x0000000d,
    CMASK_ALPHAX_FRAG4                                 = 0x0000000e,
    CMASK_ALPHAX_FRAGS                                 = 0x0000000f,
} CmaskMode;

typedef enum ColorArray {
    ARRAY_2D_ALT_COLOR                                 = 0x00000000,
    ARRAY_2D_COLOR                                     = 0x00000001,
    ARRAY_3D_SLICE_COLOR                               = 0x00000003,
} ColorArray;

typedef enum ColorFormat {
    COLOR_INVALID                                      = 0x00000000,
    COLOR_8                                            = 0x00000001,
    COLOR_16                                           = 0x00000002,
    COLOR_8_8                                          = 0x00000003,
    COLOR_32                                           = 0x00000004,
    COLOR_16_16                                        = 0x00000005,
    COLOR_10_11_11                                     = 0x00000006,
    COLOR_11_11_10                                     = 0x00000007,
    COLOR_10_10_10_2                                   = 0x00000008,
    COLOR_2_10_10_10                                   = 0x00000009,
    COLOR_8_8_8_8                                      = 0x0000000a,
    COLOR_32_32                                        = 0x0000000b,
    COLOR_16_16_16_16                                  = 0x0000000c,
    COLOR_RESERVED_13                                  = 0x0000000d,
    COLOR_32_32_32_32                                  = 0x0000000e,
    COLOR_RESERVED_15                                  = 0x0000000f,
    COLOR_5_6_5                                        = 0x00000010,
    COLOR_1_5_5_5                                      = 0x00000011,
    COLOR_5_5_5_1                                      = 0x00000012,
    COLOR_4_4_4_4                                      = 0x00000013,
    COLOR_8_24                                         = 0x00000014,
    COLOR_24_8                                         = 0x00000015,
    COLOR_X24_8_32_FLOAT                               = 0x00000016,
    COLOR_RESERVED_23                                  = 0x00000017,
    COLOR_RESERVED_25                                  = 0x00000019,
    COLOR_RESERVED_26                                  = 0x0000001a,
    COLOR_RESERVED_27                                  = 0x0000001b,
    COLOR_RESERVED_28                                  = 0x0000001c,
    COLOR_RESERVED_29                                  = 0x0000001d,
    COLOR_2_10_10_10_6E4                               = 0x0000001f,
    COLOR_RESERVED_24__GFX09                           = 0x00000018,
    COLOR_RESERVED_30__GFX09                           = 0x0000001e,
    COLOR_RESERVED_24__GFX101                          = 0x00000018,
    COLOR_RESERVED_30__GFX101                          = 0x0000001e,
} ColorFormat;

typedef enum ColorTransform {
    DCC_CT_AUTO                                        = 0x00000000,
    DCC_CT_NONE                                        = 0x00000001,
    ABGR_TO_A_BG_G_RB                                  = 0x00000002,
    BGRA_TO_BG_G_RB_A                                  = 0x00000003,
} ColorTransform;

typedef enum COL_MAN_DEGAMMA_MODE {
    DEGAMMA_MODE_BYPASS                                = 0x00000000,
    DEGAMMA_MODE_A                                     = 0x00000001,
    DEGAMMA_MODE_B                                     = 0x00000002,
} COL_MAN_DEGAMMA_MODE;

typedef enum COL_MAN_DENORM_CLAMP_CONTROL {
    DENORM_CLAMP_MODE_UNITY                            = 0x00000000,
    DENORM_CLAMP_MODE_8                                = 0x00000001,
    DENORM_CLAMP_MODE_10                               = 0x00000002,
    DENORM_CLAMP_MODE_12                               = 0x00000003,
} COL_MAN_DENORM_CLAMP_CONTROL;

typedef enum COL_MAN_DISABLE_MULTIPLE_UPDATE {
    COL_MAN_MULTIPLE_UPDATE                            = 0x00000000,
    COL_MAN_MULTIPLE_UPDAT_EDISABLE                    = 0x00000001,
} COL_MAN_DISABLE_MULTIPLE_UPDATE;

typedef enum COL_MAN_GAMUT_REMAP_MODE {
    GAMUT_REMAP_MODE_BYPASS                            = 0x00000000,
    GAMUT_REMAP_MODE_1                                 = 0x00000001,
    GAMUT_REMAP_MODE_2                                 = 0x00000002,
    GAMUT_REMAP_MODE_3                                 = 0x00000003,
} COL_MAN_GAMUT_REMAP_MODE;

typedef enum COL_MAN_GLOBAL_PASSTHROUGH_ENABLE {
    CM_GLOBAL_PASSTHROUGH_DISBALE                      = 0x00000000,
    CM_GLOBAL_PASSTHROUGH_ENABLE                       = 0x00000001,
} COL_MAN_GLOBAL_PASSTHROUGH_ENABLE;

typedef enum COL_MAN_INPUTCSC_CONVERT {
    INPUTCSC_ROUND                                     = 0x00000000,
    INPUTCSC_TRUNCATE                                  = 0x00000001,
} COL_MAN_INPUTCSC_CONVERT;

typedef enum COL_MAN_INPUTCSC_MODE {
    INPUTCSC_MODE_BYPASS                               = 0x00000000,
    INPUTCSC_MODE_A                                    = 0x00000001,
    INPUTCSC_MODE_B                                    = 0x00000002,
    INPUTCSC_MODE_UNITY                                = 0x00000003,
} COL_MAN_INPUTCSC_MODE;

typedef enum COL_MAN_INPUTCSC_TYPE {
    INPUTCSC_TYPE_12_0                                 = 0x00000000,
    INPUTCSC_TYPE_10_2                                 = 0x00000001,
    INPUTCSC_TYPE_8_4                                  = 0x00000002,
} COL_MAN_INPUTCSC_TYPE;

typedef enum COL_MAN_INPUT_GAMMA_MODE {
    INGAMMA_MODE_BYPASS                                = 0x00000000,
    INGAMMA_MODE_FIX                                   = 0x00000001,
    INGAMMA_MODE_FLOAT                                 = 0x00000002,
} COL_MAN_INPUT_GAMMA_MODE;

typedef enum COL_MAN_OUTPUT_CSC_MODE {
    COL_MAN_OUTPUT_CSC_BYPASS                          = 0x00000000,
    COL_MAN_OUTPUT_CSC_RGB                             = 0x00000001,
    COL_MAN_OUTPUT_CSC_YCrCb601                        = 0x00000002,
    COL_MAN_OUTPUT_CSC_YCrCb709                        = 0x00000003,
    COL_MAN_OUTPUT_CSC_A                               = 0x00000004,
    COL_MAN_OUTPUT_CSC_B                               = 0x00000005,
    COL_MAN_OUTPUT_CSC_UNITY                           = 0x00000006,
} COL_MAN_OUTPUT_CSC_MODE;

typedef enum COL_MAN_PRESCALE_MODE {
    PRESCALE_MODE_BYPASS                               = 0x00000000,
    PRESCALE_MODE_PROGRAM                              = 0x00000001,
    PRESCALE_MODE_UNITY                                = 0x00000002,
} COL_MAN_PRESCALE_MODE;

typedef enum COL_MAN_REGAMMA_MODE_CONTROL {
    COL_MAN_REGAMMA_MODE_BYPASS                        = 0x00000000,
    COL_MAN_REGAMMA_MODE_ROM_A                         = 0x00000001,
    COL_MAN_REGAMMA_MODE_ROM_B                         = 0x00000002,
    COL_MAN_REGAMMA_MODE_A                             = 0x00000003,
    COL_MAN_REGAMMA_MODE_B                             = 0x00000004,
} COL_MAN_REGAMMA_MODE_CONTROL;

typedef enum COL_MAN_UPDATE_LOCK {
    COL_MAN_UPDATE_UNLOCKED                            = 0x00000000,
    COL_MAN_UPDATE_LOCKED                              = 0x00000001,
} COL_MAN_UPDATE_LOCK;

typedef enum CombFunc {
    COMB_DST_PLUS_SRC                                  = 0x00000000,
    COMB_SRC_MINUS_DST                                 = 0x00000001,
    COMB_MIN_DST_SRC                                   = 0x00000002,
    COMB_MAX_DST_SRC                                   = 0x00000003,
    COMB_DST_MINUS_SRC                                 = 0x00000004,
} CombFunc;

typedef enum CompareFrag {
    FRAG_NEVER                                         = 0x00000000,
    FRAG_LESS                                          = 0x00000001,
    FRAG_EQUAL                                         = 0x00000002,
    FRAG_LEQUAL                                        = 0x00000003,
    FRAG_GREATER                                       = 0x00000004,
    FRAG_NOTEQUAL                                      = 0x00000005,
    FRAG_GEQUAL                                        = 0x00000006,
    FRAG_ALWAYS                                        = 0x00000007,
} CompareFrag;

typedef enum CompareRef {
    REF_NEVER                                          = 0x00000000,
    REF_LESS                                           = 0x00000001,
    REF_EQUAL                                          = 0x00000002,
    REF_LEQUAL                                         = 0x00000003,
    REF_GREATER                                        = 0x00000004,
    REF_NOTEQUAL                                       = 0x00000005,
    REF_GEQUAL                                         = 0x00000006,
    REF_ALWAYS                                         = 0x00000007,
} CompareRef;

typedef enum ConservativeZExport {
    EXPORT_ANY_Z                                       = 0x00000000,
    EXPORT_LESS_THAN_Z                                 = 0x00000001,
    EXPORT_GREATER_THAN_Z                              = 0x00000002,
    EXPORT_RESERVED                                    = 0x00000003,
} ConservativeZExport;

typedef enum CovToShaderSel {
    INPUT_COVERAGE                                     = 0x00000000,
    INPUT_INNER_COVERAGE                               = 0x00000001,
    INPUT_DEPTH_COVERAGE                               = 0x00000002,
    RAW                                                = 0x00000003,
} CovToShaderSel;

typedef enum CPC_LATENCY_STATS_SEL {
    CPC_LATENCY_STATS_SEL_XACK_MAX                     = 0x00000000,
    CPC_LATENCY_STATS_SEL_XACK_MIN                     = 0x00000001,
    CPC_LATENCY_STATS_SEL_XACK_LAST                    = 0x00000002,
    CPC_LATENCY_STATS_SEL_XNACK_MAX                    = 0x00000003,
    CPC_LATENCY_STATS_SEL_XNACK_MIN                    = 0x00000004,
    CPC_LATENCY_STATS_SEL_XNACK_LAST                   = 0x00000005,
    CPC_LATENCY_STATS_SEL_INVAL_MAX__GFX10             = 0x00000006,
    CPC_LATENCY_STATS_SEL_INVAL_MIN__GFX10             = 0x00000007,
    CPC_LATENCY_STATS_SEL_INVAL_LAST__GFX10            = 0x00000008,
} CPC_LATENCY_STATS_SEL;

typedef enum CPC_PERFCOUNT_SEL {
    CPC_PERF_SEL_ALWAYS_COUNT                          = 0x00000000,
    CPC_PERF_SEL_RCIU_STALL_WAIT_ON_FREE               = 0x00000001,
    CPC_PERF_SEL_RCIU_STALL_PRIV_VIOLATION             = 0x00000002,
    CPC_PERF_SEL_MIU_STALL_ON_RDREQ_FREE               = 0x00000003,
    CPC_PERF_SEL_MIU_STALL_ON_WRREQ_FREE               = 0x00000004,
    CPC_PERF_SEL_TCIU_STALL_WAIT_ON_FREE               = 0x00000005,
    CPC_PERF_SEL_ME1_STALL_WAIT_ON_RCIU_READY          = 0x00000006,
    CPC_PERF_SEL_ME1_STALL_WAIT_ON_RCIU_READY_PERF     = 0x00000007,
    CPC_PERF_SEL_ME1_STALL_WAIT_ON_RCIU_READ           = 0x00000008,
    CPC_PERF_SEL_ME1_STALL_ON_DATA_FROM_ROQ            = 0x0000000b,
    CPC_PERF_SEL_ME1_STALL_ON_DATA_FROM_ROQ_PERF       = 0x0000000c,
    CPC_PERF_SEL_ME1_BUSY_FOR_PACKET_DECODE            = 0x0000000d,
    CPC_PERF_SEL_ME2_STALL_WAIT_ON_RCIU_READY          = 0x0000000e,
    CPC_PERF_SEL_ME2_STALL_WAIT_ON_RCIU_READY_PERF     = 0x0000000f,
    CPC_PERF_SEL_ME2_STALL_WAIT_ON_RCIU_READ           = 0x00000010,
    CPC_PERF_SEL_ME2_STALL_ON_DATA_FROM_ROQ            = 0x00000013,
    CPC_PERF_SEL_ME2_STALL_ON_DATA_FROM_ROQ_PERF       = 0x00000014,
    CPC_PERF_SEL_ME2_BUSY_FOR_PACKET_DECODE            = 0x00000015,
    CPC_PERF_SEL_UTCL2IU_STALL_WAIT_ON_FREE            = 0x00000016,
    CPC_PERF_SEL_UTCL2IU_STALL_WAIT_ON_TAGS            = 0x00000017,
    CPC_PERF_SEL_UTCL1_STALL_ON_TRANSLATION            = 0x00000018,
    CPC_PERF_SEL_CPC_STAT_BUSY                         = 0x00000019,
    CPC_PERF_SEL_CPC_STAT_IDLE                         = 0x0000001a,
    CPC_PERF_SEL_CPC_STAT_STALL                        = 0x0000001b,
    CPC_PERF_SEL_CPC_TCIU_BUSY                         = 0x0000001c,
    CPC_PERF_SEL_CPC_TCIU_IDLE                         = 0x0000001d,
    CPC_PERF_SEL_CPC_UTCL2IU_BUSY                      = 0x0000001e,
    CPC_PERF_SEL_CPC_UTCL2IU_IDLE                      = 0x0000001f,
    CPC_PERF_SEL_CPC_UTCL2IU_STALL                     = 0x00000020,
    CPC_PERF_SEL_ME1_DC0_SPI_BUSY                      = 0x00000021,
    CPC_PERF_SEL_ME2_DC1_SPI_BUSY                      = 0x00000022,
    CPC_PERF_SEL_ME1_STALL_WAIT_ON_MIU_READ__GFX09     = 0x00000009,
    CPC_PERF_SEL_ME1_STALL_WAIT_ON_MIU_WRITE__GFX09    = 0x0000000a,
    CPC_PERF_SEL_ME2_STALL_WAIT_ON_MIU_READ__GFX09     = 0x00000011,
    CPC_PERF_SEL_ME2_STALL_WAIT_ON_MIU_WRITE__GFX09    = 0x00000012,
    CPC_PERF_SEL_ME1_STALL_WAIT_ON_GUS_READ__GFX10     = 0x00000009,
    CPC_PERF_SEL_ME1_STALL_WAIT_ON_GUS_WRITE__GFX10    = 0x0000000a,
    CPC_PERF_SEL_ME2_STALL_WAIT_ON_GUS_READ__GFX10     = 0x00000011,
    CPC_PERF_SEL_ME2_STALL_WAIT_ON_GUS_WRITE__GFX10    = 0x00000012,
    CPC_PERF_SEL_CPC_GCRIU_BUSY__GFX10                 = 0x00000023,
    CPC_PERF_SEL_CPC_GCRIU_IDLE__GFX10                 = 0x00000024,
    CPC_PERF_SEL_CPC_GCRIU_STALL__GFX10                = 0x00000025,
    CPC_PERF_SEL_GCRIU_STALL_WAIT_ON_FREE__GFX10       = 0x00000026,
    CPC_PERF_SEL_ME1_STALL_WAIT_ON_TCIU_READ__GFX10    = 0x00000027,
    CPC_PERF_SEL_ME2_STALL_WAIT_ON_TCIU_READ__GFX10    = 0x00000028,
    CPC_PERF_SEL_CPC_UTCL2IU_XACK__GFX10               = 0x00000029,
    CPC_PERF_SEL_CPC_UTCL2IU_XNACK__GFX10              = 0x0000002a,
    CPC_PERF_SEL_MEC_INSTR_CACHE_HIT__GFX10            = 0x0000002b,
    CPC_PERF_SEL_MEC_INSTR_CACHE_MISS__GFX10           = 0x0000002c,
    CPC_PERF_SEL_MES_THREAD0__GFX10                    = 0x0000002d,
    CPC_PERF_SEL_MES_THREAD1__GFX10                    = 0x0000002e,
} CPC_PERFCOUNT_SEL;

constexpr unsigned int MaxCpcPerfcountSelGfx09         = CPC_PERF_SEL_ME2_DC1_SPI_BUSY;
constexpr unsigned int MaxCpcPerfcountSelGfx10         = CPC_PERF_SEL_MES_THREAD1__GFX10;

typedef enum CPF_LATENCY_STATS_SEL {
    CPF_LATENCY_STATS_SEL_XACK_MAX                     = 0x00000000,
    CPF_LATENCY_STATS_SEL_XACK_MIN                     = 0x00000001,
    CPF_LATENCY_STATS_SEL_XACK_LAST                    = 0x00000002,
    CPF_LATENCY_STATS_SEL_XNACK_MAX                    = 0x00000003,
    CPF_LATENCY_STATS_SEL_XNACK_MIN                    = 0x00000004,
    CPF_LATENCY_STATS_SEL_XNACK_LAST                   = 0x00000005,
    CPF_LATENCY_STATS_SEL_READ_MAX                     = 0x00000006,
    CPF_LATENCY_STATS_SEL_READ_MIN                     = 0x00000007,
    CPF_LATENCY_STATS_SEL_READ_LAST                    = 0x00000008,
    CPF_LATENCY_STATS_SEL_INVAL_MAX__GFX10             = 0x00000009,
    CPF_LATENCY_STATS_SEL_INVAL_MIN__GFX10             = 0x0000000a,
    CPF_LATENCY_STATS_SEL_INVAL_LAST__GFX10            = 0x0000000b,
} CPF_LATENCY_STATS_SEL;

typedef enum CPF_PERFCOUNTWINDOW_SEL {
    CPF_PERFWINDOW_SEL_CSF                             = 0x00000000,
    CPF_PERFWINDOW_SEL_HQD1                            = 0x00000001,
    CPF_PERFWINDOW_SEL_HQD2                            = 0x00000002,
    CPF_PERFWINDOW_SEL_RDMA                            = 0x00000003,
    CPF_PERFWINDOW_SEL_RWPP                            = 0x00000004,
} CPF_PERFCOUNTWINDOW_SEL;

constexpr unsigned int MaxCpfPerfcountwindowSel        = CPF_PERFWINDOW_SEL_RWPP;

typedef enum CPF_PERFCOUNT_SEL {
    CPF_PERF_SEL_ALWAYS_COUNT                          = 0x00000000,
    CPF_PERF_SEL_MIU_STALLED_WAITING_RDREQ_FREE        = 0x00000001,
    CPF_PERF_SEL_TCIU_STALLED_WAITING_ON_FREE          = 0x00000002,
    CPF_PERF_SEL_TCIU_STALLED_WAITING_ON_TAGS          = 0x00000003,
    CPF_PERF_SEL_CSF_BUSY_FOR_FETCHING_RING            = 0x00000004,
    CPF_PERF_SEL_CSF_BUSY_FOR_FETCHING_IB1             = 0x00000005,
    CPF_PERF_SEL_CSF_BUSY_FOR_FETCHING_IB2             = 0x00000006,
    CPF_PERF_SEL_MIU_BUSY_FOR_OUTSTANDING_TAGS         = 0x00000008,
    CPF_PERF_SEL_CSF_RTS_MIU_NOT_RTR                   = 0x00000009,
    CPF_PERF_SEL_CSF_STATE_FIFO_NOT_RTR                = 0x0000000a,
    CPF_PERF_SEL_CSF_FETCHING_CMD_BUFFERS              = 0x0000000b,
    CPF_PERF_SEL_GRBM_DWORDS_SENT                      = 0x0000000c,
    CPF_PERF_SEL_DYNAMIC_CLOCK_VALID                   = 0x0000000d,
    CPF_PERF_SEL_REGISTER_CLOCK_VALID                  = 0x0000000e,
    CPF_PERF_SEL_UTCL2IU_STALL_WAIT_ON_FREE            = 0x00000011,
    CPF_PERF_SEL_UTCL2IU_STALL_WAIT_ON_TAGS            = 0x00000012,
    CPF_PERF_SEL_GFX_UTCL1_STALL_ON_TRANSLATION        = 0x00000013,
    CPF_PERF_SEL_CMP_UTCL1_STALL_ON_TRANSLATION        = 0x00000014,
    CPF_PERF_SEL_RCIU_STALL_WAIT_ON_FREE               = 0x00000015,
    CPF_PERF_SEL_CSF_BUSY_FOR_FECTHINC_STATE__GFX09    = 0x00000007,
    CPF_PERF_SEL_MIU_WRITE_REQUEST_SEND__GFX09         = 0x0000000f,
    CPF_PERF_SEL_MIU_READ_REQUEST_SEND__GFX09          = 0x00000010,
    CPF_PERF_SEL_TCIU_READ_REQUEST_SENT__GFX09         = 0x00000016,
    CPF_PERF_SEL_CPF_STAT_BUSY__GFX09                  = 0x00000017,
    CPF_PERF_SEL_CPF_STAT_IDLE__GFX09                  = 0x00000018,
    CPF_PERF_SEL_CPF_STAT_STALL__GFX09                 = 0x00000019,
    CPF_PERF_SEL_CPF_TCIU_BUSY__GFX09                  = 0x0000001a,
    CPF_PERF_SEL_CPF_TCIU_IDLE__GFX09                  = 0x0000001b,
    CPF_PERF_SEL_CPF_TCIU_STALL__GFX09                 = 0x0000001c,
    CPF_PERF_SEL_CPF_UTCL2IU_BUSY__GFX09               = 0x0000001d,
    CPF_PERF_SEL_CPF_UTCL2IU_IDLE__GFX09               = 0x0000001e,
    CPF_PERF_SEL_CPF_UTCL2IU_STALL__GFX09              = 0x0000001f,
    CPF_PERF_SEL_GUS_WRITE_REQUEST_SENT__GFX10         = 0x0000000f,
    CPF_PERF_SEL_GUS_READ_REQUEST_SENT__GFX10          = 0x00000010,
    CPF_PERF_SEL_TCIU_WRITE_REQUEST_SENT__GFX10        = 0x00000016,
    CPF_PERF_SEL_TCIU_READ_REQUEST_SENT__GFX10         = 0x00000017,
    CPF_PERF_SEL_CPF_STAT_BUSY__GFX10                  = 0x00000018,
    CPF_PERF_SEL_CPF_STAT_IDLE__GFX10                  = 0x00000019,
    CPF_PERF_SEL_CPF_STAT_STALL__GFX10                 = 0x0000001a,
    CPF_PERF_SEL_CPF_TCIU_BUSY__GFX10                  = 0x0000001b,
    CPF_PERF_SEL_CPF_TCIU_IDLE__GFX10                  = 0x0000001c,
    CPF_PERF_SEL_CPF_TCIU_STALL__GFX10                 = 0x0000001d,
    CPF_PERF_SEL_CPF_UTCL2IU_BUSY__GFX10               = 0x0000001e,
    CPF_PERF_SEL_CPF_UTCL2IU_IDLE__GFX10               = 0x0000001f,
    CPF_PERF_SEL_CPF_UTCL2IU_STALL__GFX10              = 0x00000020,
    CPF_PERF_SEL_CPF_GCRIU_BUSY__GFX10                 = 0x00000021,
    CPF_PERF_SEL_CPF_GCRIU_IDLE__GFX10                 = 0x00000022,
    CPF_PERF_SEL_CPF_GCRIU_STALL__GFX10                = 0x00000023,
    CPF_PERF_SEL_GCRIU_STALL_WAIT_ON_FREE__GFX10       = 0x00000024,
    CPF_PERF_SEL_CSF_BUSY_FOR_FETCHING_DB__GFX10       = 0x00000025,
    CPF_PERF_SEL_CPF_UTCL2IU_XACK__GFX10               = 0x00000026,
    CPF_PERF_SEL_CPF_UTCL2IU_XNACK__GFX10              = 0x00000027,
    CPF_PERF_SEL_CSF_BUSY_FOR_FECTHINC_STATE__NV10     = 0x00000007,
} CPF_PERFCOUNT_SEL;

constexpr unsigned int MaxCpfPerfcountSelGfx09         = CPF_PERF_SEL_CPF_UTCL2IU_STALL__GFX09;
constexpr unsigned int MaxCpfPerfcountSelGfx10         = CPF_PERF_SEL_CPF_UTCL2IU_XNACK__GFX10;

typedef enum CPG_LATENCY_STATS_SEL {
    CPG_LATENCY_STATS_SEL_XACK_MAX                     = 0x00000000,
    CPG_LATENCY_STATS_SEL_XACK_MIN                     = 0x00000001,
    CPG_LATENCY_STATS_SEL_XACK_LAST                    = 0x00000002,
    CPG_LATENCY_STATS_SEL_XNACK_MAX                    = 0x00000003,
    CPG_LATENCY_STATS_SEL_XNACK_MIN                    = 0x00000004,
    CPG_LATENCY_STATS_SEL_XNACK_LAST                   = 0x00000005,
    CPG_LATENCY_STATS_SEL_WRITE_MAX                    = 0x00000006,
    CPG_LATENCY_STATS_SEL_WRITE_MIN                    = 0x00000007,
    CPG_LATENCY_STATS_SEL_WRITE_LAST                   = 0x00000008,
    CPG_LATENCY_STATS_SEL_READ_MAX                     = 0x00000009,
    CPG_LATENCY_STATS_SEL_READ_MIN                     = 0x0000000a,
    CPG_LATENCY_STATS_SEL_READ_LAST                    = 0x0000000b,
    CPG_LATENCY_STATS_SEL_INVAL_MAX__GFX09             = 0x0000000c,
    CPG_LATENCY_STATS_SEL_INVAL_MIN__GFX09             = 0x0000000d,
    CPG_LATENCY_STATS_SEL_INVAL_LAST__GFX09            = 0x0000000e,
    CPG_LATENCY_STATS_SEL_ATOMIC_MAX__GFX09            = 0x0000000f,
    CPG_LATENCY_STATS_SEL_ATOMIC_MIN__GFX09            = 0x00000010,
    CPG_LATENCY_STATS_SEL_ATOMIC_LAST__GFX09           = 0x00000011,
    CPG_LATENCY_STATS_SEL_ATOMIC_MAX__GFX10            = 0x0000000c,
    CPG_LATENCY_STATS_SEL_ATOMIC_MIN__GFX10            = 0x0000000d,
    CPG_LATENCY_STATS_SEL_ATOMIC_LAST__GFX10           = 0x0000000e,
    CPG_LATENCY_STATS_SEL_INVAL_MAX__GFX10             = 0x0000000f,
    CPG_LATENCY_STATS_SEL_INVAL_MIN__GFX10             = 0x00000010,
    CPG_LATENCY_STATS_SEL_INVAL_LAST__GFX10            = 0x00000011,
} CPG_LATENCY_STATS_SEL;

typedef enum CPG_PERFCOUNTWINDOW_SEL {
    CPG_PERFWINDOW_SEL_PFP                             = 0x00000000,
    CPG_PERFWINDOW_SEL_ME                              = 0x00000001,
    CPG_PERFWINDOW_SEL_CE                              = 0x00000002,
    CPG_PERFWINDOW_SEL_MEC1                            = 0x00000004,
    CPG_PERFWINDOW_SEL_MEC2                            = 0x00000005,
    CPG_PERFWINDOW_SEL_DFY                             = 0x00000006,
    CPG_PERFWINDOW_SEL_DMA                             = 0x00000007,
    CPG_PERFWINDOW_SEL_SHADOW                          = 0x00000008,
    CPG_PERFWINDOW_SEL_RB                              = 0x00000009,
    CPG_PERFWINDOW_SEL_CEDMA                           = 0x0000000a,
    CPG_PERFWINDOW_SEL_PRT_HDR_RPTR                    = 0x0000000b,
    CPG_PERFWINDOW_SEL_PRT_SMP_RPTR                    = 0x0000000c,
    CPG_PERFWINDOW_SEL_PQ1                             = 0x0000000d,
    CPG_PERFWINDOW_SEL_PQ2                             = 0x0000000e,
    CPG_PERFWINDOW_SEL_RESERVED1__GFX09                = 0x00000003,
    CPG_PERFWINDOW_SEL_MEMWR__GFX09                    = 0x0000000f,
    CPG_PERFWINDOW_SEL_MEMRD__GFX09                    = 0x00000010,
    CPG_PERFWINDOW_SEL_VGT0__GFX09                     = 0x00000011,
    CPG_PERFWINDOW_SEL_VGT1__GFX09                     = 0x00000012,
    CPG_PERFWINDOW_SEL_APPEND__GFX09                   = 0x00000013,
    CPG_PERFWINDOW_SEL_QURD__GFX09                     = 0x00000014,
    CPG_PERFWINDOW_SEL_CPCQU__GFX09                    = 0x00000015,
    CPG_PERFWINDOW_SEL_SR__GFX09                       = 0x00000016,
    CPG_PERFWINDOW_SEL_QU_EOP__GFX09                   = 0x00000017,
    CPG_PERFWINDOW_SEL_QU_STRM__GFX09                  = 0x00000018,
    CPG_PERFWINDOW_SEL_QU_PIPE__GFX09                  = 0x00000019,
    CPG_PERFWINDOW_SEL_RESERVED2__GFX09                = 0x0000001a,
    CPG_PERFWINDOW_SEL_CPC_IC__GFX09                   = 0x0000001b,
    CPG_PERFWINDOW_SEL_SD__GFX09                       = 0x0000001c,
    CPG_PERFWINDOW_SEL_MES__GFX10                      = 0x00000003,
    CPG_PERFWINDOW_SEL_PQ3__GFX10                      = 0x0000000f,
    CPG_PERFWINDOW_SEL_MEMWR__GFX10                    = 0x00000010,
    CPG_PERFWINDOW_SEL_MEMRD__GFX10                    = 0x00000011,
    CPG_PERFWINDOW_SEL_VGT0__GFX10                     = 0x00000012,
    CPG_PERFWINDOW_SEL_VGT1__GFX10                     = 0x00000013,
    CPG_PERFWINDOW_SEL_APPEND__GFX10                   = 0x00000014,
    CPG_PERFWINDOW_SEL_QURD__GFX10                     = 0x00000015,
    CPG_PERFWINDOW_SEL_DDID__GFX10                     = 0x00000016,
    CPG_PERFWINDOW_SEL_SR__GFX10                       = 0x00000017,
    CPG_PERFWINDOW_SEL_QU_EOP__GFX10                   = 0x00000018,
    CPG_PERFWINDOW_SEL_QU_STRM__GFX10                  = 0x00000019,
    CPG_PERFWINDOW_SEL_QU_PIPE__GFX10                  = 0x0000001a,
    CPG_PERFWINDOW_SEL_RESERVED1__GFX10                = 0x0000001b,
    CPG_PERFWINDOW_SEL_CPC_IC__GFX10                   = 0x0000001c,
    CPG_PERFWINDOW_SEL_RESERVED2__GFX10                = 0x0000001d,
    CPG_PERFWINDOW_SEL_CPG_IC__GFX10                   = 0x0000001e,
} CPG_PERFCOUNTWINDOW_SEL;

constexpr unsigned int MaxCpgPerfcountwindowSelGfx09   = CPG_PERFWINDOW_SEL_SD__GFX09;
constexpr unsigned int MaxCpgPerfcountwindowSelGfx10   = CPG_PERFWINDOW_SEL_CPG_IC__GFX10;

typedef enum CPG_PERFCOUNT_SEL {
    CPG_PERF_SEL_ALWAYS_COUNT                          = 0x00000000,
    CPG_PERF_SEL_RBIU_FIFO_FULL                        = 0x00000001,
    CPG_PERF_SEL_CSF_RTS_BUT_MIU_NOT_RTR               = 0x00000002,
    CPG_PERF_SEL_CSF_ST_BASE_SIZE_FIFO_FULL            = 0x00000003,
    CPG_PERF_SEL_CP_GRBM_DWORDS_SENT                   = 0x00000004,
    CPG_PERF_SEL_ME_PARSER_BUSY                        = 0x00000005,
    CPG_PERF_SEL_COUNT_TYPE0_PACKETS                   = 0x00000006,
    CPG_PERF_SEL_COUNT_TYPE3_PACKETS                   = 0x00000007,
    CPG_PERF_SEL_CSF_FETCHING_CMD_BUFFERS              = 0x00000008,
    CPG_PERF_SEL_CP_GRBM_OUT_OF_CREDITS                = 0x00000009,
    CPG_PERF_SEL_CP_PFP_GRBM_OUT_OF_CREDITS            = 0x0000000a,
    CPG_PERF_SEL_CP_GDS_GRBM_OUT_OF_CREDITS            = 0x0000000b,
    CPG_PERF_SEL_RCIU_STALLED_ON_ME_READ               = 0x0000000c,
    CPG_PERF_SEL_RCIU_STALLED_ON_DMA_READ              = 0x0000000d,
    CPG_PERF_SEL_SSU_STALLED_ON_ACTIVE_CNTX            = 0x0000000e,
    CPG_PERF_SEL_SSU_STALLED_ON_CLEAN_SIGNALS__GFX10   = 0x0000000f,
    CPG_PERF_SEL_QU_STALLED_ON_EOP_DONE_PULSE__GFX10   = 0x00000010,
    CPG_PERF_SEL_QU_STALLED_ON_EOP_DONE_WR_CONFIRM__GFX10 = 0x00000011,
    CPG_PERF_SEL_PFP_STALLED_ON_CSF_READY__GFX10       = 0x00000012,
    CPG_PERF_SEL_PFP_STALLED_ON_MEQ_READY__GFX10       = 0x00000013,
    CPG_PERF_SEL_PFP_STALLED_ON_RCIU_READY__GFX10      = 0x00000014,
    CPG_PERF_SEL_PFP_STALLED_FOR_DATA_FROM_ROQ__GFX10  = 0x00000015,
    CPG_PERF_SEL_ME_STALLED_FOR_DATA_FROM_PFP__GFX10   = 0x00000016,
    CPG_PERF_SEL_ME_STALLED_FOR_DATA_FROM_STQ__GFX10   = 0x00000017,
    CPG_PERF_SEL_ME_STALLED_ON_NO_AVAIL_GFX_CNTX__GFX10 = 0x00000018,
    CPG_PERF_SEL_ME_STALLED_WRITING_TO_RCIU__GFX10     = 0x00000019,
    CPG_PERF_SEL_ME_STALLED_WRITING_CONSTANTS__GFX10   = 0x0000001a,
    CPG_PERF_SEL_ME_STALLED_ON_PARTIAL_FLUSH__GFX10    = 0x0000001b,
    CPG_PERF_SEL_ME_WAIT_ON_CE_COUNTER__GFX10          = 0x0000001c,
    CPG_PERF_SEL_ME_WAIT_ON_AVAIL_BUFFER__GFX10        = 0x0000001d,
    CPG_PERF_SEL_SEMAPHORE_BUSY_POLLING_FOR_PASS__GFX10 = 0x0000001e,
    CPG_PERF_SEL_LOAD_STALLED_ON_SET_COHERENCY__GFX10  = 0x0000001f,
    CPG_PERF_SEL_DYNAMIC_CLK_VALID__GFX10              = 0x00000020,
    CPG_PERF_SEL_REGISTER_CLK_VALID__GFX10             = 0x00000021,
    CPG_PERF_SEL_GUS_WRITE_REQUEST_SENT__GFX10         = 0x00000022,
    CPG_PERF_SEL_GUS_READ_REQUEST_SENT__GFX10          = 0x00000023,
    CPG_PERF_SEL_CE_STALL_RAM_DUMP__GFX10              = 0x00000024,
    CPG_PERF_SEL_CE_STALL_RAM_WRITE__GFX10             = 0x00000025,
    CPG_PERF_SEL_CE_STALL_ON_INC_FIFO__GFX10           = 0x00000026,
    CPG_PERF_SEL_CE_STALL_ON_WR_RAM_FIFO__GFX10        = 0x00000027,
    CPG_PERF_SEL_CE_STALL_ON_DATA_FROM_MIU__GFX10      = 0x00000028,
    CPG_PERF_SEL_CE_STALL_ON_DATA_FROM_ROQ__GFX10      = 0x00000029,
    CPG_PERF_SEL_CE_STALL_ON_CE_BUFFER_FLAG__GFX10     = 0x0000002a,
    CPG_PERF_SEL_CE_STALL_ON_DE_COUNTER__GFX10         = 0x0000002b,
    CPG_PERF_SEL_TCIU_STALL_WAIT_ON_FREE__GFX10        = 0x0000002c,
    CPG_PERF_SEL_TCIU_STALL_WAIT_ON_TAGS__GFX10        = 0x0000002d,
    CPG_PERF_SEL_UTCL2IU_STALL_WAIT_ON_FREE__GFX10     = 0x0000002e,
    CPG_PERF_SEL_UTCL2IU_STALL_WAIT_ON_TAGS__GFX10     = 0x0000002f,
    CPG_PERF_SEL_UTCL1_STALL_ON_TRANSLATION__GFX10     = 0x00000030,
    CPG_PERF_SEL_TCIU_WRITE_REQUEST_SENT__GFX10        = 0x00000031,
    CPG_PERF_SEL_TCIU_READ_REQUEST_SENT__GFX10         = 0x00000032,
    CPG_PERF_SEL_CPG_STAT_BUSY__GFX10                  = 0x00000033,
    CPG_PERF_SEL_CPG_STAT_IDLE__GFX10                  = 0x00000034,
    CPG_PERF_SEL_CPG_STAT_STALL__GFX10                 = 0x00000035,
    CPG_PERF_SEL_CPG_TCIU_BUSY__GFX10                  = 0x00000036,
    CPG_PERF_SEL_CPG_TCIU_IDLE__GFX10                  = 0x00000037,
    CPG_PERF_SEL_CPG_TCIU_STALL__GFX10                 = 0x00000038,
    CPG_PERF_SEL_CPG_UTCL2IU_BUSY__GFX10               = 0x00000039,
    CPG_PERF_SEL_CPG_UTCL2IU_IDLE__GFX10               = 0x0000003a,
    CPG_PERF_SEL_CPG_UTCL2IU_STALL__GFX10              = 0x0000003b,
    CPG_PERF_SEL_CPG_GCRIU_BUSY__GFX10                 = 0x0000003c,
    CPG_PERF_SEL_CPG_GCRIU_IDLE__GFX10                 = 0x0000003d,
    CPG_PERF_SEL_CPG_GCRIU_STALL__GFX10                = 0x0000003e,
    CPG_PERF_SEL_GCRIU_STALL_WAIT_ON_FREE__GFX10       = 0x0000003f,
    CPG_PERF_SEL_ALL_GFX_PIPES_BUSY__GFX10             = 0x00000040,
    CPG_PERF_SEL_CPG_UTCL2IU_XACK__GFX10               = 0x00000041,
    CPG_PERF_SEL_CPG_UTCL2IU_XNACK__GFX10              = 0x00000042,
    CPG_PERF_SEL_PFP_STALLED_ON_MEQ_DDID_READY__GFX10  = 0x00000043,
    CPG_PERF_SEL_PFP_INSTR_CACHE_HIT__GFX10            = 0x00000044,
    CPG_PERF_SEL_PFP_INSTR_CACHE_MISS__GFX10           = 0x00000045,
    CPG_PERF_SEL_CE_INSTR_CACHE_HIT__GFX10             = 0x00000046,
    CPG_PERF_SEL_CE_INSTR_CACHE_MISS__GFX10            = 0x00000047,
    CPG_PERF_SEL_ME_INSTR_CACHE_HIT__GFX10             = 0x00000048,
    CPG_PERF_SEL_ME_INSTR_CACHE_MISS__GFX10            = 0x00000049,
    CPG_PERF_SEL_PFP_PACKET_FILTER_HIT_IB1__GFX10      = 0x0000004a,
    CPG_PERF_SEL_PFP_PACKET_FILTER_MISS_IB1__GFX10     = 0x0000004b,
    CPG_PERF_SEL_PFP_PACKET_FILTER_HIT_IB2__GFX10      = 0x0000004c,
    CPG_PERF_SEL_PFP_PACKET_FILTER_MISS_IB2__GFX10     = 0x0000004d,
    CPG_PERF_SEL_DMA_BUSY__GFX10                       = 0x0000004e,
    CPG_PERF_SEL_DMA_STARVED__GFX10                    = 0x0000004f,
    CPG_PERF_SEL_DMA_STALLED__GFX10                    = 0x00000050,
    CPG_PERF_SEL_DMA_FETCHER_STALLED_ON_ROQ_FULL__GFX10 = 0x00000051,
    CPG_PERF_SEL_SSU_STALLED_ON_CLEAN_SIGNALS__RV1X    = 0x0000000f,
    CPG_PERF_SEL_QU_STALLED_ON_EOP_DONE_PULSE__RV1X    = 0x00000010,
    CPG_PERF_SEL_QU_STALLED_ON_EOP_DONE_WR_CONFIRM__RV1X = 0x00000011,
    CPG_PERF_SEL_PFP_STALLED_ON_CSF_READY__RV1X        = 0x00000012,
    CPG_PERF_SEL_PFP_STALLED_ON_MEQ_READY__RV1X        = 0x00000013,
    CPG_PERF_SEL_PFP_STALLED_ON_RCIU_READY__RV1X       = 0x00000014,
    CPG_PERF_SEL_PFP_STALLED_FOR_DATA_FROM_ROQ__RV1X   = 0x00000015,
    CPG_PERF_SEL_ME_STALLED_FOR_DATA_FROM_PFP__RV1X    = 0x00000016,
    CPG_PERF_SEL_ME_STALLED_FOR_DATA_FROM_STQ__RV1X    = 0x00000017,
    CPG_PERF_SEL_ME_STALLED_ON_NO_AVAIL_GFX_CNTX__RV1X = 0x00000018,
    CPG_PERF_SEL_ME_STALLED_WRITING_TO_RCIU__RV1X      = 0x00000019,
    CPG_PERF_SEL_ME_STALLED_WRITING_CONSTANTS__RV1X    = 0x0000001a,
    CPG_PERF_SEL_ME_STALLED_ON_PARTIAL_FLUSH__RV1X     = 0x0000001b,
    CPG_PERF_SEL_ME_WAIT_ON_CE_COUNTER__RV1X           = 0x0000001c,
    CPG_PERF_SEL_ME_WAIT_ON_AVAIL_BUFFER__RV1X         = 0x0000001d,
    CPG_PERF_SEL_SEMAPHORE_BUSY_POLLING_FOR_PASS__RV1X = 0x0000001e,
    CPG_PERF_SEL_LOAD_STALLED_ON_SET_COHERENCY__RV1X   = 0x0000001f,
    CPG_PERF_SEL_DYNAMIC_CLK_VALID__RV1X               = 0x00000020,
    CPG_PERF_SEL_REGISTER_CLK_VALID__RV1X              = 0x00000021,
    CPG_PERF_SEL_MIU_WRITE_REQUEST_SENT__RV1X          = 0x00000022,
    CPG_PERF_SEL_MIU_READ_REQUEST_SENT__RV1X           = 0x00000023,
    CPG_PERF_SEL_CE_STALL_RAM_DUMP__RV1X               = 0x00000024,
    CPG_PERF_SEL_CE_STALL_RAM_WRITE__RV1X              = 0x00000025,
    CPG_PERF_SEL_CE_STALL_ON_INC_FIFO__RV1X            = 0x00000026,
    CPG_PERF_SEL_CE_STALL_ON_WR_RAM_FIFO__RV1X         = 0x00000027,
    CPG_PERF_SEL_CE_STALL_ON_DATA_FROM_MIU__RV1X       = 0x00000028,
    CPG_PERF_SEL_CE_STALL_ON_DATA_FROM_ROQ__RV1X       = 0x00000029,
    CPG_PERF_SEL_CE_STALL_ON_CE_BUFFER_FLAG__RV1X      = 0x0000002a,
    CPG_PERF_SEL_CE_STALL_ON_DE_COUNTER__RV1X          = 0x0000002b,
    CPG_PERF_SEL_TCIU_STALL_WAIT_ON_FREE__RV1X         = 0x0000002c,
    CPG_PERF_SEL_TCIU_STALL_WAIT_ON_TAGS__RV1X         = 0x0000002d,
    CPG_PERF_SEL_UTCL2IU_STALL_WAIT_ON_FREE__RV1X      = 0x0000002e,
    CPG_PERF_SEL_UTCL2IU_STALL_WAIT_ON_TAGS__RV1X      = 0x0000002f,
    CPG_PERF_SEL_UTCL1_STALL_ON_TRANSLATION__RV1X      = 0x00000030,
    CPG_PERF_SEL_TCIU_WRITE_REQUEST_SENT__RV1X         = 0x00000031,
    CPG_PERF_SEL_CPG_STAT_BUSY__RV1X                   = 0x00000032,
    CPG_PERF_SEL_CPG_STAT_IDLE__RV1X                   = 0x00000033,
    CPG_PERF_SEL_CPG_STAT_STALL__RV1X                  = 0x00000034,
    CPG_PERF_SEL_CPG_TCIU_BUSY__RV1X                   = 0x00000035,
    CPG_PERF_SEL_CPG_TCIU_IDLE__RV1X                   = 0x00000036,
    CPF_PERF_SEL_CPG_TCIU_STALL__RV1X                  = 0x00000037,
    CPG_PERF_SEL_CPG_UTCL2IU_BUSY__RV1X                = 0x00000038,
    CPG_PERF_SEL_CPG_UTCL2IU_IDLE__RV1X                = 0x00000039,
    CPG_PERF_SEL_CPG_UTCL2IU_STALL__RV1X               = 0x0000003a,
    CPG_PERF_SEL_SSU_STALLED_ON_CLEAN_SIGNALS__RV2X    = 0x0000000f,
    CPG_PERF_SEL_QU_STALLED_ON_EOP_DONE_PULSE__RV2X    = 0x00000010,
    CPG_PERF_SEL_QU_STALLED_ON_EOP_DONE_WR_CONFIRM__RV2X = 0x00000011,
    CPG_PERF_SEL_PFP_STALLED_ON_CSF_READY__RV2X        = 0x00000012,
    CPG_PERF_SEL_PFP_STALLED_ON_MEQ_READY__RV2X        = 0x00000013,
    CPG_PERF_SEL_PFP_STALLED_ON_RCIU_READY__RV2X       = 0x00000014,
    CPG_PERF_SEL_PFP_STALLED_FOR_DATA_FROM_ROQ__RV2X   = 0x00000015,
    CPG_PERF_SEL_ME_STALLED_FOR_DATA_FROM_PFP__RV2X    = 0x00000016,
    CPG_PERF_SEL_ME_STALLED_FOR_DATA_FROM_STQ__RV2X    = 0x00000017,
    CPG_PERF_SEL_ME_STALLED_ON_NO_AVAIL_GFX_CNTX__RV2X = 0x00000018,
    CPG_PERF_SEL_ME_STALLED_WRITING_TO_RCIU__RV2X      = 0x00000019,
    CPG_PERF_SEL_ME_STALLED_WRITING_CONSTANTS__RV2X    = 0x0000001a,
    CPG_PERF_SEL_ME_STALLED_ON_PARTIAL_FLUSH__RV2X     = 0x0000001b,
    CPG_PERF_SEL_ME_WAIT_ON_CE_COUNTER__RV2X           = 0x0000001c,
    CPG_PERF_SEL_ME_WAIT_ON_AVAIL_BUFFER__RV2X         = 0x0000001d,
    CPG_PERF_SEL_SEMAPHORE_BUSY_POLLING_FOR_PASS__RV2X = 0x0000001e,
    CPG_PERF_SEL_LOAD_STALLED_ON_SET_COHERENCY__RV2X   = 0x0000001f,
    CPG_PERF_SEL_DYNAMIC_CLK_VALID__RV2X               = 0x00000020,
    CPG_PERF_SEL_REGISTER_CLK_VALID__RV2X              = 0x00000021,
    CPG_PERF_SEL_MIU_WRITE_REQUEST_SENT__RV2X          = 0x00000022,
    CPG_PERF_SEL_MIU_READ_REQUEST_SENT__RV2X           = 0x00000023,
    CPG_PERF_SEL_CE_STALL_RAM_DUMP__RV2X               = 0x00000024,
    CPG_PERF_SEL_CE_STALL_RAM_WRITE__RV2X              = 0x00000025,
    CPG_PERF_SEL_CE_STALL_ON_INC_FIFO__RV2X            = 0x00000026,
    CPG_PERF_SEL_CE_STALL_ON_WR_RAM_FIFO__RV2X         = 0x00000027,
    CPG_PERF_SEL_CE_STALL_ON_DATA_FROM_MIU__RV2X       = 0x00000028,
    CPG_PERF_SEL_CE_STALL_ON_DATA_FROM_ROQ__RV2X       = 0x00000029,
    CPG_PERF_SEL_CE_STALL_ON_CE_BUFFER_FLAG__RV2X      = 0x0000002a,
    CPG_PERF_SEL_CE_STALL_ON_DE_COUNTER__RV2X          = 0x0000002b,
    CPG_PERF_SEL_TCIU_STALL_WAIT_ON_FREE__RV2X         = 0x0000002c,
    CPG_PERF_SEL_TCIU_STALL_WAIT_ON_TAGS__RV2X         = 0x0000002d,
    CPG_PERF_SEL_UTCL2IU_STALL_WAIT_ON_FREE__RV2X      = 0x0000002e,
    CPG_PERF_SEL_UTCL2IU_STALL_WAIT_ON_TAGS__RV2X      = 0x0000002f,
    CPG_PERF_SEL_UTCL1_STALL_ON_TRANSLATION__RV2X      = 0x00000030,
    CPG_PERF_SEL_TCIU_WRITE_REQUEST_SENT__RV2X         = 0x00000031,
    CPG_PERF_SEL_CPG_STAT_BUSY__RV2X                   = 0x00000032,
    CPG_PERF_SEL_CPG_STAT_IDLE__RV2X                   = 0x00000033,
    CPG_PERF_SEL_CPG_STAT_STALL__RV2X                  = 0x00000034,
    CPG_PERF_SEL_CPG_TCIU_BUSY__RV2X                   = 0x00000035,
    CPG_PERF_SEL_CPG_TCIU_IDLE__RV2X                   = 0x00000036,
    CPF_PERF_SEL_CPG_TCIU_STALL__RV2X                  = 0x00000037,
    CPG_PERF_SEL_CPG_UTCL2IU_BUSY__RV2X                = 0x00000038,
    CPG_PERF_SEL_CPG_UTCL2IU_IDLE__RV2X                = 0x00000039,
    CPG_PERF_SEL_CPG_UTCL2IU_STALL__RV2X               = 0x0000003a,
    CPG_PERF_SEL_GFX9_GAP__VEGA                        = 0x0000000f,
    CPG_PERF_SEL_SSU_STALLED_ON_CLEAN_SIGNALS__VEGA    = 0x00000010,
    CPG_PERF_SEL_QU_STALLED_ON_EOP_DONE_PULSE__VEGA    = 0x00000011,
    CPG_PERF_SEL_QU_STALLED_ON_EOP_DONE_WR_CONFIRM__VEGA = 0x00000012,
    CPG_PERF_SEL_PFP_STALLED_ON_CSF_READY__VEGA        = 0x00000013,
    CPG_PERF_SEL_PFP_STALLED_ON_MEQ_READY__VEGA        = 0x00000014,
    CPG_PERF_SEL_PFP_STALLED_ON_RCIU_READY__VEGA       = 0x00000015,
    CPG_PERF_SEL_PFP_STALLED_FOR_DATA_FROM_ROQ__VEGA   = 0x00000016,
    CPG_PERF_SEL_ME_STALLED_FOR_DATA_FROM_PFP__VEGA    = 0x00000017,
    CPG_PERF_SEL_ME_STALLED_FOR_DATA_FROM_STQ__VEGA    = 0x00000018,
    CPG_PERF_SEL_ME_STALLED_ON_NO_AVAIL_GFX_CNTX__VEGA = 0x00000019,
    CPG_PERF_SEL_ME_STALLED_WRITING_TO_RCIU__VEGA      = 0x0000001a,
    CPG_PERF_SEL_ME_STALLED_WRITING_CONSTANTS__VEGA    = 0x0000001b,
    CPG_PERF_SEL_ME_STALLED_ON_PARTIAL_FLUSH__VEGA     = 0x0000001c,
    CPG_PERF_SEL_ME_WAIT_ON_CE_COUNTER__VEGA           = 0x0000001d,
    CPG_PERF_SEL_ME_WAIT_ON_AVAIL_BUFFER__VEGA         = 0x0000001e,
    CPG_PERF_SEL_SEMAPHORE_BUSY_POLLING_FOR_PASS__VEGA = 0x0000001f,
    CPG_PERF_SEL_LOAD_STALLED_ON_SET_COHERENCY__VEGA   = 0x00000020,
    CPG_PERF_SEL_DYNAMIC_CLK_VALID__VEGA               = 0x00000021,
    CPG_PERF_SEL_REGISTER_CLK_VALID__VEGA              = 0x00000022,
    CPG_PERF_SEL_MIU_WRITE_REQUEST_SENT__VEGA          = 0x00000023,
    CPG_PERF_SEL_MIU_READ_REQUEST_SENT__VEGA           = 0x00000024,
    CPG_PERF_SEL_CE_STALL_RAM_DUMP__VEGA               = 0x00000025,
    CPG_PERF_SEL_CE_STALL_RAM_WRITE__VEGA              = 0x00000026,
    CPG_PERF_SEL_CE_STALL_ON_INC_FIFO__VEGA            = 0x00000027,
    CPG_PERF_SEL_CE_STALL_ON_WR_RAM_FIFO__VEGA         = 0x00000028,
    CPG_PERF_SEL_CE_STALL_ON_DATA_FROM_MIU__VEGA       = 0x00000029,
    CPG_PERF_SEL_CE_STALL_ON_DATA_FROM_ROQ__VEGA       = 0x0000002a,
    CPG_PERF_SEL_CE_STALL_ON_CE_BUFFER_FLAG__VEGA      = 0x0000002b,
    CPG_PERF_SEL_CE_STALL_ON_DE_COUNTER__VEGA          = 0x0000002c,
    CPG_PERF_SEL_TCIU_STALL_WAIT_ON_FREE__VEGA         = 0x0000002d,
    CPG_PERF_SEL_TCIU_STALL_WAIT_ON_TAGS__VEGA         = 0x0000002e,
    CPG_PERF_SEL_UTCL2IU_STALL_WAIT_ON_FREE__VEGA      = 0x0000002f,
    CPG_PERF_SEL_UTCL2IU_STALL_WAIT_ON_TAGS__VEGA      = 0x00000030,
    CPG_PERF_SEL_UTCL1_STALL_ON_TRANSLATION__VEGA      = 0x00000031,
    CPG_PERF_SEL_TCIU_WRITE_REQUEST_SENT__VEGA         = 0x00000032,
    CPG_PERF_SEL_CPG_STAT_BUSY__VEGA                   = 0x00000033,
    CPG_PERF_SEL_CPG_STAT_IDLE__VEGA                   = 0x00000034,
    CPG_PERF_SEL_CPG_STAT_STALL__VEGA                  = 0x00000035,
    CPG_PERF_SEL_CPG_TCIU_BUSY__VEGA                   = 0x00000036,
    CPG_PERF_SEL_CPG_TCIU_IDLE__VEGA                   = 0x00000037,
    CPF_PERF_SEL_CPG_TCIU_STALL__VEGA                  = 0x00000038,
    CPG_PERF_SEL_CPG_UTCL2IU_BUSY__VEGA                = 0x00000039,
    CPG_PERF_SEL_CPG_UTCL2IU_IDLE__VEGA                = 0x0000003a,
    CPG_PERF_SEL_CPG_UTCL2IU_STALL__VEGA               = 0x0000003b,
} CPG_PERFCOUNT_SEL;

constexpr unsigned int MaxCpgPerfcountSelVega          = CPG_PERF_SEL_CPG_UTCL2IU_STALL__VEGA;
constexpr unsigned int MaxCpgPerfcountSelRv2x          = CPG_PERF_SEL_CPG_UTCL2IU_STALL__RV2X;
constexpr unsigned int MaxCpgPerfcountSelRv1x          = CPG_PERF_SEL_CPG_UTCL2IU_STALL__RV1X;
constexpr unsigned int MaxCpgPerfcountSelGfx10         = CPG_PERF_SEL_DMA_FETCHER_STALLED_ON_ROQ_FULL__GFX10;

typedef enum CP_ALPHA_TAG_RAM_SEL {
    CPG_TAG_RAM                                        = 0x00000000,
    CPC_TAG_RAM                                        = 0x00000001,
    CPF_TAG_RAM                                        = 0x00000002,
    RSV_TAG_RAM                                        = 0x00000003,
} CP_ALPHA_TAG_RAM_SEL;

typedef enum CP_DDID_CNTL_MODE {
    STALL                                              = 0x00000000,
    OVERRUN                                            = 0x00000001,
} CP_DDID_CNTL_MODE;

typedef enum CP_DDID_CNTL_SIZE {
    SIZE_8K                                            = 0x00000000,
    SIZE_16K                                           = 0x00000001,
} CP_DDID_CNTL_SIZE;

typedef enum CP_DDID_CNTL_VMID_SEL {
    DDID_VMID_PIPE                                     = 0x00000000,
    DDID_VMID_CNTL                                     = 0x00000001,
} CP_DDID_CNTL_VMID_SEL;

typedef enum CP_ME_ID {
    ME_ID0                                             = 0x00000000,
    ME_ID1                                             = 0x00000001,
    ME_ID2                                             = 0x00000002,
    ME_ID3                                             = 0x00000003,
} CP_ME_ID;

typedef enum CP_PERFMON_ENABLE_MODE {
    CP_PERFMON_ENABLE_MODE_ALWAYS_COUNT                = 0x00000000,
    CP_PERFMON_ENABLE_MODE_RESERVED_1                  = 0x00000001,
    CP_PERFMON_ENABLE_MODE_COUNT_CONTEXT_TRUE          = 0x00000002,
    CP_PERFMON_ENABLE_MODE_COUNT_CONTEXT_FALSE         = 0x00000003,
} CP_PERFMON_ENABLE_MODE;

constexpr unsigned int MaxCpPerfmonEnableMode          = CP_PERFMON_ENABLE_MODE_COUNT_CONTEXT_FALSE;

typedef enum CP_PERFMON_STATE {
    CP_PERFMON_STATE_DISABLE_AND_RESET                 = 0x00000000,
    CP_PERFMON_STATE_START_COUNTING                    = 0x00000001,
    CP_PERFMON_STATE_STOP_COUNTING                     = 0x00000002,
    CP_PERFMON_STATE_RESERVED_3                        = 0x00000003,
    CP_PERFMON_STATE_DISABLE_AND_RESET_PHANTOM         = 0x00000004,
    CP_PERFMON_STATE_COUNT_AND_DUMP_PHANTOM            = 0x00000005,
} CP_PERFMON_STATE;

constexpr unsigned int MaxCpPerfmonState               = CP_PERFMON_STATE_COUNT_AND_DUMP_PHANTOM;

typedef enum CP_PIPE_ID {
    PIPE_ID0                                           = 0x00000000,
    PIPE_ID1                                           = 0x00000001,
    PIPE_ID2                                           = 0x00000002,
    PIPE_ID3                                           = 0x00000003,
} CP_PIPE_ID;

typedef enum CP_RING_ID {
    RINGID0                                            = 0x00000000,
    RINGID1                                            = 0x00000001,
    RINGID2                                            = 0x00000002,
    RINGID3                                            = 0x00000003,
} CP_RING_ID;

typedef enum CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_EN {
    CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_EN_FALSE = 0x00000000,
    CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_EN_TRUE = 0x00000001,
} CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_EN;

typedef enum CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_EN_DB {
    CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_EN_DB_FALSE = 0x00000000,
    CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_EN_DB_TRUE = 0x00000001,
} CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_EN_DB;

typedef enum CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_STEREO_SEL_OVR {
    CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_STEREO_SEL_OVR_FALSE = 0x00000000,
    CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_STEREO_SEL_OVR_TRUE = 0x00000001,
} CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_STEREO_SEL_OVR;

typedef enum CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_V_UPDATE_MODE {
    CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_V_UPDATE_MODE_BLOCK_BOTH = 0x00000000,
    CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_V_UPDATE_MODE_BLOCK_INTERLACE = 0x00000001,
    CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_V_UPDATE_MODE_BLOCK_PROGRASSIVE = 0x00000002,
    CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_V_UPDATE_MODE_RESERVED = 0x00000003,
} CRTC_3D_STRUCTURE_CONTROL_CRTC_3D_STRUCTURE_V_UPDATE_MODE;

typedef enum CRTC_ADD_PIXEL {
    CRTC_ADD_PIXEL_NOOP                                = 0x00000000,
    CRTC_ADD_PIXEL_FORCE                               = 0x00000001,
} CRTC_ADD_PIXEL;

typedef enum CRTC_BLANK_CONTROL_CRTC_BLANK_DATA_EN {
    CRTC_BLANK_CONTROL_CRTC_BLANK_DATA_EN_FALSE        = 0x00000000,
    CRTC_BLANK_CONTROL_CRTC_BLANK_DATA_EN_TRUE         = 0x00000001,
} CRTC_BLANK_CONTROL_CRTC_BLANK_DATA_EN;

typedef enum CRTC_BLANK_CONTROL_CRTC_BLANK_DE_MODE {
    CRTC_BLANK_CONTROL_CRTC_BLANK_DE_MODE_FALSE        = 0x00000000,
    CRTC_BLANK_CONTROL_CRTC_BLANK_DE_MODE_TRUE         = 0x00000001,
} CRTC_BLANK_CONTROL_CRTC_BLANK_DE_MODE;

typedef enum CRTC_CONTROL_CRTC_DISABLE_POINT_CNTL {
    CRTC_CONTROL_CRTC_DISABLE_POINT_CNTL_DISABLE       = 0x00000000,
    CRTC_CONTROL_CRTC_DISABLE_POINT_CNTL_DISABLE_CURRENT = 0x00000001,
    CRTC_CONTROL_CRTC_DISABLE_POINT_CNTL_RESERVED      = 0x00000002,
    CRTC_CONTROL_CRTC_DISABLE_POINT_CNTL_DISABLE_FIRST = 0x00000003,
} CRTC_CONTROL_CRTC_DISABLE_POINT_CNTL;

typedef enum CRTC_CONTROL_CRTC_DISP_READ_REQUEST_DISABLE {
    CRTC_CONTROL_CRTC_DISP_READ_REQUEST_DISABLE_FALSE  = 0x00000000,
    CRTC_CONTROL_CRTC_DISP_READ_REQUEST_DISABLE_TRUE   = 0x00000001,
} CRTC_CONTROL_CRTC_DISP_READ_REQUEST_DISABLE;

typedef enum CRTC_CONTROL_CRTC_FIELD_NUMBER_CNTL {
    CRTC_CONTROL_CRTC_FIELD_NUMBER_CNTL_NORMAL         = 0x00000000,
    CRTC_CONTROL_CRTC_FIELD_NUMBER_CNTL_DP             = 0x00000001,
} CRTC_CONTROL_CRTC_FIELD_NUMBER_CNTL;

typedef enum CRTC_CONTROL_CRTC_FIELD_NUMBER_POLARITY {
    CRTC_CONTROL_CRTC_FIELD_NUMBER_POLARITY_FALSE      = 0x00000000,
    CRTC_CONTROL_CRTC_FIELD_NUMBER_POLARITY_TRUE       = 0x00000001,
} CRTC_CONTROL_CRTC_FIELD_NUMBER_POLARITY;

typedef enum CRTC_CONTROL_CRTC_MASTER_EN {
    CRTC_CONTROL_CRTC_MASTER_EN_FALSE                  = 0x00000000,
    CRTC_CONTROL_CRTC_MASTER_EN_TRUE                   = 0x00000001,
} CRTC_CONTROL_CRTC_MASTER_EN;

typedef enum CRTC_CONTROL_CRTC_SOF_PULL_EN {
    CRTC_CONTROL_CRTC_SOF_PULL_EN_FALSE                = 0x00000000,
    CRTC_CONTROL_CRTC_SOF_PULL_EN_TRUE                 = 0x00000001,
} CRTC_CONTROL_CRTC_SOF_PULL_EN;

typedef enum CRTC_CONTROL_CRTC_START_POINT_CNTL {
    CRTC_CONTROL_CRTC_START_POINT_CNTL_NORMAL          = 0x00000000,
    CRTC_CONTROL_CRTC_START_POINT_CNTL_DP              = 0x00000001,
} CRTC_CONTROL_CRTC_START_POINT_CNTL;

typedef enum CRTC_COUNT_CONTROL_CRTC_HORZ_COUNT_BY2_EN {
    CRTC_COUNT_CONTROL_CRTC_HORZ_COUNT_BY2_EN_FALSE    = 0x00000000,
    CRTC_COUNT_CONTROL_CRTC_HORZ_COUNT_BY2_EN_TRUE     = 0x00000001,
} CRTC_COUNT_CONTROL_CRTC_HORZ_COUNT_BY2_EN;

typedef enum CRTC_DOUBLE_BUFFER_CONTROL_CRTC_BLANK_DATA_DOUBLE_BUFFER_EN {
    CRTC_DOUBLE_BUFFER_CONTROL_CRTC_BLANK_DATA_DOUBLE_BUFFER_EN_FALSE = 0x00000000,
    CRTC_DOUBLE_BUFFER_CONTROL_CRTC_BLANK_DATA_DOUBLE_BUFFER_EN_TRUE = 0x00000001,
} CRTC_DOUBLE_BUFFER_CONTROL_CRTC_BLANK_DATA_DOUBLE_BUFFER_EN;

typedef enum CRTC_DOUBLE_BUFFER_CONTROL_CRTC_RANGE_TIMING_DBUF_UPDATE_MODE {
    CRTC_DOUBLE_BUFFER_CONTROL_CRTC_RANGE_TIMING_DBUF_UPDATE_MODE_0 = 0x00000000,
    CRTC_DOUBLE_BUFFER_CONTROL_CRTC_RANGE_TIMING_DBUF_UPDATE_MODE_1 = 0x00000001,
} CRTC_DOUBLE_BUFFER_CONTROL_CRTC_RANGE_TIMING_DBUF_UPDATE_MODE;

typedef enum CRTC_DOUBLE_BUFFER_CONTROL_CRTC_UPDATE_INSTANTLY {
    CRTC_DOUBLE_BUFFER_CONTROL_CRTC_UPDATE_INSTANTLY_FALSE = 0x00000000,
    CRTC_DOUBLE_BUFFER_CONTROL_CRTC_UPDATE_INSTANTLY_TRUE = 0x00000001,
} CRTC_DOUBLE_BUFFER_CONTROL_CRTC_UPDATE_INSTANTLY;

typedef enum CRTC_DROP_PIXEL {
    CRTC_DROP_PIXEL_NOOP                               = 0x00000000,
    CRTC_DROP_PIXEL_FORCE                              = 0x00000001,
} CRTC_DROP_PIXEL;

typedef enum CRTC_DRR_MODE_DBUF_UPDATE_MODE {
    CRTC_DRR_MODE_DBUF_UPDATE_MODE_00_IMMEDIATE        = 0x00000000,
    CRTC_DRR_MODE_DBUF_UPDATE_MODE_01_MANUAL           = 0x00000001,
    CRTC_DRR_MODE_DBUF_UPDATE_MODE_10_DBUF             = 0x00000002,
    CRTC_DRR_MODE_DBUF_UPDATE_MODE_11_SYNCED_DBUF      = 0x00000003,
} CRTC_DRR_MODE_DBUF_UPDATE_MODE;

typedef enum CRTC_DTMTEST_CNTL_CRTC_DTMTEST_CRTC_EN {
    CRTC_DTMTEST_CNTL_CRTC_DTMTEST_CRTC_EN_FALSE       = 0x00000000,
    CRTC_DTMTEST_CNTL_CRTC_DTMTEST_CRTC_EN_TRUE        = 0x00000001,
} CRTC_DTMTEST_CNTL_CRTC_DTMTEST_CRTC_EN;

typedef enum CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_ENABLE {
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_ENABLE_DISABLE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_ENABLE_ONESHOT = 0x00000001,
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_ENABLE_CONTINUOUS = 0x00000002,
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_ENABLE_RESERVED = 0x00000003,
} CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_ENABLE;

typedef enum CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_HCOUNT_MODE_ENABLE {
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_HCOUNT_MODE_ENABLE_FALSE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_HCOUNT_MODE_ENABLE_TRUE = 0x00000001,
} CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_HCOUNT_MODE_ENABLE;

typedef enum CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_HSYNC_POLARITY {
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_HSYNC_POLARITY_FALSE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_HSYNC_POLARITY_TRUE = 0x00000001,
} CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_HSYNC_POLARITY;

typedef enum CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_INTERLACE_MODE {
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_INTERLACE_MODE_FALSE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_INTERLACE_MODE_TRUE = 0x00000001,
} CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_INTERLACE_MODE;

typedef enum CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_JITTER_FILTERING_ENABLE {
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_JITTER_FILTERING_ENABLE_FALSE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_JITTER_FILTERING_ENABLE_TRUE = 0x00000001,
} CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_JITTER_FILTERING_ENABLE;

typedef enum CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_JITTER_FILTERING_WINDOW {
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_JITTER_FILTERING_WINDOW_1pixel = 0x00000000,
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_JITTER_FILTERING_WINDOW_2pixel = 0x00000001,
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_JITTER_FILTERING_WINDOW_3pixel = 0x00000002,
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_JITTER_FILTERING_WINDOW_4pixel = 0x00000003,
} CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_JITTER_FILTERING_WINDOW;

typedef enum CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_VSYNC_POLARITY {
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_VSYNC_POLARITY_FALSE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_VSYNC_POLARITY_TRUE = 0x00000001,
} CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_VSYNC_POLARITY;

typedef enum CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_WINDOW_ENABLE {
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_WINDOW_ENABLE_FALSE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_WINDOW_ENABLE_TRUE = 0x00000001,
} CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_WINDOW_ENABLE;

typedef enum CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_WINDOW_UPDATE {
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_WINDOW_UPDATE_FALSE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_WINDOW_UPDATE_TRUE = 0x00000001,
} CRTC_EXT_TIMING_SYNC_CONTROL_CRTC_EXT_TIMING_SYNC_WINDOW_UPDATE;

typedef enum CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_CLEAR {
    CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_CLEAR_FALSE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_CLEAR_TRUE = 0x00000001,
} CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_CLEAR;

typedef enum CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_INT_ENABLE {
    CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_INT_ENABLE_FALSE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_INT_ENABLE_TRUE = 0x00000001,
} CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_INT_ENABLE;

typedef enum CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_INT_TYPE {
    CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_INT_TYPE_FALSE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_INT_TYPE_TRUE = 0x00000001,
} CRTC_EXT_TIMING_SYNC_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_INT_TYPE;

typedef enum CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_CLEAR {
    CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_CLEAR_FALSE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_CLEAR_TRUE = 0x00000001,
} CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_CLEAR;

typedef enum CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_FRAME_COUNT {
    CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_FRAME_COUNT_1FRAME = 0x00000000,
    CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_FRAME_COUNT_2FRAME = 0x00000001,
    CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_FRAME_COUNT_4FRAME = 0x00000002,
    CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_FRAME_COUNT_8FRAME = 0x00000003,
    CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_FRAME_COUNT_16FRAME = 0x00000004,
    CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_FRAME_COUNT_32FRAME = 0x00000005,
    CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_FRAME_COUNT_64FRAME = 0x00000006,
    CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_FRAME_COUNT_128FRAME = 0x00000007,
} CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_FRAME_COUNT;

typedef enum CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_INT_ENABLE {
    CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_INT_ENABLE_FALSE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_INT_ENABLE_TRUE = 0x00000001,
} CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_INT_ENABLE;

typedef enum CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_INT_TYPE {
    CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_INT_TYPE_FALSE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_INT_TYPE_TRUE = 0x00000001,
} CRTC_EXT_TIMING_SYNC_LOSS_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_LOSS_INT_TYPE;

typedef enum CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_SIGNAL_CLEAR {
    CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_SIGNAL_CLEAR_FALSE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_SIGNAL_CLEAR_TRUE = 0x00000001,
} CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_SIGNAL_CLEAR;

typedef enum CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_SIGNAL_INT_ENABLE {
    CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_SIGNAL_INT_ENABLE_FALSE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_SIGNAL_INT_ENABLE_TRUE = 0x00000001,
} CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_SIGNAL_INT_ENABLE;

typedef enum CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_SIGNAL_INT_TYPE {
    CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_SIGNAL_INT_TYPE_FALSE = 0x00000000,
    CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_SIGNAL_INT_TYPE_TRUE = 0x00000001,
} CRTC_EXT_TIMING_SYNC_SIGNAL_INTERRUPT_CONTROL_CRTC_EXT_TIMING_SYNC_SIGNAL_INT_TYPE;

typedef enum CRTC_FIELD_INDICATION_CONTROL_CRTC_FIELD_ALIGNMENT {
    CRTC_FIELD_INDICATION_CONTROL_CRTC_FIELD_ALIGNMENT_FALSE = 0x00000000,
    CRTC_FIELD_INDICATION_CONTROL_CRTC_FIELD_ALIGNMENT_TRUE = 0x00000001,
} CRTC_FIELD_INDICATION_CONTROL_CRTC_FIELD_ALIGNMENT;

typedef enum CRTC_FIELD_INDICATION_CONTROL_CRTC_FIELD_INDICATION_OUTPUT_POLARITY {
    CRTC_FIELD_INDICATION_CONTROL_CRTC_FIELD_INDICATION_OUTPUT_POLARITY_FALSE = 0x00000000,
    CRTC_FIELD_INDICATION_CONTROL_CRTC_FIELD_INDICATION_OUTPUT_POLARITY_TRUE = 0x00000001,
} CRTC_FIELD_INDICATION_CONTROL_CRTC_FIELD_INDICATION_OUTPUT_POLARITY;

typedef enum CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_GRANULARITY {
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_GRANULARITY_FALSE = 0x00000000,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_GRANULARITY_TRUE = 0x00000001,
} CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_GRANULARITY;

typedef enum CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_POLARITY {
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_POLARITY_FALSE = 0x00000000,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_POLARITY_TRUE  = 0x00000001,
} CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_POLARITY;

typedef enum CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT {
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT_LOGIC0 = 0x00000000,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT_GENERICF = 0x00000001,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT_GENERICE = 0x00000002,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT_HPD1 = 0x00000003,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT_HPD2 = 0x00000004,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT_DDC1DATA = 0x00000005,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT_DDC1CLK = 0x00000006,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT_DDC2DATA = 0x00000007,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT_DDC2CLK = 0x00000008,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT_DVOCLK = 0x00000009,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT_MANUAL = 0x0000000a,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT_LOGIC1 = 0x0000000b,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT_GENERICB = 0x0000000c,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT_GENERICA = 0x0000000d,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT_GENERICD = 0x0000000e,
    CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT_GENERICC = 0x0000000f,
} CRTC_FLOW_CONTROL_CRTC_FLOW_CONTROL_SOURCE_SELECT;

typedef enum CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_CHECK {
    CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_CHECK_FALSE = 0x00000000,
    CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_CHECK_TRUE = 0x00000001,
} CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_CHECK;

typedef enum CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_CLEAR {
    CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_CLEAR_FALSE = 0x00000000,
    CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_CLEAR_TRUE = 0x00000001,
} CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_CLEAR;

typedef enum CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_MODE {
    CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_MODE_DISABLE = 0x00000000,
    CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_MODE_HCOUNT = 0x00000001,
    CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_MODE_HCOUNT_VCOUNT = 0x00000002,
    CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_MODE_RESERVED = 0x00000003,
} CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_MODE;

typedef enum CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_TRIG_SEL {
    CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_TRIG_SEL_FALSE = 0x00000000,
    CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_TRIG_SEL_TRUE = 0x00000001,
} CRTC_FORCE_COUNT_NOW_CNTL_CRTC_FORCE_COUNT_NOW_TRIG_SEL;

typedef enum CRTC_HORZ_REPETITION_COUNT {
    CRTC_HORZ_REPETITION_COUNT_0                       = 0x00000000,
    CRTC_HORZ_REPETITION_COUNT_1                       = 0x00000001,
    CRTC_HORZ_REPETITION_COUNT_2                       = 0x00000002,
    CRTC_HORZ_REPETITION_COUNT_3                       = 0x00000003,
    CRTC_HORZ_REPETITION_COUNT_4                       = 0x00000004,
    CRTC_HORZ_REPETITION_COUNT_5                       = 0x00000005,
    CRTC_HORZ_REPETITION_COUNT_6                       = 0x00000006,
    CRTC_HORZ_REPETITION_COUNT_7                       = 0x00000007,
    CRTC_HORZ_REPETITION_COUNT_8                       = 0x00000008,
    CRTC_HORZ_REPETITION_COUNT_9                       = 0x00000009,
    CRTC_HORZ_REPETITION_COUNT_10                      = 0x0000000a,
    CRTC_HORZ_REPETITION_COUNT_11                      = 0x0000000b,
    CRTC_HORZ_REPETITION_COUNT_12                      = 0x0000000c,
    CRTC_HORZ_REPETITION_COUNT_13                      = 0x0000000d,
    CRTC_HORZ_REPETITION_COUNT_14                      = 0x0000000e,
    CRTC_HORZ_REPETITION_COUNT_15                      = 0x0000000f,
} CRTC_HORZ_REPETITION_COUNT;

typedef enum CRTC_H_SYNC_A_POL {
    CRTC_H_SYNC_A_POL_HIGH                             = 0x00000000,
    CRTC_H_SYNC_A_POL_LOW                              = 0x00000001,
} CRTC_H_SYNC_A_POL;

typedef enum CRTC_H_SYNC_B_CNTL_CRTC_H_SYNC_B_POL {
    CRTC_H_SYNC_B_CNTL_CRTC_H_SYNC_B_POL_FALSE         = 0x00000000,
    CRTC_H_SYNC_B_CNTL_CRTC_H_SYNC_B_POL_TRUE          = 0x00000001,
} CRTC_H_SYNC_B_CNTL_CRTC_H_SYNC_B_POL;

typedef enum CRTC_INTERLACE_CONTROL_CRTC_INTERLACE_ENABLE {
    CRTC_INTERLACE_CONTROL_CRTC_INTERLACE_ENABLE_FALSE = 0x00000000,
    CRTC_INTERLACE_CONTROL_CRTC_INTERLACE_ENABLE_TRUE  = 0x00000001,
} CRTC_INTERLACE_CONTROL_CRTC_INTERLACE_ENABLE;

typedef enum CRTC_INTERLACE_CONTROL_CRTC_INTERLACE_FORCE_NEXT_FIELD {
    CRTC_INTERLACE_CONTROL_CRTC_INTERLACE_FORCE_NEXT_FIELD_NOT = 0x00000000,
    CRTC_INTERLACE_CONTROL_CRTC_INTERLACE_FORCE_NEXT_FIELD_ODD = 0x00000001,
    CRTC_INTERLACE_CONTROL_CRTC_INTERLACE_FORCE_NEXT_FIELD_EVEN = 0x00000002,
    CRTC_INTERLACE_CONTROL_CRTC_INTERLACE_FORCE_NEXT_FIELD_NOT2 = 0x00000003,
} CRTC_INTERLACE_CONTROL_CRTC_INTERLACE_FORCE_NEXT_FIELD;

typedef enum CRTC_INTERRUPT_CONTROL_CRTC_FORCE_COUNT_NOW_INT_MSK {
    CRTC_INTERRUPT_CONTROL_CRTC_FORCE_COUNT_NOW_INT_MSK_FALSE = 0x00000000,
    CRTC_INTERRUPT_CONTROL_CRTC_FORCE_COUNT_NOW_INT_MSK_TRUE = 0x00000001,
} CRTC_INTERRUPT_CONTROL_CRTC_FORCE_COUNT_NOW_INT_MSK;

typedef enum CRTC_INTERRUPT_CONTROL_CRTC_FORCE_COUNT_NOW_INT_TYPE {
    CRTC_INTERRUPT_CONTROL_CRTC_FORCE_COUNT_NOW_INT_TYPE_FALSE = 0x00000000,
    CRTC_INTERRUPT_CONTROL_CRTC_FORCE_COUNT_NOW_INT_TYPE_TRUE = 0x00000001,
} CRTC_INTERRUPT_CONTROL_CRTC_FORCE_COUNT_NOW_INT_TYPE;

typedef enum CRTC_INTERRUPT_CONTROL_CRTC_FORCE_VSYNC_NEXT_LINE_INT_MSK {
    CRTC_INTERRUPT_CONTROL_CRTC_FORCE_VSYNC_NEXT_LINE_INT_MSK_FALSE = 0x00000000,
    CRTC_INTERRUPT_CONTROL_CRTC_FORCE_VSYNC_NEXT_LINE_INT_MSK_TRUE = 0x00000001,
} CRTC_INTERRUPT_CONTROL_CRTC_FORCE_VSYNC_NEXT_LINE_INT_MSK;

typedef enum CRTC_INTERRUPT_CONTROL_CRTC_FORCE_VSYNC_NEXT_LINE_INT_TYPE {
    CRTC_INTERRUPT_CONTROL_CRTC_FORCE_VSYNC_NEXT_LINE_INT_TYPE_FALSE = 0x00000000,
    CRTC_INTERRUPT_CONTROL_CRTC_FORCE_VSYNC_NEXT_LINE_INT_TYPE_TRUE = 0x00000001,
} CRTC_INTERRUPT_CONTROL_CRTC_FORCE_VSYNC_NEXT_LINE_INT_TYPE;

typedef enum CRTC_INTERRUPT_CONTROL_CRTC_GSL_VSYNC_GAP_INT_MSK {
    CRTC_INTERRUPT_CONTROL_CRTC_GSL_VSYNC_GAP_INT_MSK_FALSE = 0x00000000,
    CRTC_INTERRUPT_CONTROL_CRTC_GSL_VSYNC_GAP_INT_MSK_TRUE = 0x00000001,
} CRTC_INTERRUPT_CONTROL_CRTC_GSL_VSYNC_GAP_INT_MSK;

typedef enum CRTC_INTERRUPT_CONTROL_CRTC_GSL_VSYNC_GAP_INT_TYPE {
    CRTC_INTERRUPT_CONTROL_CRTC_GSL_VSYNC_GAP_INT_TYPE_FALSE = 0x00000000,
    CRTC_INTERRUPT_CONTROL_CRTC_GSL_VSYNC_GAP_INT_TYPE_TRUE = 0x00000001,
} CRTC_INTERRUPT_CONTROL_CRTC_GSL_VSYNC_GAP_INT_TYPE;

typedef enum CRTC_INTERRUPT_CONTROL_CRTC_SNAPSHOT_INT_MSK {
    CRTC_INTERRUPT_CONTROL_CRTC_SNAPSHOT_INT_MSK_FALSE = 0x00000000,
    CRTC_INTERRUPT_CONTROL_CRTC_SNAPSHOT_INT_MSK_TRUE  = 0x00000001,
} CRTC_INTERRUPT_CONTROL_CRTC_SNAPSHOT_INT_MSK;

typedef enum CRTC_INTERRUPT_CONTROL_CRTC_SNAPSHOT_INT_TYPE {
    CRTC_INTERRUPT_CONTROL_CRTC_SNAPSHOT_INT_TYPE_FALSE = 0x00000000,
    CRTC_INTERRUPT_CONTROL_CRTC_SNAPSHOT_INT_TYPE_TRUE = 0x00000001,
} CRTC_INTERRUPT_CONTROL_CRTC_SNAPSHOT_INT_TYPE;

typedef enum CRTC_INTERRUPT_CONTROL_CRTC_TRIGA_INT_MSK {
    CRTC_INTERRUPT_CONTROL_CRTC_TRIGA_INT_MSK_FALSE    = 0x00000000,
    CRTC_INTERRUPT_CONTROL_CRTC_TRIGA_INT_MSK_TRUE     = 0x00000001,
} CRTC_INTERRUPT_CONTROL_CRTC_TRIGA_INT_MSK;

typedef enum CRTC_INTERRUPT_CONTROL_CRTC_TRIGA_INT_TYPE {
    CRTC_INTERRUPT_CONTROL_CRTC_TRIGA_INT_TYPE_FALSE   = 0x00000000,
    CRTC_INTERRUPT_CONTROL_CRTC_TRIGA_INT_TYPE_TRUE    = 0x00000001,
} CRTC_INTERRUPT_CONTROL_CRTC_TRIGA_INT_TYPE;

typedef enum CRTC_INTERRUPT_CONTROL_CRTC_TRIGB_INT_MSK {
    CRTC_INTERRUPT_CONTROL_CRTC_TRIGB_INT_MSK_FALSE    = 0x00000000,
    CRTC_INTERRUPT_CONTROL_CRTC_TRIGB_INT_MSK_TRUE     = 0x00000001,
} CRTC_INTERRUPT_CONTROL_CRTC_TRIGB_INT_MSK;

typedef enum CRTC_INTERRUPT_CONTROL_CRTC_TRIGB_INT_TYPE {
    CRTC_INTERRUPT_CONTROL_CRTC_TRIGB_INT_TYPE_FALSE   = 0x00000000,
    CRTC_INTERRUPT_CONTROL_CRTC_TRIGB_INT_TYPE_TRUE    = 0x00000001,
} CRTC_INTERRUPT_CONTROL_CRTC_TRIGB_INT_TYPE;

typedef enum CRTC_INTERRUPT_CONTROL_CRTC_VSYNC_NOM_INT_MSK {
    CRTC_INTERRUPT_CONTROL_CRTC_VSYNC_NOM_INT_MSK_FALSE = 0x00000000,
    CRTC_INTERRUPT_CONTROL_CRTC_VSYNC_NOM_INT_MSK_TRUE = 0x00000001,
} CRTC_INTERRUPT_CONTROL_CRTC_VSYNC_NOM_INT_MSK;

typedef enum CRTC_INTERRUPT_CONTROL_CRTC_VSYNC_NOM_INT_TYPE {
    CRTC_INTERRUPT_CONTROL_CRTC_VSYNC_NOM_INT_TYPE_FALSE = 0x00000000,
    CRTC_INTERRUPT_CONTROL_CRTC_VSYNC_NOM_INT_TYPE_TRUE = 0x00000001,
} CRTC_INTERRUPT_CONTROL_CRTC_VSYNC_NOM_INT_TYPE;

typedef enum CRTC_INTERRUPT_CONTROL_CRTC_V_UPDATE_INT_MSK {
    CRTC_INTERRUPT_CONTROL_CRTC_V_UPDATE_INT_MSK_FALSE = 0x00000000,
    CRTC_INTERRUPT_CONTROL_CRTC_V_UPDATE_INT_MSK_TRUE  = 0x00000001,
} CRTC_INTERRUPT_CONTROL_CRTC_V_UPDATE_INT_MSK;

typedef enum CRTC_INTERRUPT_CONTROL_CRTC_V_UPDATE_INT_TYPE {
    CRTC_INTERRUPT_CONTROL_CRTC_V_UPDATE_INT_TYPE_FALSE = 0x00000000,
    CRTC_INTERRUPT_CONTROL_CRTC_V_UPDATE_INT_TYPE_TRUE = 0x00000001,
} CRTC_INTERRUPT_CONTROL_CRTC_V_UPDATE_INT_TYPE;

typedef enum CRTC_MANUAL_FORCE_VSYNC_NEXT_LINE_CRTC_MANUAL_FORCE_VSYNC_NEXT_LINE {
    CRTC_MANUAL_FORCE_VSYNC_NEXT_LINE_CRTC_MANUAL_FORCE_VSYNC_NEXT_LINE_FALSE = 0x00000000,
    CRTC_MANUAL_FORCE_VSYNC_NEXT_LINE_CRTC_MANUAL_FORCE_VSYNC_NEXT_LINE_TRUE = 0x00000001,
} CRTC_MANUAL_FORCE_VSYNC_NEXT_LINE_CRTC_MANUAL_FORCE_VSYNC_NEXT_LINE;

typedef enum CRTC_MVP_INBAND_CNTL_INSERT_CRTC_MVP_INBAND_OUT_MODE {
    CRTC_MVP_INBAND_CNTL_INSERT_CRTC_MVP_INBAND_OUT_MODE_DISABLE = 0x00000000,
    CRTC_MVP_INBAND_CNTL_INSERT_CRTC_MVP_INBAND_OUT_MODE_DEBUG = 0x00000001,
    CRTC_MVP_INBAND_CNTL_INSERT_CRTC_MVP_INBAND_OUT_MODE_NORMAL = 0x00000002,
} CRTC_MVP_INBAND_CNTL_INSERT_CRTC_MVP_INBAND_OUT_MODE;

typedef enum CRTC_MVP_STATUS_CRTC_AFR_HSYNC_SWITCH_DONE_CLEAR {
    CRTC_MVP_STATUS_CRTC_AFR_HSYNC_SWITCH_DONE_CLEAR_FALSE = 0x00000000,
    CRTC_MVP_STATUS_CRTC_AFR_HSYNC_SWITCH_DONE_CLEAR_TRUE = 0x00000001,
} CRTC_MVP_STATUS_CRTC_AFR_HSYNC_SWITCH_DONE_CLEAR;

typedef enum CRTC_MVP_STATUS_CRTC_FLIP_NOW_CLEAR {
    CRTC_MVP_STATUS_CRTC_FLIP_NOW_CLEAR_FALSE          = 0x00000000,
    CRTC_MVP_STATUS_CRTC_FLIP_NOW_CLEAR_TRUE           = 0x00000001,
} CRTC_MVP_STATUS_CRTC_FLIP_NOW_CLEAR;

typedef enum CRTC_SNAPSHOT_CONTROL_CRTC_AUTO_SNAPSHOT_TRIG_SEL {
    CRTC_SNAPSHOT_CONTROL_CRTC_AUTO_SNAPSHOT_TRIG_SEL_DISABLE = 0x00000000,
    CRTC_SNAPSHOT_CONTROL_CRTC_AUTO_SNAPSHOT_TRIG_SEL_TRIGGERA = 0x00000001,
    CRTC_SNAPSHOT_CONTROL_CRTC_AUTO_SNAPSHOT_TRIG_SEL_TRIGGERB = 0x00000002,
    CRTC_SNAPSHOT_CONTROL_CRTC_AUTO_SNAPSHOT_TRIG_SEL_RESERVED = 0x00000003,
} CRTC_SNAPSHOT_CONTROL_CRTC_AUTO_SNAPSHOT_TRIG_SEL;

typedef enum CRTC_SNAPSHOT_STATUS_CRTC_SNAPSHOT_CLEAR {
    CRTC_SNAPSHOT_STATUS_CRTC_SNAPSHOT_CLEAR_FALSE     = 0x00000000,
    CRTC_SNAPSHOT_STATUS_CRTC_SNAPSHOT_CLEAR_TRUE      = 0x00000001,
} CRTC_SNAPSHOT_STATUS_CRTC_SNAPSHOT_CLEAR;

typedef enum CRTC_START_LINE_CONTROL_CRTC_INTERLACE_START_LINE_EARLY {
    CRTC_START_LINE_CONTROL_CRTC_INTERLACE_START_LINE_EARLY_FALSE = 0x00000000,
    CRTC_START_LINE_CONTROL_CRTC_INTERLACE_START_LINE_EARLY_TRUE = 0x00000001,
} CRTC_START_LINE_CONTROL_CRTC_INTERLACE_START_LINE_EARLY;

typedef enum CRTC_START_LINE_CONTROL_CRTC_LEGACY_REQUESTOR_EN {
    CRTC_START_LINE_CONTROL_CRTC_LEGACY_REQUESTOR_EN_FALSE = 0x00000000,
    CRTC_START_LINE_CONTROL_CRTC_LEGACY_REQUESTOR_EN_TRUE = 0x00000001,
} CRTC_START_LINE_CONTROL_CRTC_LEGACY_REQUESTOR_EN;

typedef enum CRTC_START_LINE_CONTROL_CRTC_PREFETCH_EN {
    CRTC_START_LINE_CONTROL_CRTC_PREFETCH_EN_FALSE     = 0x00000000,
    CRTC_START_LINE_CONTROL_CRTC_PREFETCH_EN_TRUE      = 0x00000001,
} CRTC_START_LINE_CONTROL_CRTC_PREFETCH_EN;

typedef enum CRTC_START_LINE_CONTROL_CRTC_PROGRESSIVE_START_LINE_EARLY {
    CRTC_START_LINE_CONTROL_CRTC_PROGRESSIVE_START_LINE_EARLY_FALSE = 0x00000000,
    CRTC_START_LINE_CONTROL_CRTC_PROGRESSIVE_START_LINE_EARLY_TRUE = 0x00000001,
} CRTC_START_LINE_CONTROL_CRTC_PROGRESSIVE_START_LINE_EARLY;

typedef enum CRTC_STATIC_SCREEN_CONTROL_CRTC_CPU_SS_INT_CLEAR {
    CRTC_STATIC_SCREEN_CONTROL_CRTC_CPU_SS_INT_CLEAR_FALSE = 0x00000000,
    CRTC_STATIC_SCREEN_CONTROL_CRTC_CPU_SS_INT_CLEAR_TRUE = 0x00000001,
} CRTC_STATIC_SCREEN_CONTROL_CRTC_CPU_SS_INT_CLEAR;

typedef enum CRTC_STATIC_SCREEN_CONTROL_CRTC_CPU_SS_INT_ENABLE {
    CRTC_STATIC_SCREEN_CONTROL_CRTC_CPU_SS_INT_ENABLE_FALSE = 0x00000000,
    CRTC_STATIC_SCREEN_CONTROL_CRTC_CPU_SS_INT_ENABLE_TRUE = 0x00000001,
} CRTC_STATIC_SCREEN_CONTROL_CRTC_CPU_SS_INT_ENABLE;

typedef enum CRTC_STATIC_SCREEN_CONTROL_CRTC_CPU_SS_INT_TYPE {
    CRTC_STATIC_SCREEN_CONTROL_CRTC_CPU_SS_INT_TYPE_FALSE = 0x00000000,
    CRTC_STATIC_SCREEN_CONTROL_CRTC_CPU_SS_INT_TYPE_TRUE = 0x00000001,
} CRTC_STATIC_SCREEN_CONTROL_CRTC_CPU_SS_INT_TYPE;

typedef enum CRTC_STATIC_SCREEN_CONTROL_CRTC_STATIC_SCREEN_OVERRIDE {
    CRTC_STATIC_SCREEN_CONTROL_CRTC_STATIC_SCREEN_OVERRIDE_FALSE = 0x00000000,
    CRTC_STATIC_SCREEN_CONTROL_CRTC_STATIC_SCREEN_OVERRIDE_TRUE = 0x00000001,
} CRTC_STATIC_SCREEN_CONTROL_CRTC_STATIC_SCREEN_OVERRIDE;

typedef enum CRTC_STATIC_SCREEN_CONTROL_CRTC_STATIC_SCREEN_OVERRIDE_VALUE {
    CRTC_STATIC_SCREEN_CONTROL_CRTC_STATIC_SCREEN_OVERRIDE_VALUE_OFF = 0x00000000,
    CRTC_STATIC_SCREEN_CONTROL_CRTC_STATIC_SCREEN_OVERRIDE_VALUE_ON = 0x00000001,
} CRTC_STATIC_SCREEN_CONTROL_CRTC_STATIC_SCREEN_OVERRIDE_VALUE;

typedef enum CRTC_STEREO_CONTROL_CRTC_STEREO_EN {
    CRTC_STEREO_CONTROL_CRTC_STEREO_EN_FALSE           = 0x00000000,
    CRTC_STEREO_CONTROL_CRTC_STEREO_EN_TRUE            = 0x00000001,
} CRTC_STEREO_CONTROL_CRTC_STEREO_EN;

typedef enum CRTC_STEREO_CONTROL_CRTC_STEREO_EYE_FLAG_POLARITY {
    CRTC_STEREO_CONTROL_CRTC_STEREO_EYE_FLAG_POLARITY_FALSE = 0x00000000,
    CRTC_STEREO_CONTROL_CRTC_STEREO_EYE_FLAG_POLARITY_TRUE = 0x00000001,
} CRTC_STEREO_CONTROL_CRTC_STEREO_EYE_FLAG_POLARITY;

typedef enum CRTC_STEREO_CONTROL_CRTC_STEREO_SYNC_OUTPUT_POLARITY {
    CRTC_STEREO_CONTROL_CRTC_STEREO_SYNC_OUTPUT_POLARITY_FALSE = 0x00000000,
    CRTC_STEREO_CONTROL_CRTC_STEREO_SYNC_OUTPUT_POLARITY_TRUE = 0x00000001,
} CRTC_STEREO_CONTROL_CRTC_STEREO_SYNC_OUTPUT_POLARITY;

typedef enum CRTC_STEREO_CONTROL_CRTC_STEREO_SYNC_SELECT_POLARITY {
    CRTC_STEREO_CONTROL_CRTC_STEREO_SYNC_SELECT_POLARITY_FALSE = 0x00000000,
    CRTC_STEREO_CONTROL_CRTC_STEREO_SYNC_SELECT_POLARITY_TRUE = 0x00000001,
} CRTC_STEREO_CONTROL_CRTC_STEREO_SYNC_SELECT_POLARITY;

typedef enum CRTC_STEREO_FORCE_NEXT_EYE_CRTC_STEREO_FORCE_NEXT_EYE {
    CRTC_STEREO_FORCE_NEXT_EYE_CRTC_STEREO_FORCE_NEXT_EYE_NO = 0x00000000,
    CRTC_STEREO_FORCE_NEXT_EYE_CRTC_STEREO_FORCE_NEXT_EYE_RIGHT = 0x00000001,
    CRTC_STEREO_FORCE_NEXT_EYE_CRTC_STEREO_FORCE_NEXT_EYE_LEFT = 0x00000002,
    CRTC_STEREO_FORCE_NEXT_EYE_CRTC_STEREO_FORCE_NEXT_EYE_RESERVED = 0x00000003,
} CRTC_STEREO_FORCE_NEXT_EYE_CRTC_STEREO_FORCE_NEXT_EYE;

typedef enum CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_COLOR_FORMAT {
    CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_COLOR_FORMAT_6BPC = 0x00000000,
    CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_COLOR_FORMAT_8BPC = 0x00000001,
    CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_COLOR_FORMAT_10BPC = 0x00000002,
    CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_COLOR_FORMAT_RESERVED = 0x00000003,
} CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_COLOR_FORMAT;

typedef enum CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_DYNAMIC_RANGE {
    CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_DYNAMIC_RANGE_FALSE = 0x00000000,
    CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_DYNAMIC_RANGE_TRUE = 0x00000001,
} CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_DYNAMIC_RANGE;

typedef enum CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_EN {
    CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_EN_FALSE = 0x00000000,
    CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_EN_TRUE = 0x00000001,
} CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_EN;

typedef enum CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_MODE {
    CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_MODE_RGB = 0x00000000,
    CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_MODE_YCBCR601 = 0x00000001,
    CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_MODE_YCBCR709 = 0x00000002,
    CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_MODE_VBARS = 0x00000003,
    CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_MODE_HBARS = 0x00000004,
    CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_MODE_SRRGB = 0x00000005,
    CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_MODE_DRRGB = 0x00000006,
    CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_MODE_XRBIAS = 0x00000007,
} CRTC_TEST_PATTERN_CONTROL_CRTC_TEST_PATTERN_MODE;

typedef enum CRTC_TRIGA_CNTL_CRTC_TRIGA_CLEAR {
    CRTC_TRIGA_CNTL_CRTC_TRIGA_CLEAR_FALSE             = 0x00000000,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_CLEAR_TRUE              = 0x00000001,
} CRTC_TRIGA_CNTL_CRTC_TRIGA_CLEAR;

typedef enum CRTC_TRIGA_CNTL_CRTC_TRIGA_POLARITY_SELECT {
    CRTC_TRIGA_CNTL_CRTC_TRIGA_POLARITY_SELECT_INTERLACE = 0x00000001,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_POLARITY_SELECT_GENERICA = 0x00000002,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_POLARITY_SELECT_GENERICB = 0x00000003,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_POLARITY_SELECT_HSYNCA  = 0x00000004,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_POLARITY_SELECT_HSYNCB  = 0x00000005,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_POLARITY_SELECT_VIDEO   = 0x00000006,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_POLARITY_SELECT_GENERICC = 0x00000007,
} CRTC_TRIGA_CNTL_CRTC_TRIGA_POLARITY_SELECT;

typedef enum CRTC_TRIGA_CNTL_CRTC_TRIGA_RESYNC_BYPASS_EN {
    CRTC_TRIGA_CNTL_CRTC_TRIGA_RESYNC_BYPASS_EN_FALSE  = 0x00000000,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_RESYNC_BYPASS_EN_TRUE   = 0x00000001,
} CRTC_TRIGA_CNTL_CRTC_TRIGA_RESYNC_BYPASS_EN;

typedef enum CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT {
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_VSYNCA_OTHER = 0x00000001,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_HSYNCA_OTHER = 0x00000002,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_GENERICF  = 0x00000005,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_GENERICE  = 0x00000006,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_VSYNCA    = 0x00000007,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_HSYNCA    = 0x00000008,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_VSYNCB    = 0x00000009,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_HSYNCB    = 0x0000000a,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_HPD1      = 0x0000000b,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_HPD2      = 0x0000000c,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_GENERICD  = 0x0000000d,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_GENERICC  = 0x0000000e,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_IGSL0     = 0x00000010,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_IGSL1     = 0x00000011,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_IGSL2     = 0x00000012,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_IBLON     = 0x00000013,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_GENERICA  = 0x00000014,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_GENERICB  = 0x00000015,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_IGSL_ALLOW = 0x00000016,
    CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT_MANUAL_FLOW = 0x00000017,
} CRTC_TRIGA_CNTL_CRTC_TRIGA_SOURCE_SELECT;

typedef enum CRTC_TRIGB_CNTL_CRTC_TRIGB_CLEAR {
    CRTC_TRIGB_CNTL_CRTC_TRIGB_CLEAR_FALSE             = 0x00000000,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_CLEAR_TRUE              = 0x00000001,
} CRTC_TRIGB_CNTL_CRTC_TRIGB_CLEAR;

typedef enum CRTC_TRIGB_CNTL_CRTC_TRIGB_POLARITY_SELECT {
    CRTC_TRIGB_CNTL_CRTC_TRIGB_POLARITY_SELECT_INTERLACE = 0x00000001,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_POLARITY_SELECT_GENERICA = 0x00000002,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_POLARITY_SELECT_GENERICB = 0x00000003,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_POLARITY_SELECT_HSYNCA  = 0x00000004,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_POLARITY_SELECT_HSYNCB  = 0x00000005,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_POLARITY_SELECT_VIDEO   = 0x00000006,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_POLARITY_SELECT_GENERICC = 0x00000007,
} CRTC_TRIGB_CNTL_CRTC_TRIGB_POLARITY_SELECT;

typedef enum CRTC_TRIGB_CNTL_CRTC_TRIGB_RESYNC_BYPASS_EN {
    CRTC_TRIGB_CNTL_CRTC_TRIGB_RESYNC_BYPASS_EN_FALSE  = 0x00000000,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_RESYNC_BYPASS_EN_TRUE   = 0x00000001,
} CRTC_TRIGB_CNTL_CRTC_TRIGB_RESYNC_BYPASS_EN;

typedef enum CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT {
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_VSYNCA_OTHER = 0x00000001,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_HSYNCA_OTHER = 0x00000002,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_GENERICF  = 0x00000005,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_GENERICE  = 0x00000006,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_VSYNCA    = 0x00000007,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_HSYNCA    = 0x00000008,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_VSYNCB    = 0x00000009,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_HSYNCB    = 0x0000000a,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_HPD1      = 0x0000000b,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_HPD2      = 0x0000000c,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_GENERICD  = 0x0000000d,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_GENERICC  = 0x0000000e,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_IGSL0     = 0x00000010,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_IGSL1     = 0x00000011,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_IGSL2     = 0x00000012,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_IBLON     = 0x00000013,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_GENERICA  = 0x00000014,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_GENERICB  = 0x00000015,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_IGSL_ALLOW = 0x00000016,
    CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT_MANUAL_FLOW = 0x00000017,
} CRTC_TRIGB_CNTL_CRTC_TRIGB_SOURCE_SELECT;

typedef enum CRTC_UPDATE_LOCK_CRTC_UPDATE_LOCK {
    CRTC_UPDATE_LOCK_CRTC_UPDATE_LOCK_FALSE            = 0x00000000,
    CRTC_UPDATE_LOCK_CRTC_UPDATE_LOCK_TRUE             = 0x00000001,
} CRTC_UPDATE_LOCK_CRTC_UPDATE_LOCK;

typedef enum CRTC_VERTICAL_INTERRUPT0_CONTROL_CRTC_VERTICAL_INTERRUPT0_CLEAR {
    CRTC_VERTICAL_INTERRUPT0_CONTROL_CRTC_VERTICAL_INTERRUPT0_CLEAR_FALSE = 0x00000000,
    CRTC_VERTICAL_INTERRUPT0_CONTROL_CRTC_VERTICAL_INTERRUPT0_CLEAR_TRUE = 0x00000001,
} CRTC_VERTICAL_INTERRUPT0_CONTROL_CRTC_VERTICAL_INTERRUPT0_CLEAR;

typedef enum CRTC_VERTICAL_INTERRUPT0_CONTROL_CRTC_VERTICAL_INTERRUPT0_INT_ENABLE {
    CRTC_VERTICAL_INTERRUPT0_CONTROL_CRTC_VERTICAL_INTERRUPT0_INT_ENABLE_FALSE = 0x00000000,
    CRTC_VERTICAL_INTERRUPT0_CONTROL_CRTC_VERTICAL_INTERRUPT0_INT_ENABLE_TRUE = 0x00000001,
} CRTC_VERTICAL_INTERRUPT0_CONTROL_CRTC_VERTICAL_INTERRUPT0_INT_ENABLE;

typedef enum CRTC_VERTICAL_INTERRUPT0_CONTROL_CRTC_VERTICAL_INTERRUPT0_INT_TYPE {
    CRTC_VERTICAL_INTERRUPT0_CONTROL_CRTC_VERTICAL_INTERRUPT0_INT_TYPE_FALSE = 0x00000000,
    CRTC_VERTICAL_INTERRUPT0_CONTROL_CRTC_VERTICAL_INTERRUPT0_INT_TYPE_TRUE = 0x00000001,
} CRTC_VERTICAL_INTERRUPT0_CONTROL_CRTC_VERTICAL_INTERRUPT0_INT_TYPE;

typedef enum CRTC_VERTICAL_INTERRUPT0_CONTROL_CRTC_VERTICAL_INTERRUPT0_OUTPUT_POLARITY {
    CRTC_VERTICAL_INTERRUPT0_CONTROL_CRTC_VERTICAL_INTERRUPT0_OUTPUT_POLARITY_FALSE = 0x00000000,
    CRTC_VERTICAL_INTERRUPT0_CONTROL_CRTC_VERTICAL_INTERRUPT0_OUTPUT_POLARITY_TRUE = 0x00000001,
} CRTC_VERTICAL_INTERRUPT0_CONTROL_CRTC_VERTICAL_INTERRUPT0_OUTPUT_POLARITY;

typedef enum CRTC_VERTICAL_INTERRUPT1_CONTROL_CRTC_VERTICAL_INTERRUPT1_CLEAR {
    CRTC_VERTICAL_INTERRUPT1_CONTROL_CRTC_VERTICAL_INTERRUPT1_CLEAR_CLEAR_FALSE = 0x00000000,
    CRTC_VERTICAL_INTERRUPT1_CONTROL_CRTC_VERTICAL_INTERRUPT1_CLEAR_TRUE = 0x00000001,
} CRTC_VERTICAL_INTERRUPT1_CONTROL_CRTC_VERTICAL_INTERRUPT1_CLEAR;

typedef enum CRTC_VERTICAL_INTERRUPT1_CONTROL_CRTC_VERTICAL_INTERRUPT1_INT_ENABLE {
    CRTC_VERTICAL_INTERRUPT1_CONTROL_CRTC_VERTICAL_INTERRUPT1_INT_ENABLE_FALSE = 0x00000000,
    CRTC_VERTICAL_INTERRUPT1_CONTROL_CRTC_VERTICAL_INTERRUPT1_INT_ENABLE_TRUE = 0x00000001,
} CRTC_VERTICAL_INTERRUPT1_CONTROL_CRTC_VERTICAL_INTERRUPT1_INT_ENABLE;

typedef enum CRTC_VERTICAL_INTERRUPT1_CONTROL_CRTC_VERTICAL_INTERRUPT1_INT_TYPE {
    CRTC_VERTICAL_INTERRUPT1_CONTROL_CRTC_VERTICAL_INTERRUPT1_INT_TYPE_FALSE = 0x00000000,
    CRTC_VERTICAL_INTERRUPT1_CONTROL_CRTC_VERTICAL_INTERRUPT1_INT_TYPE_TRUE = 0x00000001,
} CRTC_VERTICAL_INTERRUPT1_CONTROL_CRTC_VERTICAL_INTERRUPT1_INT_TYPE;

typedef enum CRTC_VERTICAL_INTERRUPT2_CONTROL_CRTC_VERTICAL_INTERRUPT2_CLEAR {
    CRTC_VERTICAL_INTERRUPT2_CONTROL_CRTC_VERTICAL_INTERRUPT2_CLEAR_CLEAR_FALSE = 0x00000000,
    CRTC_VERTICAL_INTERRUPT2_CONTROL_CRTC_VERTICAL_INTERRUPT2_CLEAR_TRUE = 0x00000001,
} CRTC_VERTICAL_INTERRUPT2_CONTROL_CRTC_VERTICAL_INTERRUPT2_CLEAR;

typedef enum CRTC_VERTICAL_INTERRUPT2_CONTROL_CRTC_VERTICAL_INTERRUPT2_INT_ENABLE {
    CRTC_VERTICAL_INTERRUPT2_CONTROL_CRTC_VERTICAL_INTERRUPT2_INT_ENABLE_FALSE = 0x00000000,
    CRTC_VERTICAL_INTERRUPT2_CONTROL_CRTC_VERTICAL_INTERRUPT2_INT_ENABLE_TRUE = 0x00000001,
} CRTC_VERTICAL_INTERRUPT2_CONTROL_CRTC_VERTICAL_INTERRUPT2_INT_ENABLE;

typedef enum CRTC_VERTICAL_INTERRUPT2_CONTROL_CRTC_VERTICAL_INTERRUPT2_INT_TYPE {
    CRTC_VERTICAL_INTERRUPT2_CONTROL_CRTC_VERTICAL_INTERRUPT2_INT_TYPE_FALSE = 0x00000000,
    CRTC_VERTICAL_INTERRUPT2_CONTROL_CRTC_VERTICAL_INTERRUPT2_INT_TYPE_TRUE = 0x00000001,
} CRTC_VERTICAL_INTERRUPT2_CONTROL_CRTC_VERTICAL_INTERRUPT2_INT_TYPE;

typedef enum CRTC_VERT_SYNC_CONTROL_CRTC_AUTO_FORCE_VSYNC_MODE {
    CRTC_VERT_SYNC_CONTROL_CRTC_AUTO_FORCE_VSYNC_MODE_DISABLE = 0x00000000,
    CRTC_VERT_SYNC_CONTROL_CRTC_AUTO_FORCE_VSYNC_MODE_TRIGGERA = 0x00000001,
    CRTC_VERT_SYNC_CONTROL_CRTC_AUTO_FORCE_VSYNC_MODE_TRIGGERB = 0x00000002,
    CRTC_VERT_SYNC_CONTROL_CRTC_AUTO_FORCE_VSYNC_MODE_RESERVED = 0x00000003,
} CRTC_VERT_SYNC_CONTROL_CRTC_AUTO_FORCE_VSYNC_MODE;

typedef enum CRTC_VERT_SYNC_CONTROL_CRTC_FORCE_VSYNC_NEXT_LINE_CLEAR {
    CRTC_VERT_SYNC_CONTROL_CRTC_FORCE_VSYNC_NEXT_LINE_CLEAR_FALSE = 0x00000000,
    CRTC_VERT_SYNC_CONTROL_CRTC_FORCE_VSYNC_NEXT_LINE_CLEAR_TRUE = 0x00000001,
} CRTC_VERT_SYNC_CONTROL_CRTC_FORCE_VSYNC_NEXT_LINE_CLEAR;

typedef enum CRTC_VGA_PARAMETER_CAPTURE_MODE_CRTC_VGA_PARAMETER_CAPTURE_MODE {
    CRTC_VGA_PARAMETER_CAPTURE_MODE_CRTC_VGA_PARAMETER_CAPTURE_MODE_FALSE = 0x00000000,
    CRTC_VGA_PARAMETER_CAPTURE_MODE_CRTC_VGA_PARAMETER_CAPTURE_MODE_TRUE = 0x00000001,
} CRTC_VGA_PARAMETER_CAPTURE_MODE_CRTC_VGA_PARAMETER_CAPTURE_MODE;

typedef enum CRTC_VSYNC_NOM_INT_STATUS_CRTC_VSYNC_NOM_INT_CLEAR {
    CRTC_VSYNC_NOM_INT_STATUS_CRTC_VSYNC_NOM_INT_CLEAR_FALSE = 0x00000000,
    CRTC_VSYNC_NOM_INT_STATUS_CRTC_VSYNC_NOM_INT_CLEAR_TRUE = 0x00000001,
} CRTC_VSYNC_NOM_INT_STATUS_CRTC_VSYNC_NOM_INT_CLEAR;

typedef enum CRTC_V_SYNC_A_POL {
    CRTC_V_SYNC_A_POL_HIGH                             = 0x00000000,
    CRTC_V_SYNC_A_POL_LOW                              = 0x00000001,
} CRTC_V_SYNC_A_POL;

typedef enum CRTC_V_SYNC_B_CNTL_CRTC_V_SYNC_B_POL {
    CRTC_V_SYNC_B_CNTL_CRTC_V_SYNC_B_POL_FALSE         = 0x00000000,
    CRTC_V_SYNC_B_CNTL_CRTC_V_SYNC_B_POL_TRUE          = 0x00000001,
} CRTC_V_SYNC_B_CNTL_CRTC_V_SYNC_B_POL;

typedef enum CRTC_V_TOTAL_CONTROL_CRTC_FORCE_LOCK_ON_EVENT {
    CRTC_V_TOTAL_CONTROL_CRTC_FORCE_LOCK_ON_EVENT_DISABLE = 0x00000000,
    CRTC_V_TOTAL_CONTROL_CRTC_FORCE_LOCK_ON_EVENT_ENABLE = 0x00000001,
} CRTC_V_TOTAL_CONTROL_CRTC_FORCE_LOCK_ON_EVENT;

typedef enum CRTC_V_TOTAL_CONTROL_CRTC_FORCE_LOCK_TO_MASTER_VSYNC {
    CRTC_V_TOTAL_CONTROL_CRTC_FORCE_LOCK_TO_MASTER_VSYNC_DISABLE = 0x00000000,
    CRTC_V_TOTAL_CONTROL_CRTC_FORCE_LOCK_TO_MASTER_VSYNC_ENABLE = 0x00000001,
} CRTC_V_TOTAL_CONTROL_CRTC_FORCE_LOCK_TO_MASTER_VSYNC;

typedef enum CRTC_V_TOTAL_CONTROL_CRTC_SET_V_TOTAL_MIN_MASK_EN {
    CRTC_V_TOTAL_CONTROL_CRTC_SET_V_TOTAL_MIN_MASK_EN_FALSE = 0x00000000,
    CRTC_V_TOTAL_CONTROL_CRTC_SET_V_TOTAL_MIN_MASK_EN_TRUE = 0x00000001,
} CRTC_V_TOTAL_CONTROL_CRTC_SET_V_TOTAL_MIN_MASK_EN;

typedef enum CRTC_V_TOTAL_CONTROL_CRTC_V_TOTAL_MAX_SEL {
    CRTC_V_TOTAL_CONTROL_CRTC_V_TOTAL_MAX_SEL_FALSE    = 0x00000000,
    CRTC_V_TOTAL_CONTROL_CRTC_V_TOTAL_MAX_SEL_TRUE     = 0x00000001,
} CRTC_V_TOTAL_CONTROL_CRTC_V_TOTAL_MAX_SEL;

typedef enum CRTC_V_TOTAL_CONTROL_CRTC_V_TOTAL_MIN_SEL {
    CRTC_V_TOTAL_CONTROL_CRTC_V_TOTAL_MIN_SEL_FALSE    = 0x00000000,
    CRTC_V_TOTAL_CONTROL_CRTC_V_TOTAL_MIN_SEL_TRUE     = 0x00000001,
} CRTC_V_TOTAL_CONTROL_CRTC_V_TOTAL_MIN_SEL;

typedef enum CRTC_V_TOTAL_INT_STATUS_CRTC_SET_V_TOTAL_MIN_EVENT_OCCURED_ACK {
    CRTC_V_TOTAL_INT_STATUS_CRTC_SET_V_TOTAL_MIN_EVENT_OCCURED_ACK_FALSE = 0x00000000,
    CRTC_V_TOTAL_INT_STATUS_CRTC_SET_V_TOTAL_MIN_EVENT_OCCURED_ACK_TRUE = 0x00000001,
} CRTC_V_TOTAL_INT_STATUS_CRTC_SET_V_TOTAL_MIN_EVENT_OCCURED_ACK;

typedef enum CRTC_V_UPDATE_INT_STATUS_CRTC_V_UPDATE_INT_CLEAR {
    CRTC_V_UPDATE_INT_STATUS_CRTC_V_UPDATE_INT_CLEAR_FALSE = 0x00000000,
    CRTC_V_UPDATE_INT_STATUS_CRTC_V_UPDATE_INT_CLEAR_TRUE = 0x00000001,
} CRTC_V_UPDATE_INT_STATUS_CRTC_V_UPDATE_INT_CLEAR;

typedef enum CSCNTL_TYPE {
    CSCNTL_TYPE_TG                                     = 0x00000000,
    CSCNTL_TYPE_STATE                                  = 0x00000001,
    CSCNTL_TYPE_EVENT                                  = 0x00000002,
    CSCNTL_TYPE_PRIVATE                                = 0x00000003,
} CSCNTL_TYPE;

typedef enum CSDATA_TYPE {
    CSDATA_TYPE_TG                                     = 0x00000000,
    CSDATA_TYPE_STATE                                  = 0x00000001,
    CSDATA_TYPE_EVENT                                  = 0x00000002,
    CSDATA_TYPE_PRIVATE                                = 0x00000003,
} CSDATA_TYPE;

typedef enum DACA_SOFT_RESET {
    DACA_SOFT_RESET_0                                  = 0x00000000,
    DACA_SOFT_RESET_1                                  = 0x00000001,
} DACA_SOFT_RESET;

typedef enum DbMemArbWatermarks {
    TRANSFERRED_64_BYTES                               = 0x00000000,
    TRANSFERRED_128_BYTES                              = 0x00000001,
    TRANSFERRED_256_BYTES                              = 0x00000002,
    TRANSFERRED_512_BYTES                              = 0x00000003,
    TRANSFERRED_1024_BYTES                             = 0x00000004,
    TRANSFERRED_2048_BYTES                             = 0x00000005,
    TRANSFERRED_4096_BYTES                             = 0x00000006,
    TRANSFERRED_8192_BYTES                             = 0x00000007,
} DbMemArbWatermarks;

typedef enum DbPRTFaultBehavior {
    FAULT_ZERO                                         = 0x00000000,
    FAULT_ONE                                          = 0x00000001,
    FAULT_FAIL                                         = 0x00000002,
    FAULT_PASS                                         = 0x00000003,
} DbPRTFaultBehavior;

typedef enum DbPSLControl {
    PSLC_AUTO                                          = 0x00000000,
    PSLC_ON_HANG_ONLY                                  = 0x00000001,
    PSLC_ASAP                                          = 0x00000002,
    PSLC_COUNTDOWN                                     = 0x00000003,
} DbPSLControl;

typedef enum DB_CLK_SOFT_RESET {
    DB_CLK_SOFT_RESET_0                                = 0x00000000,
    DB_CLK_SOFT_RESET_1                                = 0x00000001,
} DB_CLK_SOFT_RESET;

typedef enum DepthArray {
    ARRAY_2D_ALT_DEPTH                                 = 0x00000000,
    ARRAY_2D_DEPTH                                     = 0x00000001,
} DepthArray;

typedef enum DepthFormat {
    DEPTH_INVALID                                      = 0x00000000,
    DEPTH_16                                           = 0x00000001,
    DEPTH_X8_24                                        = 0x00000002,
    DEPTH_8_24                                         = 0x00000003,
    DEPTH_X8_24_FLOAT                                  = 0x00000004,
    DEPTH_8_24_FLOAT                                   = 0x00000005,
    DEPTH_32_FLOAT                                     = 0x00000006,
    DEPTH_X24_8_32_FLOAT                               = 0x00000007,
} DepthFormat;

typedef enum DIGA_BE_SOFT_RESET {
    DIGA_BE_SOFT_RESET_0                               = 0x00000000,
    DIGA_BE_SOFT_RESET_1                               = 0x00000001,
} DIGA_BE_SOFT_RESET;

typedef enum DIGA_FE_SOFT_RESET {
    DIGA_FE_SOFT_RESET_0                               = 0x00000000,
    DIGA_FE_SOFT_RESET_1                               = 0x00000001,
} DIGA_FE_SOFT_RESET;

typedef enum DIGB_BE_SOFT_RESET {
    DIGB_BE_SOFT_RESET_0                               = 0x00000000,
    DIGB_BE_SOFT_RESET_1                               = 0x00000001,
} DIGB_BE_SOFT_RESET;

typedef enum DIGB_FE_SOFT_RESET {
    DIGB_FE_SOFT_RESET_0                               = 0x00000000,
    DIGB_FE_SOFT_RESET_1                               = 0x00000001,
} DIGB_FE_SOFT_RESET;

typedef enum DIGC_BE_SOFT_RESET {
    DIGC_BE_SOFT_RESET_0                               = 0x00000000,
    DIGC_BE_SOFT_RESET_1                               = 0x00000001,
} DIGC_BE_SOFT_RESET;

typedef enum DIGC_FE_SOFT_RESET {
    DIGC_FE_SOFT_RESET_0                               = 0x00000000,
    DIGC_FE_SOFT_RESET_1                               = 0x00000001,
} DIGC_FE_SOFT_RESET;

typedef enum DIGD_BE_SOFT_RESET {
    DIGD_BE_SOFT_RESET_0                               = 0x00000000,
    DIGD_BE_SOFT_RESET_1                               = 0x00000001,
} DIGD_BE_SOFT_RESET;

typedef enum DIGD_FE_SOFT_RESET {
    DIGD_FE_SOFT_RESET_0                               = 0x00000000,
    DIGD_FE_SOFT_RESET_1                               = 0x00000001,
} DIGD_FE_SOFT_RESET;

typedef enum DIGE_BE_SOFT_RESET {
    DIGE_BE_SOFT_RESET_0                               = 0x00000000,
    DIGE_BE_SOFT_RESET_1                               = 0x00000001,
} DIGE_BE_SOFT_RESET;

typedef enum DIGE_FE_SOFT_RESET {
    DIGE_FE_SOFT_RESET_0                               = 0x00000000,
    DIGE_FE_SOFT_RESET_1                               = 0x00000001,
} DIGE_FE_SOFT_RESET;

typedef enum DIGF_BE_SOFT_RESET {
    DIGF_BE_SOFT_RESET_0                               = 0x00000000,
    DIGF_BE_SOFT_RESET_1                               = 0x00000001,
} DIGF_BE_SOFT_RESET;

typedef enum DIGF_FE_SOFT_RESET {
    DIGF_FE_SOFT_RESET_0                               = 0x00000000,
    DIGF_FE_SOFT_RESET_1                               = 0x00000001,
} DIGF_FE_SOFT_RESET;

typedef enum DIGG_BE_SOFT_RESET {
    DIGG_BE_SOFT_RESET_0                               = 0x00000000,
    DIGG_BE_SOFT_RESET_1                               = 0x00000001,
} DIGG_BE_SOFT_RESET;

typedef enum DIGG_FE_SOFT_RESET {
    DIGG_FE_SOFT_RESET_0                               = 0x00000000,
    DIGG_FE_SOFT_RESET_1                               = 0x00000001,
} DIGG_FE_SOFT_RESET;

typedef enum DIGLPA_BE_SOFT_RESET {
    DIGLPA_BE_SOFT_RESET_0                             = 0x00000000,
    DIGLPA_BE_SOFT_RESET_1                             = 0x00000001,
} DIGLPA_BE_SOFT_RESET;

typedef enum DIGLPA_FE_SOFT_RESET {
    DIGLPA_FE_SOFT_RESET_0                             = 0x00000000,
    DIGLPA_FE_SOFT_RESET_1                             = 0x00000001,
} DIGLPA_FE_SOFT_RESET;

typedef enum DIGLPB_BE_SOFT_RESET {
    DIGLPB_BE_SOFT_RESET_0                             = 0x00000000,
    DIGLPB_BE_SOFT_RESET_1                             = 0x00000001,
} DIGLPB_BE_SOFT_RESET;

typedef enum DIGLPB_FE_SOFT_RESET {
    DIGLPB_FE_SOFT_RESET_0                             = 0x00000000,
    DIGLPB_FE_SOFT_RESET_1                             = 0x00000001,
} DIGLPB_FE_SOFT_RESET;

typedef enum DSM_DATA_SEL {
    DSM_DATA_SEL_DISABLE                               = 0x00000000,
    DSM_DATA_SEL_0                                     = 0x00000001,
    DSM_DATA_SEL_1                                     = 0x00000002,
    DSM_DATA_SEL_BOTH                                  = 0x00000003,
} DSM_DATA_SEL;

typedef enum DSM_ENABLE_ERROR_INJECT {
    DSM_ENABLE_ERROR_INJECT_FED_IN                     = 0x00000000,
    DSM_ENABLE_ERROR_INJECT_SINGLE                     = 0x00000001,
    DSM_ENABLE_ERROR_INJECT_UNCORRECTABLE              = 0x00000002,
    DSM_ENABLE_ERROR_INJECT_UNCORRECTABLE_LIMITED      = 0x00000003,
} DSM_ENABLE_ERROR_INJECT;

typedef enum DSM_SELECT_INJECT_DELAY {
    DSM_SELECT_INJECT_DELAY_NO_DELAY                   = 0x00000000,
    DSM_SELECT_INJECT_DELAY_DELAY_ERROR                = 0x00000001,
} DSM_SELECT_INJECT_DELAY;

typedef enum DSM_SINGLE_WRITE {
    DSM_SINGLE_WRITE_DIS                               = 0x00000000,
    DSM_SINGLE_WRITE_EN                                = 0x00000001,
} DSM_SINGLE_WRITE;

typedef enum ENUM_NUM_SIMD_PER_CU {
    NUM_SIMD_PER_CU                                    = 0x00000004,
} ENUM_NUM_SIMD_PER_CU;

typedef enum ENUM_XDMA_LOCAL_SW_MODE {
    XDMA_LOCAL_SW_MODE_SW_256B_D                       = 0x00000002,
    XDMA_LOCAL_SW_MODE_SW_64KB_D                       = 0x0000000a,
    XDMA_LOCAL_SW_MODE_SW_64KB_D_X                     = 0x0000001a,
} ENUM_XDMA_LOCAL_SW_MODE;

typedef enum ENUM_XDMA_MSTR_ALPHA_POSITION {
    XDMA_MSTR_ALPHA_POSITION_7_0                       = 0x00000000,
    XDMA_MSTR_ALPHA_POSITION_15_8                      = 0x00000001,
    XDMA_MSTR_ALPHA_POSITION_23_16                     = 0x00000002,
    XDMA_MSTR_ALPHA_POSITION_31_24                     = 0x00000003,
} ENUM_XDMA_MSTR_ALPHA_POSITION;

typedef enum ENUM_XDMA_MSTR_VSYNC_GSL_CHECK_SEL {
    XDMA_MSTR_VSYNC_GSL_CHECK_SEL_PIPE0                = 0x00000000,
    XDMA_MSTR_VSYNC_GSL_CHECK_SEL_PIPE1                = 0x00000001,
    XDMA_MSTR_VSYNC_GSL_CHECK_SEL_PIPE2                = 0x00000002,
    XDMA_MSTR_VSYNC_GSL_CHECK_SEL_PIPE3                = 0x00000003,
    XDMA_MSTR_VSYNC_GSL_CHECK_SEL_PIPE4                = 0x00000004,
    XDMA_MSTR_VSYNC_GSL_CHECK_SEL_PIPE5                = 0x00000005,
} ENUM_XDMA_MSTR_VSYNC_GSL_CHECK_SEL;

typedef enum ENUM_XDMA_SLV_ALPHA_POSITION {
    XDMA_SLV_ALPHA_POSITION_7_0                        = 0x00000000,
    XDMA_SLV_ALPHA_POSITION_15_8                       = 0x00000001,
    XDMA_SLV_ALPHA_POSITION_23_16                      = 0x00000002,
    XDMA_SLV_ALPHA_POSITION_31_24                      = 0x00000003,
} ENUM_XDMA_SLV_ALPHA_POSITION;

typedef enum FBC_IDLE_MASK_MASK_BITS {
    FBC_IDLE_MASK_DISP_REG_UPDATE                      = 0x00000000,
    FBC_IDLE_MASK_RESERVED1                            = 0x00000001,
    FBC_IDLE_MASK_FBC_GRPH_COMP_EN                     = 0x00000002,
    FBC_IDLE_MASK_FBC_MIN_COMPRESSION                  = 0x00000003,
    FBC_IDLE_MASK_FBC_ALPHA_COMP_EN                    = 0x00000004,
    FBC_IDLE_MASK_FBC_ZERO_ALPHA_CHUNK_SKIP_EN         = 0x00000005,
    FBC_IDLE_MASK_FBC_FORCE_COPY_TO_COMP_BUF           = 0x00000006,
    FBC_IDLE_MASK_RESERVED7                            = 0x00000007,
    FBC_IDLE_MASK_RESERVED8                            = 0x00000008,
    FBC_IDLE_MASK_RESERVED9                            = 0x00000009,
    FBC_IDLE_MASK_RESERVED10                           = 0x0000000a,
    FBC_IDLE_MASK_RESERVED11                           = 0x0000000b,
    FBC_IDLE_MASK_RESERVED12                           = 0x0000000c,
    FBC_IDLE_MASK_RESERVED13                           = 0x0000000d,
    FBC_IDLE_MASK_RESERVED14                           = 0x0000000e,
    FBC_IDLE_MASK_RESERVED15                           = 0x0000000f,
    FBC_IDLE_MASK_RESERVED16                           = 0x00000010,
    FBC_IDLE_MASK_RESERVED17                           = 0x00000011,
    FBC_IDLE_MASK_RESERVED18                           = 0x00000012,
    FBC_IDLE_MASK_RESERVED19                           = 0x00000013,
    FBC_IDLE_MASK_RESERVED20                           = 0x00000014,
    FBC_IDLE_MASK_RESERVED21                           = 0x00000015,
    FBC_IDLE_MASK_RESERVED22                           = 0x00000016,
    FBC_IDLE_MASK_RESERVED23                           = 0x00000017,
    FBC_IDLE_MASK_MC_HIT_REGION_0                      = 0x00000018,
    FBC_IDLE_MASK_MC_HIT_REGION_1                      = 0x00000019,
    FBC_IDLE_MASK_MC_HIT_REGION_2                      = 0x0000001a,
    FBC_IDLE_MASK_MC_HIT_REGION_3                      = 0x0000001b,
    FBC_IDLE_MASK_MC_WRITE                             = 0x0000001c,
    FBC_IDLE_MASK_RESERVED29                           = 0x0000001d,
    FBC_IDLE_MASK_RESERVED30                           = 0x0000001e,
    FBC_IDLE_MASK_RESERVED31                           = 0x0000001f,
} FBC_IDLE_MASK_MASK_BITS;

typedef enum ForceControl {
    FORCE_OFF                                          = 0x00000000,
    FORCE_ENABLE                                       = 0x00000001,
    FORCE_DISABLE                                      = 0x00000002,
    FORCE_RESERVED                                     = 0x00000003,
} ForceControl;

typedef enum FORCE_VBI {
    FORCE_VBI_LOW                                      = 0x00000000,
    FORCE_VBI_HIGH                                     = 0x00000001,
} FORCE_VBI;

typedef enum FullTileWaveBreak {
    FULL_TILE_WAVE_BREAK_NBC_ONLY                      = 0x00000000,
    FULL_TILE_WAVE_BREAK_BOTH                          = 0x00000001,
    FULL_TILE_WAVE_BREAK_NONE                          = 0x00000002,
    FULL_TILE_WAVE_BREAK_BC_ONLY                       = 0x00000003,
} FullTileWaveBreak;

typedef enum GATCL1RequestType {
    GATCL1_TYPE_NORMAL                                 = 0x00000000,
    GATCL1_TYPE_SHOOTDOWN                              = 0x00000001,
    GATCL1_TYPE_BYPASS                                 = 0x00000002,
} GATCL1RequestType;

typedef enum GB_EDC_DED_MODE {
    GB_EDC_DED_MODE_LOG                                = 0x00000000,
    GB_EDC_DED_MODE_INT_HALT                           = 0x00000002,
    GB_EDC_DED_MODE_HALT__GFX09_0                      = 0x00000001,
    GB_EDC_DED_MODE_HALT__GFX10                        = 0x00000001,
    GB_EDC_DED_MODE_HALT__RV2X                         = 0x00000001,
    GB_EDC_DED_MODE_FUE_IS_FATAL__VG12                 = 0x00000001,
    GB_EDC_DED_MODE_FUE_IS_FATAL__VG20                 = 0x00000001,
} GB_EDC_DED_MODE;

typedef enum GCRPerfSel {
    GCR_PERF_SEL_NONE                                  = 0x00000000,
    GCR_PERF_SEL_SDMA0_ALL_REQ                         = 0x00000001,
    GCR_PERF_SEL_SDMA0_GL2_RANGE_REQ                   = 0x00000002,
    GCR_PERF_SEL_SDMA0_GL2_RANGE_LT16K_REQ             = 0x00000003,
    GCR_PERF_SEL_SDMA0_GL2_RANGE_16K_REQ               = 0x00000004,
    GCR_PERF_SEL_SDMA0_GL2_RANGE_GT16K_REQ             = 0x00000005,
    GCR_PERF_SEL_SDMA0_GL2_ALL_REQ                     = 0x00000006,
    GCR_PERF_SEL_SDMA0_GL1_RANGE_REQ                   = 0x00000007,
    GCR_PERF_SEL_SDMA0_GL1_RANGE_LT16K_REQ             = 0x00000008,
    GCR_PERF_SEL_SDMA0_GL1_RANGE_16K_REQ               = 0x00000009,
    GCR_PERF_SEL_SDMA0_GL1_RANGE_GT16K_REQ             = 0x0000000a,
    GCR_PERF_SEL_SDMA0_GL1_ALL_REQ                     = 0x0000000b,
    GCR_PERF_SEL_SDMA0_METADATA_REQ                    = 0x0000000c,
    GCR_PERF_SEL_SDMA0_SQC_DATA_REQ                    = 0x0000000d,
    GCR_PERF_SEL_SDMA0_SQC_INST_REQ                    = 0x0000000e,
    GCR_PERF_SEL_SDMA0_TCP_REQ                         = 0x0000000f,
    GCR_PERF_SEL_SDMA0_TCP_TLB_SHOOTDOWN_REQ           = 0x00000010,
    GCR_PERF_SEL_SDMA1_ALL_REQ                         = 0x00000011,
    GCR_PERF_SEL_SDMA1_GL2_RANGE_REQ                   = 0x00000012,
    GCR_PERF_SEL_SDMA1_GL2_RANGE_LT16K_REQ             = 0x00000013,
    GCR_PERF_SEL_SDMA1_GL2_RANGE_16K_REQ               = 0x00000014,
    GCR_PERF_SEL_SDMA1_GL2_RANGE_GT16K_REQ             = 0x00000015,
    GCR_PERF_SEL_SDMA1_GL2_ALL_REQ                     = 0x00000016,
    GCR_PERF_SEL_SDMA1_GL1_RANGE_REQ                   = 0x00000017,
    GCR_PERF_SEL_SDMA1_GL1_RANGE_LT16K_REQ             = 0x00000018,
    GCR_PERF_SEL_SDMA1_GL1_RANGE_16K_REQ               = 0x00000019,
    GCR_PERF_SEL_SDMA1_GL1_RANGE_GT16K_REQ             = 0x0000001a,
    GCR_PERF_SEL_SDMA1_GL1_ALL_REQ                     = 0x0000001b,
    GCR_PERF_SEL_SDMA1_METADATA_REQ                    = 0x0000001c,
    GCR_PERF_SEL_SDMA1_SQC_DATA_REQ                    = 0x0000001d,
    GCR_PERF_SEL_SDMA1_SQC_INST_REQ                    = 0x0000001e,
    GCR_PERF_SEL_SDMA1_TCP_REQ                         = 0x0000001f,
    GCR_PERF_SEL_SDMA1_TCP_TLB_SHOOTDOWN_REQ           = 0x00000020,
    GCR_PERF_SEL_CPF_ALL_REQ                           = 0x00000041,
    GCR_PERF_SEL_CPF_GL2_RANGE_REQ                     = 0x00000042,
    GCR_PERF_SEL_CPF_GL2_RANGE_LT16K_REQ               = 0x00000043,
    GCR_PERF_SEL_CPF_GL2_RANGE_16K_REQ                 = 0x00000044,
    GCR_PERF_SEL_CPF_GL2_RANGE_GT16K_REQ               = 0x00000045,
    GCR_PERF_SEL_CPF_GL2_ALL_REQ                       = 0x00000046,
    GCR_PERF_SEL_CPF_GL1_RANGE_REQ                     = 0x00000047,
    GCR_PERF_SEL_CPF_GL1_RANGE_LT16K_REQ               = 0x00000048,
    GCR_PERF_SEL_CPF_GL1_RANGE_16K_REQ                 = 0x00000049,
    GCR_PERF_SEL_CPF_GL1_RANGE_GT16K_REQ               = 0x0000004a,
    GCR_PERF_SEL_CPF_GL1_ALL_REQ                       = 0x0000004b,
    GCR_PERF_SEL_CPF_METADATA_REQ                      = 0x0000004c,
    GCR_PERF_SEL_CPF_SQC_DATA_REQ                      = 0x0000004d,
    GCR_PERF_SEL_CPF_SQC_INST_REQ                      = 0x0000004e,
    GCR_PERF_SEL_CPF_TCP_REQ                           = 0x0000004f,
    GCR_PERF_SEL_CPF_TCP_TLB_SHOOTDOWN_REQ             = 0x00000050,
    GCR_PERF_SEL_VIRT_REQ                              = 0x00000051,
    GCR_PERF_SEL_PHY_REQ                               = 0x00000052,
    GCR_PERF_SEL_TLB_SHOOTDOWN_HEAVY_REQ               = 0x00000053,
    GCR_PERF_SEL_TLB_SHOOTDOWN_LIGHT_REQ               = 0x00000054,
    GCR_PERF_SEL_ALL_REQ                               = 0x00000055,
    GCR_PERF_SEL_CLK_FOR_PHY_OUTSTANDING_REQ           = 0x00000056,
    GCR_PERF_SEL_CLK_FOR_VIRT_OUTSTANDING_REQ          = 0x00000057,
    GCR_PERF_SEL_CLK_FOR_ALL_OUTSTANDING_REQ           = 0x00000058,
    GCR_PERF_SEL_UTCL2_REQ                             = 0x00000059,
    GCR_PERF_SEL_UTCL2_RET                             = 0x0000005a,
    GCR_PERF_SEL_UTCL2_OUT_OF_CREDIT_EVENT             = 0x0000005b,
    GCR_PERF_SEL_UTCL2_INFLIGHT_REQ                    = 0x0000005c,
    GCR_PERF_SEL_UTCL2_FILTERED_RET                    = 0x0000005d,
    GCR_PERF_SEL_CPG_ALL_REQ__NV10                     = 0x00000021,
    GCR_PERF_SEL_CPG_GL2_RANGE_REQ__NV10               = 0x00000022,
    GCR_PERF_SEL_CPG_GL2_RANGE_LT16K_REQ__NV10         = 0x00000023,
    GCR_PERF_SEL_CPG_GL2_RANGE_16K_REQ__NV10           = 0x00000024,
    GCR_PERF_SEL_CPG_GL2_RANGE_GT16K_REQ__NV10         = 0x00000025,
    GCR_PERF_SEL_CPG_GL2_ALL_REQ__NV10                 = 0x00000026,
    GCR_PERF_SEL_CPG_GL1_RANGE_REQ__NV10               = 0x00000027,
    GCR_PERF_SEL_CPG_GL1_RANGE_LT16K_REQ__NV10         = 0x00000028,
    GCR_PERF_SEL_CPG_GL1_RANGE_16K_REQ__NV10           = 0x00000029,
    GCR_PERF_SEL_CPG_GL1_RANGE_GT16K_REQ__NV10         = 0x0000002a,
    GCR_PERF_SEL_CPG_GL1_ALL_REQ__NV10                 = 0x0000002b,
    GCR_PERF_SEL_CPG_METADATA_REQ__NV10                = 0x0000002c,
    GCR_PERF_SEL_CPG_SQC_DATA_REQ__NV10                = 0x0000002d,
    GCR_PERF_SEL_CPG_SQC_INST_REQ__NV10                = 0x0000002e,
    GCR_PERF_SEL_CPG_TCP_REQ__NV10                     = 0x0000002f,
    GCR_PERF_SEL_CPG_TCP_TLB_SHOOTDOWN_REQ__NV10       = 0x00000030,
    GCR_PERF_SEL_CPC_ALL_REQ__NV10                     = 0x00000031,
    GCR_PERF_SEL_CPC_GL2_RANGE_REQ__NV10               = 0x00000032,
    GCR_PERF_SEL_CPC_GL2_RANGE_LT16K_REQ__NV10         = 0x00000033,
    GCR_PERF_SEL_CPC_GL2_RANGE_16K_REQ__NV10           = 0x00000034,
    GCR_PERF_SEL_CPC_GL2_RANGE_GT16K_REQ__NV10         = 0x00000035,
    GCR_PERF_SEL_CPC_GL2_ALL_REQ__NV10                 = 0x00000036,
    GCR_PERF_SEL_CPC_GL1_RANGE_REQ__NV10               = 0x00000037,
    GCR_PERF_SEL_CPC_GL1_RANGE_LT16K_REQ__NV10         = 0x00000038,
    GCR_PERF_SEL_CPC_GL1_RANGE_16K_REQ__NV10           = 0x00000039,
    GCR_PERF_SEL_CPC_GL1_RANGE_GT16K_REQ__NV10         = 0x0000003a,
    GCR_PERF_SEL_CPC_GL1_ALL_REQ__NV10                 = 0x0000003b,
    GCR_PERF_SEL_CPC_METADATA_REQ__NV10                = 0x0000003c,
    GCR_PERF_SEL_CPC_SQC_DATA_REQ__NV10                = 0x0000003d,
    GCR_PERF_SEL_CPC_SQC_INST_REQ__NV10                = 0x0000003e,
    GCR_PERF_SEL_CPC_TCP_REQ__NV10                     = 0x0000003f,
    GCR_PERF_SEL_CPC_TCP_TLB_SHOOTDOWN_REQ__NV10       = 0x00000040,
} GCRPerfSel;

constexpr unsigned int MaxGCRPerfSelGfx101             = GCR_PERF_SEL_UTCL2_FILTERED_RET;

typedef enum GDS_PERFCOUNT_SELECT {
    GDS_PERF_SEL_DS_ADDR_CONFL                         = 0x00000000,
    GDS_PERF_SEL_DS_BANK_CONFL                         = 0x00000001,
    GDS_PERF_SEL_WBUF_FLUSH                            = 0x00000002,
    GDS_PERF_SEL_WR_COMP                               = 0x00000003,
    GDS_PERF_SEL_WBUF_WR                               = 0x00000004,
    GDS_PERF_SEL_RBUF_HIT                              = 0x00000005,
    GDS_PERF_SEL_RBUF_MISS                             = 0x00000006,
    GDS_PERF_SEL_SE0_SH0_NORET                         = 0x00000007,
    GDS_PERF_SEL_SE0_SH0_RET                           = 0x00000008,
    GDS_PERF_SEL_SE0_SH0_ORD_CNT                       = 0x00000009,
    GDS_PERF_SEL_SE0_SH0_2COMP_REQ                     = 0x0000000a,
    GDS_PERF_SEL_SE0_SH0_ORD_WAVE_VALID                = 0x0000000b,
    GDS_PERF_SEL_SE0_SH0_GDS_DATA_VALID                = 0x0000000c,
    GDS_PERF_SEL_SE0_SH0_GDS_STALL_BY_ORD              = 0x0000000d,
    GDS_PERF_SEL_SE0_SH0_GDS_WR_OP                     = 0x0000000e,
    GDS_PERF_SEL_SE0_SH0_GDS_RD_OP                     = 0x0000000f,
    GDS_PERF_SEL_SE0_SH0_GDS_ATOM_OP                   = 0x00000010,
    GDS_PERF_SEL_SE0_SH0_GDS_REL_OP                    = 0x00000011,
    GDS_PERF_SEL_SE0_SH0_GDS_CMPXCH_OP                 = 0x00000012,
    GDS_PERF_SEL_SE0_SH0_GDS_BYTE_OP                   = 0x00000013,
    GDS_PERF_SEL_SE0_SH0_GDS_SHORT_OP                  = 0x00000014,
    GDS_PERF_SEL_SE0_SH1_NORET                         = 0x00000015,
    GDS_PERF_SEL_SE0_SH1_RET                           = 0x00000016,
    GDS_PERF_SEL_SE0_SH1_ORD_CNT                       = 0x00000017,
    GDS_PERF_SEL_SE0_SH1_2COMP_REQ                     = 0x00000018,
    GDS_PERF_SEL_SE0_SH1_ORD_WAVE_VALID                = 0x00000019,
    GDS_PERF_SEL_SE0_SH1_GDS_DATA_VALID                = 0x0000001a,
    GDS_PERF_SEL_SE0_SH1_GDS_STALL_BY_ORD              = 0x0000001b,
    GDS_PERF_SEL_SE0_SH1_GDS_WR_OP                     = 0x0000001c,
    GDS_PERF_SEL_SE0_SH1_GDS_RD_OP                     = 0x0000001d,
    GDS_PERF_SEL_SE0_SH1_GDS_ATOM_OP                   = 0x0000001e,
    GDS_PERF_SEL_SE0_SH1_GDS_REL_OP                    = 0x0000001f,
    GDS_PERF_SEL_SE0_SH1_GDS_CMPXCH_OP                 = 0x00000020,
    GDS_PERF_SEL_SE0_SH1_GDS_BYTE_OP                   = 0x00000021,
    GDS_PERF_SEL_SE0_SH1_GDS_SHORT_OP                  = 0x00000022,
    GDS_PERF_SEL_SE1_SH0_NORET                         = 0x00000023,
    GDS_PERF_SEL_SE1_SH0_RET                           = 0x00000024,
    GDS_PERF_SEL_SE1_SH0_ORD_CNT                       = 0x00000025,
    GDS_PERF_SEL_SE1_SH0_2COMP_REQ                     = 0x00000026,
    GDS_PERF_SEL_SE1_SH0_ORD_WAVE_VALID                = 0x00000027,
    GDS_PERF_SEL_SE1_SH0_GDS_DATA_VALID                = 0x00000028,
    GDS_PERF_SEL_SE1_SH0_GDS_STALL_BY_ORD              = 0x00000029,
    GDS_PERF_SEL_SE1_SH0_GDS_WR_OP                     = 0x0000002a,
    GDS_PERF_SEL_SE1_SH0_GDS_RD_OP                     = 0x0000002b,
    GDS_PERF_SEL_SE1_SH0_GDS_ATOM_OP                   = 0x0000002c,
    GDS_PERF_SEL_SE1_SH0_GDS_REL_OP                    = 0x0000002d,
    GDS_PERF_SEL_SE1_SH0_GDS_CMPXCH_OP                 = 0x0000002e,
    GDS_PERF_SEL_SE1_SH0_GDS_BYTE_OP                   = 0x0000002f,
    GDS_PERF_SEL_SE1_SH0_GDS_SHORT_OP                  = 0x00000030,
    GDS_PERF_SEL_SE1_SH1_NORET                         = 0x00000031,
    GDS_PERF_SEL_SE1_SH1_RET                           = 0x00000032,
    GDS_PERF_SEL_SE1_SH1_ORD_CNT                       = 0x00000033,
    GDS_PERF_SEL_SE1_SH1_2COMP_REQ                     = 0x00000034,
    GDS_PERF_SEL_SE1_SH1_ORD_WAVE_VALID                = 0x00000035,
    GDS_PERF_SEL_SE1_SH1_GDS_DATA_VALID                = 0x00000036,
    GDS_PERF_SEL_SE1_SH1_GDS_STALL_BY_ORD              = 0x00000037,
    GDS_PERF_SEL_SE1_SH1_GDS_WR_OP                     = 0x00000038,
    GDS_PERF_SEL_SE1_SH1_GDS_RD_OP                     = 0x00000039,
    GDS_PERF_SEL_SE1_SH1_GDS_ATOM_OP                   = 0x0000003a,
    GDS_PERF_SEL_SE1_SH1_GDS_REL_OP                    = 0x0000003b,
    GDS_PERF_SEL_SE1_SH1_GDS_CMPXCH_OP                 = 0x0000003c,
    GDS_PERF_SEL_SE1_SH1_GDS_BYTE_OP                   = 0x0000003d,
    GDS_PERF_SEL_SE1_SH1_GDS_SHORT_OP                  = 0x0000003e,
    GDS_PERF_SEL_SE2_SH0_NORET                         = 0x0000003f,
    GDS_PERF_SEL_SE2_SH0_RET                           = 0x00000040,
    GDS_PERF_SEL_SE2_SH0_ORD_CNT                       = 0x00000041,
    GDS_PERF_SEL_SE2_SH0_2COMP_REQ                     = 0x00000042,
    GDS_PERF_SEL_SE2_SH0_ORD_WAVE_VALID                = 0x00000043,
    GDS_PERF_SEL_SE2_SH0_GDS_DATA_VALID                = 0x00000044,
    GDS_PERF_SEL_SE2_SH0_GDS_STALL_BY_ORD              = 0x00000045,
    GDS_PERF_SEL_SE2_SH0_GDS_WR_OP                     = 0x00000046,
    GDS_PERF_SEL_SE2_SH0_GDS_RD_OP                     = 0x00000047,
    GDS_PERF_SEL_SE2_SH0_GDS_ATOM_OP                   = 0x00000048,
    GDS_PERF_SEL_SE2_SH0_GDS_REL_OP                    = 0x00000049,
    GDS_PERF_SEL_SE2_SH0_GDS_CMPXCH_OP                 = 0x0000004a,
    GDS_PERF_SEL_SE2_SH0_GDS_BYTE_OP                   = 0x0000004b,
    GDS_PERF_SEL_SE2_SH0_GDS_SHORT_OP                  = 0x0000004c,
    GDS_PERF_SEL_SE2_SH1_NORET                         = 0x0000004d,
    GDS_PERF_SEL_SE2_SH1_RET                           = 0x0000004e,
    GDS_PERF_SEL_SE2_SH1_ORD_CNT                       = 0x0000004f,
    GDS_PERF_SEL_SE2_SH1_2COMP_REQ                     = 0x00000050,
    GDS_PERF_SEL_SE2_SH1_ORD_WAVE_VALID                = 0x00000051,
    GDS_PERF_SEL_SE2_SH1_GDS_DATA_VALID                = 0x00000052,
    GDS_PERF_SEL_SE2_SH1_GDS_STALL_BY_ORD              = 0x00000053,
    GDS_PERF_SEL_SE2_SH1_GDS_WR_OP                     = 0x00000054,
    GDS_PERF_SEL_SE2_SH1_GDS_RD_OP                     = 0x00000055,
    GDS_PERF_SEL_SE2_SH1_GDS_ATOM_OP                   = 0x00000056,
    GDS_PERF_SEL_SE2_SH1_GDS_REL_OP                    = 0x00000057,
    GDS_PERF_SEL_SE2_SH1_GDS_CMPXCH_OP                 = 0x00000058,
    GDS_PERF_SEL_SE2_SH1_GDS_BYTE_OP                   = 0x00000059,
    GDS_PERF_SEL_SE2_SH1_GDS_SHORT_OP                  = 0x0000005a,
    GDS_PERF_SEL_SE3_SH0_NORET                         = 0x0000005b,
    GDS_PERF_SEL_SE3_SH0_RET                           = 0x0000005c,
    GDS_PERF_SEL_SE3_SH0_ORD_CNT                       = 0x0000005d,
    GDS_PERF_SEL_SE3_SH0_2COMP_REQ                     = 0x0000005e,
    GDS_PERF_SEL_SE3_SH0_ORD_WAVE_VALID                = 0x0000005f,
    GDS_PERF_SEL_SE3_SH0_GDS_DATA_VALID                = 0x00000060,
    GDS_PERF_SEL_SE3_SH0_GDS_STALL_BY_ORD              = 0x00000061,
    GDS_PERF_SEL_SE3_SH0_GDS_WR_OP                     = 0x00000062,
    GDS_PERF_SEL_SE3_SH0_GDS_RD_OP                     = 0x00000063,
    GDS_PERF_SEL_SE3_SH0_GDS_ATOM_OP                   = 0x00000064,
    GDS_PERF_SEL_SE3_SH0_GDS_REL_OP                    = 0x00000065,
    GDS_PERF_SEL_SE3_SH0_GDS_CMPXCH_OP                 = 0x00000066,
    GDS_PERF_SEL_SE3_SH0_GDS_BYTE_OP                   = 0x00000067,
    GDS_PERF_SEL_SE3_SH0_GDS_SHORT_OP                  = 0x00000068,
    GDS_PERF_SEL_SE3_SH1_NORET                         = 0x00000069,
    GDS_PERF_SEL_SE3_SH1_RET                           = 0x0000006a,
    GDS_PERF_SEL_SE3_SH1_ORD_CNT                       = 0x0000006b,
    GDS_PERF_SEL_SE3_SH1_2COMP_REQ                     = 0x0000006c,
    GDS_PERF_SEL_SE3_SH1_ORD_WAVE_VALID                = 0x0000006d,
    GDS_PERF_SEL_SE3_SH1_GDS_DATA_VALID                = 0x0000006e,
    GDS_PERF_SEL_SE3_SH1_GDS_STALL_BY_ORD              = 0x0000006f,
    GDS_PERF_SEL_SE3_SH1_GDS_WR_OP                     = 0x00000070,
    GDS_PERF_SEL_SE3_SH1_GDS_RD_OP                     = 0x00000071,
    GDS_PERF_SEL_SE3_SH1_GDS_ATOM_OP                   = 0x00000072,
    GDS_PERF_SEL_SE3_SH1_GDS_REL_OP                    = 0x00000073,
    GDS_PERF_SEL_SE3_SH1_GDS_CMPXCH_OP                 = 0x00000074,
    GDS_PERF_SEL_SE3_SH1_GDS_BYTE_OP                   = 0x00000075,
    GDS_PERF_SEL_SE3_SH1_GDS_SHORT_OP                  = 0x00000076,
    GDS_PERF_SEL_GWS_RELEASED                          = 0x00000077,
    GDS_PERF_SEL_GWS_BYPASS                            = 0x00000078,
} GDS_PERFCOUNT_SELECT;

constexpr unsigned int MaxGdsPerfcountSelect           = GDS_PERF_SEL_GWS_BYPASS;

typedef enum GENERICA_STEREOSYNC_SEL {
    GENERICA_STEREOSYNC_SEL_D1                         = 0x00000000,
    GENERICA_STEREOSYNC_SEL_D2                         = 0x00000001,
    GENERICA_STEREOSYNC_SEL_D3                         = 0x00000002,
    GENERICA_STEREOSYNC_SEL_D4                         = 0x00000003,
    GENERICA_STEREOSYNC_SEL_D5                         = 0x00000004,
    GENERICA_STEREOSYNC_SEL_D6                         = 0x00000005,
    GENERICA_STEREOSYNC_SEL_RESERVED                   = 0x00000006,
} GENERICA_STEREOSYNC_SEL;

typedef enum GENERICB_STEREOSYNC_SEL {
    GENERICB_STEREOSYNC_SEL_D1                         = 0x00000000,
    GENERICB_STEREOSYNC_SEL_D2                         = 0x00000001,
    GENERICB_STEREOSYNC_SEL_D3                         = 0x00000002,
    GENERICB_STEREOSYNC_SEL_D4                         = 0x00000003,
    GENERICB_STEREOSYNC_SEL_D5                         = 0x00000004,
    GENERICB_STEREOSYNC_SEL_D6                         = 0x00000005,
    GENERICB_STEREOSYNC_SEL_RESERVED                   = 0x00000006,
} GENERICB_STEREOSYNC_SEL;

typedef enum GE_PERFCOUNT_SELECT {
    ge_assembler_busy                                  = 0x00000000,
    ge_assembler_stalled                               = 0x00000001,
    ge_cm_reading_stalled                              = 0x00000002,
    ge_cm_stalled_by_gog                               = 0x00000003,
    ge_cm_stalled_by_gsfetch_done                      = 0x00000004,
    ge_dma_busy                                        = 0x00000005,
    ge_dma_lat_bin_0                                   = 0x00000006,
    ge_dma_lat_bin_1                                   = 0x00000007,
    ge_dma_lat_bin_2                                   = 0x00000008,
    ge_dma_lat_bin_3                                   = 0x00000009,
    ge_dma_lat_bin_4                                   = 0x0000000a,
    ge_dma_lat_bin_5                                   = 0x0000000b,
    ge_dma_lat_bin_6                                   = 0x0000000c,
    ge_dma_lat_bin_7                                   = 0x0000000d,
    ge_dma_return_cl0                                  = 0x0000000e,
    ge_dma_return_cl1                                  = 0x0000000f,
    ge_dma_utcl1_consecutive_retry_event               = 0x00000010,
    ge_dma_utcl1_request_event                         = 0x00000011,
    ge_dma_utcl1_retry_event                           = 0x00000012,
    ge_dma_utcl1_stall_event                           = 0x00000013,
    ge_dma_utcl1_stall_utcl2_event                     = 0x00000014,
    ge_dma_utcl1_translation_hit_event                 = 0x00000015,
    ge_dma_utcl1_translation_miss_event                = 0x00000016,
    ge_ds_cache_hits                                   = 0x00000017,
    ge_ds_prims                                        = 0x00000018,
    ge_es_done                                         = 0x00000019,
    ge_es_done_latency                                 = 0x0000001a,
    ge_es_flush                                        = 0x0000001b,
    ge_es_ring_high_water_mark                         = 0x0000001c,
    ge_es_thread_groups                                = 0x0000001d,
    ge_esthread_stalled_es_rb_full                     = 0x0000001e,
    ge_esthread_stalled_spi_bp                         = 0x0000001f,
    ge_esvert_stalled_gs_event                         = 0x00000020,
    ge_esvert_stalled_gs_tbl                           = 0x00000021,
    ge_esvert_stalled_gsprim                           = 0x00000022,
    ge_assembler_dma_starved                           = 0x00000023,
    ge_gog_busy                                        = 0x00000024,
    ge_gog_out_indx_stalled                            = 0x00000025,
    ge_gog_out_prim_stalled                            = 0x00000026,
    ge_gog_vs_tbl_stalled                              = 0x00000027,
    ge_gs_cache_hits                                   = 0x00000028,
    ge_gs_counters_avail_stalled                       = 0x00000029,
    ge_gs_done                                         = 0x0000002a,
    ge_gs_done_latency                                 = 0x0000002b,
    ge_gs_issue_rtr_stalled                            = 0x0000002c,
    ge_gs_rb_space_avail_stalled                       = 0x0000002d,
    ge_gs_ring_high_water_mark                         = 0x0000002e,
    ge_gsprim_stalled_es_tbl                           = 0x0000002f,
    ge_gsprim_stalled_esvert                           = 0x00000030,
    ge_gsprim_stalled_gs_event                         = 0x00000031,
    ge_gsprim_stalled_gs_tbl                           = 0x00000032,
    ge_gsthread_stalled                                = 0x00000033,
    ge_hs_done                                         = 0x00000034,
    ge_hs_done_latency                                 = 0x00000035,
    ge_hs_done_se0                                     = 0x00000036,
    ge_hs_done_se1                                     = 0x00000037,
    ge_hs_done_se2_reserved                            = 0x00000038,
    ge_hs_done_se3_reserved                            = 0x00000039,
    ge_hs_tfm_stall                                    = 0x0000003a,
    ge_hs_tgs_active_high_water_mark                   = 0x0000003b,
    ge_hs_thread_groups                                = 0x0000003c,
    ge_inside_tf_bin_0                                 = 0x0000003d,
    ge_inside_tf_bin_1                                 = 0x0000003e,
    ge_inside_tf_bin_2                                 = 0x0000003f,
    ge_inside_tf_bin_3                                 = 0x00000040,
    ge_inside_tf_bin_4                                 = 0x00000041,
    ge_inside_tf_bin_5                                 = 0x00000042,
    ge_inside_tf_bin_6                                 = 0x00000043,
    ge_inside_tf_bin_7                                 = 0x00000044,
    ge_inside_tf_bin_8                                 = 0x00000045,
    ge_ls_done                                         = 0x00000046,
    ge_ls_done_latency                                 = 0x00000047,
    ge_null_patch                                      = 0x00000048,
    ge_se0pa0_clipp_eop                                = 0x00000049,
    ge_se0pa0_clipp_eopg                               = 0x0000004a,
    ge_se0pa0_clipp_is_event                           = 0x0000004b,
    ge_se0pa0_clipp_new_vtx_vect                       = 0x0000004c,
    ge_se0pa0_clipp_null_prim                          = 0x0000004d,
    ge_se0pa0_clipp_send                               = 0x0000004e,
    ge_se0pa0_clipp_send_not_event                     = 0x0000004f,
    ge_se0pa0_clipp_stalled                            = 0x00000050,
    ge_se0pa0_clipp_starved_busy                       = 0x00000051,
    ge_se0pa0_clipp_starved_after_work                 = 0x00000052,
    ge_se0pa0_clipp_valid_prim                         = 0x00000053,
    ge_se0pa0_clips_send                               = 0x00000054,
    ge_se0pa0_clips_stalled                            = 0x00000055,
    ge_se0pa0_clipv_send                               = 0x00000056,
    ge_se0pa0_clipv_stalled                            = 0x00000057,
    ge_se0pa1_clipp_eop                                = 0x00000058,
    ge_se0pa1_clipp_eopg                               = 0x00000059,
    ge_se0pa1_clipp_is_event                           = 0x0000005a,
    ge_se0pa1_clipp_new_vtx_vect                       = 0x0000005b,
    ge_se0pa1_clipp_null_prim                          = 0x0000005c,
    ge_se0pa1_clipp_send                               = 0x0000005d,
    ge_se0pa1_clipp_send_not_event                     = 0x0000005e,
    ge_se0pa1_clipp_stalled                            = 0x0000005f,
    ge_se0pa1_clipp_starved_busy                       = 0x00000060,
    ge_se0pa1_clipp_starved_after_work                 = 0x00000061,
    ge_se0pa1_clipp_valid_prim                         = 0x00000062,
    ge_se0pa1_clips_send                               = 0x00000063,
    ge_se0pa1_clips_stalled                            = 0x00000064,
    ge_se0pa1_clipv_send                               = 0x00000065,
    ge_se0pa1_clipv_stalled                            = 0x00000066,
    ge_se1pa0_clipp_eop                                = 0x00000067,
    ge_se1pa0_clipp_eopg                               = 0x00000068,
    ge_se1pa0_clipp_is_event                           = 0x00000069,
    ge_se1pa0_clipp_new_vtx_vect                       = 0x0000006a,
    ge_se1pa0_clipp_null_prim                          = 0x0000006b,
    ge_se1pa0_clipp_send                               = 0x0000006c,
    ge_se1pa0_clipp_send_not_event                     = 0x0000006d,
    ge_se1pa0_clipp_stalled                            = 0x0000006e,
    ge_se1pa0_clipp_starved_busy                       = 0x0000006f,
    ge_se1pa0_clipp_starved_after_work                 = 0x00000070,
    ge_se1pa0_clipp_valid_prim                         = 0x00000071,
    ge_se1pa0_clips_send                               = 0x00000072,
    ge_se1pa0_clips_stalled                            = 0x00000073,
    ge_se1pa0_clipv_send                               = 0x00000074,
    ge_se1pa0_clipv_stalled                            = 0x00000075,
    ge_se1pa1_clipp_eop                                = 0x00000076,
    ge_se1pa1_clipp_eopg                               = 0x00000077,
    ge_se1pa1_clipp_is_event                           = 0x00000078,
    ge_se1pa1_clipp_new_vtx_vect                       = 0x00000079,
    ge_se1pa1_clipp_null_prim                          = 0x0000007a,
    ge_se1pa1_clipp_send                               = 0x0000007b,
    ge_se1pa1_clipp_send_not_event                     = 0x0000007c,
    ge_se1pa1_clipp_stalled                            = 0x0000007d,
    ge_se1pa1_clipp_starved_busy                       = 0x0000007e,
    ge_se1pa1_clipp_starved_after_work                 = 0x0000007f,
    ge_se1pa1_clipp_valid_prim                         = 0x00000080,
    ge_se1pa1_clips_send                               = 0x00000081,
    ge_se1pa1_clips_stalled                            = 0x00000082,
    ge_se1pa1_clipv_send                               = 0x00000083,
    ge_se1pa1_clipv_stalled                            = 0x00000084,
    ge_se2pa0_clipp_eop                                = 0x00000085,
    ge_se2pa0_clipp_eopg                               = 0x00000086,
    ge_se2pa0_clipp_is_event                           = 0x00000087,
    ge_se2pa0_clipp_new_vtx_vect                       = 0x00000088,
    ge_se2pa0_clipp_null_prim                          = 0x00000089,
    ge_se2pa0_clipp_send                               = 0x0000008a,
    ge_se2pa0_clipp_send_not_event                     = 0x0000008b,
    ge_se2pa0_clipp_stalled                            = 0x0000008c,
    ge_se2pa0_clipp_starved_busy                       = 0x0000008d,
    ge_se2pa0_clipp_starved_after_work                 = 0x0000008e,
    ge_se2pa0_clipp_valid_prim                         = 0x0000008f,
    ge_se2pa0_clips_send                               = 0x00000090,
    ge_se2pa0_clips_stalled                            = 0x00000091,
    ge_se2pa0_clipv_send                               = 0x00000092,
    ge_se2pa0_clipv_stalled                            = 0x00000093,
    ge_se2pa1_clipp_eop                                = 0x00000094,
    ge_se2pa1_clipp_eopg                               = 0x00000095,
    ge_se2pa1_clipp_is_event                           = 0x00000096,
    ge_se2pa1_clipp_new_vtx_vect                       = 0x00000097,
    ge_se2pa1_clipp_null_prim                          = 0x00000098,
    ge_se2pa1_clipp_send                               = 0x00000099,
    ge_se2pa1_clipp_send_not_event                     = 0x0000009a,
    ge_se2pa1_clipp_stalled                            = 0x0000009b,
    ge_se2pa1_clipp_starved_busy                       = 0x0000009c,
    ge_se2pa1_clipp_starved_after_work                 = 0x0000009d,
    ge_se2pa1_clipp_valid_prim                         = 0x0000009e,
    ge_se2pa1_clips_send                               = 0x0000009f,
    ge_se2pa1_clips_stalled                            = 0x000000a0,
    ge_se2pa1_clipv_send                               = 0x000000a1,
    ge_se2pa1_clipv_stalled                            = 0x000000a2,
    ge_se3pa0_clipp_eop                                = 0x000000a3,
    ge_se3pa0_clipp_eopg                               = 0x000000a4,
    ge_se3pa0_clipp_is_event                           = 0x000000a5,
    ge_se3pa0_clipp_new_vtx_vect                       = 0x000000a6,
    ge_se3pa0_clipp_null_prim                          = 0x000000a7,
    ge_se3pa0_clipp_send                               = 0x000000a8,
    ge_se3pa0_clipp_send_not_event                     = 0x000000a9,
    ge_se3pa0_clipp_stalled                            = 0x000000aa,
    ge_se3pa0_clipp_starved_busy                       = 0x000000ab,
    ge_se3pa0_clipp_starved_after_work                 = 0x000000ac,
    ge_se3pa0_clipp_valid_prim                         = 0x000000ad,
    ge_se3pa0_clips_send                               = 0x000000ae,
    ge_se3pa0_clips_stalled                            = 0x000000af,
    ge_se3pa0_clipv_send                               = 0x000000b0,
    ge_se3pa0_clipv_stalled                            = 0x000000b1,
    ge_se3pa1_clipp_eop                                = 0x000000b2,
    ge_se3pa1_clipp_eopg                               = 0x000000b3,
    ge_se3pa1_clipp_is_event                           = 0x000000b4,
    ge_se3pa1_clipp_new_vtx_vect                       = 0x000000b5,
    ge_se3pa1_clipp_null_prim                          = 0x000000b6,
    ge_se3pa1_clipp_send                               = 0x000000b7,
    ge_se3pa1_clipp_send_not_event                     = 0x000000b8,
    ge_se3pa1_clipp_stalled                            = 0x000000b9,
    ge_se3pa1_clipp_starved_busy                       = 0x000000ba,
    ge_se3pa1_clipp_starved_after_work                 = 0x000000bb,
    ge_se3pa1_clipp_valid_prim                         = 0x000000bc,
    ge_se3pa1_clips_send                               = 0x000000bd,
    ge_se3pa1_clips_stalled                            = 0x000000be,
    ge_se3pa1_clipv_send                               = 0x000000bf,
    ge_se3pa1_clipv_stalled                            = 0x000000c0,
    ge_rbiu_di_fifo_stalled                            = 0x000000c1,
    ge_rbiu_di_fifo_starved                            = 0x000000c2,
    ge_rbiu_dr_fifo_stalled                            = 0x000000c3,
    ge_rbiu_dr_fifo_starved                            = 0x000000c4,
    ge_reused_es_indices                               = 0x000000c5,
    ge_reused_vs_indices                               = 0x000000c6,
    ge_sclk_core_vld                                   = 0x000000c7,
    ge_sclk_gs_vld                                     = 0x000000c8,
    ge_sclk_input_vld                                  = 0x000000c9,
    ge_sclk_leg_gs_arb_vld                             = 0x000000ca,
    ge_sclk_ngg_vld                                    = 0x000000cb,
    ge_sclk_reg_vld                                    = 0x000000cc,
    ge_sclk_te11_vld                                   = 0x000000cd,
    ge_sclk_vr_vld                                     = 0x000000ce,
    ge_sclk_wd_te11_vld                                = 0x000000cf,
    ge_spi_esvert_eov                                  = 0x000000d0,
    ge_spi_esvert_stalled                              = 0x000000d1,
    ge_spi_esvert_starved_busy                         = 0x000000d2,
    ge_spi_esvert_valid                                = 0x000000d3,
    ge_spi_eswave_is_event                             = 0x000000d4,
    ge_spi_eswave_send                                 = 0x000000d5,
    ge_se0spi_gsprim_cont                              = 0x000000d6,
    ge_se1spi_gsprim_cont                              = 0x000000d7,
    ge_se2spi_gsprim_cont                              = 0x000000d8,
    ge_se3spi_gsprim_cont                              = 0x000000d9,
    ge_spi_gsprim_eov                                  = 0x000000da,
    ge_spi_gsprim_stalled                              = 0x000000db,
    ge_spi_gsprim_starved_busy                         = 0x000000dc,
    ge_spi_gsprim_valid                                = 0x000000dd,
    ge_spi_gssubgrp_is_event                           = 0x000000de,
    ge_spi_gssubgrp_send                               = 0x000000df,
    ge_spi_hsvert_eov                                  = 0x000000e0,
    ge_spi_hsvert_stalled                              = 0x000000e1,
    ge_spi_hsvert_starved_busy                         = 0x000000e2,
    ge_spi_hsvert_valid                                = 0x000000e3,
    ge_spi_hswave_is_event                             = 0x000000e4,
    ge_spi_hswave_send                                 = 0x000000e5,
    ge_spi_lsvert_eov                                  = 0x000000e6,
    ge_spi_lsvert_stalled                              = 0x000000e7,
    ge_spi_lsvert_starved_busy                         = 0x000000e8,
    ge_spi_lsvert_valid                                = 0x000000e9,
    ge_spi_lswave_is_event                             = 0x000000ea,
    ge_spi_lswave_send                                 = 0x000000eb,
    ge_spi_vsvert_eov                                  = 0x000000ec,
    ge_spi_vsvert_send                                 = 0x000000ed,
    ge_spi_vsvert_stalled                              = 0x000000ee,
    ge_spi_vsvert_starved_busy                         = 0x000000ef,
    ge_spi_vswave_is_event                             = 0x000000f0,
    ge_spi_vswave_send                                 = 0x000000f1,
    ge_starved_on_hs_done                              = 0x000000f2,
    ge_stat_busy                                       = 0x000000f3,
    ge_stat_combined_busy                              = 0x000000f4,
    ge_stat_no_dma_busy                                = 0x000000f5,
    ge_strmout_stalled                                 = 0x000000f6,
    ge_te11_busy                                       = 0x000000f7,
    ge_te11_starved                                    = 0x000000f8,
    ge_tfreq_lat_bin_0                                 = 0x000000f9,
    ge_tfreq_lat_bin_1                                 = 0x000000fa,
    ge_tfreq_lat_bin_2                                 = 0x000000fb,
    ge_tfreq_lat_bin_3                                 = 0x000000fc,
    ge_tfreq_lat_bin_4                                 = 0x000000fd,
    ge_tfreq_lat_bin_5                                 = 0x000000fe,
    ge_tfreq_lat_bin_6                                 = 0x000000ff,
    ge_tfreq_lat_bin_7                                 = 0x00000100,
    ge_tfreq_utcl1_consecutive_retry_event             = 0x00000101,
    ge_tfreq_utcl1_request_event                       = 0x00000102,
    ge_tfreq_utcl1_retry_event                         = 0x00000103,
    ge_tfreq_utcl1_stall_event                         = 0x00000104,
    ge_tfreq_utcl1_stall_utcl2_event                   = 0x00000105,
    ge_tfreq_utcl1_translation_hit_event               = 0x00000106,
    ge_tfreq_utcl1_translation_miss_event              = 0x00000107,
    ge_ls_thread_group                                 = 0x00000108,
    ge_rcm_indicies_hit                                = 0x00000109,
    ge_vs_cache_hits                                   = 0x0000010a,
    ge_vs_done                                         = 0x0000010b,
    ge_vs_pc_stall                                     = 0x0000010c,
    ge_vs_table_high_water_mark                        = 0x0000010d,
    ge_vs_thread_groups                                = 0x0000010e,
    ge_vsvert_api_send                                 = 0x0000010f,
    ge_vsvert_ds_send                                  = 0x00000110,
    ge_wait_for_es_done_stalled                        = 0x00000111,
    ge_waveid_stalled                                  = 0x00000112,
    ge_spi_vsvert_valid                                = 0x00000113,
    pc_feorder_fifo_full                               = 0x00000114,
    pc_ge_manager_busy                                 = 0x00000115,
    pc_req_stall_se0                                   = 0x00000116,
    pc_req_stall_se1                                   = 0x00000117,
    pc_req_stall_se2                                   = 0x00000118,
    pc_req_stall_se3                                   = 0x00000119,
    ge_pipe0_to_pipe1                                  = 0x0000011a,
    ge_pipe1_to_pipe0                                  = 0x0000011b,
    ge_dma_return_size_cl0                             = 0x0000011c,
    ge_dma_return_size_cl1                             = 0x0000011d,
    ge_spi_gssubgrp_event_window_active                = 0x0000011e,
    ge_bypass_fifo_full                                = 0x0000011f,
    ge_hs_input_stall0                                 = 0x00000120,
    ge_hs_input_stall1                                 = 0x00000121,
    ge_pc_space_zero                                   = 0x00000122,
    vgt_se0pa0_clipv_starved_busy                      = 0x00000123,
    vgt_se0pa1_clipv_starved_busy                      = 0x00000124,
    vgt_se1pa0_clipv_starved_busy                      = 0x00000125,
    vgt_se1pa1_clipv_starved_busy                      = 0x00000126,
    vgt_se2pa0_clipv_starved_busy                      = 0x00000127,
    vgt_se2pa1_clipv_starved_busy                      = 0x00000128,
    vgt_se3pa0_clipv_starved_busy                      = 0x00000129,
    vgt_se3pa1_clipv_starved_busy                      = 0x0000012a,
    vgt_se0pa0_clipv_firstvert                         = 0x0000012b,
    vgt_se0pa1_clipv_firstvert                         = 0x0000012c,
    vgt_se1pa0_clipv_firstvert                         = 0x0000012d,
    vgt_se1pa1_clipv_firstvert                         = 0x0000012e,
    vgt_se2pa0_clipv_firstvert                         = 0x0000012f,
    vgt_se2pa1_clipv_firstvert                         = 0x00000130,
    vgt_se3pa0_clipv_firstvert                         = 0x00000131,
    vgt_se3pa1_clipv_firstvert                         = 0x00000132,
    vgt_se0pa0_clips_starved_busy                      = 0x00000133,
    vgt_se0pa1_clips_starved_busy                      = 0x00000134,
    vgt_se1pa0_clips_starved_busy                      = 0x00000135,
    vgt_se1pa1_clips_starved_busy                      = 0x00000136,
    vgt_se2pa0_clips_starved_busy                      = 0x00000137,
    vgt_se2pa1_clips_starved_busy                      = 0x00000138,
    vgt_se3pa0_clips_starved_busy                      = 0x00000139,
    vgt_se3pa1_clips_starved_busy                      = 0x0000013a,
} GE_PERFCOUNT_SELECT;

constexpr unsigned int MaxGePerfcountSelectNv10        = vgt_se3pa1_clips_starved_busy;

typedef enum GL0V_CACHE_POLICIES {
    GL0V_CACHE_POLICY_MISS_LRU                         = 0x00000000,
    GL0V_CACHE_POLICY_MISS_EVICT                       = 0x00000001,
    GL0V_CACHE_POLICY_HIT_LRU                          = 0x00000002,
    GL0V_CACHE_POLICY_HIT_EVICT                        = 0x00000003,
} GL0V_CACHE_POLICIES;

typedef enum GL1A_PERF_SEL {
    GL1A_PERF_SEL_BUSY                                 = 0x00000000,
    GL1A_PERF_SEL_STALL_GL1C0                          = 0x00000001,
    GL1A_PERF_SEL_STALL_GL1C1                          = 0x00000002,
    GL1A_PERF_SEL_STALL_GL1C2                          = 0x00000003,
    GL1A_PERF_SEL_STALL_GL1C3                          = 0x00000004,
    GL1A_PERF_SEL_REQUEST_GL1C0__NV10                  = 0x00000005,
    GL1A_PERF_SEL_REQUEST_GL1C1__NV10                  = 0x00000006,
    GL1A_PERF_SEL_REQUEST_GL1C2__NV10                  = 0x00000007,
    GL1A_PERF_SEL_REQUEST_GL1C3__NV10                  = 0x00000008,
    GL1A_PERF_SEL_MEM_32B_WDS_GL1C0__NV10              = 0x00000009,
    GL1A_PERF_SEL_MEM_32B_WDS_GL1C1__NV10              = 0x0000000a,
    GL1A_PERF_SEL_MEM_32B_WDS_GL1C2__NV10              = 0x0000000b,
    GL1A_PERF_SEL_MEM_32B_WDS_GL1C3__NV10              = 0x0000000c,
    GL1A_PERF_SEL_IO_32B_WDS_GL1C0__NV10               = 0x0000000d,
    GL1A_PERF_SEL_IO_32B_WDS_GL1C1__NV10               = 0x0000000e,
    GL1A_PERF_SEL_IO_32B_WDS_GL1C2__NV10               = 0x0000000f,
    GL1A_PERF_SEL_IO_32B_WDS_GL1C3__NV10               = 0x00000010,
    GL1A_PERF_SEL_MEM_BURST_COUNT_GL1C0__NV10          = 0x00000011,
    GL1A_PERF_SEL_MEM_BURST_COUNT_GL1C1__NV10          = 0x00000012,
    GL1A_PERF_SEL_MEM_BURST_COUNT_GL1C2__NV10          = 0x00000013,
    GL1A_PERF_SEL_MEM_BURST_COUNT_GL1C3__NV10          = 0x00000014,
    GL1A_PERF_SEL_IO_BURST_COUNT_GL1C0__NV10           = 0x00000015,
    GL1A_PERF_SEL_IO_BURST_COUNT_GL1C1__NV10           = 0x00000016,
    GL1A_PERF_SEL_IO_BURST_COUNT_GL1C2__NV10           = 0x00000017,
    GL1A_PERF_SEL_IO_BURST_COUNT_GL1C3__NV10           = 0x00000018,
    GL1A_PERF_SEL_ARB_REQUESTS__NV10                   = 0x00000019,
    GL1A_PERF_SEL_REQ_ARB_LEVEL_GL1C0__NV10            = 0x0000001a,
    GL1A_PERF_SEL_REQ_ARB_LEVEL_GL1C1__NV10            = 0x0000001b,
    GL1A_PERF_SEL_REQ_ARB_LEVEL_GL1C2__NV10            = 0x0000001c,
    GL1A_PERF_SEL_REQ_ARB_LEVEL_GL1C3__NV10            = 0x0000001d,
    GL1A_PERF_SEL_REQ_INFLIGHT_LEVEL__NV10             = 0x0000001e,
    GL1A_PERF_SEL_STALL_RET_CONFLICT_GL1C0__NV10       = 0x0000001f,
    GL1A_PERF_SEL_STALL_RET_CONFLICT_GL1C1__NV10       = 0x00000020,
    GL1A_PERF_SEL_STALL_RET_CONFLICT_GL1C2__NV10       = 0x00000021,
    GL1A_PERF_SEL_STALL_RET_CONFLICT_GL1C3__NV10       = 0x00000022,
    GL1A_PERF_SEL_CYCLE__NV10                          = 0x00000023,
} GL1A_PERF_SEL;

constexpr unsigned int MaxGl1aPerfSelNv10              = GL1A_PERF_SEL_CYCLE__NV10;

typedef enum GL1C_PERF_SEL {
    GL1C_PERF_SEL_CYCLE                                = 0x00000000,
    GL1C_PERF_SEL_BUSY                                 = 0x00000001,
    GL1C_PERF_SEL_STARVE__GFX101PLUS                   = 0x00000002,
    GL1C_PERF_SEL_ARB_RET_LEVEL__GFX101PLUS            = 0x00000003,
    GL1C_PERF_SEL_GL2_REQ_READ__GFX101PLUS             = 0x00000004,
    GL1C_PERF_SEL_GL2_REQ_READ_128B__GFX101PLUS        = 0x00000005,
    GL1C_PERF_SEL_GL2_REQ_READ_32B__GFX101PLUS         = 0x00000006,
    GL1C_PERF_SEL_GL2_REQ_READ_64B__GFX101PLUS         = 0x00000007,
    GL1C_PERF_SEL_GL2_REQ_READ_LATENCY__GFX101PLUS     = 0x00000008,
    GL1C_PERF_SEL_GL2_REQ_WRITE__GFX101PLUS            = 0x00000009,
    GL1C_PERF_SEL_GL2_REQ_WRITE_32B__GFX101PLUS        = 0x0000000a,
    GL1C_PERF_SEL_GL2_REQ_WRITE_64B__GFX101PLUS        = 0x0000000b,
    GL1C_PERF_SEL_GL2_REQ_WRITE_LATENCY__GFX101PLUS    = 0x0000000c,
    GL1C_PERF_SEL_GL2_REQ_PREFETCH__GFX101PLUS         = 0x0000000d,
    GL1C_PERF_SEL_REQ__GFX101PLUS                      = 0x0000000e,
    GL1C_PERF_SEL_REQ_ATOMIC_WITH_RET__GFX101PLUS      = 0x0000000f,
    GL1C_PERF_SEL_REQ_ATOMIC_WITHOUT_RET__GFX101PLUS   = 0x00000010,
    GL1C_PERF_SEL_REQ_SHADER_INV__GFX101PLUS           = 0x00000011,
    GL1C_PERF_SEL_REQ_MISS__GFX101PLUS                 = 0x00000012,
    GL1C_PERF_SEL_REQ_NOP_ACK__GFX101PLUS              = 0x00000013,
    GL1C_PERF_SEL_REQ_NOP_RTN0__GFX101PLUS             = 0x00000014,
    GL1C_PERF_SEL_REQ_READ__GFX101PLUS                 = 0x00000015,
    GL1C_PERF_SEL_REQ_READ_128B__GFX101PLUS            = 0x00000016,
    GL1C_PERF_SEL_REQ_READ_32B__GFX101PLUS             = 0x00000017,
    GL1C_PERF_SEL_REQ_READ_64B__GFX101PLUS             = 0x00000018,
    GL1C_PERF_SEL_REQ_READ_POLICY_HIT_EVICT__GFX101PLUS = 0x00000019,
    GL1C_PERF_SEL_REQ_READ_POLICY_HIT_LRU__GFX101PLUS  = 0x0000001a,
    GL1C_PERF_SEL_REQ_READ_POLICY_MISS_EVICT__GFX101PLUS = 0x0000001b,
    GL1C_PERF_SEL_REQ_WRITE__GFX101PLUS                = 0x0000001c,
    GL1C_PERF_SEL_REQ_WRITE_32B__GFX101PLUS            = 0x0000001d,
    GL1C_PERF_SEL_REQ_WRITE_64B__GFX101PLUS            = 0x0000001e,
    GL1C_PERF_SEL_STALL_GL2_GL1__GFX101PLUS            = 0x0000001f,
    GL1C_PERF_SEL_STALL_LFIFO_FULL__GFX101PLUS         = 0x00000020,
    GL1C_PERF_SEL_STALL_NO_AVAILABLE_ACK_ALLOC__GFX101PLUS = 0x00000021,
    GL1C_PERF_SEL_STALL_NOTHING_REPLACEABLE__GFX101PLUS = 0x00000022,
    GL1C_PERF_SEL_STALL_GCR_INV__GFX101PLUS            = 0x00000023,
    GL1C_PERF_SEL_REQ_CLIENT0__GFX101PLUS              = 0x00000024,
    GL1C_PERF_SEL_REQ_CLIENT1__GFX101PLUS              = 0x00000025,
    GL1C_PERF_SEL_REQ_CLIENT2__GFX101PLUS              = 0x00000026,
    GL1C_PERF_SEL_REQ_CLIENT3__GFX101PLUS              = 0x00000027,
    GL1C_PERF_SEL_REQ_CLIENT4__GFX101PLUS              = 0x00000028,
    GL1C_PERF_SEL_REQ_CLIENT5__GFX101PLUS              = 0x00000029,
    GL1C_PERF_SEL_REQ_CLIENT6__GFX101PLUS              = 0x0000002a,
    GL1C_PERF_SEL_REQ_CLIENT7__GFX101PLUS              = 0x0000002b,
    GL1C_PERF_SEL_REQ_CLIENT8__GFX101PLUS              = 0x0000002c,
    GL1C_PERF_SEL_REQ_CLIENT9__GFX101PLUS              = 0x0000002d,
    GL1C_PERF_SEL_REQ_CLIENT10__GFX101PLUS             = 0x0000002e,
    GL1C_PERF_SEL_REQ_CLIENT11__GFX101PLUS             = 0x0000002f,
    GL1C_PERF_SEL_REQ_CLIENT12__GFX101PLUS             = 0x00000030,
    GL1C_PERF_SEL_REQ_CLIENT13__GFX101PLUS             = 0x00000031,
    GL1C_PERF_SEL_REQ_CLIENT14__GFX101PLUS             = 0x00000032,
    GL1C_PERF_SEL_REQ_CLIENT15__GFX101PLUS             = 0x00000033,
    GL1C_PERF_SEL_REQ_CLIENT16__GFX101PLUS             = 0x00000034,
    GL1C_PERF_SEL_REQ_CLIENT17__GFX101PLUS             = 0x00000035,
    GL1C_PERF_SEL_REQ_CLIENT18__GFX101PLUS             = 0x00000036,
    GL1C_PERF_SEL_REQ_CLIENT19__GFX101PLUS             = 0x00000037,
    GL1C_PERF_SEL_REQ_CLIENT20__GFX101PLUS             = 0x00000038,
    GL1C_PERF_SEL_REQ_CLIENT21__GFX101PLUS             = 0x00000039,
    GL1C_PERF_SEL_REQ_CLIENT22__GFX101PLUS             = 0x0000003a,
    GL1C_PERF_SEL_REQ_CLIENT23__GFX101PLUS             = 0x0000003b,
    GL1C_PERF_SEL_REQ_CLIENT24__GFX101PLUS             = 0x0000003c,
    GL1C_PERF_SEL_REQ_CLIENT25__GFX101PLUS             = 0x0000003d,
    GL1C_PERF_SEL_REQ_CLIENT26__GFX101PLUS             = 0x0000003e,
    GL1C_PERF_SEL_REQ_CLIENT27__GFX101PLUS             = 0x0000003f,
} GL1C_PERF_SEL;

constexpr unsigned int MaxGl1cPerfSelGfx101Plus        = GL1C_PERF_SEL_REQ_CLIENT27__GFX101PLUS;

typedef enum GL1_CACHE_POLICIES {
    GL1_CACHE_POLICY_MISS_LRU                          = 0x00000000,
    GL1_CACHE_POLICY_MISS_EVICT                        = 0x00000001,
    GL1_CACHE_POLICY_HIT_LRU                           = 0x00000002,
    GL1_CACHE_POLICY_HIT_EVICT                         = 0x00000003,
} GL1_CACHE_POLICIES;

typedef enum GL1_CACHE_STORE_POLICIES {
    GL1_CACHE_STORE_POLICY_BYPASS                      = 0x00000000,
} GL1_CACHE_STORE_POLICIES;

typedef enum GL2A_PERF_SEL {
    GL2A_PERF_SEL_NONE                                 = 0x00000000,
    GL2A_PERF_SEL_CYCLE                                = 0x00000001,
    GL2A_PERF_SEL_BUSY                                 = 0x00000002,
    GL2A_PERF_SEL_REQ_GL2C0                            = 0x00000003,
    GL2A_PERF_SEL_REQ_GL2C1                            = 0x00000004,
    GL2A_PERF_SEL_REQ_GL2C2                            = 0x00000005,
    GL2A_PERF_SEL_REQ_GL2C3                            = 0x00000006,
    GL2A_PERF_SEL_REQ_GL2C4                            = 0x00000007,
    GL2A_PERF_SEL_REQ_GL2C5                            = 0x00000008,
    GL2A_PERF_SEL_REQ_GL2C6                            = 0x00000009,
    GL2A_PERF_SEL_REQ_GL2C7                            = 0x0000000a,
    GL2A_PERF_SEL_REQ_HI_PRIO_GL2C0                    = 0x0000000b,
    GL2A_PERF_SEL_REQ_HI_PRIO_GL2C1                    = 0x0000000c,
    GL2A_PERF_SEL_REQ_HI_PRIO_GL2C2                    = 0x0000000d,
    GL2A_PERF_SEL_REQ_HI_PRIO_GL2C3                    = 0x0000000e,
    GL2A_PERF_SEL_REQ_HI_PRIO_GL2C4                    = 0x0000000f,
    GL2A_PERF_SEL_REQ_HI_PRIO_GL2C5                    = 0x00000010,
    GL2A_PERF_SEL_REQ_HI_PRIO_GL2C6                    = 0x00000011,
    GL2A_PERF_SEL_REQ_HI_PRIO_GL2C7                    = 0x00000012,
    GL2A_PERF_SEL_REQ_BURST_GL2C0                      = 0x00000013,
    GL2A_PERF_SEL_REQ_BURST_GL2C1                      = 0x00000014,
    GL2A_PERF_SEL_REQ_BURST_GL2C2                      = 0x00000015,
    GL2A_PERF_SEL_REQ_BURST_GL2C3                      = 0x00000016,
    GL2A_PERF_SEL_REQ_BURST_GL2C4                      = 0x00000017,
    GL2A_PERF_SEL_REQ_BURST_GL2C5                      = 0x00000018,
    GL2A_PERF_SEL_REQ_BURST_GL2C6                      = 0x00000019,
    GL2A_PERF_SEL_REQ_BURST_GL2C7                      = 0x0000001a,
    GL2A_PERF_SEL_REQ_STALL_GL2C0                      = 0x0000001b,
    GL2A_PERF_SEL_REQ_STALL_GL2C1                      = 0x0000001c,
    GL2A_PERF_SEL_REQ_STALL_GL2C2                      = 0x0000001d,
    GL2A_PERF_SEL_REQ_STALL_GL2C3                      = 0x0000001e,
    GL2A_PERF_SEL_REQ_STALL_GL2C4                      = 0x0000001f,
    GL2A_PERF_SEL_REQ_STALL_GL2C5                      = 0x00000020,
    GL2A_PERF_SEL_REQ_STALL_GL2C6                      = 0x00000021,
    GL2A_PERF_SEL_REQ_STALL_GL2C7                      = 0x00000022,
    GL2A_PERF_SEL_RTN_STALL_GL2C0                      = 0x00000023,
    GL2A_PERF_SEL_RTN_STALL_GL2C1                      = 0x00000024,
    GL2A_PERF_SEL_RTN_STALL_GL2C2                      = 0x00000025,
    GL2A_PERF_SEL_RTN_STALL_GL2C3                      = 0x00000026,
    GL2A_PERF_SEL_RTN_STALL_GL2C4                      = 0x00000027,
    GL2A_PERF_SEL_RTN_STALL_GL2C5                      = 0x00000028,
    GL2A_PERF_SEL_RTN_STALL_GL2C6                      = 0x00000029,
    GL2A_PERF_SEL_RTN_STALL_GL2C7                      = 0x0000002a,
    GL2A_PERF_SEL_RTN_CLIENT0                          = 0x0000002b,
    GL2A_PERF_SEL_RTN_CLIENT1                          = 0x0000002c,
    GL2A_PERF_SEL_RTN_CLIENT2                          = 0x0000002d,
    GL2A_PERF_SEL_RTN_CLIENT3                          = 0x0000002e,
    GL2A_PERF_SEL_RTN_CLIENT4                          = 0x0000002f,
    GL2A_PERF_SEL_RTN_CLIENT5                          = 0x00000030,
    GL2A_PERF_SEL_RTN_CLIENT6                          = 0x00000031,
    GL2A_PERF_SEL_RTN_CLIENT7                          = 0x00000032,
    GL2A_PERF_SEL_RTN_CLIENT8                          = 0x00000033,
    GL2A_PERF_SEL_RTN_CLIENT9                          = 0x00000034,
    GL2A_PERF_SEL_RTN_CLIENT10                         = 0x00000035,
    GL2A_PERF_SEL_RTN_CLIENT11                         = 0x00000036,
    GL2A_PERF_SEL_RTN_CLIENT12                         = 0x00000037,
    GL2A_PERF_SEL_RTN_CLIENT13                         = 0x00000038,
    GL2A_PERF_SEL_RTN_CLIENT14                         = 0x00000039,
    GL2A_PERF_SEL_RTN_CLIENT15                         = 0x0000003a,
    GL2A_PERF_SEL_RTN_ARB_COLLISION_CLIENT0            = 0x0000003b,
    GL2A_PERF_SEL_RTN_ARB_COLLISION_CLIENT1            = 0x0000003c,
    GL2A_PERF_SEL_RTN_ARB_COLLISION_CLIENT2            = 0x0000003d,
    GL2A_PERF_SEL_RTN_ARB_COLLISION_CLIENT3            = 0x0000003e,
    GL2A_PERF_SEL_RTN_ARB_COLLISION_CLIENT4            = 0x0000003f,
    GL2A_PERF_SEL_RTN_ARB_COLLISION_CLIENT5            = 0x00000040,
    GL2A_PERF_SEL_RTN_ARB_COLLISION_CLIENT6            = 0x00000041,
    GL2A_PERF_SEL_RTN_ARB_COLLISION_CLIENT7            = 0x00000042,
    GL2A_PERF_SEL_RTN_ARB_COLLISION_CLIENT8            = 0x00000043,
    GL2A_PERF_SEL_RTN_ARB_COLLISION_CLIENT9            = 0x00000044,
    GL2A_PERF_SEL_RTN_ARB_COLLISION_CLIENT10           = 0x00000045,
    GL2A_PERF_SEL_RTN_ARB_COLLISION_CLIENT11           = 0x00000046,
    GL2A_PERF_SEL_RTN_ARB_COLLISION_CLIENT12           = 0x00000047,
    GL2A_PERF_SEL_RTN_ARB_COLLISION_CLIENT13           = 0x00000048,
    GL2A_PERF_SEL_RTN_ARB_COLLISION_CLIENT14           = 0x00000049,
    GL2A_PERF_SEL_RTN_ARB_COLLISION_CLIENT15           = 0x0000004a,
    GL2A_PERF_SEL_REQ_BURST_CLIENT0__GFX101PLUS        = 0x0000004b,
    GL2A_PERF_SEL_REQ_BURST_CLIENT1__GFX101PLUS        = 0x0000004c,
    GL2A_PERF_SEL_REQ_BURST_CLIENT2__GFX101PLUS        = 0x0000004d,
    GL2A_PERF_SEL_REQ_BURST_CLIENT3__GFX101PLUS        = 0x0000004e,
    GL2A_PERF_SEL_REQ_BURST_CLIENT4__GFX101PLUS        = 0x0000004f,
    GL2A_PERF_SEL_REQ_BURST_CLIENT5__GFX101PLUS        = 0x00000050,
    GL2A_PERF_SEL_REQ_BURST_CLIENT6__GFX101PLUS        = 0x00000051,
    GL2A_PERF_SEL_REQ_BURST_CLIENT7__GFX101PLUS        = 0x00000052,
    GL2A_PERF_SEL_REQ_BURST_CLIENT8__GFX101PLUS        = 0x00000053,
    GL2A_PERF_SEL_REQ_BURST_CLIENT9__GFX101PLUS        = 0x00000054,
    GL2A_PERF_SEL_REQ_BURST_CLIENT10__GFX101PLUS       = 0x00000055,
    GL2A_PERF_SEL_REQ_BURST_CLIENT11__GFX101PLUS       = 0x00000056,
    GL2A_PERF_SEL_REQ_BURST_CLIENT12__GFX101PLUS       = 0x00000057,
    GL2A_PERF_SEL_REQ_BURST_CLIENT13__GFX101PLUS       = 0x00000058,
    GL2A_PERF_SEL_REQ_BURST_CLIENT14__GFX101PLUS       = 0x00000059,
    GL2A_PERF_SEL_REQ_BURST_CLIENT15__GFX101PLUS       = 0x0000005a,
} GL2A_PERF_SEL;

constexpr unsigned int MaxGl2aPerfSelGfx101Plus        = GL2A_PERF_SEL_REQ_BURST_CLIENT15__GFX101PLUS;

typedef enum GL2C_PERF_SEL {
    GL2C_PERF_SEL_NONE                                 = 0x00000000,
    GL2C_PERF_SEL_CYCLE                                = 0x00000001,
    GL2C_PERF_SEL_BUSY                                 = 0x00000002,
    GL2C_PERF_SEL_REQ                                  = 0x00000003,
    GL2C_PERF_SEL_VOL_REQ                              = 0x00000004,
    GL2C_PERF_SEL_HIGH_PRIORITY_REQ                    = 0x00000005,
    GL2C_PERF_SEL_READ                                 = 0x00000006,
    GL2C_PERF_SEL_WRITE                                = 0x00000007,
    GL2C_PERF_SEL_ATOMIC                               = 0x00000008,
    GL2C_PERF_SEL_NOP_ACK                              = 0x00000009,
    GL2C_PERF_SEL_NOP_RTN0                             = 0x0000000a,
    GL2C_PERF_SEL_PROBE                                = 0x0000000b,
    GL2C_PERF_SEL_PROBE_ALL                            = 0x0000000c,
    GL2C_PERF_SEL_INTERNAL_PROBE                       = 0x0000000d,
    GL2C_PERF_SEL_COMPRESSED_READ_REQ                  = 0x0000000e,
    GL2C_PERF_SEL_METADATA_READ_REQ                    = 0x0000000f,
    GL2C_PERF_SEL_CLIENT0_REQ                          = 0x00000010,
    GL2C_PERF_SEL_CLIENT1_REQ                          = 0x00000011,
    GL2C_PERF_SEL_CLIENT2_REQ                          = 0x00000012,
    GL2C_PERF_SEL_CLIENT3_REQ                          = 0x00000013,
    GL2C_PERF_SEL_CLIENT4_REQ                          = 0x00000014,
    GL2C_PERF_SEL_CLIENT5_REQ                          = 0x00000015,
    GL2C_PERF_SEL_CLIENT6_REQ                          = 0x00000016,
    GL2C_PERF_SEL_CLIENT7_REQ                          = 0x00000017,
    GL2C_PERF_SEL_C_RW_S_REQ                           = 0x00000018,
    GL2C_PERF_SEL_C_RW_US_REQ                          = 0x00000019,
    GL2C_PERF_SEL_C_RO_S_REQ                           = 0x0000001a,
    GL2C_PERF_SEL_C_RO_US_REQ                          = 0x0000001b,
    GL2C_PERF_SEL_UC_REQ                               = 0x0000001c,
    GL2C_PERF_SEL_LRU_REQ                              = 0x0000001d,
    GL2C_PERF_SEL_STREAM_REQ                           = 0x0000001e,
    GL2C_PERF_SEL_BYPASS_REQ                           = 0x0000001f,
    GL2C_PERF_SEL_NOA_REQ                              = 0x00000020,
    GL2C_PERF_SEL_SHARED_REQ                           = 0x00000021,
    GL2C_PERF_SEL_HIT                                  = 0x00000022,
    GL2C_PERF_SEL_MISS                                 = 0x00000023,
    GL2C_PERF_SEL_FULL_HIT                             = 0x00000024,
    GL2C_PERF_SEL_PARTIAL_32B_HIT                      = 0x00000025,
    GL2C_PERF_SEL_PARTIAL_64B_HIT                      = 0x00000026,
    GL2C_PERF_SEL_PARTIAL_96B_HIT                      = 0x00000027,
    GL2C_PERF_SEL_DEWRITE_ALLOCATE_HIT                 = 0x00000028,
    GL2C_PERF_SEL_FULLY_WRITTEN_HIT                    = 0x00000029,
    GL2C_PERF_SEL_UNCACHED_WRITE                       = 0x0000002a,
    GL2C_PERF_SEL_WRITEBACK                            = 0x0000002b,
    GL2C_PERF_SEL_NORMAL_WRITEBACK                     = 0x0000002c,
    GL2C_PERF_SEL_EVICT                                = 0x0000002d,
    GL2C_PERF_SEL_NORMAL_EVICT                         = 0x0000002e,
    GL2C_PERF_SEL_PROBE_EVICT                          = 0x0000002f,
    GL2C_PERF_SEL_REQ_TO_MISS_QUEUE                    = 0x00000030,
    GL2C_PERF_SEL_HIT_PASS_MISS_IN_CLIENT0__GFX101PLUS = 0x00000031,
    GL2C_PERF_SEL_HIT_PASS_MISS_IN_CLIENT1__GFX101PLUS = 0x00000032,
    GL2C_PERF_SEL_HIT_PASS_MISS_IN_CLIENT2__GFX101PLUS = 0x00000033,
    GL2C_PERF_SEL_HIT_PASS_MISS_IN_CLIENT3__GFX101PLUS = 0x00000034,
    GL2C_PERF_SEL_HIT_PASS_MISS_IN_CLIENT4__GFX101PLUS = 0x00000035,
    GL2C_PERF_SEL_HIT_PASS_MISS_IN_CLIENT5__GFX101PLUS = 0x00000036,
    GL2C_PERF_SEL_HIT_PASS_MISS_IN_CLIENT6__GFX101PLUS = 0x00000037,
    GL2C_PERF_SEL_HIT_PASS_MISS_IN_CLIENT7__GFX101PLUS = 0x00000038,
    GL2C_PERF_SEL_HIT_PASS_MISS_IN_CLIENT8__GFX101PLUS = 0x00000039,
    GL2C_PERF_SEL_HIT_PASS_MISS_IN_CLIENT9__GFX101PLUS = 0x0000003a,
    GL2C_PERF_SEL_HIT_PASS_MISS_IN_CLIENT10__GFX101PLUS = 0x0000003b,
    GL2C_PERF_SEL_HIT_PASS_MISS_IN_CLIENT11__GFX101PLUS = 0x0000003c,
    GL2C_PERF_SEL_HIT_PASS_MISS_IN_CLIENT12__GFX101PLUS = 0x0000003d,
    GL2C_PERF_SEL_HIT_PASS_MISS_IN_CLIENT13__GFX101PLUS = 0x0000003e,
    GL2C_PERF_SEL_HIT_PASS_MISS_IN_CLIENT14__GFX101PLUS = 0x0000003f,
    GL2C_PERF_SEL_HIT_PASS_MISS_IN_CLIENT15__GFX101PLUS = 0x00000040,
    GL2C_PERF_SEL_READ_32_REQ__GFX101PLUS              = 0x00000041,
    GL2C_PERF_SEL_READ_64_REQ__GFX101PLUS              = 0x00000042,
    GL2C_PERF_SEL_READ_128_REQ__GFX101PLUS             = 0x00000043,
    GL2C_PERF_SEL_WRITE_32_REQ__GFX101PLUS             = 0x00000044,
    GL2C_PERF_SEL_WRITE_64_REQ__GFX101PLUS             = 0x00000045,
    GL2C_PERF_SEL_COMPRESSED_READ_0_REQ__GFX101PLUS    = 0x00000046,
    GL2C_PERF_SEL_COMPRESSED_READ_32_REQ__GFX101PLUS   = 0x00000047,
    GL2C_PERF_SEL_COMPRESSED_READ_64_REQ__GFX101PLUS   = 0x00000048,
    GL2C_PERF_SEL_COMPRESSED_READ_96_REQ__GFX101PLUS   = 0x00000049,
    GL2C_PERF_SEL_COMPRESSED_READ_128_REQ__GFX101PLUS  = 0x0000004a,
    GL2C_PERF_SEL_MC_WRREQ__GFX101PLUS                 = 0x0000004b,
    GL2C_PERF_SEL_EA_WRREQ_64B__GFX101PLUS             = 0x0000004c,
    GL2C_PERF_SEL_EA_WRREQ_PROBE_COMMAND__GFX101PLUS   = 0x0000004d,
    GL2C_PERF_SEL_EA_WR_UNCACHED_32B__GFX101PLUS       = 0x0000004e,
    GL2C_PERF_SEL_MC_WRREQ_STALL__GFX101PLUS           = 0x0000004f,
    GL2C_PERF_SEL_EA_WRREQ_IO_CREDIT_STALL__GFX101PLUS = 0x00000050,
    GL2C_PERF_SEL_EA_WRREQ_GMI_CREDIT_STALL__GFX101PLUS = 0x00000051,
    GL2C_PERF_SEL_EA_WRREQ_DRAM_CREDIT_STALL__GFX101PLUS = 0x00000052,
    GL2C_PERF_SEL_TOO_MANY_EA_WRREQS_STALL__GFX101PLUS = 0x00000053,
    GL2C_PERF_SEL_MC_WRREQ_LEVEL__GFX101PLUS           = 0x00000054,
    GL2C_PERF_SEL_EA_ATOMIC__GFX101PLUS                = 0x00000055,
    GL2C_PERF_SEL_EA_ATOMIC_LEVEL__GFX101PLUS          = 0x00000056,
    GL2C_PERF_SEL_MC_RDREQ__GFX101PLUS                 = 0x00000057,
    GL2C_PERF_SEL_EA_RDREQ_SPLIT__GFX101PLUS           = 0x00000058,
    GL2C_PERF_SEL_EA_RDREQ_32B__GFX101PLUS             = 0x00000059,
    GL2C_PERF_SEL_EA_RDREQ_64B__GFX101PLUS             = 0x0000005a,
    GL2C_PERF_SEL_EA_RDREQ_96B__GFX101PLUS             = 0x0000005b,
    GL2C_PERF_SEL_EA_RDREQ_128B__GFX101PLUS            = 0x0000005c,
    GL2C_PERF_SEL_EA_RD_UNCACHED_32B__GFX101PLUS       = 0x0000005d,
    GL2C_PERF_SEL_EA_RD_MDC_32B__GFX101PLUS            = 0x0000005e,
    GL2C_PERF_SEL_EA_RD_COMPRESSED_32B__GFX101PLUS     = 0x0000005f,
    GL2C_PERF_SEL_EA_RDREQ_IO_CREDIT_STALL__GFX101PLUS = 0x00000060,
    GL2C_PERF_SEL_EA_RDREQ_GMI_CREDIT_STALL__GFX101PLUS = 0x00000061,
    GL2C_PERF_SEL_EA_RDREQ_DRAM_CREDIT_STALL__GFX101PLUS = 0x00000062,
    GL2C_PERF_SEL_MC_RDREQ_LEVEL__GFX101PLUS           = 0x00000063,
    GL2C_PERF_SEL_EA_RDREQ_DRAM__GFX101PLUS            = 0x00000064,
    GL2C_PERF_SEL_EA_WRREQ_DRAM__GFX101PLUS            = 0x00000065,
    GL2C_PERF_SEL_EA_RDREQ_DRAM_32B__GFX101PLUS        = 0x00000066,
    GL2C_PERF_SEL_EA_WRREQ_DRAM_32B__GFX101PLUS        = 0x00000067,
    GL2C_PERF_SEL_ONION_READ__GFX101PLUS               = 0x00000068,
    GL2C_PERF_SEL_ONION_WRITE__GFX101PLUS              = 0x00000069,
    GL2C_PERF_SEL_IO_READ__GFX101PLUS                  = 0x0000006a,
    GL2C_PERF_SEL_IO_WRITE__GFX101PLUS                 = 0x0000006b,
    GL2C_PERF_SEL_GARLIC_READ__GFX101PLUS              = 0x0000006c,
    GL2C_PERF_SEL_GARLIC_WRITE__GFX101PLUS             = 0x0000006d,
    GL2C_PERF_SEL_EA_OUTSTANDING__GFX101PLUS           = 0x0000006e,
    GL2C_PERF_SEL_LATENCY_FIFO_FULL__GFX101PLUS        = 0x0000006f,
    GL2C_PERF_SEL_SRC_FIFO_FULL__GFX101PLUS            = 0x00000070,
    GL2C_PERF_SEL_TAG_STALL__GFX101PLUS                = 0x00000071,
    GL2C_PERF_SEL_TAG_WRITEBACK_FIFO_FULL_STALL__GFX101PLUS = 0x00000072,
    GL2C_PERF_SEL_TAG_MISS_NOTHING_REPLACEABLE_STALL__GFX101PLUS = 0x00000073,
    GL2C_PERF_SEL_TAG_UNCACHED_WRITE_ATOMIC_FIFO_FULL_STALL__GFX101PLUS = 0x00000074,
    GL2C_PERF_SEL_TAG_NO_UNCACHED_WRITE_ATOMIC_ENTRIES_STALL__GFX101PLUS = 0x00000075,
    GL2C_PERF_SEL_TAG_PROBE_STALL__GFX101PLUS          = 0x00000076,
    GL2C_PERF_SEL_TAG_PROBE_FILTER_STALL__GFX101PLUS   = 0x00000077,
    GL2C_PERF_SEL_TAG_PROBE_FIFO_FULL_STALL__GFX101PLUS = 0x00000078,
    GL2C_PERF_SEL_TAG_READ_DST_STALL__GFX101PLUS       = 0x00000079,
    GL2C_PERF_SEL_READ_RETURN_TIMEOUT__GFX101PLUS      = 0x0000007a,
    GL2C_PERF_SEL_WRITEBACK_READ_TIMEOUT__GFX101PLUS   = 0x0000007b,
    GL2C_PERF_SEL_READ_RETURN_FULL_BUBBLE__GFX101PLUS  = 0x0000007c,
    GL2C_PERF_SEL_BUBBLE__GFX101PLUS                   = 0x0000007d,
    GL2C_PERF_SEL_IB_REQ__GFX101PLUS                   = 0x0000007e,
    GL2C_PERF_SEL_IB_STALL__GFX101PLUS                 = 0x0000007f,
    GL2C_PERF_SEL_IB_TAG_STALL__GFX101PLUS             = 0x00000080,
    GL2C_PERF_SEL_IB_CM_STALL__GFX101PLUS              = 0x00000081,
    GL2C_PERF_SEL_RETURN_ACK__GFX101PLUS               = 0x00000082,
    GL2C_PERF_SEL_RETURN_DATA__GFX101PLUS              = 0x00000083,
    GL2C_PERF_SEL_EA_RDRET_NACK__GFX101PLUS            = 0x00000084,
    GL2C_PERF_SEL_EA_WRRET_NACK__GFX101PLUS            = 0x00000085,
    GL2C_PERF_SEL_GL2A_LEVEL__GFX101PLUS               = 0x00000086,
    GL2C_PERF_SEL_PROBE_FILTER_DISABLE_TRANSITION__GFX101PLUS = 0x00000087,
    GL2C_PERF_SEL_PROBE_FILTER_DISABLED__GFX101PLUS    = 0x00000088,
    GL2C_PERF_SEL_ALL_TC_OP_WB_OR_INV_START__GFX101PLUS = 0x00000089,
    GL2C_PERF_SEL_ALL_TC_OP_WB_OR_INV_VOL_START__GFX101PLUS = 0x0000008a,
    GL2C_PERF_SEL_GCR_INV__GFX101PLUS                  = 0x0000008b,
    GL2C_PERF_SEL_GCR_WB__GFX101PLUS                   = 0x0000008c,
    GL2C_PERF_SEL_GCR_DISCARD__GFX101PLUS              = 0x0000008d,
    GL2C_PERF_SEL_GCR_RANGE__GFX101PLUS                = 0x0000008e,
    GL2C_PERF_SEL_GCR_ALL__GFX101PLUS                  = 0x0000008f,
    GL2C_PERF_SEL_GCR_VOL__GFX101PLUS                  = 0x00000090,
    GL2C_PERF_SEL_GCR_UNSHARED__GFX101PLUS             = 0x00000091,
    GL2C_PERF_SEL_GCR_MDC_INV__GFX101PLUS              = 0x00000092,
    GL2C_PERF_SEL_GCR_GL2_INV_ALL__GFX101PLUS          = 0x00000093,
    GL2C_PERF_SEL_GCR_GL2_WB_ALL__GFX101PLUS           = 0x00000094,
    GL2C_PERF_SEL_GCR_MDC_INV_ALL__GFX101PLUS          = 0x00000095,
    GL2C_PERF_SEL_GCR_GL2_INV_RANGE__GFX101PLUS        = 0x00000096,
    GL2C_PERF_SEL_GCR_GL2_WB_RANGE__GFX101PLUS         = 0x00000097,
    GL2C_PERF_SEL_GCR_GL2_WB_INV_RANGE__GFX101PLUS     = 0x00000098,
    GL2C_PERF_SEL_GCR_MDC_INV_RANGE__GFX101PLUS        = 0x00000099,
    GL2C_PERF_SEL_ALL_GCR_INV_EVICT__GFX101PLUS        = 0x0000009a,
    GL2C_PERF_SEL_ALL_GCR_INV_VOL_EVICT__GFX101PLUS    = 0x0000009b,
    GL2C_PERF_SEL_ALL_GCR_WB_OR_INV_CYCLE__GFX101PLUS  = 0x0000009c,
    GL2C_PERF_SEL_ALL_GCR_WB_OR_INV_VOL_CYCLE__GFX101PLUS = 0x0000009d,
    GL2C_PERF_SEL_ALL_GCR_WB_WRITEBACK__GFX101PLUS     = 0x0000009e,
    GL2C_PERF_SEL_GCR_INVL2_VOL_CYCLE__GFX101PLUS      = 0x0000009f,
    GL2C_PERF_SEL_GCR_INVL2_VOL_EVICT__GFX101PLUS      = 0x000000a0,
    GL2C_PERF_SEL_GCR_INVL2_VOL_START__GFX101PLUS      = 0x000000a1,
    GL2C_PERF_SEL_GCR_WBL2_VOL_CYCLE__GFX101PLUS       = 0x000000a2,
    GL2C_PERF_SEL_GCR_WBL2_VOL_EVICT__GFX101PLUS       = 0x000000a3,
    GL2C_PERF_SEL_GCR_WBL2_VOL_START__GFX101PLUS       = 0x000000a4,
    GL2C_PERF_SEL_GCR_WBINVL2_CYCLE__GFX101PLUS        = 0x000000a5,
    GL2C_PERF_SEL_GCR_WBINVL2_EVICT__GFX101PLUS        = 0x000000a6,
    GL2C_PERF_SEL_GCR_WBINVL2_START__GFX101PLUS        = 0x000000a7,
    GL2C_PERF_SEL_MDC_INV_METADATA__GFX101PLUS         = 0x000000a8,
    GL2C_PERF_SEL_MDC_REQ__GFX101PLUS                  = 0x000000a9,
    GL2C_PERF_SEL_MDC_LEVEL__GFX101PLUS                = 0x000000aa,
    GL2C_PERF_SEL_MDC_TAG_HIT__GFX101PLUS              = 0x000000ab,
    GL2C_PERF_SEL_MDC_SECTOR_HIT__GFX101PLUS           = 0x000000ac,
    GL2C_PERF_SEL_MDC_SECTOR_MISS__GFX101PLUS          = 0x000000ad,
    GL2C_PERF_SEL_MDC_TAG_STALL__GFX101PLUS            = 0x000000ae,
    GL2C_PERF_SEL_MDC_TAG_REPLACEMENT_LINE_IN_USE_STALL__GFX101PLUS = 0x000000af,
    GL2C_PERF_SEL_MDC_TAG_DESECTORIZATION_FIFO_FULL_STALL__GFX101PLUS = 0x000000b0,
    GL2C_PERF_SEL_MDC_TAG_WAITING_FOR_INVALIDATE_COMPLETION_STALL__GFX101PLUS = 0x000000b1,
    GL2C_PERF_SEL_CM_CHANNEL0_REQ__GFX101PLUS          = 0x000000b2,
    GL2C_PERF_SEL_CM_CHANNEL1_REQ__GFX101PLUS          = 0x000000b3,
    GL2C_PERF_SEL_CM_CHANNEL2_REQ__GFX101PLUS          = 0x000000b4,
    GL2C_PERF_SEL_CM_CHANNEL3_REQ__GFX101PLUS          = 0x000000b5,
    GL2C_PERF_SEL_CM_CHANNEL4_REQ__GFX101PLUS          = 0x000000b6,
    GL2C_PERF_SEL_CM_CHANNEL5_REQ__GFX101PLUS          = 0x000000b7,
    GL2C_PERF_SEL_CM_CHANNEL6_REQ__GFX101PLUS          = 0x000000b8,
    GL2C_PERF_SEL_CM_CHANNEL7_REQ__GFX101PLUS          = 0x000000b9,
    GL2C_PERF_SEL_CM_CHANNEL8_REQ__GFX101PLUS          = 0x000000ba,
    GL2C_PERF_SEL_CM_CHANNEL9_REQ__GFX101PLUS          = 0x000000bb,
    GL2C_PERF_SEL_CM_CHANNEL10_REQ__GFX101PLUS         = 0x000000bc,
    GL2C_PERF_SEL_CM_CHANNEL11_REQ__GFX101PLUS         = 0x000000bd,
    GL2C_PERF_SEL_CM_CHANNEL12_REQ__GFX101PLUS         = 0x000000be,
    GL2C_PERF_SEL_CM_CHANNEL13_REQ__GFX101PLUS         = 0x000000bf,
    GL2C_PERF_SEL_CM_CHANNEL14_REQ__GFX101PLUS         = 0x000000c0,
    GL2C_PERF_SEL_CM_CHANNEL15_REQ__GFX101PLUS         = 0x000000c1,
    GL2C_PERF_SEL_CM_CHANNEL16_REQ__GFX101PLUS         = 0x000000c2,
    GL2C_PERF_SEL_CM_CHANNEL17_REQ__GFX101PLUS         = 0x000000c3,
    GL2C_PERF_SEL_CM_CHANNEL18_REQ__GFX101PLUS         = 0x000000c4,
    GL2C_PERF_SEL_CM_CHANNEL19_REQ__GFX101PLUS         = 0x000000c5,
    GL2C_PERF_SEL_CM_CHANNEL20_REQ__GFX101PLUS         = 0x000000c6,
    GL2C_PERF_SEL_CM_CHANNEL21_REQ__GFX101PLUS         = 0x000000c7,
    GL2C_PERF_SEL_CM_CHANNEL22_REQ__GFX101PLUS         = 0x000000c8,
    GL2C_PERF_SEL_CM_CHANNEL23_REQ__GFX101PLUS         = 0x000000c9,
    GL2C_PERF_SEL_CM_CHANNEL24_REQ__GFX101PLUS         = 0x000000ca,
    GL2C_PERF_SEL_CM_CHANNEL25_REQ__GFX101PLUS         = 0x000000cb,
    GL2C_PERF_SEL_CM_CHANNEL26_REQ__GFX101PLUS         = 0x000000cc,
    GL2C_PERF_SEL_CM_CHANNEL27_REQ__GFX101PLUS         = 0x000000cd,
    GL2C_PERF_SEL_CM_CHANNEL28_REQ__GFX101PLUS         = 0x000000ce,
    GL2C_PERF_SEL_CM_CHANNEL29_REQ__GFX101PLUS         = 0x000000cf,
    GL2C_PERF_SEL_CM_CHANNEL30_REQ__GFX101PLUS         = 0x000000d0,
    GL2C_PERF_SEL_CM_CHANNEL31_REQ__GFX101PLUS         = 0x000000d1,
    GL2C_PERF_SEL_CM_COMP_ATOMIC_COLOR_REQ__GFX101PLUS = 0x000000d2,
    GL2C_PERF_SEL_CM_COMP_ATOMIC_DEPTH16_REQ__GFX101PLUS = 0x000000d3,
    GL2C_PERF_SEL_CM_COMP_ATOMIC_DEPTH32_REQ__GFX101PLUS = 0x000000d4,
    GL2C_PERF_SEL_CM_COMP_WRITE_COLOR_REQ__GFX101PLUS  = 0x000000d5,
    GL2C_PERF_SEL_CM_COMP_WRITE_DEPTH16_REQ__GFX101PLUS = 0x000000d6,
    GL2C_PERF_SEL_CM_COMP_WRITE_DEPTH32_REQ__GFX101PLUS = 0x000000d7,
    GL2C_PERF_SEL_CM_COMP_WRITE_STENCIL_REQ__GFX101PLUS = 0x000000d8,
    GL2C_PERF_SEL_CM_COMP_READ_REQ__GFX101PLUS         = 0x000000d9,
    GL2C_PERF_SEL_CM_READ_BACK_REQ__GFX101PLUS         = 0x000000da,
    GL2C_PERF_SEL_CM_METADATA_WR_REQ__GFX101PLUS       = 0x000000db,
    GL2C_PERF_SEL_CM_WR_ACK_REQ__GFX101PLUS            = 0x000000dc,
    GL2C_PERF_SEL_CM_NO_ACK_REQ__GFX101PLUS            = 0x000000dd,
    GL2C_PERF_SEL_CM_NOOP_REQ__GFX101PLUS              = 0x000000de,
    GL2C_PERF_SEL_CM_COMP_COLOR_EN_REQ__GFX101PLUS     = 0x000000df,
    GL2C_PERF_SEL_CM_COMP_COLOR_DIS_REQ__GFX101PLUS    = 0x000000e0,
    GL2C_PERF_SEL_CM_COMP_STENCIL_REQ__GFX101PLUS      = 0x000000e1,
    GL2C_PERF_SEL_CM_COMP_DEPTH16_REQ__GFX101PLUS      = 0x000000e2,
    GL2C_PERF_SEL_CM_COMP_DEPTH32_REQ__GFX101PLUS      = 0x000000e3,
    GL2C_PERF_SEL_CM_COLOR_32B_WR_REQ__GFX101PLUS      = 0x000000e4,
    GL2C_PERF_SEL_CM_COLOR_64B_WR_REQ__GFX101PLUS      = 0x000000e5,
    GL2C_PERF_SEL_CM_FULL_WRITE_REQ__GFX101PLUS        = 0x000000e6,
    GL2C_PERF_SEL_CM_RVF_FULL__GFX101PLUS              = 0x000000e7,
    GL2C_PERF_SEL_CM_SDR_FULL__GFX101PLUS              = 0x000000e8,
    GL2C_PERF_SEL_CM_MERGE_BUF_FULL__GFX101PLUS        = 0x000000e9,
    GL2C_PERF_SEL_CM_DCC_STALL__GFX101PLUS             = 0x000000ea,
} GL2C_PERF_SEL;

constexpr unsigned int MaxGl2cPerfSelGfx101Plus        = GL2C_PERF_SEL_CM_DCC_STALL__GFX101PLUS;

typedef enum GL2_CACHE_POLICIES {
    GL2_CACHE_POLICY_LRU                               = 0x00000000,
    GL2_CACHE_POLICY_STREAM                            = 0x00000001,
    GL2_CACHE_POLICY_NOA                               = 0x00000002,
    GL2_CACHE_POLICY_BYPASS                            = 0x00000003,
} GL2_CACHE_POLICIES;

typedef enum GL2_EA_CID {
    GL2_EA_CID_CLIENT                                  = 0x00000000,
    GL2_EA_CID_SDMA                                    = 0x00000001,
    GL2_EA_CID_RLC                                     = 0x00000002,
    GL2_EA_CID_CP                                      = 0x00000004,
    GL2_EA_CID_CPDMA                                   = 0x00000005,
    GL2_EA_CID_UTCL2                                   = 0x00000006,
    GL2_EA_CID_RT                                      = 0x00000007,
    GL2_EA_CID_FMASK                                   = 0x00000008,
    GL2_EA_CID_DCC                                     = 0x00000009,
    GL2_EA_CID_Z_STENCIL                               = 0x0000000a,
    GL2_EA_CID_ZPCPSD                                  = 0x0000000b,
    GL2_EA_CID_HTILE                                   = 0x0000000c,
    GL2_EA_CID_TCPMETA                                 = 0x0000000f,
    GL2_EA_CID_MES__GFX101PLUS                         = 0x0000000d,
} GL2_EA_CID;

typedef enum GL2_NACKS {
    GL2_NACK_NO_FAULT                                  = 0x00000000,
    GL2_NACK_PAGE_FAULT                                = 0x00000001,
    GL2_NACK_PROTECTION_FAULT                          = 0x00000002,
    GL2_NACK_DATA_ERROR                                = 0x00000003,
} GL2_NACKS;

typedef enum GL2_OP {
    GL2_OP_READ                                        = 0x00000000,
    GL2_OP_ATOMIC_FCMPSWAP_RTN_32                      = 0x00000001,
    GL2_OP_ATOMIC_FMIN_RTN_32                          = 0x00000002,
    GL2_OP_ATOMIC_FMAX_RTN_32                          = 0x00000003,
    GL2_OP_ATOMIC_SWAP_RTN_32                          = 0x00000007,
    GL2_OP_ATOMIC_CMPSWAP_RTN_32                       = 0x00000008,
    GL2_OP_ATOMIC_FCMPSWAP_FLUSH_DENORM_RTN_32         = 0x00000009,
    GL2_OP_ATOMIC_FMIN_FLUSH_DENORM_RTN_32             = 0x0000000a,
    GL2_OP_ATOMIC_FMAX_FLUSH_DENORM_RTN_32             = 0x0000000b,
    GL2_OP_PROBE_FILTER                                = 0x0000000c,
    GL2_OP_RESERVED_FOP_FLUSH_DENORM_RTN_32_1          = 0x0000000d,
    GL2_OP_RESERVED_FOP_FLUSH_DENORM_RTN_32_2          = 0x0000000e,
    GL2_OP_ATOMIC_ADD_RTN_32                           = 0x0000000f,
    GL2_OP_ATOMIC_SUB_RTN_32                           = 0x00000010,
    GL2_OP_ATOMIC_SMIN_RTN_32                          = 0x00000011,
    GL2_OP_ATOMIC_UMIN_RTN_32                          = 0x00000012,
    GL2_OP_ATOMIC_SMAX_RTN_32                          = 0x00000013,
    GL2_OP_ATOMIC_UMAX_RTN_32                          = 0x00000014,
    GL2_OP_ATOMIC_AND_RTN_32                           = 0x00000015,
    GL2_OP_ATOMIC_OR_RTN_32                            = 0x00000016,
    GL2_OP_ATOMIC_XOR_RTN_32                           = 0x00000017,
    GL2_OP_ATOMIC_INC_RTN_32                           = 0x00000018,
    GL2_OP_ATOMIC_DEC_RTN_32                           = 0x00000019,
    GL2_OP_WRITE                                       = 0x00000020,
    GL2_OP_ATOMIC_FCMPSWAP_RTN_64                      = 0x00000021,
    GL2_OP_ATOMIC_FMIN_RTN_64                          = 0x00000022,
    GL2_OP_ATOMIC_FMAX_RTN_64                          = 0x00000023,
    GL2_OP_ATOMIC_SWAP_RTN_64                          = 0x00000027,
    GL2_OP_ATOMIC_CMPSWAP_RTN_64                       = 0x00000028,
    GL2_OP_ATOMIC_FCMPSWAP_FLUSH_DENORM_RTN_64         = 0x00000029,
    GL2_OP_ATOMIC_FMIN_FLUSH_DENORM_RTN_64             = 0x0000002a,
    GL2_OP_ATOMIC_FMAX_FLUSH_DENORM_RTN_64             = 0x0000002b,
    GL2_OP_ATOMIC_ADD_RTN_64                           = 0x0000002f,
    GL2_OP_ATOMIC_SUB_RTN_64                           = 0x00000030,
    GL2_OP_ATOMIC_SMIN_RTN_64                          = 0x00000031,
    GL2_OP_ATOMIC_UMIN_RTN_64                          = 0x00000032,
    GL2_OP_ATOMIC_SMAX_RTN_64                          = 0x00000033,
    GL2_OP_ATOMIC_UMAX_RTN_64                          = 0x00000034,
    GL2_OP_ATOMIC_AND_RTN_64                           = 0x00000035,
    GL2_OP_ATOMIC_OR_RTN_64                            = 0x00000036,
    GL2_OP_ATOMIC_XOR_RTN_64                           = 0x00000037,
    GL2_OP_ATOMIC_INC_RTN_64                           = 0x00000038,
    GL2_OP_ATOMIC_DEC_RTN_64                           = 0x00000039,
    GL2_OP_GL1_INV                                     = 0x00000040,
    GL2_OP_ATOMIC_FCMPSWAP_32                          = 0x00000041,
    GL2_OP_ATOMIC_FMIN_32                              = 0x00000042,
    GL2_OP_ATOMIC_FMAX_32                              = 0x00000043,
    GL2_OP_ATOMIC_SWAP_32                              = 0x00000047,
    GL2_OP_ATOMIC_CMPSWAP_32                           = 0x00000048,
    GL2_OP_ATOMIC_FCMPSWAP_FLUSH_DENORM_32             = 0x00000049,
    GL2_OP_ATOMIC_FMIN_FLUSH_DENORM_32                 = 0x0000004a,
    GL2_OP_ATOMIC_FMAX_FLUSH_DENORM_32                 = 0x0000004b,
    GL2_OP_ATOMIC_ADD_32                               = 0x0000004f,
    GL2_OP_ATOMIC_SUB_32                               = 0x00000050,
    GL2_OP_ATOMIC_SMIN_32                              = 0x00000051,
    GL2_OP_ATOMIC_UMIN_32                              = 0x00000052,
    GL2_OP_ATOMIC_SMAX_32                              = 0x00000053,
    GL2_OP_ATOMIC_UMAX_32                              = 0x00000054,
    GL2_OP_ATOMIC_AND_32                               = 0x00000055,
    GL2_OP_ATOMIC_OR_32                                = 0x00000056,
    GL2_OP_ATOMIC_XOR_32                               = 0x00000057,
    GL2_OP_ATOMIC_INC_32                               = 0x00000058,
    GL2_OP_ATOMIC_DEC_32                               = 0x00000059,
    GL2_OP_NOP_RTN0                                    = 0x0000005b,
    GL2_OP_ATOMIC_FCMPSWAP_64                          = 0x00000061,
    GL2_OP_ATOMIC_FMIN_64                              = 0x00000062,
    GL2_OP_ATOMIC_FMAX_64                              = 0x00000063,
    GL2_OP_ATOMIC_SWAP_64                              = 0x00000067,
    GL2_OP_ATOMIC_CMPSWAP_64                           = 0x00000068,
    GL2_OP_ATOMIC_FCMPSWAP_FLUSH_DENORM_64             = 0x00000069,
    GL2_OP_ATOMIC_FMIN_FLUSH_DENORM_64                 = 0x0000006a,
    GL2_OP_ATOMIC_FMAX_FLUSH_DENORM_64                 = 0x0000006b,
    GL2_OP_ATOMIC_ADD_64                               = 0x0000006f,
    GL2_OP_ATOMIC_SUB_64                               = 0x00000070,
    GL2_OP_ATOMIC_SMIN_64                              = 0x00000071,
    GL2_OP_ATOMIC_UMIN_64                              = 0x00000072,
    GL2_OP_ATOMIC_SMAX_64                              = 0x00000073,
    GL2_OP_ATOMIC_UMAX_64                              = 0x00000074,
    GL2_OP_ATOMIC_AND_64                               = 0x00000075,
    GL2_OP_ATOMIC_OR_64                                = 0x00000076,
    GL2_OP_ATOMIC_XOR_64                               = 0x00000077,
    GL2_OP_ATOMIC_INC_64                               = 0x00000078,
    GL2_OP_ATOMIC_DEC_64                               = 0x00000079,
    GL2_OP_NOP_ACK                                     = 0x0000007b,
} GL2_OP;

typedef enum GL2_OP_MASKS {
    GL2_OP_MASK_FLUSH_DENROM                           = 0x00000008,
    GL2_OP_MASK_64                                     = 0x00000020,
    GL2_OP_MASK_NO_RTN                                 = 0x00000040,
} GL2_OP_MASKS;

typedef enum GRBM_PERF_SEL {
    GRBM_PERF_SEL_COUNT                                = 0x00000000,
    GRBM_PERF_SEL_USER_DEFINED                         = 0x00000001,
    GRBM_PERF_SEL_GUI_ACTIVE                           = 0x00000002,
    GRBM_PERF_SEL_CP_BUSY                              = 0x00000003,
    GRBM_PERF_SEL_CP_COHER_BUSY                        = 0x00000004,
    GRBM_PERF_SEL_CP_DMA_BUSY                          = 0x00000005,
    GRBM_PERF_SEL_CB_BUSY                              = 0x00000006,
    GRBM_PERF_SEL_DB_BUSY                              = 0x00000007,
    GRBM_PERF_SEL_PA_BUSY                              = 0x00000008,
    GRBM_PERF_SEL_SC_BUSY                              = 0x00000009,
    GRBM_PERF_SEL_RESERVED_6                           = 0x0000000a,
    GRBM_PERF_SEL_SPI_BUSY                             = 0x0000000b,
    GRBM_PERF_SEL_SX_BUSY                              = 0x0000000c,
    GRBM_PERF_SEL_TA_BUSY                              = 0x0000000d,
    GRBM_PERF_SEL_CB_CLEAN                             = 0x0000000e,
    GRBM_PERF_SEL_DB_CLEAN                             = 0x0000000f,
    GRBM_PERF_SEL_RESERVED_5                           = 0x00000010,
    GRBM_PERF_SEL_RESERVED_4                           = 0x00000012,
    GRBM_PERF_SEL_RESERVED_3                           = 0x00000013,
    GRBM_PERF_SEL_RESERVED_2                           = 0x00000014,
    GRBM_PERF_SEL_RESERVED_1                           = 0x00000015,
    GRBM_PERF_SEL_RESERVED_0                           = 0x00000016,
    GRBM_PERF_SEL_GDS_BUSY                             = 0x00000019,
    GRBM_PERF_SEL_BCI_BUSY                             = 0x0000001a,
    GRBM_PERF_SEL_RLC_BUSY                             = 0x0000001b,
    GRBM_PERF_SEL_CPG_BUSY                             = 0x0000001d,
    GRBM_PERF_SEL_CPC_BUSY                             = 0x0000001e,
    GRBM_PERF_SEL_CPF_BUSY                             = 0x0000001f,
    GRBM_PERF_SEL_UTCL2_BUSY                           = 0x00000022,
    GRBM_PERF_SEL_EA_BUSY                              = 0x00000023,
    GRBM_PERF_SEL_RMI_BUSY                             = 0x00000024,
    GRBM_PERF_SEL_CPAXI_BUSY                           = 0x00000025,
    GRBM_PERF_SEL_VGT_BUSY__GFX09                      = 0x00000011,
    GRBM_PERF_SEL_IA_BUSY__GFX09                       = 0x00000017,
    GRBM_PERF_SEL_IA_NO_DMA_BUSY__GFX09                = 0x00000018,
    GRBM_PERF_SEL_TC_BUSY__GFX09                       = 0x0000001c,
    GRBM_PERF_SEL_WD_BUSY__GFX09                       = 0x00000020,
    GRBM_PERF_SEL_WD_NO_DMA_BUSY__GFX09                = 0x00000021,
    GRBM_PERF_SEL_RESERVED_9__GFX10                    = 0x00000011,
    GRBM_PERF_SEL_RESERVED_8__GFX10                    = 0x00000017,
    GRBM_PERF_SEL_RESERVED_7__GFX10                    = 0x00000018,
    GRBM_PERF_SEL_TCP_BUSY__GFX10                      = 0x0000001c,
    GRBM_PERF_SEL_GE_BUSY__GFX10                       = 0x00000020,
    GRBM_PERF_SEL_GE_NO_DMA_BUSY__GFX10                = 0x00000021,
    GRBM_PERF_SEL_UTCL1_BUSY__GFX10                    = 0x00000027,
    GRBM_PERF_SEL_GL2CC_BUSY__GFX10                    = 0x00000028,
    GRBM_PERF_SEL_SDMA_BUSY__GFX10                     = 0x00000029,
    GRBM_PERF_SEL_CH_BUSY__GFX10                       = 0x0000002a,
    GRBM_PERF_SEL_PH_BUSY__GFX10                       = 0x0000002b,
    GRBM_PERF_SEL_PMM_BUSY__GFX10                      = 0x0000002c,
    GRBM_PERF_SEL_GUS_BUSY__GFX10                      = 0x0000002d,
    GRBM_PERF_SEL_GL1CC_BUSY__GFX10                    = 0x0000002e,
} GRBM_PERF_SEL;

constexpr unsigned int MaxGrbmPerfSelGfx09             = GRBM_PERF_SEL_CPAXI_BUSY;
constexpr unsigned int MaxGrbmPerfSelGfx10             = GRBM_PERF_SEL_GL1CC_BUSY__GFX10;

typedef enum GRBM_SE0_PERF_SEL {
    GRBM_SE0_PERF_SEL_COUNT                            = 0x00000000,
    GRBM_SE0_PERF_SEL_USER_DEFINED                     = 0x00000001,
    GRBM_SE0_PERF_SEL_CB_BUSY                          = 0x00000002,
    GRBM_SE0_PERF_SEL_DB_BUSY                          = 0x00000003,
    GRBM_SE0_PERF_SEL_SC_BUSY                          = 0x00000004,
    GRBM_SE0_PERF_SEL_RESERVED_1                       = 0x00000005,
    GRBM_SE0_PERF_SEL_SPI_BUSY                         = 0x00000006,
    GRBM_SE0_PERF_SEL_SX_BUSY                          = 0x00000007,
    GRBM_SE0_PERF_SEL_TA_BUSY                          = 0x00000008,
    GRBM_SE0_PERF_SEL_CB_CLEAN                         = 0x00000009,
    GRBM_SE0_PERF_SEL_DB_CLEAN                         = 0x0000000a,
    GRBM_SE0_PERF_SEL_RESERVED_0                       = 0x0000000b,
    GRBM_SE0_PERF_SEL_PA_BUSY                          = 0x0000000c,
    GRBM_SE0_PERF_SEL_BCI_BUSY                         = 0x0000000e,
    GRBM_SE0_PERF_SEL_RMI_BUSY                         = 0x0000000f,
    GRBM_SE0_PERF_SEL_VGT_BUSY__GFX09                  = 0x0000000d,
    GRBM_SE0_PERF_SEL_RESERVED_2__GFX10                = 0x0000000d,
    GRBM_SE0_PERF_SEL_UTCL1_BUSY__GFX10                = 0x00000010,
    GRBM_SE0_PERF_SEL_TCP_BUSY__GFX10                  = 0x00000011,
    GRBM_SE0_PERF_SEL_GL1CC_BUSY__GFX10                = 0x00000012,
} GRBM_SE0_PERF_SEL;

constexpr unsigned int MaxGrbmSe0PerfSelGfx09          = GRBM_SE0_PERF_SEL_RMI_BUSY;
constexpr unsigned int MaxGrbmSe0PerfSelGfx10          = GRBM_SE0_PERF_SEL_GL1CC_BUSY__GFX10;

typedef enum GRBM_SE1_PERF_SEL {
    GRBM_SE1_PERF_SEL_COUNT                            = 0x00000000,
    GRBM_SE1_PERF_SEL_USER_DEFINED                     = 0x00000001,
    GRBM_SE1_PERF_SEL_CB_BUSY                          = 0x00000002,
    GRBM_SE1_PERF_SEL_DB_BUSY                          = 0x00000003,
    GRBM_SE1_PERF_SEL_SC_BUSY                          = 0x00000004,
    GRBM_SE1_PERF_SEL_RESERVED_1                       = 0x00000005,
    GRBM_SE1_PERF_SEL_SPI_BUSY                         = 0x00000006,
    GRBM_SE1_PERF_SEL_SX_BUSY                          = 0x00000007,
    GRBM_SE1_PERF_SEL_TA_BUSY                          = 0x00000008,
    GRBM_SE1_PERF_SEL_CB_CLEAN                         = 0x00000009,
    GRBM_SE1_PERF_SEL_DB_CLEAN                         = 0x0000000a,
    GRBM_SE1_PERF_SEL_RESERVED_0                       = 0x0000000b,
    GRBM_SE1_PERF_SEL_PA_BUSY                          = 0x0000000c,
    GRBM_SE1_PERF_SEL_BCI_BUSY                         = 0x0000000e,
    GRBM_SE1_PERF_SEL_RMI_BUSY                         = 0x0000000f,
    GRBM_SE1_PERF_SEL_VGT_BUSY__GFX09                  = 0x0000000d,
    GRBM_SE1_PERF_SEL_RESERVED_2__GFX10                = 0x0000000d,
    GRBM_SE1_PERF_SEL_UTCL1_BUSY__GFX10                = 0x00000010,
    GRBM_SE1_PERF_SEL_TCP_BUSY__GFX10                  = 0x00000011,
    GRBM_SE1_PERF_SEL_GL1CC_BUSY__GFX10                = 0x00000012,
} GRBM_SE1_PERF_SEL;

constexpr unsigned int MaxGrbmSe1PerfSelGfx09          = GRBM_SE1_PERF_SEL_RMI_BUSY;
constexpr unsigned int MaxGrbmSe1PerfSelGfx10          = GRBM_SE1_PERF_SEL_GL1CC_BUSY__GFX10;

typedef enum GRBM_SE2_PERF_SEL {
    GRBM_SE2_PERF_SEL_COUNT                            = 0x00000000,
    GRBM_SE2_PERF_SEL_USER_DEFINED                     = 0x00000001,
    GRBM_SE2_PERF_SEL_CB_BUSY                          = 0x00000002,
    GRBM_SE2_PERF_SEL_DB_BUSY                          = 0x00000003,
    GRBM_SE2_PERF_SEL_SC_BUSY                          = 0x00000004,
    GRBM_SE2_PERF_SEL_RESERVED_1                       = 0x00000005,
    GRBM_SE2_PERF_SEL_SPI_BUSY                         = 0x00000006,
    GRBM_SE2_PERF_SEL_SX_BUSY                          = 0x00000007,
    GRBM_SE2_PERF_SEL_TA_BUSY                          = 0x00000008,
    GRBM_SE2_PERF_SEL_CB_CLEAN                         = 0x00000009,
    GRBM_SE2_PERF_SEL_DB_CLEAN                         = 0x0000000a,
    GRBM_SE2_PERF_SEL_RESERVED_0                       = 0x0000000b,
    GRBM_SE2_PERF_SEL_PA_BUSY                          = 0x0000000c,
    GRBM_SE2_PERF_SEL_BCI_BUSY                         = 0x0000000e,
    GRBM_SE2_PERF_SEL_RMI_BUSY                         = 0x0000000f,
    GRBM_SE2_PERF_SEL_VGT_BUSY__GFX09                  = 0x0000000d,
    GRBM_SE2_PERF_SEL_RESERVED_2__GFX10                = 0x0000000d,
    GRBM_SE2_PERF_SEL_UTCL1_BUSY__GFX10                = 0x00000010,
    GRBM_SE2_PERF_SEL_TCP_BUSY__GFX10                  = 0x00000011,
    GRBM_SE2_PERF_SEL_GL1CC_BUSY__GFX10                = 0x00000012,
} GRBM_SE2_PERF_SEL;

constexpr unsigned int MaxGrbmSe2PerfSelGfx09          = GRBM_SE2_PERF_SEL_RMI_BUSY;
constexpr unsigned int MaxGrbmSe2PerfSelGfx10          = GRBM_SE2_PERF_SEL_GL1CC_BUSY__GFX10;

typedef enum GRBM_SE3_PERF_SEL {
    GRBM_SE3_PERF_SEL_COUNT                            = 0x00000000,
    GRBM_SE3_PERF_SEL_USER_DEFINED                     = 0x00000001,
    GRBM_SE3_PERF_SEL_CB_BUSY                          = 0x00000002,
    GRBM_SE3_PERF_SEL_DB_BUSY                          = 0x00000003,
    GRBM_SE3_PERF_SEL_SC_BUSY                          = 0x00000004,
    GRBM_SE3_PERF_SEL_RESERVED_1                       = 0x00000005,
    GRBM_SE3_PERF_SEL_SPI_BUSY                         = 0x00000006,
    GRBM_SE3_PERF_SEL_SX_BUSY                          = 0x00000007,
    GRBM_SE3_PERF_SEL_TA_BUSY                          = 0x00000008,
    GRBM_SE3_PERF_SEL_CB_CLEAN                         = 0x00000009,
    GRBM_SE3_PERF_SEL_DB_CLEAN                         = 0x0000000a,
    GRBM_SE3_PERF_SEL_RESERVED_0                       = 0x0000000b,
    GRBM_SE3_PERF_SEL_PA_BUSY                          = 0x0000000c,
    GRBM_SE3_PERF_SEL_BCI_BUSY                         = 0x0000000e,
    GRBM_SE3_PERF_SEL_RMI_BUSY                         = 0x0000000f,
    GRBM_SE3_PERF_SEL_VGT_BUSY__GFX09                  = 0x0000000d,
    GRBM_SE3_PERF_SEL_RESERVED_2__GFX10                = 0x0000000d,
    GRBM_SE3_PERF_SEL_UTCL1_BUSY__GFX10                = 0x00000010,
    GRBM_SE3_PERF_SEL_TCP_BUSY__GFX10                  = 0x00000011,
    GRBM_SE3_PERF_SEL_GL1CC_BUSY__GFX10                = 0x00000012,
} GRBM_SE3_PERF_SEL;

constexpr unsigned int MaxGrbmSe3PerfSelGfx09          = GRBM_SE3_PERF_SEL_RMI_BUSY;
constexpr unsigned int MaxGrbmSe3PerfSelGfx10          = GRBM_SE3_PERF_SEL_GL1CC_BUSY__GFX10;

typedef enum GroupInterleave {
    CONFIG_256B_GROUP                                  = 0x00000000,
    CONFIG_512B_GROUP                                  = 0x00000001,
} GroupInterleave;

typedef enum I2S0_SPDIF0_SOFT_RESET {
    I2S0_SPDIF0_SOFT_RESET_0                           = 0x00000000,
    I2S0_SPDIF0_SOFT_RESET_1                           = 0x00000001,
} I2S0_SPDIF0_SOFT_RESET;

typedef enum I2S1_SOFT_RESET {
    I2S1_SOFT_RESET_0                                  = 0x00000000,
    I2S1_SOFT_RESET_1                                  = 0x00000001,
} I2S1_SOFT_RESET;

typedef enum I2S_LRCLK_POLARITY {
    I2S_LRCLK_LOW_LEFT                                 = 0x00000000,
    I2S_LRCLK_HIGH_LEFT                                = 0x00000001,
} I2S_LRCLK_POLARITY;

typedef enum I2S_SAMPLE_ALIGNMENT {
    I2S_SAMPLE_LEFT_ALIGNED                            = 0x00000000,
    I2S_SAMPLE_RIGHT_ALIGNED                           = 0x00000001,
} I2S_SAMPLE_ALIGNMENT;

typedef enum I2S_SAMPLE_BIT_ORDER {
    I2S_SAMPLE_BIT_ORDER_MSB                           = 0x00000000,
    I2S_SAMPLE_BIT_ORDER_LSB                           = 0x00000001,
} I2S_SAMPLE_BIT_ORDER;

typedef enum I2S_WORD_ALIGNMENT {
    I2S_WORD_ALTERNATE_ALIGNMENT                       = 0x00000000,
    I2S_WORD_I2S_ALIGNMENT                             = 0x00000001,
} I2S_WORD_ALIGNMENT;

typedef enum I2S_WORD_SIZE {
    I2S_WORD_SIZE_32                                   = 0x00000000,
    I2S_WORD_SIZE_16                                   = 0x00000001,
} I2S_WORD_SIZE;

typedef enum IA_PERFCOUNT_SELECT {
    ia_perf_grp_input_event_window_active              = 0x00000000,
    ia_perf_dma_data_fifo_full                         = 0x00000001,
    ia_perf_UNUSED2                                    = 0x00000002,
    ia_perf_UNUSED3                                    = 0x00000003,
    ia_perf_UNUSED4                                    = 0x00000004,
    ia_perf_UNUSED5                                    = 0x00000005,
    ia_perf_UNUSED6                                    = 0x00000006,
    ia_perf_MC_LAT_BIN_0                               = 0x00000007,
    ia_perf_MC_LAT_BIN_1                               = 0x00000008,
    ia_perf_MC_LAT_BIN_2                               = 0x00000009,
    ia_perf_MC_LAT_BIN_3                               = 0x0000000a,
    ia_perf_MC_LAT_BIN_4                               = 0x0000000b,
    ia_perf_MC_LAT_BIN_5                               = 0x0000000c,
    ia_perf_MC_LAT_BIN_6                               = 0x0000000d,
    ia_perf_MC_LAT_BIN_7                               = 0x0000000e,
    ia_perf_ia_busy                                    = 0x0000000f,
    ia_perf_sclk_reg_vld_event                         = 0x00000010,
    ia_perf_sclk_input_vld                             = 0x00000011,
    ia_perf_sclk_core_vld                              = 0x00000012,
    ia_perf_sclk_inval_vld                             = 0x00000013,
    ia_perf_ia_dma_return                              = 0x00000014,
    ia_perf_IA_STALLED                                 = 0x00000015,
    ia_perf_shift_starved_pipe0_event                  = 0x00000016,
    ia_perf_shift_starved_pipe1_event                  = 0x00000017,
    ia_perf_utcl1_translation_miss_event               = 0x00000018,
    ia_perf_utcl1_translation_hit_event                = 0x00000019,
    ia_perf_utcl1_stall_event                          = 0x0000001a,
    ia_perf_utcl1_retry_event                          = 0x0000001b,
    ia_perf_utcl1_consecutive_retry_event              = 0x0000001c,
    ia_perf_utcl1_request_event_1__GFX09_0             = 0x0000001d,
    ia_perf_utcl1_request_event_0__GFX09_0             = 0x0000001e,
    ia_perf_utcl1_stall_utcl2_event__GFX09_0           = 0x0000001f,
    ia_perf_utcl1_request_event__GFX09_1X              = 0x0000001d,
    ia_perf_utcl1_stall_utcl2_event__GFX09_1X          = 0x0000001e,
} IA_PERFCOUNT_SELECT;

constexpr unsigned int MaxIaPerfcountSelectGfx09_0     = ia_perf_utcl1_stall_utcl2_event__GFX09_0;
constexpr unsigned int MaxIaPerfcountSelectGfx09_1x    = ia_perf_utcl1_stall_utcl2_event__GFX09_1X;

typedef enum IMG_DATA_FORMAT {
    IMG_DATA_FORMAT_INVALID                            = 0x00000000,
    IMG_DATA_FORMAT_8                                  = 0x00000001,
    IMG_DATA_FORMAT_16                                 = 0x00000002,
    IMG_DATA_FORMAT_8_8                                = 0x00000003,
    IMG_DATA_FORMAT_32                                 = 0x00000004,
    IMG_DATA_FORMAT_16_16                              = 0x00000005,
    IMG_DATA_FORMAT_10_11_11                           = 0x00000006,
    IMG_DATA_FORMAT_11_11_10                           = 0x00000007,
    IMG_DATA_FORMAT_10_10_10_2                         = 0x00000008,
    IMG_DATA_FORMAT_2_10_10_10                         = 0x00000009,
    IMG_DATA_FORMAT_8_8_8_8                            = 0x0000000a,
    IMG_DATA_FORMAT_32_32                              = 0x0000000b,
    IMG_DATA_FORMAT_16_16_16_16                        = 0x0000000c,
    IMG_DATA_FORMAT_32_32_32                           = 0x0000000d,
    IMG_DATA_FORMAT_32_32_32_32                        = 0x0000000e,
    IMG_DATA_FORMAT_RESERVED_15                        = 0x0000000f,
    IMG_DATA_FORMAT_5_6_5                              = 0x00000010,
    IMG_DATA_FORMAT_1_5_5_5                            = 0x00000011,
    IMG_DATA_FORMAT_5_5_5_1                            = 0x00000012,
    IMG_DATA_FORMAT_4_4_4_4                            = 0x00000013,
    IMG_DATA_FORMAT_8_24                               = 0x00000014,
    IMG_DATA_FORMAT_24_8                               = 0x00000015,
    IMG_DATA_FORMAT_X24_8_32                           = 0x00000016,
    IMG_DATA_FORMAT_6E4                                = 0x0000001f,
    IMG_DATA_FORMAT_GB_GR                              = 0x00000020,
    IMG_DATA_FORMAT_BG_RG                              = 0x00000021,
    IMG_DATA_FORMAT_5_9_9_9                            = 0x00000022,
    IMG_DATA_FORMAT_BC1                                = 0x00000023,
    IMG_DATA_FORMAT_BC2                                = 0x00000024,
    IMG_DATA_FORMAT_BC3                                = 0x00000025,
    IMG_DATA_FORMAT_BC4                                = 0x00000026,
    IMG_DATA_FORMAT_BC5                                = 0x00000027,
    IMG_DATA_FORMAT_BC6                                = 0x00000028,
    IMG_DATA_FORMAT_BC7                                = 0x00000029,
    IMG_DATA_FORMAT_4_4                                = 0x00000039,
    IMG_DATA_FORMAT_6_5_5                              = 0x0000003a,
    IMG_DATA_FORMAT_32_AS_32_32_32_32                  = 0x0000003f,
    IMG_DATA_FORMAT_8_AS_8_8_8_8__GFX09                = 0x00000017,
    IMG_DATA_FORMAT_ETC2_RGB__GFX09                    = 0x00000018,
    IMG_DATA_FORMAT_ETC2_RGBA__GFX09                   = 0x00000019,
    IMG_DATA_FORMAT_ETC2_R__GFX09                      = 0x0000001a,
    IMG_DATA_FORMAT_ETC2_RG__GFX09                     = 0x0000001b,
    IMG_DATA_FORMAT_ETC2_RGBA1__GFX09                  = 0x0000001c,
    IMG_DATA_FORMAT_RESERVED_29__GFX09                 = 0x0000001d,
    IMG_DATA_FORMAT_RESERVED_30__GFX09                 = 0x0000001e,
    IMG_DATA_FORMAT_16_AS_32_32__GFX09                 = 0x0000002a,
    IMG_DATA_FORMAT_16_AS_16_16_16_16__GFX09           = 0x0000002b,
    IMG_DATA_FORMAT_16_AS_32_32_32_32__GFX09           = 0x0000002c,
    IMG_DATA_FORMAT_FMASK__GFX09                       = 0x0000002d,
    IMG_DATA_FORMAT_ASTC_2D_LDR__GFX09                 = 0x0000002e,
    IMG_DATA_FORMAT_ASTC_2D_HDR__GFX09                 = 0x0000002f,
    IMG_DATA_FORMAT_ASTC_2D_LDR_SRGB__GFX09            = 0x00000030,
    IMG_DATA_FORMAT_ASTC_3D_LDR__GFX09                 = 0x00000031,
    IMG_DATA_FORMAT_ASTC_3D_HDR__GFX09                 = 0x00000032,
    IMG_DATA_FORMAT_ASTC_3D_LDR_SRGB__GFX09            = 0x00000033,
    IMG_DATA_FORMAT_N_IN_16__GFX09                     = 0x00000034,
    IMG_DATA_FORMAT_N_IN_16_16__GFX09                  = 0x00000035,
    IMG_DATA_FORMAT_N_IN_16_16_16_16__GFX09            = 0x00000036,
    IMG_DATA_FORMAT_N_IN_16_AS_16_16_16_16__GFX09      = 0x00000037,
    IMG_DATA_FORMAT_RESERVED_56__GFX09                 = 0x00000038,
    IMG_DATA_FORMAT_S8_16__GFX09                       = 0x0000003b,
    IMG_DATA_FORMAT_S8_32__GFX09                       = 0x0000003c,
    IMG_DATA_FORMAT_8_AS_32__GFX09                     = 0x0000003d,
    IMG_DATA_FORMAT_8_AS_32_32__GFX09                  = 0x0000003e,
    IMG_DATA_FORMAT_RESERVED_23__GFX10                 = 0x00000017,
    IMG_DATA_FORMAT_RESERVED_42__GFX10                 = 0x0000002a,
    IMG_DATA_FORMAT_RESERVED_43__GFX10                 = 0x0000002b,
    IMG_DATA_FORMAT_FMASK8_S2_F1__GFX10                = 0x0000002c,
    IMG_DATA_FORMAT_FMASK8_S4_F1__GFX10                = 0x0000002d,
    IMG_DATA_FORMAT_FMASK8_S8_F1__GFX10                = 0x0000002e,
    IMG_DATA_FORMAT_FMASK8_S2_F2__GFX10                = 0x0000002f,
    IMG_DATA_FORMAT_FMASK8_S4_F2__GFX10                = 0x00000030,
    IMG_DATA_FORMAT_FMASK8_S4_F4__GFX10                = 0x00000031,
    IMG_DATA_FORMAT_FMASK16_S16_F1__GFX10              = 0x00000032,
    IMG_DATA_FORMAT_FMASK16_S8_F2__GFX10               = 0x00000033,
    IMG_DATA_FORMAT_FMASK32_S16_F2__GFX10              = 0x00000034,
    IMG_DATA_FORMAT_FMASK32_S8_F4__GFX10               = 0x00000035,
    IMG_DATA_FORMAT_FMASK32_S8_F8__GFX10               = 0x00000036,
    IMG_DATA_FORMAT_FMASK64_S16_F4__GFX10              = 0x00000037,
    IMG_DATA_FORMAT_FMASK64_S16_F8__GFX10              = 0x00000038,
    IMG_DATA_FORMAT_1__GFX10                           = 0x0000003b,
    IMG_DATA_FORMAT_1_REVERSED__GFX10                  = 0x0000003c,
    IMG_DATA_FORMAT_RESERVED_62__GFX10                 = 0x0000003e,
    IMG_DATA_FORMAT_ETC2_RGB__GFX10                    = 0x00000040,
    IMG_DATA_FORMAT_ETC2_RGBA__GFX10                   = 0x00000041,
    IMG_DATA_FORMAT_ETC2_R__GFX10                      = 0x00000042,
    IMG_DATA_FORMAT_ETC2_RG__GFX10                     = 0x00000043,
    IMG_DATA_FORMAT_ETC2_RGBA1__GFX10                  = 0x00000044,
    IMG_DATA_FORMAT_ASTC_2D_LDR__GFX10                 = 0x00000045,
    IMG_DATA_FORMAT_ASTC_2D_HDR__GFX10                 = 0x00000046,
    IMG_DATA_FORMAT_ASTC_2D_LDR_SRGB__GFX10            = 0x00000047,
    IMG_DATA_FORMAT_ASTC_3D_LDR__GFX10                 = 0x00000048,
    IMG_DATA_FORMAT_ASTC_3D_HDR__GFX10                 = 0x00000049,
    IMG_DATA_FORMAT_ASTC_3D_LDR_SRGB__GFX10            = 0x0000004a,
    IMG_DATA_FORMAT_RESERVED_75__GFX10                 = 0x0000004b,
    IMG_DATA_FORMAT_MM_8__GFX10                        = 0x0000004c,
    IMG_DATA_FORMAT_MM_8_8__GFX10                      = 0x0000004d,
    IMG_DATA_FORMAT_MM_8_8_8_8__GFX10                  = 0x0000004e,
    IMG_DATA_FORMAT_MM_VYUY8__GFX10                    = 0x0000004f,
    IMG_DATA_FORMAT_MM_10_11_11__GFX10                 = 0x00000050,
    IMG_DATA_FORMAT_MM_2_10_10_10__GFX10               = 0x00000051,
    IMG_DATA_FORMAT_MM_16_16_16_16__GFX10              = 0x00000052,
    IMG_DATA_FORMAT_MM_10_IN_16__GFX10                 = 0x00000053,
    IMG_DATA_FORMAT_MM_10_IN_16_16__GFX10              = 0x00000054,
    IMG_DATA_FORMAT_MM_10_IN_16_16_16_16__GFX10        = 0x00000055,
    IMG_DATA_FORMAT_RESERVED_86__GFX10                 = 0x00000056,
    IMG_DATA_FORMAT_RESERVED_87__GFX10                 = 0x00000057,
    IMG_DATA_FORMAT_RESERVED_88__GFX10                 = 0x00000058,
    IMG_DATA_FORMAT_RESERVED_89__GFX10                 = 0x00000059,
    IMG_DATA_FORMAT_RESERVED_90__GFX10                 = 0x0000005a,
    IMG_DATA_FORMAT_RESERVED_91__GFX10                 = 0x0000005b,
    IMG_DATA_FORMAT_RESERVED_92__GFX10                 = 0x0000005c,
    IMG_DATA_FORMAT_RESERVED_93__GFX10                 = 0x0000005d,
    IMG_DATA_FORMAT_RESERVED_94__GFX10                 = 0x0000005e,
    IMG_DATA_FORMAT_RESERVED_95__GFX10                 = 0x0000005f,
    IMG_DATA_FORMAT_RESERVED_96__GFX10                 = 0x00000060,
    IMG_DATA_FORMAT_RESERVED_97__GFX10                 = 0x00000061,
    IMG_DATA_FORMAT_RESERVED_98__GFX10                 = 0x00000062,
    IMG_DATA_FORMAT_RESERVED_99__GFX10                 = 0x00000063,
    IMG_DATA_FORMAT_RESERVED_100__GFX10                = 0x00000064,
    IMG_DATA_FORMAT_RESERVED_101__GFX10                = 0x00000065,
    IMG_DATA_FORMAT_RESERVED_102__GFX10                = 0x00000066,
    IMG_DATA_FORMAT_RESERVED_103__GFX10                = 0x00000067,
    IMG_DATA_FORMAT_RESERVED_104__GFX10                = 0x00000068,
    IMG_DATA_FORMAT_RESERVED_105__GFX10                = 0x00000069,
    IMG_DATA_FORMAT_RESERVED_106__GFX10                = 0x0000006a,
    IMG_DATA_FORMAT_RESERVED_107__GFX10                = 0x0000006b,
    IMG_DATA_FORMAT_RESERVED_108__GFX10                = 0x0000006c,
    IMG_DATA_FORMAT_RESERVED_109__GFX10                = 0x0000006d,
    IMG_DATA_FORMAT_RESERVED_110__GFX10                = 0x0000006e,
    IMG_DATA_FORMAT_RESERVED_111__GFX10                = 0x0000006f,
    IMG_DATA_FORMAT_RESERVED_112__GFX10                = 0x00000070,
    IMG_DATA_FORMAT_RESERVED_113__GFX10                = 0x00000071,
    IMG_DATA_FORMAT_RESERVED_114__GFX10                = 0x00000072,
    IMG_DATA_FORMAT_RESERVED_115__GFX10                = 0x00000073,
    IMG_DATA_FORMAT_RESERVED_116__GFX10                = 0x00000074,
    IMG_DATA_FORMAT_RESERVED_117__GFX10                = 0x00000075,
    IMG_DATA_FORMAT_RESERVED_118__GFX10                = 0x00000076,
    IMG_DATA_FORMAT_RESERVED_119__GFX10                = 0x00000077,
    IMG_DATA_FORMAT_RESERVED_120__GFX10                = 0x00000078,
    IMG_DATA_FORMAT_RESERVED_121__GFX10                = 0x00000079,
    IMG_DATA_FORMAT_RESERVED_122__GFX10                = 0x0000007a,
    IMG_DATA_FORMAT_RESERVED_123__GFX10                = 0x0000007b,
    IMG_DATA_FORMAT_RESERVED_124__GFX10                = 0x0000007c,
    IMG_DATA_FORMAT_RESERVED_125__GFX10                = 0x0000007d,
    IMG_DATA_FORMAT_RESERVED_126__GFX10                = 0x0000007e,
    IMG_DATA_FORMAT_RESERVED_127__GFX10                = 0x0000007f,
    IMG_DATA_FORMAT_RESERVED_24__GFX101                = 0x00000018,
    IMG_DATA_FORMAT_RESERVED_25__GFX101                = 0x00000019,
    IMG_DATA_FORMAT_RESERVED_26__GFX101                = 0x0000001a,
    IMG_DATA_FORMAT_RESERVED_27__GFX101                = 0x0000001b,
    IMG_DATA_FORMAT_RESERVED_28__GFX101                = 0x0000001c,
    IMG_DATA_FORMAT_RESERVED_29__GFX101                = 0x0000001d,
    IMG_DATA_FORMAT_RESERVED_30__GFX101                = 0x0000001e,
    IMG_DATA_FORMAT_RESERVED_61__NV10                  = 0x0000003d,
} IMG_DATA_FORMAT;

typedef enum IMG_FMT {
    IMG_FMT_INVALID                                    = 0x00000000,
    IMG_FMT_8_UNORM                                    = 0x00000001,
    IMG_FMT_8_SNORM                                    = 0x00000002,
    IMG_FMT_8_USCALED                                  = 0x00000003,
    IMG_FMT_8_SSCALED                                  = 0x00000004,
    IMG_FMT_8_UINT                                     = 0x00000005,
    IMG_FMT_8_SINT                                     = 0x00000006,
    IMG_FMT_16_UNORM                                   = 0x00000007,
    IMG_FMT_16_SNORM                                   = 0x00000008,
    IMG_FMT_16_USCALED                                 = 0x00000009,
    IMG_FMT_16_SSCALED                                 = 0x0000000a,
    IMG_FMT_16_UINT                                    = 0x0000000b,
    IMG_FMT_16_SINT                                    = 0x0000000c,
    IMG_FMT_16_FLOAT                                   = 0x0000000d,
    IMG_FMT_8_8_UNORM                                  = 0x0000000e,
    IMG_FMT_8_8_SNORM                                  = 0x0000000f,
    IMG_FMT_8_8_USCALED                                = 0x00000010,
    IMG_FMT_8_8_SSCALED                                = 0x00000011,
    IMG_FMT_8_8_UINT                                   = 0x00000012,
    IMG_FMT_8_8_SINT                                   = 0x00000013,
    IMG_FMT_32_UINT                                    = 0x00000014,
    IMG_FMT_32_SINT                                    = 0x00000015,
    IMG_FMT_32_FLOAT                                   = 0x00000016,
    IMG_FMT_16_16_UNORM                                = 0x00000017,
    IMG_FMT_16_16_SNORM                                = 0x00000018,
    IMG_FMT_16_16_USCALED                              = 0x00000019,
    IMG_FMT_16_16_SSCALED                              = 0x0000001a,
    IMG_FMT_16_16_UINT                                 = 0x0000001b,
    IMG_FMT_16_16_SINT                                 = 0x0000001c,
    IMG_FMT_16_16_FLOAT                                = 0x0000001d,
    IMG_FMT_10_11_11_UNORM                             = 0x0000001e,
    IMG_FMT_10_11_11_SNORM                             = 0x0000001f,
    IMG_FMT_10_11_11_USCALED                           = 0x00000020,
    IMG_FMT_10_11_11_SSCALED                           = 0x00000021,
    IMG_FMT_10_11_11_UINT                              = 0x00000022,
    IMG_FMT_10_11_11_SINT                              = 0x00000023,
    IMG_FMT_10_11_11_FLOAT                             = 0x00000024,
    IMG_FMT_11_11_10_UNORM                             = 0x00000025,
    IMG_FMT_11_11_10_SNORM                             = 0x00000026,
    IMG_FMT_11_11_10_USCALED                           = 0x00000027,
    IMG_FMT_11_11_10_SSCALED                           = 0x00000028,
    IMG_FMT_11_11_10_UINT                              = 0x00000029,
    IMG_FMT_11_11_10_SINT                              = 0x0000002a,
    IMG_FMT_11_11_10_FLOAT                             = 0x0000002b,
    IMG_FMT_10_10_10_2_UNORM                           = 0x0000002c,
    IMG_FMT_10_10_10_2_SNORM                           = 0x0000002d,
    IMG_FMT_10_10_10_2_USCALED                         = 0x0000002e,
    IMG_FMT_10_10_10_2_SSCALED                         = 0x0000002f,
    IMG_FMT_10_10_10_2_UINT                            = 0x00000030,
    IMG_FMT_10_10_10_2_SINT                            = 0x00000031,
    IMG_FMT_2_10_10_10_UNORM                           = 0x00000032,
    IMG_FMT_2_10_10_10_SNORM                           = 0x00000033,
    IMG_FMT_2_10_10_10_USCALED                         = 0x00000034,
    IMG_FMT_2_10_10_10_SSCALED                         = 0x00000035,
    IMG_FMT_2_10_10_10_UINT                            = 0x00000036,
    IMG_FMT_2_10_10_10_SINT                            = 0x00000037,
    IMG_FMT_8_8_8_8_UNORM                              = 0x00000038,
    IMG_FMT_8_8_8_8_SNORM                              = 0x00000039,
    IMG_FMT_8_8_8_8_USCALED                            = 0x0000003a,
    IMG_FMT_8_8_8_8_SSCALED                            = 0x0000003b,
    IMG_FMT_8_8_8_8_UINT                               = 0x0000003c,
    IMG_FMT_8_8_8_8_SINT                               = 0x0000003d,
    IMG_FMT_32_32_UINT                                 = 0x0000003e,
    IMG_FMT_32_32_SINT                                 = 0x0000003f,
    IMG_FMT_32_32_FLOAT                                = 0x00000040,
    IMG_FMT_16_16_16_16_UNORM                          = 0x00000041,
    IMG_FMT_16_16_16_16_SNORM                          = 0x00000042,
    IMG_FMT_16_16_16_16_USCALED                        = 0x00000043,
    IMG_FMT_16_16_16_16_SSCALED                        = 0x00000044,
    IMG_FMT_16_16_16_16_UINT                           = 0x00000045,
    IMG_FMT_16_16_16_16_SINT                           = 0x00000046,
    IMG_FMT_16_16_16_16_FLOAT                          = 0x00000047,
    IMG_FMT_32_32_32_UINT                              = 0x00000048,
    IMG_FMT_32_32_32_SINT                              = 0x00000049,
    IMG_FMT_32_32_32_FLOAT                             = 0x0000004a,
    IMG_FMT_32_32_32_32_UINT                           = 0x0000004b,
    IMG_FMT_32_32_32_32_SINT                           = 0x0000004c,
    IMG_FMT_32_32_32_32_FLOAT                          = 0x0000004d,
    IMG_FMT_RESERVED_78                                = 0x0000004e,
    IMG_FMT_RESERVED_79                                = 0x0000004f,
    IMG_FMT_RESERVED_80                                = 0x00000050,
    IMG_FMT_RESERVED_81                                = 0x00000051,
    IMG_FMT_RESERVED_82                                = 0x00000052,
    IMG_FMT_RESERVED_83                                = 0x00000053,
    IMG_FMT_RESERVED_84                                = 0x00000054,
    IMG_FMT_RESERVED_85                                = 0x00000055,
    IMG_FMT_RESERVED_86                                = 0x00000056,
    IMG_FMT_RESERVED_87                                = 0x00000057,
    IMG_FMT_RESERVED_88                                = 0x00000058,
    IMG_FMT_RESERVED_89                                = 0x00000059,
    IMG_FMT_RESERVED_90                                = 0x0000005a,
    IMG_FMT_RESERVED_91                                = 0x0000005b,
    IMG_FMT_RESERVED_92                                = 0x0000005c,
    IMG_FMT_RESERVED_93                                = 0x0000005d,
    IMG_FMT_RESERVED_94                                = 0x0000005e,
    IMG_FMT_RESERVED_95                                = 0x0000005f,
    IMG_FMT_RESERVED_96                                = 0x00000060,
    IMG_FMT_RESERVED_97                                = 0x00000061,
    IMG_FMT_RESERVED_98                                = 0x00000062,
    IMG_FMT_RESERVED_99                                = 0x00000063,
    IMG_FMT_RESERVED_100                               = 0x00000064,
    IMG_FMT_RESERVED_101                               = 0x00000065,
    IMG_FMT_RESERVED_102                               = 0x00000066,
    IMG_FMT_RESERVED_103                               = 0x00000067,
    IMG_FMT_RESERVED_104                               = 0x00000068,
    IMG_FMT_RESERVED_105                               = 0x00000069,
    IMG_FMT_RESERVED_106                               = 0x0000006a,
    IMG_FMT_RESERVED_107                               = 0x0000006b,
    IMG_FMT_RESERVED_108                               = 0x0000006c,
    IMG_FMT_RESERVED_109                               = 0x0000006d,
    IMG_FMT_RESERVED_110                               = 0x0000006e,
    IMG_FMT_RESERVED_111                               = 0x0000006f,
    IMG_FMT_RESERVED_112                               = 0x00000070,
    IMG_FMT_RESERVED_113                               = 0x00000071,
    IMG_FMT_RESERVED_114                               = 0x00000072,
    IMG_FMT_RESERVED_115                               = 0x00000073,
    IMG_FMT_RESERVED_116                               = 0x00000074,
    IMG_FMT_RESERVED_117                               = 0x00000075,
    IMG_FMT_RESERVED_118                               = 0x00000076,
    IMG_FMT_RESERVED_119                               = 0x00000077,
    IMG_FMT_RESERVED_120                               = 0x00000078,
    IMG_FMT_RESERVED_121                               = 0x00000079,
    IMG_FMT_RESERVED_122                               = 0x0000007a,
    IMG_FMT_RESERVED_123                               = 0x0000007b,
    IMG_FMT_RESERVED_124                               = 0x0000007c,
    IMG_FMT_RESERVED_125                               = 0x0000007d,
    IMG_FMT_RESERVED_126                               = 0x0000007e,
    IMG_FMT_RESERVED_127                               = 0x0000007f,
    IMG_FMT_8_SRGB                                     = 0x00000080,
    IMG_FMT_8_8_SRGB                                   = 0x00000081,
    IMG_FMT_8_8_8_8_SRGB                               = 0x00000082,
    IMG_FMT_6E4_FLOAT                                  = 0x00000083,
    IMG_FMT_5_9_9_9_FLOAT                              = 0x00000084,
    IMG_FMT_5_6_5_UNORM                                = 0x00000085,
    IMG_FMT_1_5_5_5_UNORM                              = 0x00000086,
    IMG_FMT_5_5_5_1_UNORM                              = 0x00000087,
    IMG_FMT_4_4_4_4_UNORM                              = 0x00000088,
    IMG_FMT_4_4_UNORM                                  = 0x00000089,
    IMG_FMT_1_UNORM                                    = 0x0000008a,
    IMG_FMT_1_REVERSED_UNORM                           = 0x0000008b,
    IMG_FMT_32_FLOAT_CLAMP                             = 0x0000008c,
    IMG_FMT_8_24_UNORM                                 = 0x0000008d,
    IMG_FMT_8_24_UINT                                  = 0x0000008e,
    IMG_FMT_24_8_UNORM                                 = 0x0000008f,
    IMG_FMT_24_8_UINT                                  = 0x00000090,
    IMG_FMT_X24_8_32_UINT                              = 0x00000091,
    IMG_FMT_X24_8_32_FLOAT                             = 0x00000092,
    IMG_FMT_GB_GR_UNORM                                = 0x00000093,
    IMG_FMT_GB_GR_SNORM                                = 0x00000094,
    IMG_FMT_GB_GR_UINT                                 = 0x00000095,
    IMG_FMT_GB_GR_SRGB                                 = 0x00000096,
    IMG_FMT_BG_RG_UNORM                                = 0x00000097,
    IMG_FMT_BG_RG_SNORM                                = 0x00000098,
    IMG_FMT_BG_RG_UINT                                 = 0x00000099,
    IMG_FMT_BG_RG_SRGB                                 = 0x0000009a,
    IMG_FMT_RESERVED_155                               = 0x0000009b,
    IMG_FMT_FMASK8_S2_F1                               = 0x0000009c,
    IMG_FMT_FMASK8_S4_F1                               = 0x0000009d,
    IMG_FMT_FMASK8_S8_F1                               = 0x0000009e,
    IMG_FMT_FMASK8_S2_F2                               = 0x0000009f,
    IMG_FMT_FMASK8_S4_F2                               = 0x000000a0,
    IMG_FMT_FMASK8_S4_F4                               = 0x000000a1,
    IMG_FMT_FMASK16_S16_F1                             = 0x000000a2,
    IMG_FMT_FMASK16_S8_F2                              = 0x000000a3,
    IMG_FMT_FMASK32_S16_F2                             = 0x000000a4,
    IMG_FMT_FMASK32_S8_F4                              = 0x000000a5,
    IMG_FMT_FMASK32_S8_F8                              = 0x000000a6,
    IMG_FMT_FMASK64_S16_F4                             = 0x000000a7,
    IMG_FMT_FMASK64_S16_F8                             = 0x000000a8,
    IMG_FMT_BC1_UNORM                                  = 0x000000a9,
    IMG_FMT_BC1_SRGB                                   = 0x000000aa,
    IMG_FMT_BC2_UNORM                                  = 0x000000ab,
    IMG_FMT_BC2_SRGB                                   = 0x000000ac,
    IMG_FMT_BC3_UNORM                                  = 0x000000ad,
    IMG_FMT_BC3_SRGB                                   = 0x000000ae,
    IMG_FMT_BC4_UNORM                                  = 0x000000af,
    IMG_FMT_BC4_SNORM                                  = 0x000000b0,
    IMG_FMT_BC5_UNORM                                  = 0x000000b1,
    IMG_FMT_BC5_SNORM                                  = 0x000000b2,
    IMG_FMT_BC6_UFLOAT                                 = 0x000000b3,
    IMG_FMT_BC6_SFLOAT                                 = 0x000000b4,
    IMG_FMT_BC7_UNORM                                  = 0x000000b5,
    IMG_FMT_BC7_SRGB                                   = 0x000000b6,
    IMG_FMT_ETC2_RGB_UNORM                             = 0x000000b7,
    IMG_FMT_ETC2_RGB_SRGB                              = 0x000000b8,
    IMG_FMT_ETC2_RGBA_UNORM                            = 0x000000b9,
    IMG_FMT_ETC2_RGBA_SRGB                             = 0x000000ba,
    IMG_FMT_ETC2_R_UNORM                               = 0x000000bb,
    IMG_FMT_ETC2_R_SNORM                               = 0x000000bc,
    IMG_FMT_ETC2_RG_UNORM                              = 0x000000bd,
    IMG_FMT_ETC2_RG_SNORM                              = 0x000000be,
    IMG_FMT_ETC2_RGBA1_UNORM                           = 0x000000bf,
    IMG_FMT_ETC2_RGBA1_SRGB                            = 0x000000c0,
    IMG_FMT_ASTC_2D_LDR_4X4                            = 0x000000c1,
    IMG_FMT_ASTC_2D_LDR_5X4                            = 0x000000c2,
    IMG_FMT_ASTC_2D_LDR_5X5                            = 0x000000c3,
    IMG_FMT_ASTC_2D_LDR_6X5                            = 0x000000c4,
    IMG_FMT_ASTC_2D_LDR_6X6                            = 0x000000c5,
    IMG_FMT_ASTC_2D_LDR_8X5                            = 0x000000c6,
    IMG_FMT_ASTC_2D_LDR_8X6                            = 0x000000c7,
    IMG_FMT_ASTC_2D_LDR_8X8                            = 0x000000c8,
    IMG_FMT_ASTC_2D_LDR_10X5                           = 0x000000c9,
    IMG_FMT_ASTC_2D_LDR_10X6                           = 0x000000ca,
    IMG_FMT_ASTC_2D_LDR_10X8                           = 0x000000cb,
    IMG_FMT_ASTC_2D_LDR_10X10                          = 0x000000cc,
    IMG_FMT_ASTC_2D_LDR_12X10                          = 0x000000cd,
    IMG_FMT_ASTC_2D_LDR_12X12                          = 0x000000ce,
    IMG_FMT_ASTC_2D_HDR_4X4                            = 0x000000cf,
    IMG_FMT_ASTC_2D_HDR_5X4                            = 0x000000d0,
    IMG_FMT_ASTC_2D_HDR_5X5                            = 0x000000d1,
    IMG_FMT_ASTC_2D_HDR_6X5                            = 0x000000d2,
    IMG_FMT_ASTC_2D_HDR_6X6                            = 0x000000d3,
    IMG_FMT_ASTC_2D_HDR_8X5                            = 0x000000d4,
    IMG_FMT_ASTC_2D_HDR_8X6                            = 0x000000d5,
    IMG_FMT_ASTC_2D_HDR_8X8                            = 0x000000d6,
    IMG_FMT_ASTC_2D_HDR_10X5                           = 0x000000d7,
    IMG_FMT_ASTC_2D_HDR_10X6                           = 0x000000d8,
    IMG_FMT_ASTC_2D_HDR_10X8                           = 0x000000d9,
    IMG_FMT_ASTC_2D_HDR_10X10                          = 0x000000da,
    IMG_FMT_ASTC_2D_HDR_12X10                          = 0x000000db,
    IMG_FMT_ASTC_2D_HDR_12X12                          = 0x000000dc,
    IMG_FMT_ASTC_2D_LDR_SRGB_4X4                       = 0x000000dd,
    IMG_FMT_ASTC_2D_LDR_SRGB_5X4                       = 0x000000de,
    IMG_FMT_ASTC_2D_LDR_SRGB_5X5                       = 0x000000df,
    IMG_FMT_ASTC_2D_LDR_SRGB_6X5                       = 0x000000e0,
    IMG_FMT_ASTC_2D_LDR_SRGB_6X6                       = 0x000000e1,
    IMG_FMT_ASTC_2D_LDR_SRGB_8X5                       = 0x000000e2,
    IMG_FMT_ASTC_2D_LDR_SRGB_8X6                       = 0x000000e3,
    IMG_FMT_ASTC_2D_LDR_SRGB_8X8                       = 0x000000e4,
    IMG_FMT_ASTC_2D_LDR_SRGB_10X5                      = 0x000000e5,
    IMG_FMT_ASTC_2D_LDR_SRGB_10X6                      = 0x000000e6,
    IMG_FMT_ASTC_2D_LDR_SRGB_10X8                      = 0x000000e7,
    IMG_FMT_ASTC_2D_LDR_SRGB_10X10                     = 0x000000e8,
    IMG_FMT_ASTC_2D_LDR_SRGB_12X10                     = 0x000000e9,
    IMG_FMT_ASTC_2D_LDR_SRGB_12X12                     = 0x000000ea,
    IMG_FMT_ASTC_3D_LDR_3X3X3                          = 0x000000eb,
    IMG_FMT_ASTC_3D_LDR_4X3X3                          = 0x000000ec,
    IMG_FMT_ASTC_3D_LDR_4X4X3                          = 0x000000ed,
    IMG_FMT_ASTC_3D_LDR_4X4X4                          = 0x000000ee,
    IMG_FMT_ASTC_3D_LDR_5X4X4                          = 0x000000ef,
    IMG_FMT_ASTC_3D_LDR_5X5X4                          = 0x000000f0,
    IMG_FMT_ASTC_3D_LDR_5X5X5                          = 0x000000f1,
    IMG_FMT_ASTC_3D_LDR_6X5X5                          = 0x000000f2,
    IMG_FMT_ASTC_3D_LDR_6X6X5                          = 0x000000f3,
    IMG_FMT_ASTC_3D_LDR_6X6X6                          = 0x000000f4,
    IMG_FMT_ASTC_3D_HDR_3X3X3                          = 0x000000f5,
    IMG_FMT_ASTC_3D_HDR_4X3X3                          = 0x000000f6,
    IMG_FMT_ASTC_3D_HDR_4X4X3                          = 0x000000f7,
    IMG_FMT_ASTC_3D_HDR_4X4X4                          = 0x000000f8,
    IMG_FMT_ASTC_3D_HDR_5X4X4                          = 0x000000f9,
    IMG_FMT_ASTC_3D_HDR_5X5X4                          = 0x000000fa,
    IMG_FMT_ASTC_3D_HDR_5X5X5                          = 0x000000fb,
    IMG_FMT_ASTC_3D_HDR_6X5X5                          = 0x000000fc,
    IMG_FMT_ASTC_3D_HDR_6X6X5                          = 0x000000fd,
    IMG_FMT_ASTC_3D_HDR_6X6X6                          = 0x000000fe,
    IMG_FMT_ASTC_3D_LDR_SRGB_3X3X3                     = 0x000000ff,
    IMG_FMT_ASTC_3D_LDR_SRGB_4X3X3                     = 0x00000100,
    IMG_FMT_ASTC_3D_LDR_SRGB_4X4X3                     = 0x00000101,
    IMG_FMT_ASTC_3D_LDR_SRGB_4X4X4                     = 0x00000102,
    IMG_FMT_ASTC_3D_LDR_SRGB_5X4X4                     = 0x00000103,
    IMG_FMT_ASTC_3D_LDR_SRGB_5X5X4                     = 0x00000104,
    IMG_FMT_ASTC_3D_LDR_SRGB_5X5X5                     = 0x00000105,
    IMG_FMT_ASTC_3D_LDR_SRGB_6X5X5                     = 0x00000106,
    IMG_FMT_ASTC_3D_LDR_SRGB_6X6X5                     = 0x00000107,
    IMG_FMT_ASTC_3D_LDR_SRGB_6X6X6                     = 0x00000108,
    IMG_FMT_MM_8_UNORM                                 = 0x00000109,
    IMG_FMT_MM_8_UINT                                  = 0x0000010a,
    IMG_FMT_MM_8_8_UNORM                               = 0x0000010b,
    IMG_FMT_MM_8_8_UINT                                = 0x0000010c,
    IMG_FMT_MM_8_8_8_8_UNORM                           = 0x0000010d,
    IMG_FMT_MM_8_8_8_8_UINT                            = 0x0000010e,
    IMG_FMT_MM_VYUY8_UNORM                             = 0x0000010f,
    IMG_FMT_MM_VYUY8_UINT                              = 0x00000110,
    IMG_FMT_MM_10_11_11_UNORM                          = 0x00000111,
    IMG_FMT_MM_10_11_11_UINT                           = 0x00000112,
    IMG_FMT_MM_2_10_10_10_UNORM                        = 0x00000113,
    IMG_FMT_MM_2_10_10_10_UINT                         = 0x00000114,
    IMG_FMT_MM_16_16_16_16_UNORM                       = 0x00000115,
    IMG_FMT_MM_16_16_16_16_UINT                        = 0x00000116,
    IMG_FMT_MM_10_IN_16_UNORM                          = 0x00000117,
    IMG_FMT_MM_10_IN_16_UINT                           = 0x00000118,
    IMG_FMT_MM_10_IN_16_16_UNORM                       = 0x00000119,
    IMG_FMT_MM_10_IN_16_16_UINT                        = 0x0000011a,
    IMG_FMT_MM_10_IN_16_16_16_16_UNORM                 = 0x0000011b,
    IMG_FMT_MM_10_IN_16_16_16_16_UINT                  = 0x0000011c,
    IMG_FMT_RESERVED_288                               = 0x00000120,
    IMG_FMT_RESERVED_289                               = 0x00000121,
    IMG_FMT_RESERVED_290                               = 0x00000122,
    IMG_FMT_RESERVED_291                               = 0x00000123,
    IMG_FMT_RESERVED_292                               = 0x00000124,
    IMG_FMT_RESERVED_293                               = 0x00000125,
    IMG_FMT_RESERVED_294                               = 0x00000126,
    IMG_FMT_RESERVED_295                               = 0x00000127,
    IMG_FMT_RESERVED_296                               = 0x00000128,
    IMG_FMT_RESERVED_297                               = 0x00000129,
    IMG_FMT_RESERVED_298                               = 0x0000012a,
    IMG_FMT_RESERVED_299                               = 0x0000012b,
    IMG_FMT_RESERVED_300                               = 0x0000012c,
    IMG_FMT_RESERVED_301                               = 0x0000012d,
    IMG_FMT_RESERVED_302                               = 0x0000012e,
    IMG_FMT_RESERVED_303                               = 0x0000012f,
    IMG_FMT_RESERVED_304                               = 0x00000130,
    IMG_FMT_RESERVED_305                               = 0x00000131,
    IMG_FMT_RESERVED_306                               = 0x00000132,
    IMG_FMT_RESERVED_307                               = 0x00000133,
    IMG_FMT_RESERVED_308                               = 0x00000134,
    IMG_FMT_RESERVED_309                               = 0x00000135,
    IMG_FMT_RESERVED_310                               = 0x00000136,
    IMG_FMT_RESERVED_311                               = 0x00000137,
    IMG_FMT_RESERVED_312                               = 0x00000138,
    IMG_FMT_RESERVED_313                               = 0x00000139,
    IMG_FMT_RESERVED_314                               = 0x0000013a,
    IMG_FMT_RESERVED_315                               = 0x0000013b,
    IMG_FMT_RESERVED_316                               = 0x0000013c,
    IMG_FMT_RESERVED_317                               = 0x0000013d,
    IMG_FMT_RESERVED_318                               = 0x0000013e,
    IMG_FMT_RESERVED_319                               = 0x0000013f,
    IMG_FMT_RESERVED_320                               = 0x00000140,
    IMG_FMT_RESERVED_321                               = 0x00000141,
    IMG_FMT_RESERVED_322                               = 0x00000142,
    IMG_FMT_RESERVED_323                               = 0x00000143,
    IMG_FMT_RESERVED_324                               = 0x00000144,
    IMG_FMT_RESERVED_325                               = 0x00000145,
    IMG_FMT_RESERVED_326                               = 0x00000146,
    IMG_FMT_RESERVED_327                               = 0x00000147,
    IMG_FMT_RESERVED_328                               = 0x00000148,
    IMG_FMT_RESERVED_329                               = 0x00000149,
    IMG_FMT_RESERVED_330                               = 0x0000014a,
    IMG_FMT_RESERVED_331                               = 0x0000014b,
    IMG_FMT_RESERVED_332                               = 0x0000014c,
    IMG_FMT_RESERVED_333                               = 0x0000014d,
    IMG_FMT_RESERVED_334                               = 0x0000014e,
    IMG_FMT_RESERVED_335                               = 0x0000014f,
    IMG_FMT_RESERVED_336                               = 0x00000150,
    IMG_FMT_RESERVED_337                               = 0x00000151,
    IMG_FMT_RESERVED_338                               = 0x00000152,
    IMG_FMT_RESERVED_339                               = 0x00000153,
    IMG_FMT_RESERVED_340                               = 0x00000154,
    IMG_FMT_RESERVED_341                               = 0x00000155,
    IMG_FMT_RESERVED_342                               = 0x00000156,
    IMG_FMT_RESERVED_343                               = 0x00000157,
    IMG_FMT_RESERVED_344                               = 0x00000158,
    IMG_FMT_RESERVED_345                               = 0x00000159,
    IMG_FMT_RESERVED_346                               = 0x0000015a,
    IMG_FMT_RESERVED_347                               = 0x0000015b,
    IMG_FMT_RESERVED_348                               = 0x0000015c,
    IMG_FMT_RESERVED_349                               = 0x0000015d,
    IMG_FMT_RESERVED_350                               = 0x0000015e,
    IMG_FMT_RESERVED_351                               = 0x0000015f,
    IMG_FMT_RESERVED_352                               = 0x00000160,
    IMG_FMT_RESERVED_353                               = 0x00000161,
    IMG_FMT_RESERVED_354                               = 0x00000162,
    IMG_FMT_RESERVED_355                               = 0x00000163,
    IMG_FMT_RESERVED_356                               = 0x00000164,
    IMG_FMT_RESERVED_357                               = 0x00000165,
    IMG_FMT_RESERVED_358                               = 0x00000166,
    IMG_FMT_RESERVED_359                               = 0x00000167,
    IMG_FMT_RESERVED_360                               = 0x00000168,
    IMG_FMT_RESERVED_361                               = 0x00000169,
    IMG_FMT_RESERVED_362                               = 0x0000016a,
    IMG_FMT_RESERVED_363                               = 0x0000016b,
    IMG_FMT_RESERVED_364                               = 0x0000016c,
    IMG_FMT_RESERVED_365                               = 0x0000016d,
    IMG_FMT_RESERVED_366                               = 0x0000016e,
    IMG_FMT_RESERVED_367                               = 0x0000016f,
    IMG_FMT_RESERVED_368                               = 0x00000170,
    IMG_FMT_RESERVED_369                               = 0x00000171,
    IMG_FMT_RESERVED_370                               = 0x00000172,
    IMG_FMT_RESERVED_371                               = 0x00000173,
    IMG_FMT_RESERVED_372                               = 0x00000174,
    IMG_FMT_RESERVED_373                               = 0x00000175,
    IMG_FMT_RESERVED_374                               = 0x00000176,
    IMG_FMT_RESERVED_375                               = 0x00000177,
    IMG_FMT_RESERVED_376                               = 0x00000178,
    IMG_FMT_RESERVED_377                               = 0x00000179,
    IMG_FMT_RESERVED_378                               = 0x0000017a,
    IMG_FMT_RESERVED_379                               = 0x0000017b,
    IMG_FMT_RESERVED_380                               = 0x0000017c,
    IMG_FMT_RESERVED_381                               = 0x0000017d,
    IMG_FMT_RESERVED_382                               = 0x0000017e,
    IMG_FMT_RESERVED_383                               = 0x0000017f,
    IMG_FMT_RESERVED_384                               = 0x00000180,
    IMG_FMT_RESERVED_385                               = 0x00000181,
    IMG_FMT_RESERVED_386                               = 0x00000182,
    IMG_FMT_RESERVED_387                               = 0x00000183,
    IMG_FMT_RESERVED_388                               = 0x00000184,
    IMG_FMT_RESERVED_389                               = 0x00000185,
    IMG_FMT_RESERVED_390                               = 0x00000186,
    IMG_FMT_RESERVED_391                               = 0x00000187,
    IMG_FMT_RESERVED_392                               = 0x00000188,
    IMG_FMT_RESERVED_393                               = 0x00000189,
    IMG_FMT_RESERVED_394                               = 0x0000018a,
    IMG_FMT_RESERVED_395                               = 0x0000018b,
    IMG_FMT_RESERVED_396                               = 0x0000018c,
    IMG_FMT_RESERVED_397                               = 0x0000018d,
    IMG_FMT_RESERVED_398                               = 0x0000018e,
    IMG_FMT_RESERVED_399                               = 0x0000018f,
    IMG_FMT_RESERVED_400                               = 0x00000190,
    IMG_FMT_RESERVED_401                               = 0x00000191,
    IMG_FMT_RESERVED_402                               = 0x00000192,
    IMG_FMT_RESERVED_403                               = 0x00000193,
    IMG_FMT_RESERVED_404                               = 0x00000194,
    IMG_FMT_RESERVED_405                               = 0x00000195,
    IMG_FMT_RESERVED_406                               = 0x00000196,
    IMG_FMT_RESERVED_407                               = 0x00000197,
    IMG_FMT_RESERVED_408                               = 0x00000198,
    IMG_FMT_RESERVED_409                               = 0x00000199,
    IMG_FMT_RESERVED_410                               = 0x0000019a,
    IMG_FMT_RESERVED_411                               = 0x0000019b,
    IMG_FMT_RESERVED_412                               = 0x0000019c,
    IMG_FMT_RESERVED_413                               = 0x0000019d,
    IMG_FMT_RESERVED_414                               = 0x0000019e,
    IMG_FMT_RESERVED_415                               = 0x0000019f,
    IMG_FMT_RESERVED_416                               = 0x000001a0,
    IMG_FMT_RESERVED_417                               = 0x000001a1,
    IMG_FMT_RESERVED_418                               = 0x000001a2,
    IMG_FMT_RESERVED_419                               = 0x000001a3,
    IMG_FMT_RESERVED_420                               = 0x000001a4,
    IMG_FMT_RESERVED_421                               = 0x000001a5,
    IMG_FMT_RESERVED_422                               = 0x000001a6,
    IMG_FMT_RESERVED_423                               = 0x000001a7,
    IMG_FMT_RESERVED_424                               = 0x000001a8,
    IMG_FMT_RESERVED_425                               = 0x000001a9,
    IMG_FMT_RESERVED_426                               = 0x000001aa,
    IMG_FMT_RESERVED_427                               = 0x000001ab,
    IMG_FMT_RESERVED_428                               = 0x000001ac,
    IMG_FMT_RESERVED_429                               = 0x000001ad,
    IMG_FMT_RESERVED_430                               = 0x000001ae,
    IMG_FMT_RESERVED_431                               = 0x000001af,
    IMG_FMT_RESERVED_432                               = 0x000001b0,
    IMG_FMT_RESERVED_433                               = 0x000001b1,
    IMG_FMT_RESERVED_434                               = 0x000001b2,
    IMG_FMT_RESERVED_435                               = 0x000001b3,
    IMG_FMT_RESERVED_436                               = 0x000001b4,
    IMG_FMT_RESERVED_437                               = 0x000001b5,
    IMG_FMT_RESERVED_438                               = 0x000001b6,
    IMG_FMT_RESERVED_439                               = 0x000001b7,
    IMG_FMT_RESERVED_440                               = 0x000001b8,
    IMG_FMT_RESERVED_441                               = 0x000001b9,
    IMG_FMT_RESERVED_442                               = 0x000001ba,
    IMG_FMT_RESERVED_443                               = 0x000001bb,
    IMG_FMT_RESERVED_444                               = 0x000001bc,
    IMG_FMT_RESERVED_445                               = 0x000001bd,
    IMG_FMT_RESERVED_446                               = 0x000001be,
    IMG_FMT_RESERVED_447                               = 0x000001bf,
    IMG_FMT_RESERVED_448                               = 0x000001c0,
    IMG_FMT_RESERVED_449                               = 0x000001c1,
    IMG_FMT_RESERVED_450                               = 0x000001c2,
    IMG_FMT_RESERVED_451                               = 0x000001c3,
    IMG_FMT_RESERVED_452                               = 0x000001c4,
    IMG_FMT_RESERVED_453                               = 0x000001c5,
    IMG_FMT_RESERVED_454                               = 0x000001c6,
    IMG_FMT_RESERVED_455                               = 0x000001c7,
    IMG_FMT_RESERVED_456                               = 0x000001c8,
    IMG_FMT_RESERVED_457                               = 0x000001c9,
    IMG_FMT_RESERVED_458                               = 0x000001ca,
    IMG_FMT_RESERVED_459                               = 0x000001cb,
    IMG_FMT_RESERVED_460                               = 0x000001cc,
    IMG_FMT_RESERVED_461                               = 0x000001cd,
    IMG_FMT_RESERVED_462                               = 0x000001ce,
    IMG_FMT_RESERVED_463                               = 0x000001cf,
    IMG_FMT_RESERVED_464                               = 0x000001d0,
    IMG_FMT_RESERVED_465                               = 0x000001d1,
    IMG_FMT_RESERVED_466                               = 0x000001d2,
    IMG_FMT_RESERVED_467                               = 0x000001d3,
    IMG_FMT_RESERVED_468                               = 0x000001d4,
    IMG_FMT_RESERVED_469                               = 0x000001d5,
    IMG_FMT_RESERVED_470                               = 0x000001d6,
    IMG_FMT_RESERVED_471                               = 0x000001d7,
    IMG_FMT_RESERVED_472                               = 0x000001d8,
    IMG_FMT_RESERVED_473                               = 0x000001d9,
    IMG_FMT_RESERVED_474                               = 0x000001da,
    IMG_FMT_RESERVED_475                               = 0x000001db,
    IMG_FMT_RESERVED_476                               = 0x000001dc,
    IMG_FMT_RESERVED_477                               = 0x000001dd,
    IMG_FMT_RESERVED_478                               = 0x000001de,
    IMG_FMT_RESERVED_479                               = 0x000001df,
    IMG_FMT_RESERVED_480                               = 0x000001e0,
    IMG_FMT_RESERVED_481                               = 0x000001e1,
    IMG_FMT_RESERVED_482                               = 0x000001e2,
    IMG_FMT_RESERVED_483                               = 0x000001e3,
    IMG_FMT_RESERVED_484                               = 0x000001e4,
    IMG_FMT_RESERVED_485                               = 0x000001e5,
    IMG_FMT_RESERVED_486                               = 0x000001e6,
    IMG_FMT_RESERVED_487                               = 0x000001e7,
    IMG_FMT_RESERVED_488                               = 0x000001e8,
    IMG_FMT_RESERVED_489                               = 0x000001e9,
    IMG_FMT_RESERVED_490                               = 0x000001ea,
    IMG_FMT_RESERVED_491                               = 0x000001eb,
    IMG_FMT_RESERVED_492                               = 0x000001ec,
    IMG_FMT_RESERVED_493                               = 0x000001ed,
    IMG_FMT_RESERVED_494                               = 0x000001ee,
    IMG_FMT_RESERVED_495                               = 0x000001ef,
    IMG_FMT_RESERVED_496                               = 0x000001f0,
    IMG_FMT_RESERVED_497                               = 0x000001f1,
    IMG_FMT_RESERVED_498                               = 0x000001f2,
    IMG_FMT_RESERVED_499                               = 0x000001f3,
    IMG_FMT_RESERVED_500                               = 0x000001f4,
    IMG_FMT_RESERVED_501                               = 0x000001f5,
    IMG_FMT_RESERVED_502                               = 0x000001f6,
    IMG_FMT_RESERVED_503                               = 0x000001f7,
    IMG_FMT_RESERVED_504                               = 0x000001f8,
    IMG_FMT_RESERVED_505                               = 0x000001f9,
    IMG_FMT_RESERVED_506                               = 0x000001fa,
    IMG_FMT_RESERVED_507                               = 0x000001fb,
    IMG_FMT_RESERVED_508                               = 0x000001fc,
    IMG_FMT_RESERVED_509                               = 0x000001fd,
    IMG_FMT_RESERVED_510                               = 0x000001fe,
    IMG_FMT_RESERVED_511                               = 0x000001ff,
    IMG_FMT_RESERVED_285__GFX101                       = 0x0000011d,
    IMG_FMT_RESERVED_286__GFX101                       = 0x0000011e,
    IMG_FMT_RESERVED_287__GFX101                       = 0x0000011f,
} IMG_FMT;

typedef enum IMG_NUM_FORMAT {
    IMG_NUM_FORMAT_UNORM                               = 0x00000000,
    IMG_NUM_FORMAT_SNORM                               = 0x00000001,
    IMG_NUM_FORMAT_USCALED                             = 0x00000002,
    IMG_NUM_FORMAT_SSCALED                             = 0x00000003,
    IMG_NUM_FORMAT_UINT                                = 0x00000004,
    IMG_NUM_FORMAT_SINT                                = 0x00000005,
    IMG_NUM_FORMAT_FLOAT                               = 0x00000007,
    IMG_NUM_FORMAT_RESERVED_8                          = 0x00000008,
    IMG_NUM_FORMAT_SRGB                                = 0x00000009,
    IMG_NUM_FORMAT_RESERVED_14                         = 0x0000000e,
    IMG_NUM_FORMAT_RESERVED_15                         = 0x0000000f,
    IMG_NUM_FORMAT_RESERVED_6__GFX09                   = 0x00000006,
    IMG_NUM_FORMAT_UNORM_UINT__GFX09                   = 0x0000000a,
    IMG_NUM_FORMAT_RESERVED_11__GFX09                  = 0x0000000b,
    IMG_NUM_FORMAT_RESERVED_12__GFX09                  = 0x0000000c,
    IMG_NUM_FORMAT_RESERVED_13__GFX09                  = 0x0000000d,
    IMG_NUM_FORMAT_SNORM_NZ__GFX10                     = 0x00000006,
    IMG_NUM_FORMAT_UBNORM__GFX10                       = 0x0000000a,
    IMG_NUM_FORMAT_UBNORM_NZ__GFX10                    = 0x0000000b,
    IMG_NUM_FORMAT_UBINT__GFX10                        = 0x0000000c,
    IMG_NUM_FORMAT_UBSCALED__GFX10                     = 0x0000000d,
} IMG_NUM_FORMAT;

typedef enum IMG_NUM_FORMAT_ASTC_2D {
    IMG_NUM_FORMAT_ASTC_2D_RESERVED_14                 = 0x0000000e,
    IMG_NUM_FORMAT_ASTC_2D_RESERVED_15                 = 0x0000000f,
    IMG_NUM_FORMAT_ASTC_2D_4x4__GFX09                  = 0x00000000,
    IMG_NUM_FORMAT_ASTC_2D_5x4__GFX09                  = 0x00000001,
    IMG_NUM_FORMAT_ASTC_2D_5x5__GFX09                  = 0x00000002,
    IMG_NUM_FORMAT_ASTC_2D_6x5__GFX09                  = 0x00000003,
    IMG_NUM_FORMAT_ASTC_2D_6x6__GFX09                  = 0x00000004,
    IMG_NUM_FORMAT_ASTC_2D_8x5__GFX09                  = 0x00000005,
    IMG_NUM_FORMAT_ASTC_2D_8x6__GFX09                  = 0x00000006,
    IMG_NUM_FORMAT_ASTC_2D_8x8__GFX09                  = 0x00000007,
    IMG_NUM_FORMAT_ASTC_2D_10x5__GFX09                 = 0x00000008,
    IMG_NUM_FORMAT_ASTC_2D_10x6__GFX09                 = 0x00000009,
    IMG_NUM_FORMAT_ASTC_2D_10x8__GFX09                 = 0x0000000a,
    IMG_NUM_FORMAT_ASTC_2D_10x10__GFX09                = 0x0000000b,
    IMG_NUM_FORMAT_ASTC_2D_12x10__GFX09                = 0x0000000c,
    IMG_NUM_FORMAT_ASTC_2D_12x12__GFX09                = 0x0000000d,
    IMG_NUM_FORMAT_ASTC_2D_4X4__GFX10                  = 0x00000000,
    IMG_NUM_FORMAT_ASTC_2D_5X4__GFX10                  = 0x00000001,
    IMG_NUM_FORMAT_ASTC_2D_5X5__GFX10                  = 0x00000002,
    IMG_NUM_FORMAT_ASTC_2D_6X5__GFX10                  = 0x00000003,
    IMG_NUM_FORMAT_ASTC_2D_6X6__GFX10                  = 0x00000004,
    IMG_NUM_FORMAT_ASTC_2D_8X5__GFX10                  = 0x00000005,
    IMG_NUM_FORMAT_ASTC_2D_8X6__GFX10                  = 0x00000006,
    IMG_NUM_FORMAT_ASTC_2D_8X8__GFX10                  = 0x00000007,
    IMG_NUM_FORMAT_ASTC_2D_10X5__GFX10                 = 0x00000008,
    IMG_NUM_FORMAT_ASTC_2D_10X6__GFX10                 = 0x00000009,
    IMG_NUM_FORMAT_ASTC_2D_10X8__GFX10                 = 0x0000000a,
    IMG_NUM_FORMAT_ASTC_2D_10X10__GFX10                = 0x0000000b,
    IMG_NUM_FORMAT_ASTC_2D_12X10__GFX10                = 0x0000000c,
    IMG_NUM_FORMAT_ASTC_2D_12X12__GFX10                = 0x0000000d,
} IMG_NUM_FORMAT_ASTC_2D;

typedef enum IMG_NUM_FORMAT_ASTC_3D {
    IMG_NUM_FORMAT_ASTC_3D_RESERVED_10                 = 0x0000000a,
    IMG_NUM_FORMAT_ASTC_3D_RESERVED_11                 = 0x0000000b,
    IMG_NUM_FORMAT_ASTC_3D_RESERVED_12                 = 0x0000000c,
    IMG_NUM_FORMAT_ASTC_3D_RESERVED_13                 = 0x0000000d,
    IMG_NUM_FORMAT_ASTC_3D_RESERVED_14                 = 0x0000000e,
    IMG_NUM_FORMAT_ASTC_3D_RESERVED_15                 = 0x0000000f,
    IMG_NUM_FORMAT_ASTC_3D_3x3x3__GFX09                = 0x00000000,
    IMG_NUM_FORMAT_ASTC_3D_4x3x3__GFX09                = 0x00000001,
    IMG_NUM_FORMAT_ASTC_3D_4x4x3__GFX09                = 0x00000002,
    IMG_NUM_FORMAT_ASTC_3D_4x4x4__GFX09                = 0x00000003,
    IMG_NUM_FORMAT_ASTC_3D_5x4x4__GFX09                = 0x00000004,
    IMG_NUM_FORMAT_ASTC_3D_5x5x4__GFX09                = 0x00000005,
    IMG_NUM_FORMAT_ASTC_3D_5x5x5__GFX09                = 0x00000006,
    IMG_NUM_FORMAT_ASTC_3D_6x5x5__GFX09                = 0x00000007,
    IMG_NUM_FORMAT_ASTC_3D_6x6x5__GFX09                = 0x00000008,
    IMG_NUM_FORMAT_ASTC_3D_6x6x6__GFX09                = 0x00000009,
    IMG_NUM_FORMAT_ASTC_3D_3X3X3__GFX10                = 0x00000000,
    IMG_NUM_FORMAT_ASTC_3D_4X3X3__GFX10                = 0x00000001,
    IMG_NUM_FORMAT_ASTC_3D_4X4X3__GFX10                = 0x00000002,
    IMG_NUM_FORMAT_ASTC_3D_4X4X4__GFX10                = 0x00000003,
    IMG_NUM_FORMAT_ASTC_3D_5X4X4__GFX10                = 0x00000004,
    IMG_NUM_FORMAT_ASTC_3D_5X5X4__GFX10                = 0x00000005,
    IMG_NUM_FORMAT_ASTC_3D_5X5X5__GFX10                = 0x00000006,
    IMG_NUM_FORMAT_ASTC_3D_6X5X5__GFX10                = 0x00000007,
    IMG_NUM_FORMAT_ASTC_3D_6X6X5__GFX10                = 0x00000008,
    IMG_NUM_FORMAT_ASTC_3D_6X6X6__GFX10                = 0x00000009,
} IMG_NUM_FORMAT_ASTC_3D;

typedef enum IMG_NUM_FORMAT_FMASK {
    IMG_NUM_FORMAT_FMASK_8_2_1                         = 0x00000000,
    IMG_NUM_FORMAT_FMASK_8_4_1                         = 0x00000001,
    IMG_NUM_FORMAT_FMASK_8_8_1                         = 0x00000002,
    IMG_NUM_FORMAT_FMASK_8_2_2                         = 0x00000003,
    IMG_NUM_FORMAT_FMASK_8_4_2                         = 0x00000004,
    IMG_NUM_FORMAT_FMASK_8_4_4                         = 0x00000005,
    IMG_NUM_FORMAT_FMASK_16_16_1                       = 0x00000006,
    IMG_NUM_FORMAT_FMASK_16_8_2                        = 0x00000007,
    IMG_NUM_FORMAT_FMASK_32_16_2                       = 0x00000008,
    IMG_NUM_FORMAT_FMASK_32_8_4                        = 0x00000009,
    IMG_NUM_FORMAT_FMASK_32_8_8                        = 0x0000000a,
    IMG_NUM_FORMAT_FMASK_64_16_4                       = 0x0000000b,
    IMG_NUM_FORMAT_FMASK_64_16_8                       = 0x0000000c,
    IMG_NUM_FORMAT_FMASK_RESERVED_13                   = 0x0000000d,
    IMG_NUM_FORMAT_FMASK_RESERVED_14                   = 0x0000000e,
    IMG_NUM_FORMAT_FMASK_RESERVED_15                   = 0x0000000f,
} IMG_NUM_FORMAT_FMASK;

typedef enum IMG_NUM_FORMAT_N_IN_16 {
    IMG_NUM_FORMAT_N_IN_16_RESERVED_0                  = 0x00000000,
    IMG_NUM_FORMAT_N_IN_16_UNORM_10                    = 0x00000001,
    IMG_NUM_FORMAT_N_IN_16_UNORM_9                     = 0x00000002,
    IMG_NUM_FORMAT_N_IN_16_RESERVED_3                  = 0x00000003,
    IMG_NUM_FORMAT_N_IN_16_UINT_10                     = 0x00000004,
    IMG_NUM_FORMAT_N_IN_16_UINT_9                      = 0x00000005,
    IMG_NUM_FORMAT_N_IN_16_RESERVED_6                  = 0x00000006,
    IMG_NUM_FORMAT_N_IN_16_UNORM_UINT_10               = 0x00000007,
    IMG_NUM_FORMAT_N_IN_16_UNORM_UINT_9                = 0x00000008,
    IMG_NUM_FORMAT_N_IN_16_RESERVED_9                  = 0x00000009,
    IMG_NUM_FORMAT_N_IN_16_RESERVED_10                 = 0x0000000a,
    IMG_NUM_FORMAT_N_IN_16_RESERVED_11                 = 0x0000000b,
    IMG_NUM_FORMAT_N_IN_16_RESERVED_12                 = 0x0000000c,
    IMG_NUM_FORMAT_N_IN_16_RESERVED_13                 = 0x0000000d,
    IMG_NUM_FORMAT_N_IN_16_RESERVED_14                 = 0x0000000e,
    IMG_NUM_FORMAT_N_IN_16_RESERVED_15                 = 0x0000000f,
} IMG_NUM_FORMAT_N_IN_16;

typedef enum LptNumBanks {
    LPT_NUM_BANKS_2BANK                                = 0x00000000,
    LPT_NUM_BANKS_4BANK                                = 0x00000001,
    LPT_NUM_BANKS_8BANK                                = 0x00000002,
    LPT_NUM_BANKS_16BANK                               = 0x00000003,
    LPT_NUM_BANKS_32BANK                               = 0x00000004,
} LptNumBanks;

typedef enum LptNumPipes {
    LPT_NUM_PIPES_1CH                                  = 0x00000000,
    LPT_NUM_PIPES_2CH                                  = 0x00000001,
    LPT_NUM_PIPES_4CH                                  = 0x00000002,
    LPT_NUM_PIPES_8CH                                  = 0x00000003,
} LptNumPipes;

typedef enum MacroTileAspect {
    ADDR_SURF_MACRO_ASPECT_1                           = 0x00000000,
    ADDR_SURF_MACRO_ASPECT_2                           = 0x00000001,
    ADDR_SURF_MACRO_ASPECT_4                           = 0x00000002,
    ADDR_SURF_MACRO_ASPECT_8                           = 0x00000003,
} MacroTileAspect;

typedef enum MASTER_UPDATE_LOCK_GSL_CONTROL_MASTER_UPDATE_LOCK {
    MASTER_UPDATE_LOCK_GSL_CONTROL_MASTER_UPDATE_LOCK_FALSE = 0x00000000,
    MASTER_UPDATE_LOCK_GSL_CONTROL_MASTER_UPDATE_LOCK_TRUE = 0x00000001,
} MASTER_UPDATE_LOCK_GSL_CONTROL_MASTER_UPDATE_LOCK;

typedef enum MASTER_UPDATE_MODE_MASTER_UPDATE_MODE {
    MASTER_UPDATE_MODE_MASTER_UPDATE_MODE_BETWEEN      = 0x00000000,
    MASTER_UPDATE_MODE_MASTER_UPDATE_MODE_HSYNCA       = 0x00000001,
    MASTER_UPDATE_MODE_MASTER_UPDATE_MODE_VSYNCA       = 0x00000002,
    MASTER_UPDATE_MODE_MASTER_UPDATE_MODE_BEFORE       = 0x00000003,
} MASTER_UPDATE_MODE_MASTER_UPDATE_MODE;

typedef enum MemArbMode {
    MEM_ARB_MODE_FIXED                                 = 0x00000000,
    MEM_ARB_MODE_AGE                                   = 0x00000001,
    MEM_ARB_MODE_WEIGHT                                = 0x00000002,
    MEM_ARB_MODE_BOTH                                  = 0x00000003,
} MemArbMode;

typedef enum MicroTileMode {
    ADDR_SURF_DISPLAY_MICRO_TILING                     = 0x00000000,
    ADDR_SURF_THIN_MICRO_TILING                        = 0x00000001,
    ADDR_SURF_DEPTH_MICRO_TILING                       = 0x00000002,
    ADDR_SURF_ROTATED_MICRO_TILING                     = 0x00000003,
    ADDR_SURF_THICK_MICRO_TILING                       = 0x00000004,
} MicroTileMode;

typedef enum MTYPE {
    MTYPE_UC                                           = 0x00000003,
    MTYPE_NC__GFX09                                    = 0x00000000,
    MTYPE_WC__GFX09                                    = 0x00000001,
    MTYPE_CC__GFX09                                    = 0x00000002,
    MTYPE_C_RW_US__GFX10                               = 0x00000000,
    MTYPE_RESERVED_1__GFX10                            = 0x00000001,
    MTYPE_C_RO_S__GFX10                                = 0x00000002,
    MTYPE_C_RW_S__GFX10                                = 0x00000004,
    MTYPE_RESERVED_5__GFX10                            = 0x00000005,
    MTYPE_C_RO_US__GFX10                               = 0x00000006,
    MTYPE_RESERVED_7__GFX10                            = 0x00000007,
} MTYPE;

typedef enum MultiGPUTileSize {
    ADDR_CONFIG_GPU_TILE_16                            = 0x00000000,
    ADDR_CONFIG_GPU_TILE_32                            = 0x00000001,
    ADDR_CONFIG_GPU_TILE_64                            = 0x00000002,
    ADDR_CONFIG_GPU_TILE_128                           = 0x00000003,
} MultiGPUTileSize;

typedef enum MVP_CLK_SRC_SEL {
    MVP_CLK_SRC_SEL_RSRV                               = 0x00000000,
    MVP_CLK_SRC_SEL_IO_1                               = 0x00000001,
    MVP_CLK_SRC_SEL_IO_2                               = 0x00000002,
    MVP_CLK_SRC_SEL_REFCLK                             = 0x00000003,
} MVP_CLK_SRC_SEL;

typedef enum MVP_SOFT_RESET {
    MVP_SOFT_RESET_0                                   = 0x00000000,
    MVP_SOFT_RESET_1                                   = 0x00000001,
} MVP_SOFT_RESET;

typedef enum NonDispTilingOrder {
    ADDR_SURF_MICRO_TILING_DISPLAY                     = 0x00000000,
    ADDR_SURF_MICRO_TILING_NON_DISPLAY                 = 0x00000001,
} NonDispTilingOrder;

typedef enum NumBanks {
    ADDR_SURF_2_BANK                                   = 0x00000000,
    ADDR_SURF_4_BANK                                   = 0x00000001,
    ADDR_SURF_8_BANK                                   = 0x00000002,
    ADDR_SURF_16_BANK                                  = 0x00000003,
} NumBanks;

typedef enum NumBanksConfig {
    ADDR_CONFIG_1_BANK                                 = 0x00000000,
    ADDR_CONFIG_2_BANK                                 = 0x00000001,
    ADDR_CONFIG_4_BANK                                 = 0x00000002,
    ADDR_CONFIG_8_BANK                                 = 0x00000003,
    ADDR_CONFIG_16_BANK                                = 0x00000004,
} NumBanksConfig;

typedef enum NumGPUs {
    ADDR_CONFIG_1_GPU                                  = 0x00000000,
    ADDR_CONFIG_2_GPU                                  = 0x00000001,
    ADDR_CONFIG_4_GPU                                  = 0x00000002,
    ADDR_CONFIG_8_GPU                                  = 0x00000003,
} NumGPUs;

typedef enum NumLowerPipes {
    ADDR_CONFIG_1_LOWER_PIPES                          = 0x00000000,
    ADDR_CONFIG_2_LOWER_PIPES                          = 0x00000001,
} NumLowerPipes;

typedef enum NumMaxCompressedFragments {
    ADDR_CONFIG_1_MAX_COMPRESSED_FRAGMENTS             = 0x00000000,
    ADDR_CONFIG_2_MAX_COMPRESSED_FRAGMENTS             = 0x00000001,
    ADDR_CONFIG_4_MAX_COMPRESSED_FRAGMENTS             = 0x00000002,
    ADDR_CONFIG_8_MAX_COMPRESSED_FRAGMENTS             = 0x00000003,
} NumMaxCompressedFragments;

typedef enum NumPipes {
    ADDR_CONFIG_1_PIPE                                 = 0x00000000,
    ADDR_CONFIG_2_PIPE                                 = 0x00000001,
    ADDR_CONFIG_4_PIPE                                 = 0x00000002,
    ADDR_CONFIG_8_PIPE                                 = 0x00000003,
    ADDR_CONFIG_16_PIPE                                = 0x00000004,
    ADDR_CONFIG_32_PIPE                                = 0x00000005,
    ADDR_CONFIG_64_PIPE__GFX10                         = 0x00000006,
} NumPipes;

typedef enum NumRbPerShaderEngine {
    ADDR_CONFIG_1_RB_PER_SHADER_ENGINE                 = 0x00000000,
    ADDR_CONFIG_2_RB_PER_SHADER_ENGINE                 = 0x00000001,
    ADDR_CONFIG_4_RB_PER_SHADER_ENGINE                 = 0x00000002,
} NumRbPerShaderEngine;

typedef enum NumShaderEngines {
    ADDR_CONFIG_1_SHADER_ENGINE                        = 0x00000000,
    ADDR_CONFIG_2_SHADER_ENGINE                        = 0x00000001,
    ADDR_CONFIG_4_SHADER_ENGINE                        = 0x00000002,
    ADDR_CONFIG_8_SHADER_ENGINE                        = 0x00000003,
} NumShaderEngines;

typedef enum NUM_BANKS_BC_ENUM {
    ADDR_NUM_BANKS_BC_BANKS_1                          = 0x00000000,
    ADDR_NUM_BANKS_BC_BANKS_2                          = 0x00000001,
    ADDR_NUM_BANKS_BC_BANKS_4                          = 0x00000002,
    ADDR_NUM_BANKS_BC_BANKS_8                          = 0x00000003,
    ADDR_NUM_BANKS_BC_BANKS_16                         = 0x00000004,
} NUM_BANKS_BC_ENUM;

typedef enum NUM_PIPES_BC_ENUM {
    ADDR_NUM_PIPES_BC_P8                               = 0x00000000,
    ADDR_NUM_PIPES_BC_P16                              = 0x00000001,
} NUM_PIPES_BC_ENUM;

typedef enum OVERRIDE_CGTT_DCEFCLK {
    OVERRIDE_CGTT_DCEFCLK_NOOP                         = 0x00000000,
    SET_OVERRIDE_CGTT_DCEFCLK                          = 0x00000001,
} OVERRIDE_CGTT_DCEFCLK;

typedef enum OVERRIDE_CGTT_SCLK {
    OVERRIDE_CGTT_SCLK_NOOP                            = 0x00000000,
    SET_OVERRIDE_CGTT_SCLK                             = 0x00000001,
} OVERRIDE_CGTT_SCLK;

typedef enum PerfCounter_Vals {
    DB_PERF_SEL_SC_DB_tile_sends                       = 0x00000000,
    DB_PERF_SEL_SC_DB_tile_busy                        = 0x00000001,
    DB_PERF_SEL_SC_DB_tile_stalls                      = 0x00000002,
    DB_PERF_SEL_SC_DB_tile_events                      = 0x00000003,
    DB_PERF_SEL_SC_DB_tile_tiles                       = 0x00000004,
    DB_PERF_SEL_SC_DB_tile_covered                     = 0x00000005,
    DB_PERF_SEL_hiz_tc_read_starved                    = 0x00000006,
    DB_PERF_SEL_hiz_tc_write_stall                     = 0x00000007,
    DB_PERF_SEL_DB_SC_tile_sends                       = 0x0000000a,
    DB_PERF_SEL_DB_SC_tile_busy                        = 0x0000000b,
    DB_PERF_SEL_DB_SC_tile_stalls                      = 0x0000000c,
    DB_PERF_SEL_DB_SC_tile_df_stalls                   = 0x0000000d,
    DB_PERF_SEL_DB_SC_tile_tiles                       = 0x0000000e,
    DB_PERF_SEL_DB_SC_tile_culled                      = 0x0000000f,
    DB_PERF_SEL_DB_SC_tile_hier_kill                   = 0x00000010,
    DB_PERF_SEL_DB_SC_tile_fast_ops                    = 0x00000011,
    DB_PERF_SEL_DB_SC_tile_no_ops                      = 0x00000012,
    DB_PERF_SEL_DB_SC_tile_tile_rate                   = 0x00000013,
    DB_PERF_SEL_DB_SC_tile_ssaa_kill                   = 0x00000014,
    DB_PERF_SEL_DB_SC_tile_fast_z_ops                  = 0x00000015,
    DB_PERF_SEL_DB_SC_tile_fast_stencil_ops            = 0x00000016,
    DB_PERF_SEL_SC_DB_quad_sends                       = 0x00000017,
    DB_PERF_SEL_SC_DB_quad_busy                        = 0x00000018,
    DB_PERF_SEL_SC_DB_quad_squads                      = 0x00000019,
    DB_PERF_SEL_SC_DB_quad_tiles                       = 0x0000001a,
    DB_PERF_SEL_SC_DB_quad_pixels                      = 0x0000001b,
    DB_PERF_SEL_SC_DB_quad_killed_tiles                = 0x0000001c,
    DB_PERF_SEL_DB_SC_quad_sends                       = 0x0000001d,
    DB_PERF_SEL_DB_SC_quad_busy                        = 0x0000001e,
    DB_PERF_SEL_DB_SC_quad_stalls                      = 0x0000001f,
    DB_PERF_SEL_DB_SC_quad_tiles                       = 0x00000020,
    DB_PERF_SEL_DB_SC_quad_lit_quad                    = 0x00000021,
    DB_PERF_SEL_DB_CB_tile_sends                       = 0x00000022,
    DB_PERF_SEL_DB_CB_tile_busy                        = 0x00000023,
    DB_PERF_SEL_DB_CB_tile_stalls                      = 0x00000024,
    DB_PERF_SEL_SX_DB_quad_sends                       = 0x00000025,
    DB_PERF_SEL_SX_DB_quad_busy                        = 0x00000026,
    DB_PERF_SEL_SX_DB_quad_stalls                      = 0x00000027,
    DB_PERF_SEL_SX_DB_quad_quads                       = 0x00000028,
    DB_PERF_SEL_SX_DB_quad_pixels                      = 0x00000029,
    DB_PERF_SEL_SX_DB_quad_exports                     = 0x0000002a,
    DB_PERF_SEL_SH_quads_outstanding_sum               = 0x0000002b,
    DB_PERF_SEL_DB_CB_lquad_sends                      = 0x0000002c,
    DB_PERF_SEL_DB_CB_lquad_busy                       = 0x0000002d,
    DB_PERF_SEL_DB_CB_lquad_stalls                     = 0x0000002e,
    DB_PERF_SEL_DB_CB_lquad_quads                      = 0x0000002f,
    DB_PERF_SEL_tile_rd_sends                          = 0x00000030,
    DB_PERF_SEL_mi_tile_rd_outstanding_sum             = 0x00000031,
    DB_PERF_SEL_quad_rd_sends                          = 0x00000032,
    DB_PERF_SEL_quad_rd_busy                           = 0x00000033,
    DB_PERF_SEL_quad_rd_mi_stall                       = 0x00000034,
    DB_PERF_SEL_quad_rd_rw_collision                   = 0x00000035,
    DB_PERF_SEL_quad_rd_tag_stall                      = 0x00000036,
    DB_PERF_SEL_quad_rd_32byte_reqs                    = 0x00000037,
    DB_PERF_SEL_quad_rd_panic                          = 0x00000038,
    DB_PERF_SEL_mi_quad_rd_outstanding_sum             = 0x00000039,
    DB_PERF_SEL_quad_rdret_sends                       = 0x0000003a,
    DB_PERF_SEL_quad_rdret_busy                        = 0x0000003b,
    DB_PERF_SEL_tile_wr_sends                          = 0x0000003c,
    DB_PERF_SEL_tile_wr_acks                           = 0x0000003d,
    DB_PERF_SEL_mi_tile_wr_outstanding_sum             = 0x0000003e,
    DB_PERF_SEL_quad_wr_sends                          = 0x0000003f,
    DB_PERF_SEL_quad_wr_busy                           = 0x00000040,
    DB_PERF_SEL_quad_wr_mi_stall                       = 0x00000041,
    DB_PERF_SEL_quad_wr_coherency_stall                = 0x00000042,
    DB_PERF_SEL_quad_wr_acks                           = 0x00000043,
    DB_PERF_SEL_mi_quad_wr_outstanding_sum             = 0x00000044,
    DB_PERF_SEL_Tile_Cache_misses                      = 0x00000045,
    DB_PERF_SEL_Tile_Cache_hits                        = 0x00000046,
    DB_PERF_SEL_Tile_Cache_flushes                     = 0x00000047,
    DB_PERF_SEL_Tile_Cache_surface_stall               = 0x00000048,
    DB_PERF_SEL_Tile_Cache_starves                     = 0x00000049,
    DB_PERF_SEL_Tile_Cache_mem_return_starve           = 0x0000004a,
    DB_PERF_SEL_tcp_dispatcher_reads                   = 0x0000004b,
    DB_PERF_SEL_tcp_prefetcher_reads                   = 0x0000004c,
    DB_PERF_SEL_tcp_preloader_reads                    = 0x0000004d,
    DB_PERF_SEL_tcp_dispatcher_flushes                 = 0x0000004e,
    DB_PERF_SEL_tcp_prefetcher_flushes                 = 0x0000004f,
    DB_PERF_SEL_tcp_preloader_flushes                  = 0x00000050,
    DB_PERF_SEL_Depth_Tile_Cache_sends                 = 0x00000051,
    DB_PERF_SEL_Depth_Tile_Cache_busy                  = 0x00000052,
    DB_PERF_SEL_Depth_Tile_Cache_starves               = 0x00000053,
    DB_PERF_SEL_Depth_Tile_Cache_dtile_locked          = 0x00000054,
    DB_PERF_SEL_Depth_Tile_Cache_alloc_stall           = 0x00000055,
    DB_PERF_SEL_Depth_Tile_Cache_misses                = 0x00000056,
    DB_PERF_SEL_Depth_Tile_Cache_hits                  = 0x00000057,
    DB_PERF_SEL_Depth_Tile_Cache_flushes               = 0x00000058,
    DB_PERF_SEL_Depth_Tile_Cache_noop_tile             = 0x00000059,
    DB_PERF_SEL_Depth_Tile_Cache_detailed_noop         = 0x0000005a,
    DB_PERF_SEL_Depth_Tile_Cache_event                 = 0x0000005b,
    DB_PERF_SEL_Depth_Tile_Cache_tile_frees            = 0x0000005c,
    DB_PERF_SEL_Depth_Tile_Cache_data_frees            = 0x0000005d,
    DB_PERF_SEL_Depth_Tile_Cache_mem_return_starve     = 0x0000005e,
    DB_PERF_SEL_Stencil_Cache_misses                   = 0x0000005f,
    DB_PERF_SEL_Stencil_Cache_hits                     = 0x00000060,
    DB_PERF_SEL_Stencil_Cache_flushes                  = 0x00000061,
    DB_PERF_SEL_Stencil_Cache_starves                  = 0x00000062,
    DB_PERF_SEL_Stencil_Cache_frees                    = 0x00000063,
    DB_PERF_SEL_Z_Cache_separate_Z_misses              = 0x00000064,
    DB_PERF_SEL_Z_Cache_separate_Z_hits                = 0x00000065,
    DB_PERF_SEL_Z_Cache_separate_Z_flushes             = 0x00000066,
    DB_PERF_SEL_Z_Cache_separate_Z_starves             = 0x00000067,
    DB_PERF_SEL_Z_Cache_pmask_misses                   = 0x00000068,
    DB_PERF_SEL_Z_Cache_pmask_hits                     = 0x00000069,
    DB_PERF_SEL_Z_Cache_pmask_flushes                  = 0x0000006a,
    DB_PERF_SEL_Z_Cache_pmask_starves                  = 0x0000006b,
    DB_PERF_SEL_Z_Cache_frees                          = 0x0000006c,
    DB_PERF_SEL_Plane_Cache_misses                     = 0x0000006d,
    DB_PERF_SEL_Plane_Cache_hits                       = 0x0000006e,
    DB_PERF_SEL_Plane_Cache_flushes                    = 0x0000006f,
    DB_PERF_SEL_Plane_Cache_starves                    = 0x00000070,
    DB_PERF_SEL_Plane_Cache_frees                      = 0x00000071,
    DB_PERF_SEL_flush_expanded_stencil                 = 0x00000072,
    DB_PERF_SEL_flush_compressed_stencil               = 0x00000073,
    DB_PERF_SEL_flush_single_stencil                   = 0x00000074,
    DB_PERF_SEL_planes_flushed                         = 0x00000075,
    DB_PERF_SEL_flush_1plane                           = 0x00000076,
    DB_PERF_SEL_flush_2plane                           = 0x00000077,
    DB_PERF_SEL_flush_3plane                           = 0x00000078,
    DB_PERF_SEL_flush_4plane                           = 0x00000079,
    DB_PERF_SEL_flush_5plane                           = 0x0000007a,
    DB_PERF_SEL_flush_6plane                           = 0x0000007b,
    DB_PERF_SEL_flush_7plane                           = 0x0000007c,
    DB_PERF_SEL_flush_8plane                           = 0x0000007d,
    DB_PERF_SEL_flush_9plane                           = 0x0000007e,
    DB_PERF_SEL_flush_10plane                          = 0x0000007f,
    DB_PERF_SEL_flush_11plane                          = 0x00000080,
    DB_PERF_SEL_flush_12plane                          = 0x00000081,
    DB_PERF_SEL_flush_13plane                          = 0x00000082,
    DB_PERF_SEL_flush_14plane                          = 0x00000083,
    DB_PERF_SEL_flush_15plane                          = 0x00000084,
    DB_PERF_SEL_flush_16plane                          = 0x00000085,
    DB_PERF_SEL_flush_expanded_z                       = 0x00000086,
    DB_PERF_SEL_earlyZ_waiting_for_postZ_done          = 0x00000087,
    DB_PERF_SEL_reZ_waiting_for_postZ_done             = 0x00000088,
    DB_PERF_SEL_dk_tile_sends                          = 0x00000089,
    DB_PERF_SEL_dk_tile_busy                           = 0x0000008a,
    DB_PERF_SEL_dk_tile_quad_starves                   = 0x0000008b,
    DB_PERF_SEL_dk_tile_stalls                         = 0x0000008c,
    DB_PERF_SEL_dk_squad_sends                         = 0x0000008d,
    DB_PERF_SEL_dk_squad_busy                          = 0x0000008e,
    DB_PERF_SEL_dk_squad_stalls                        = 0x0000008f,
    DB_PERF_SEL_Op_Pipe_Busy                           = 0x00000090,
    DB_PERF_SEL_Op_Pipe_MC_Read_stall                  = 0x00000091,
    DB_PERF_SEL_qc_busy                                = 0x00000092,
    DB_PERF_SEL_qc_xfc                                 = 0x00000093,
    DB_PERF_SEL_qc_conflicts                           = 0x00000094,
    DB_PERF_SEL_qc_full_stall                          = 0x00000095,
    DB_PERF_SEL_qc_in_preZ_tile_stalls_postZ           = 0x00000096,
    DB_PERF_SEL_qc_in_postZ_tile_stalls_preZ           = 0x00000097,
    DB_PERF_SEL_tsc_insert_summarize_stall             = 0x00000098,
    DB_PERF_SEL_tl_busy                                = 0x00000099,
    DB_PERF_SEL_tl_dtc_read_starved                    = 0x0000009a,
    DB_PERF_SEL_tl_z_fetch_stall                       = 0x0000009b,
    DB_PERF_SEL_tl_stencil_stall                       = 0x0000009c,
    DB_PERF_SEL_tl_z_decompress_stall                  = 0x0000009d,
    DB_PERF_SEL_tl_stencil_locked_stall                = 0x0000009e,
    DB_PERF_SEL_tl_events                              = 0x0000009f,
    DB_PERF_SEL_tl_summarize_squads                    = 0x000000a0,
    DB_PERF_SEL_tl_flush_expand_squads                 = 0x000000a1,
    DB_PERF_SEL_tl_expand_squads                       = 0x000000a2,
    DB_PERF_SEL_tl_preZ_squads                         = 0x000000a3,
    DB_PERF_SEL_tl_postZ_squads                        = 0x000000a4,
    DB_PERF_SEL_tl_preZ_noop_squads                    = 0x000000a5,
    DB_PERF_SEL_tl_postZ_noop_squads                   = 0x000000a6,
    DB_PERF_SEL_tl_tile_ops                            = 0x000000a7,
    DB_PERF_SEL_tl_in_xfc                              = 0x000000a8,
    DB_PERF_SEL_tl_in_single_stencil_expand_stall      = 0x000000a9,
    DB_PERF_SEL_tl_in_fast_z_stall                     = 0x000000aa,
    DB_PERF_SEL_tl_out_xfc                             = 0x000000ab,
    DB_PERF_SEL_tl_out_squads                          = 0x000000ac,
    DB_PERF_SEL_zf_plane_multicycle                    = 0x000000ad,
    DB_PERF_SEL_PostZ_Samples_passing_Z                = 0x000000ae,
    DB_PERF_SEL_PostZ_Samples_failing_Z                = 0x000000af,
    DB_PERF_SEL_PostZ_Samples_failing_S                = 0x000000b0,
    DB_PERF_SEL_PreZ_Samples_passing_Z                 = 0x000000b1,
    DB_PERF_SEL_PreZ_Samples_failing_Z                 = 0x000000b2,
    DB_PERF_SEL_PreZ_Samples_failing_S                 = 0x000000b3,
    DB_PERF_SEL_ts_tc_update_stall                     = 0x000000b4,
    DB_PERF_SEL_sc_kick_start                          = 0x000000b5,
    DB_PERF_SEL_sc_kick_end                            = 0x000000b6,
    DB_PERF_SEL_clock_reg_active                       = 0x000000b7,
    DB_PERF_SEL_clock_main_active                      = 0x000000b8,
    DB_PERF_SEL_clock_mem_export_active                = 0x000000b9,
    DB_PERF_SEL_esr_ps_out_busy                        = 0x000000ba,
    DB_PERF_SEL_esr_ps_lqf_busy                        = 0x000000bb,
    DB_PERF_SEL_esr_ps_lqf_stall                       = 0x000000bc,
    DB_PERF_SEL_etr_out_send                           = 0x000000bd,
    DB_PERF_SEL_etr_out_busy                           = 0x000000be,
    DB_PERF_SEL_etr_out_ltile_probe_fifo_full_stall    = 0x000000bf,
    DB_PERF_SEL_etr_out_cb_tile_stall                  = 0x000000c0,
    DB_PERF_SEL_etr_out_esr_stall                      = 0x000000c1,
    DB_PERF_SEL_esr_ps_sqq_busy                        = 0x000000c2,
    DB_PERF_SEL_esr_ps_sqq_stall                       = 0x000000c3,
    DB_PERF_SEL_esr_eot_fwd_busy                       = 0x000000c4,
    DB_PERF_SEL_esr_eot_fwd_holding_squad              = 0x000000c5,
    DB_PERF_SEL_esr_eot_fwd_forward                    = 0x000000c6,
    DB_PERF_SEL_esr_sqq_zi_busy                        = 0x000000c7,
    DB_PERF_SEL_esr_sqq_zi_stall                       = 0x000000c8,
    DB_PERF_SEL_postzl_sq_pt_busy                      = 0x000000c9,
    DB_PERF_SEL_postzl_sq_pt_stall                     = 0x000000ca,
    DB_PERF_SEL_postzl_se_busy                         = 0x000000cb,
    DB_PERF_SEL_postzl_se_stall                        = 0x000000cc,
    DB_PERF_SEL_postzl_partial_launch                  = 0x000000cd,
    DB_PERF_SEL_postzl_full_launch                     = 0x000000ce,
    DB_PERF_SEL_postzl_partial_waiting                 = 0x000000cf,
    DB_PERF_SEL_postzl_tile_mem_stall                  = 0x000000d0,
    DB_PERF_SEL_postzl_tile_init_stall                 = 0x000000d1,
    DB_PERF_SEL_prezl_tile_init_stall                  = 0x000000d3,
    DB_PERF_SEL_dtt_sm_clash_stall                     = 0x000000d4,
    DB_PERF_SEL_dtt_sm_slot_stall                      = 0x000000d5,
    DB_PERF_SEL_dtt_sm_miss_stall                      = 0x000000d6,
    DB_PERF_SEL_mi_rdreq_busy                          = 0x000000d7,
    DB_PERF_SEL_mi_rdreq_stall                         = 0x000000d8,
    DB_PERF_SEL_mi_wrreq_busy                          = 0x000000d9,
    DB_PERF_SEL_mi_wrreq_stall                         = 0x000000da,
    DB_PERF_SEL_recomp_tile_to_1zplane_no_fastop       = 0x000000db,
    DB_PERF_SEL_dkg_tile_rate_tile                     = 0x000000dc,
    DB_PERF_SEL_prezl_src_in_sends                     = 0x000000dd,
    DB_PERF_SEL_prezl_src_in_stall                     = 0x000000de,
    DB_PERF_SEL_prezl_src_in_squads                    = 0x000000df,
    DB_PERF_SEL_prezl_src_in_squads_unrolled           = 0x000000e0,
    DB_PERF_SEL_prezl_src_in_tile_rate                 = 0x000000e1,
    DB_PERF_SEL_prezl_src_in_tile_rate_unrolled        = 0x000000e2,
    DB_PERF_SEL_prezl_src_out_stall                    = 0x000000e3,
    DB_PERF_SEL_postzl_src_in_sends                    = 0x000000e4,
    DB_PERF_SEL_postzl_src_in_stall                    = 0x000000e5,
    DB_PERF_SEL_postzl_src_in_squads                   = 0x000000e6,
    DB_PERF_SEL_postzl_src_in_squads_unrolled          = 0x000000e7,
    DB_PERF_SEL_postzl_src_in_tile_rate                = 0x000000e8,
    DB_PERF_SEL_postzl_src_in_tile_rate_unrolled       = 0x000000e9,
    DB_PERF_SEL_postzl_src_out_stall                   = 0x000000ea,
    DB_PERF_SEL_esr_ps_src_in_sends                    = 0x000000eb,
    DB_PERF_SEL_esr_ps_src_in_stall                    = 0x000000ec,
    DB_PERF_SEL_esr_ps_src_in_squads                   = 0x000000ed,
    DB_PERF_SEL_esr_ps_src_in_squads_unrolled          = 0x000000ee,
    DB_PERF_SEL_esr_ps_src_in_tile_rate                = 0x000000ef,
    DB_PERF_SEL_esr_ps_src_in_tile_rate_unrolled       = 0x000000f0,
    DB_PERF_SEL_esr_ps_src_in_tile_rate_unrolled_to_pixel_rate = 0x000000f1,
    DB_PERF_SEL_esr_ps_src_out_stall                   = 0x000000f2,
    DB_PERF_SEL_PreZ_Samples_failing_DB                = 0x000000f4,
    DB_PERF_SEL_PostZ_Samples_failing_DB               = 0x000000f5,
    DB_PERF_SEL_flush_compressed                       = 0x000000f6,
    DB_PERF_SEL_flush_plane_le4                        = 0x000000f7,
    DB_PERF_SEL_tiles_z_fully_summarized               = 0x000000f8,
    DB_PERF_SEL_tiles_stencil_fully_summarized         = 0x000000f9,
    DB_PERF_SEL_tiles_z_clear_on_expclear              = 0x000000fa,
    DB_PERF_SEL_tiles_s_clear_on_expclear              = 0x000000fb,
    DB_PERF_SEL_tiles_decomp_on_expclear               = 0x000000fc,
    DB_PERF_SEL_tiles_compressed_to_decompressed       = 0x000000fd,
    DB_PERF_SEL_Op_Pipe_Prez_Busy                      = 0x000000fe,
    DB_PERF_SEL_Op_Pipe_Postz_Busy                     = 0x000000ff,
    DB_PERF_SEL_di_dt_stall                            = 0x00000100,
    DB_PERF_SEL_DB_CB_lquad_export_quads               = 0x00000106,
    DB_PERF_SEL_DB_CB_lquad_double_format              = 0x00000107,
    DB_PERF_SEL_DB_CB_lquad_fast_format                = 0x00000108,
    DB_PERF_SEL_DB_CB_lquad_slow_format                = 0x00000109,
    DB_PERF_SEL_CB_DB_rdreq_sends                      = 0x0000010a,
    DB_PERF_SEL_CB_DB_rdreq_prt_sends                  = 0x0000010b,
    DB_PERF_SEL_CB_DB_wrreq_sends                      = 0x0000010c,
    DB_PERF_SEL_CB_DB_wrreq_prt_sends                  = 0x0000010d,
    DB_PERF_SEL_DB_CB_rdret_ack                        = 0x0000010e,
    DB_PERF_SEL_DB_CB_rdret_nack                       = 0x0000010f,
    DB_PERF_SEL_DB_CB_wrret_ack                        = 0x00000110,
    DB_PERF_SEL_DB_CB_wrret_nack                       = 0x00000111,
    Spare_274                                          = 0x00000112,
    Spare_285                                          = 0x0000011d,
    Spare_286                                          = 0x0000011e,
    DB_PERF_SEL_DFSM_prez_killed_squad                 = 0x0000011f,
    DB_PERF_SEL_DFSM_squads_in                         = 0x00000120,
    DB_PERF_SEL_DFSM_full_cleared_squads_out           = 0x00000121,
    DB_PERF_SEL_DFSM_quads_in                          = 0x00000122,
    DB_PERF_SEL_DFSM_fully_cleared_quads_out           = 0x00000123,
    DB_PERF_SEL_DFSM_lit_pixels_in                     = 0x00000124,
    DB_PERF_SEL_DFSM_fully_cleared_pixels_out          = 0x00000125,
    DB_PERF_SEL_DFSM_lit_samples_in                    = 0x00000126,
    DB_PERF_SEL_DFSM_lit_samples_out                   = 0x00000127,
    DB_PERF_SEL_DFSM_cant_accept_squads_but_not_stalled_by_downstream = 0x00000129,
    DB_PERF_SEL_DFSM_stalled_by_downstream             = 0x0000012a,
    DB_PERF_SEL_DFSM_evicted_squads_above_watermark    = 0x0000012b,
    DB_PERF_SEL_DFSM_collisions_due_to_POPS_overflow   = 0x0000012c,
    DB_PERF_SEL_DFSM_collisions_detected_within_POPS_FIFO = 0x0000012d,
    DB_PERF_SEL_DFSM_evicted_squads_due_to_prim_watermark = 0x0000012e,
    DB_PERF_SEL_MI_tile_req_wrack_counter_stall        = 0x0000012f,
    DB_PERF_SEL_MI_quad_req_wrack_counter_stall        = 0x00000130,
    DB_PERF_SEL_MI_zpc_req_wrack_counter_stall         = 0x00000131,
    DB_PERF_SEL_MI_psd_req_wrack_counter_stall         = 0x00000132,
    DB_PERF_SEL_unmapped_z_tile_culled                 = 0x00000133,
    DB_PERF_SEL_DB_CB_tile_is_event_FLUSH_AND_INV_DB_DATA_TS = 0x00000134,
    DB_PERF_SEL_DB_CB_tile_is_event_FLUSH_AND_INV_CB_PIXEL_DATA = 0x00000135,
    DB_PERF_SEL_DB_CB_tile_is_event_BOTTOM_OF_PIPE_TS  = 0x00000136,
    DB_PERF_SEL_DB_CB_tile_waiting_for_perfcounter_stop_event = 0x00000137,
    DB_PERF_SEL_DB_CB_lquad_fmt_32bpp_8pix             = 0x00000138,
    DB_PERF_SEL_DB_CB_lquad_fmt_16_16_unsigned_8pix    = 0x00000139,
    DB_PERF_SEL_DB_CB_lquad_fmt_16_16_signed_8pix      = 0x0000013a,
    DB_PERF_SEL_DB_CB_lquad_fmt_16_16_float_8pix       = 0x0000013b,
    DB_PERF_SEL_DB_CB_lquad_num_pixels_need_blending   = 0x0000013c,
    DB_PERF_SEL_DB_CB_context_dones                    = 0x0000013d,
    DB_PERF_SEL_DB_CB_eop_dones                        = 0x0000013e,
    DB_PERF_SEL_SX_DB_quad_all_pixels_killed           = 0x0000013f,
    DB_PERF_SEL_SX_DB_quad_all_pixels_enabled          = 0x00000140,
    DB_PERF_SEL_SX_DB_quad_need_blending_and_dst_read  = 0x00000141,
    DB_PERF_SEL_SC_DB_tile_backface                    = 0x00000142,
    DB_PERF_SEL_SC_DB_quad_quads                       = 0x00000143,
    DB_PERF_SEL_DB_SC_quad_quads_with_1_pixel          = 0x00000144,
    DB_PERF_SEL_DB_SC_quad_quads_with_2_pixels         = 0x00000145,
    DB_PERF_SEL_DB_SC_quad_quads_with_3_pixels         = 0x00000146,
    DB_PERF_SEL_DB_SC_quad_quads_with_4_pixels         = 0x00000147,
    DB_PERF_SEL_hiz_qtiles_culled__GFX09               = 0x00000008,
    DB_PERF_SEL_his_qtiles_culled__GFX09               = 0x00000009,
    DB_PEFF_SEL_prezl_tile_mem_stall__GFX09            = 0x000000d2,
    DB_PERF_SEL_depth_bounds_qtiles_culled__GFX09      = 0x000000f3,
    DB_PERF_SEL_DB_SC_quad_double_quad__GFX09          = 0x00000101,
    DB_PERF_SEL_SX_DB_quad_export_quads__GFX09         = 0x00000102,
    DB_PERF_SEL_SX_DB_quad_double_format__GFX09        = 0x00000103,
    DB_PERF_SEL_SX_DB_quad_fast_format__GFX09          = 0x00000104,
    DB_PERF_SEL_SX_DB_quad_slow_format__GFX09          = 0x00000105,
    Spare_275__GFX09                                   = 0x00000113,
    Spare_276__GFX09                                   = 0x00000114,
    Spare_277__GFX09                                   = 0x00000115,
    Spare_278__GFX09                                   = 0x00000116,
    Spare_279__GFX09                                   = 0x00000117,
    Spare_280__GFX09                                   = 0x00000118,
    Spare_281__GFX09                                   = 0x00000119,
    Spare_282__GFX09                                   = 0x0000011a,
    Spare_283__GFX09                                   = 0x0000011b,
    Spare_284__GFX09                                   = 0x0000011c,
    DB_PERF_SEL_DFSM_cycles_above_watermark__GFX09     = 0x00000128,
    DB_PERF_SEL_hiz_tile_culled__GFX10                 = 0x00000008,
    DB_PERF_SEL_his_tile_culled__GFX10                 = 0x00000009,
    DB_PERF_SEL_prezl_tile_mem_stall__GFX10            = 0x000000d2,
    DB_PERF_SEL_depth_bounds_tile_culled__GFX10        = 0x000000f3,
    DB_PERF_SEL_DB_SC_s_tile_rate__GFX10               = 0x00000102,
    DB_PERF_SEL_DB_SC_c_tile_rate__GFX10               = 0x00000103,
    DB_PERF_SEL_DB_SC_z_tile_rate__GFX10               = 0x00000104,
    Spare_261__GFX10                                   = 0x00000105,
    DB_PERF_SEL_DFSM_Stall_opmode_change__GFX10        = 0x00000113,
    DB_PERF_SEL_DFSM_Stall_cam_fifo__GFX10             = 0x00000114,
    DB_PERF_SEL_DFSM_Stall_bypass_fifo__GFX10          = 0x00000115,
    DB_PERF_SEL_DFSM_Stall_retained_tile_fifo__GFX10   = 0x00000116,
    DB_PERF_SEL_DFSM_Stall_control_fifo__GFX10         = 0x00000117,
    DB_PERF_SEL_DFSM_Stall_overflow_counter__GFX10     = 0x00000118,
    DB_PERF_SEL_DFSM_Stall_pops_stall_overflow__GFX10  = 0x00000119,
    DB_PERF_SEL_DFSM_Stall_pops_stall_self_flush__GFX10 = 0x0000011a,
    DB_PERF_SEL_DFSM_Stall_middle_output__GFX10        = 0x0000011b,
    DB_PERF_SEL_DFSM_Stall_stalling_general__GFX10     = 0x0000011c,
    DB_PERF_SEL_DFSM_evicted_tiles_above_watermark__GFX10 = 0x00000128,
    DB_PERF_SEL_DFSM_Flush_flushabit__GFX10            = 0x00000148,
    DB_PERF_SEL_DFSM_Flush_flushabit_camcoord_fifo__GFX10 = 0x00000149,
    DB_PERF_SEL_DFSM_Flush_flushabit_passthrough__GFX10 = 0x0000014a,
    DB_PERF_SEL_DFSM_Flush_flushabit_forceflush__GFX10 = 0x0000014b,
    DB_PERF_SEL_DFSM_Flush_flushabit_nearlyfull__GFX10 = 0x0000014c,
    DB_PERF_SEL_DFSM_Flush_flushabit_primitivesinflightwatermark__GFX10 = 0x0000014d,
    DB_PERF_SEL_DFSM_Flush_flushabit_punch_stalling__GFX10 = 0x0000014e,
    DB_PERF_SEL_DFSM_Flush_flushabit_retainedtilefifo_watermark__GFX10 = 0x0000014f,
    DB_PERF_SEL_DFSM_Flush_flushabit_tilesinflightwatermark__GFX10 = 0x00000150,
    DB_PERF_SEL_DFSM_Flush_flushall__GFX10             = 0x00000151,
    DB_PERF_SEL_DFSM_Flush_flushall_dfsmflush__GFX10   = 0x00000152,
    DB_PERF_SEL_DFSM_Flush_flushall_opmodechange__GFX10 = 0x00000153,
    DB_PERF_SEL_DFSM_Flush_flushall_sampleratechange__GFX10 = 0x00000154,
    DB_PERF_SEL_DFSM_Flush_flushall_watchdog__GFX10    = 0x00000155,
    DB_PERF_SEL_DB_SC_quad_double_quad__GFX10          = 0x00000156,
    DB_PERF_SEL_SX_DB_quad_export_quads__GFX10         = 0x00000157,
    DB_PERF_SEL_SX_DB_quad_double_format__GFX10        = 0x00000158,
    DB_PERF_SEL_SX_DB_quad_fast_format__GFX10          = 0x00000159,
    DB_PERF_SEL_SX_DB_quad_slow_format__GFX10          = 0x0000015a,
    DB_PERF_SEL_quad_rd_sends_unc__GFX10               = 0x0000015b,
    DB_PERF_SEL_quad_rd_mi_stall_unc__GFX10            = 0x0000015c,
    DB_PERF_SEL_DFSM_OutputPunch__GFX10                = 0x0000015d,
    DB_PERF_SEL_DFSM_OutputPops__GFX10                 = 0x0000015e,
    DB_PERF_SEL_DFSM_OutputFifo__GFX10                 = 0x0000015f,
    DB_PERF_SEL_DFSM_StallOpmodeChange__GFX10          = 0x00000160,
    DB_PERF_SEL_DFSM_StallCAMFifoFull__GFX10           = 0x00000161,
    DB_PERF_SEL_DFSM_StallBypassFifoFull__GFX10        = 0x00000162,
    DB_PERF_SEL_DFSM_StallRetainedTileFifoFull__GFX10  = 0x00000163,
    DB_PERF_SEL_DFSM_StallControlFifoFull__GFX10       = 0x00000164,
    DB_PERF_SEL_DFSM_StallControlCountFull__GFX10      = 0x00000165,
    DB_PERF_SEL_DFSM_StallOverflowMaximum__GFX10       = 0x00000166,
    DB_PERF_SEL_DFSM_StallPopsStallOverflow__GFX10     = 0x00000167,
    DB_PERF_SEL_DFSM_StallPopsStallSelfStall__GFX10    = 0x00000168,
    DB_PERF_SEL_DFSM_StallCamSlotFlush__GFX10          = 0x00000169,
    DB_PERF_SEL_DFSM_StallOutput__GFX10                = 0x0000016a,
    DB_PERF_SEL_DFSM_WatchdogTrigger__GFX10            = 0x0000016b,
    DB_PERF_SEL_DFSM_StallOnPOPSStall__GFX10           = 0x0000016c,
    DB_PERF_SEL_SC_DB_tile_tiles_pipe0__GFX10          = 0x0000016d,
    DB_PERF_SEL_SC_DB_tile_tiles_pipe1__GFX10          = 0x0000016e,
    DB_PERF_SEL_SC_DB_quad_quads_pipe0__GFX10          = 0x0000016f,
    DB_PERF_SEL_SC_DB_quad_quads_pipe1__GFX10          = 0x00000170,
    DB_PERF_SEL_DB_SC_quad_lit_quad_pre_invoke__GFX101 = 0x00000101,
    DB_PERF_SEL_FG_LOB_FWDR_TIMEOUT_hits__GFX101PLUS   = 0x00000171,
} PerfCounter_Vals;

constexpr unsigned int MaxPerfcounterValsGfx09         = DB_PERF_SEL_DB_SC_quad_quads_with_4_pixels;
constexpr unsigned int MaxPerfcounterValsNv10          = DB_PERF_SEL_FG_LOB_FWDR_TIMEOUT_hits__GFX101PLUS;

typedef enum PERFMON_COUNTER_MODE {
    PERFMON_COUNTER_MODE_ACCUM                         = 0x00000000,
    PERFMON_COUNTER_MODE_ACTIVE_CYCLES                 = 0x00000001,
    PERFMON_COUNTER_MODE_MAX                           = 0x00000002,
    PERFMON_COUNTER_MODE_DIRTY                         = 0x00000003,
    PERFMON_COUNTER_MODE_SAMPLE                        = 0x00000004,
    PERFMON_COUNTER_MODE_CYCLES_SINCE_FIRST_EVENT      = 0x00000005,
    PERFMON_COUNTER_MODE_CYCLES_SINCE_LAST_EVENT       = 0x00000006,
    PERFMON_COUNTER_MODE_CYCLES_GE_HI                  = 0x00000007,
    PERFMON_COUNTER_MODE_CYCLES_EQ_HI                  = 0x00000008,
    PERFMON_COUNTER_MODE_INACTIVE_CYCLES               = 0x00000009,
    PERFMON_COUNTER_MODE_RESERVED                      = 0x0000000f,
} PERFMON_COUNTER_MODE;

constexpr unsigned int MaxPerfmonCounterMode           = PERFMON_COUNTER_MODE_RESERVED;

typedef enum PERFMON_SPM_MODE {
    PERFMON_SPM_MODE_OFF                               = 0x00000000,
    PERFMON_SPM_MODE_16BIT_CLAMP                       = 0x00000001,
    PERFMON_SPM_MODE_16BIT_NO_CLAMP                    = 0x00000002,
    PERFMON_SPM_MODE_32BIT_CLAMP                       = 0x00000003,
    PERFMON_SPM_MODE_32BIT_NO_CLAMP                    = 0x00000004,
    PERFMON_SPM_MODE_RESERVED_5                        = 0x00000005,
    PERFMON_SPM_MODE_RESERVED_6                        = 0x00000006,
    PERFMON_SPM_MODE_RESERVED_7                        = 0x00000007,
    PERFMON_SPM_MODE_TEST_MODE_0                       = 0x00000008,
    PERFMON_SPM_MODE_TEST_MODE_1                       = 0x00000009,
    PERFMON_SPM_MODE_TEST_MODE_2                       = 0x0000000a,
} PERFMON_SPM_MODE;

constexpr unsigned int MaxPerfmonSpmMode               = PERFMON_SPM_MODE_TEST_MODE_2;

typedef enum PH_PERFCNT_SEL {
    PH_PERF_SEL_SC0_SRPS_WINDOW_VALID__GFX101PLUS      = 0x00000000,
    PH_PERF_SEL_SC0_ARB_XFC_ALL_EVENT_OR_PRIM_CYCLES__GFX101PLUS = 0x00000001,
    PH_PERF_SEL_SC0_ARB_XFC_ONLY_PRIM_CYCLES__GFX101PLUS = 0x00000002,
    PH_PERF_SEL_SC0_ARB_XFC_ONLY_ONE_INC_PER_PRIM__GFX101PLUS = 0x00000003,
    PH_PERF_SEL_SC0_ARB_STALLED_FROM_BELOW__GFX101PLUS = 0x00000004,
    PH_PERF_SEL_SC0_ARB_STARVED_FROM_ABOVE__GFX101PLUS = 0x00000005,
    PH_PERF_SEL_SC0_ARB_STARVED_FROM_ABOVE_WITH_UNSELECTED_FIFO_NOT_EMPTY__GFX101PLUS = 0x00000006,
    PH_PERF_SEL_SC0_ARB_STARVED_FROM_ABOVE_WITH_UNSELECTED_FIFO_FULL__GFX101PLUS = 0x00000007,
    PH_PERF_SEL_SC0_ARB_BUSY__GFX101PLUS               = 0x00000008,
    PH_PERF_SEL_SC0_ARB_PA_BUSY_SOP__GFX101PLUS        = 0x00000009,
    PH_PERF_SEL_SC0_ARB_EOP_POP_SYNC_POP__GFX101PLUS   = 0x0000000a,
    PH_PERF_SEL_SC0_ARB_EVENT_SYNC_POP__GFX101PLUS     = 0x0000000b,
    PH_PERF_SEL_SC0_PS_ENG_MULTICYCLE_BUBBLE__GFX101PLUS = 0x0000000c,
    PH_PERF_SEL_SC0_EOP_SYNC_WINDOW__GFX101PLUS        = 0x0000000d,
    PH_PERF_SEL_SC0_BUSY_PROCESSING_MULTICYCLE_PRIM__GFX101PLUS = 0x0000000e,
    PH_PERF_SEL_SC0_BUSY_CNT_NOT_ZERO__GFX101PLUS      = 0x0000000f,
    PH_PERF_SEL_SC0_SEND__GFX101PLUS                   = 0x00000010,
    PH_PERF_SEL_SC0_CREDIT_AT_ZERO_WITH_PENDING_SEND__GFX101PLUS = 0x00000011,
    PH_PERF_SEL_SC0_CREDIT_AT_MAX__GFX101PLUS          = 0x00000012,
    PH_PERF_SEL_SC0_CREDIT_AT_MAX_NO_PENDING_SEND__GFX101PLUS = 0x00000013,
    PH_PERF_SEL_SC0_GFX_PIPE_EVENT_PROVOKED_TRANSITION__GFX101PLUS = 0x00000014,
    PH_PERF_SEL_SC0_GFX_PIPE_PRIM_PROVOKED_TRANSITION__GFX101PLUS = 0x00000015,
    PH_PERF_SEL_SC0_GFX_PIPE0_TO_1_TRANSITION__GFX101PLUS = 0x00000016,
    PH_PERF_SEL_SC0_GFX_PIPE1_TO_0_TRANSITION__GFX101PLUS = 0x00000017,
    PH_PERF_SEL_SC0_PA0_DATA_FIFO_RD__GFX101PLUS       = 0x00000018,
    PH_PERF_SEL_SC0_PA0_DATA_FIFO_WE__GFX101PLUS       = 0x00000019,
    PH_PERF_SEL_SC0_PA0_FIFO_EMPTY__GFX101PLUS         = 0x0000001a,
    PH_PERF_SEL_SC0_PA0_FIFO_FULL__GFX101PLUS          = 0x0000001b,
    PH_PERF_SEL_SC0_PA0_NULL_WE__GFX101PLUS            = 0x0000001c,
    PH_PERF_SEL_SC0_PA0_EVENT_WE__GFX101PLUS           = 0x0000001d,
    PH_PERF_SEL_SC0_PA0_FPOV_WE__GFX101PLUS            = 0x0000001e,
    PH_PERF_SEL_SC0_PA0_LPOV_WE__GFX101PLUS            = 0x0000001f,
    PH_PERF_SEL_SC0_PA0_EOP_WE__GFX101PLUS             = 0x00000020,
    PH_PERF_SEL_SC0_PA0_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000021,
    PH_PERF_SEL_SC0_PA0_EOPG_WE__GFX101PLUS            = 0x00000022,
    PH_PERF_SEL_SC0_PA0_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000023,
    PH_PERF_SEL_SC0_PA1_DATA_FIFO_RD__GFX101PLUS       = 0x00000024,
    PH_PERF_SEL_SC0_PA1_DATA_FIFO_WE__GFX101PLUS       = 0x00000025,
    PH_PERF_SEL_SC0_PA1_FIFO_EMPTY__GFX101PLUS         = 0x00000026,
    PH_PERF_SEL_SC0_PA1_FIFO_FULL__GFX101PLUS          = 0x00000027,
    PH_PERF_SEL_SC0_PA1_NULL_WE__GFX101PLUS            = 0x00000028,
    PH_PERF_SEL_SC0_PA1_EVENT_WE__GFX101PLUS           = 0x00000029,
    PH_PERF_SEL_SC0_PA1_FPOV_WE__GFX101PLUS            = 0x0000002a,
    PH_PERF_SEL_SC0_PA1_LPOV_WE__GFX101PLUS            = 0x0000002b,
    PH_PERF_SEL_SC0_PA1_EOP_WE__GFX101PLUS             = 0x0000002c,
    PH_PERF_SEL_SC0_PA1_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x0000002d,
    PH_PERF_SEL_SC0_PA1_EOPG_WE__GFX101PLUS            = 0x0000002e,
    PH_PERF_SEL_SC0_PA1_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000002f,
    PH_PERF_SEL_SC0_PA2_DATA_FIFO_RD__GFX101PLUS       = 0x00000030,
    PH_PERF_SEL_SC0_PA2_DATA_FIFO_WE__GFX101PLUS       = 0x00000031,
    PH_PERF_SEL_SC0_PA2_FIFO_EMPTY__GFX101PLUS         = 0x00000032,
    PH_PERF_SEL_SC0_PA2_FIFO_FULL__GFX101PLUS          = 0x00000033,
    PH_PERF_SEL_SC0_PA2_NULL_WE__GFX101PLUS            = 0x00000034,
    PH_PERF_SEL_SC0_PA2_EVENT_WE__GFX101PLUS           = 0x00000035,
    PH_PERF_SEL_SC0_PA2_FPOV_WE__GFX101PLUS            = 0x00000036,
    PH_PERF_SEL_SC0_PA2_LPOV_WE__GFX101PLUS            = 0x00000037,
    PH_PERF_SEL_SC0_PA2_EOP_WE__GFX101PLUS             = 0x00000038,
    PH_PERF_SEL_SC0_PA2_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000039,
    PH_PERF_SEL_SC0_PA2_EOPG_WE__GFX101PLUS            = 0x0000003a,
    PH_PERF_SEL_SC0_PA2_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000003b,
    PH_PERF_SEL_SC0_PA3_DATA_FIFO_RD__GFX101PLUS       = 0x0000003c,
    PH_PERF_SEL_SC0_PA3_DATA_FIFO_WE__GFX101PLUS       = 0x0000003d,
    PH_PERF_SEL_SC0_PA3_FIFO_EMPTY__GFX101PLUS         = 0x0000003e,
    PH_PERF_SEL_SC0_PA3_FIFO_FULL__GFX101PLUS          = 0x0000003f,
    PH_PERF_SEL_SC0_PA3_NULL_WE__GFX101PLUS            = 0x00000040,
    PH_PERF_SEL_SC0_PA3_EVENT_WE__GFX101PLUS           = 0x00000041,
    PH_PERF_SEL_SC0_PA3_FPOV_WE__GFX101PLUS            = 0x00000042,
    PH_PERF_SEL_SC0_PA3_LPOV_WE__GFX101PLUS            = 0x00000043,
    PH_PERF_SEL_SC0_PA3_EOP_WE__GFX101PLUS             = 0x00000044,
    PH_PERF_SEL_SC0_PA3_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000045,
    PH_PERF_SEL_SC0_PA3_EOPG_WE__GFX101PLUS            = 0x00000046,
    PH_PERF_SEL_SC0_PA3_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000047,
    PH_PERF_SEL_SC0_PA4_DATA_FIFO_RD__GFX101PLUS       = 0x00000048,
    PH_PERF_SEL_SC0_PA4_DATA_FIFO_WE__GFX101PLUS       = 0x00000049,
    PH_PERF_SEL_SC0_PA4_FIFO_EMPTY__GFX101PLUS         = 0x0000004a,
    PH_PERF_SEL_SC0_PA4_FIFO_FULL__GFX101PLUS          = 0x0000004b,
    PH_PERF_SEL_SC0_PA4_NULL_WE__GFX101PLUS            = 0x0000004c,
    PH_PERF_SEL_SC0_PA4_EVENT_WE__GFX101PLUS           = 0x0000004d,
    PH_PERF_SEL_SC0_PA4_FPOV_WE__GFX101PLUS            = 0x0000004e,
    PH_PERF_SEL_SC0_PA4_LPOV_WE__GFX101PLUS            = 0x0000004f,
    PH_PERF_SEL_SC0_PA4_EOP_WE__GFX101PLUS             = 0x00000050,
    PH_PERF_SEL_SC0_PA4_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000051,
    PH_PERF_SEL_SC0_PA4_EOPG_WE__GFX101PLUS            = 0x00000052,
    PH_PERF_SEL_SC0_PA4_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000053,
    PH_PERF_SEL_SC0_PA5_DATA_FIFO_RD__GFX101PLUS       = 0x00000054,
    PH_PERF_SEL_SC0_PA5_DATA_FIFO_WE__GFX101PLUS       = 0x00000055,
    PH_PERF_SEL_SC0_PA5_FIFO_EMPTY__GFX101PLUS         = 0x00000056,
    PH_PERF_SEL_SC0_PA5_FIFO_FULL__GFX101PLUS          = 0x00000057,
    PH_PERF_SEL_SC0_PA5_NULL_WE__GFX101PLUS            = 0x00000058,
    PH_PERF_SEL_SC0_PA5_EVENT_WE__GFX101PLUS           = 0x00000059,
    PH_PERF_SEL_SC0_PA5_FPOV_WE__GFX101PLUS            = 0x0000005a,
    PH_PERF_SEL_SC0_PA5_LPOV_WE__GFX101PLUS            = 0x0000005b,
    PH_PERF_SEL_SC0_PA5_EOP_WE__GFX101PLUS             = 0x0000005c,
    PH_PERF_SEL_SC0_PA5_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x0000005d,
    PH_PERF_SEL_SC0_PA5_EOPG_WE__GFX101PLUS            = 0x0000005e,
    PH_PERF_SEL_SC0_PA5_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000005f,
    PH_PERF_SEL_SC0_PA6_DATA_FIFO_RD__GFX101PLUS       = 0x00000060,
    PH_PERF_SEL_SC0_PA6_DATA_FIFO_WE__GFX101PLUS       = 0x00000061,
    PH_PERF_SEL_SC0_PA6_FIFO_EMPTY__GFX101PLUS         = 0x00000062,
    PH_PERF_SEL_SC0_PA6_FIFO_FULL__GFX101PLUS          = 0x00000063,
    PH_PERF_SEL_SC0_PA6_NULL_WE__GFX101PLUS            = 0x00000064,
    PH_PERF_SEL_SC0_PA6_EVENT_WE__GFX101PLUS           = 0x00000065,
    PH_PERF_SEL_SC0_PA6_FPOV_WE__GFX101PLUS            = 0x00000066,
    PH_PERF_SEL_SC0_PA6_LPOV_WE__GFX101PLUS            = 0x00000067,
    PH_PERF_SEL_SC0_PA6_EOP_WE__GFX101PLUS             = 0x00000068,
    PH_PERF_SEL_SC0_PA6_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000069,
    PH_PERF_SEL_SC0_PA6_EOPG_WE__GFX101PLUS            = 0x0000006a,
    PH_PERF_SEL_SC0_PA6_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000006b,
    PH_PERF_SEL_SC0_PA7_DATA_FIFO_RD__GFX101PLUS       = 0x0000006c,
    PH_PERF_SEL_SC0_PA7_DATA_FIFO_WE__GFX101PLUS       = 0x0000006d,
    PH_PERF_SEL_SC0_PA7_FIFO_EMPTY__GFX101PLUS         = 0x0000006e,
    PH_PERF_SEL_SC0_PA7_FIFO_FULL__GFX101PLUS          = 0x0000006f,
    PH_PERF_SEL_SC0_PA7_NULL_WE__GFX101PLUS            = 0x00000070,
    PH_PERF_SEL_SC0_PA7_EVENT_WE__GFX101PLUS           = 0x00000071,
    PH_PERF_SEL_SC0_PA7_FPOV_WE__GFX101PLUS            = 0x00000072,
    PH_PERF_SEL_SC0_PA7_LPOV_WE__GFX101PLUS            = 0x00000073,
    PH_PERF_SEL_SC0_PA7_EOP_WE__GFX101PLUS             = 0x00000074,
    PH_PERF_SEL_SC0_PA7_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000075,
    PH_PERF_SEL_SC0_PA7_EOPG_WE__GFX101PLUS            = 0x00000076,
    PH_PERF_SEL_SC0_PA7_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000077,
    PH_PERF_SEL_SC1_SRPS_WINDOW_VALID__GFX101PLUS      = 0x00000078,
    PH_PERF_SEL_SC1_ARB_XFC_ALL_EVENT_OR_PRIM_CYCLES__GFX101PLUS = 0x00000079,
    PH_PERF_SEL_SC1_ARB_XFC_ONLY_PRIM_CYCLES__GFX101PLUS = 0x0000007a,
    PH_PERF_SEL_SC1_ARB_XFC_ONLY_ONE_INC_PER_PRIM__GFX101PLUS = 0x0000007b,
    PH_PERF_SEL_SC1_ARB_STALLED_FROM_BELOW__GFX101PLUS = 0x0000007c,
    PH_PERF_SEL_SC1_ARB_STARVED_FROM_ABOVE__GFX101PLUS = 0x0000007d,
    PH_PERF_SEL_SC1_ARB_STARVED_FROM_ABOVE_WITH_UNSELECTED_FIFO_NOT_EMPTY__GFX101PLUS = 0x0000007e,
    PH_PERF_SEL_SC1_ARB_STARVED_FROM_ABOVE_WITH_UNSELECTED_FIFO_FULL__GFX101PLUS = 0x0000007f,
    PH_PERF_SEL_SC1_ARB_BUSY__GFX101PLUS               = 0x00000080,
    PH_PERF_SEL_SC1_ARB_PA_BUSY_SOP__GFX101PLUS        = 0x00000081,
    PH_PERF_SEL_SC1_ARB_EOP_POP_SYNC_POP__GFX101PLUS   = 0x00000082,
    PH_PERF_SEL_SC1_ARB_EVENT_SYNC_POP__GFX101PLUS     = 0x00000083,
    PH_PERF_SEL_SC1_PS_ENG_MULTICYCLE_BUBBLE__GFX101PLUS = 0x00000084,
    PH_PERF_SEL_SC1_EOP_SYNC_WINDOW__GFX101PLUS        = 0x00000085,
    PH_PERF_SEL_SC1_BUSY_PROCESSING_MULTICYCLE_PRIM__GFX101PLUS = 0x00000086,
    PH_PERF_SEL_SC1_BUSY_CNT_NOT_ZERO__GFX101PLUS      = 0x00000087,
    PH_PERF_SEL_SC1_SEND__GFX101PLUS                   = 0x00000088,
    PH_PERF_SEL_SC1_CREDIT_AT_ZERO_WITH_PENDING_SEND__GFX101PLUS = 0x00000089,
    PH_PERF_SEL_SC1_CREDIT_AT_MAX__GFX101PLUS          = 0x0000008a,
    PH_PERF_SEL_SC1_CREDIT_AT_MAX_NO_PENDING_SEND__GFX101PLUS = 0x0000008b,
    PH_PERF_SEL_SC1_GFX_PIPE_EVENT_PROVOKED_TRANSITION__GFX101PLUS = 0x0000008c,
    PH_PERF_SEL_SC1_GFX_PIPE_EOP_PRIM_PROVOKED_TRANSITION__GFX101PLUS = 0x0000008d,
    PH_PERF_SEL_SC1_GFX_PIPE0_TO_1_TRANSITION__GFX101PLUS = 0x0000008e,
    PH_PERF_SEL_SC1_GFX_PIPE1_TO_0_TRANSITION__GFX101PLUS = 0x0000008f,
    PH_PERF_SEL_SC1_PA0_DATA_FIFO_RD__GFX101PLUS       = 0x00000090,
    PH_PERF_SEL_SC1_PA0_DATA_FIFO_WE__GFX101PLUS       = 0x00000091,
    PH_PERF_SEL_SC1_PA0_FIFO_EMPTY__GFX101PLUS         = 0x00000092,
    PH_PERF_SEL_SC1_PA0_FIFO_FULL__GFX101PLUS          = 0x00000093,
    PH_PERF_SEL_SC1_PA0_NULL_WE__GFX101PLUS            = 0x00000094,
    PH_PERF_SEL_SC1_PA0_EVENT_WE__GFX101PLUS           = 0x00000095,
    PH_PERF_SEL_SC1_PA0_FPOV_WE__GFX101PLUS            = 0x00000096,
    PH_PERF_SEL_SC1_PA0_LPOV_WE__GFX101PLUS            = 0x00000097,
    PH_PERF_SEL_SC1_PA0_EOP_WE__GFX101PLUS             = 0x00000098,
    PH_PERF_SEL_SC1_PA0_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000099,
    PH_PERF_SEL_SC1_PA0_EOPG_WE__GFX101PLUS            = 0x0000009a,
    PH_PERF_SEL_SC1_PA0_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000009b,
    PH_PERF_SEL_SC1_PA1_DATA_FIFO_RD__GFX101PLUS       = 0x0000009c,
    PH_PERF_SEL_SC1_PA1_DATA_FIFO_WE__GFX101PLUS       = 0x0000009d,
    PH_PERF_SEL_SC1_PA1_FIFO_EMPTY__GFX101PLUS         = 0x0000009e,
    PH_PERF_SEL_SC1_PA1_FIFO_FULL__GFX101PLUS          = 0x0000009f,
    PH_PERF_SEL_SC1_PA1_NULL_WE__GFX101PLUS            = 0x000000a0,
    PH_PERF_SEL_SC1_PA1_EVENT_WE__GFX101PLUS           = 0x000000a1,
    PH_PERF_SEL_SC1_PA1_FPOV_WE__GFX101PLUS            = 0x000000a2,
    PH_PERF_SEL_SC1_PA1_LPOV_WE__GFX101PLUS            = 0x000000a3,
    PH_PERF_SEL_SC1_PA1_EOP_WE__GFX101PLUS             = 0x000000a4,
    PH_PERF_SEL_SC1_PA1_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000000a5,
    PH_PERF_SEL_SC1_PA1_EOPG_WE__GFX101PLUS            = 0x000000a6,
    PH_PERF_SEL_SC1_PA1_DEALLOC_4_0_RD__GFX101PLUS     = 0x000000a7,
    PH_PERF_SEL_SC1_PA2_DATA_FIFO_RD__GFX101PLUS       = 0x000000a8,
    PH_PERF_SEL_SC1_PA2_DATA_FIFO_WE__GFX101PLUS       = 0x000000a9,
    PH_PERF_SEL_SC1_PA2_FIFO_EMPTY__GFX101PLUS         = 0x000000aa,
    PH_PERF_SEL_SC1_PA2_FIFO_FULL__GFX101PLUS          = 0x000000ab,
    PH_PERF_SEL_SC1_PA2_NULL_WE__GFX101PLUS            = 0x000000ac,
    PH_PERF_SEL_SC1_PA2_EVENT_WE__GFX101PLUS           = 0x000000ad,
    PH_PERF_SEL_SC1_PA2_FPOV_WE__GFX101PLUS            = 0x000000ae,
    PH_PERF_SEL_SC1_PA2_LPOV_WE__GFX101PLUS            = 0x000000af,
    PH_PERF_SEL_SC1_PA2_EOP_WE__GFX101PLUS             = 0x000000b0,
    PH_PERF_SEL_SC1_PA2_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000000b1,
    PH_PERF_SEL_SC1_PA2_EOPG_WE__GFX101PLUS            = 0x000000b2,
    PH_PERF_SEL_SC1_PA2_DEALLOC_4_0_RD__GFX101PLUS     = 0x000000b3,
    PH_PERF_SEL_SC1_PA3_DATA_FIFO_RD__GFX101PLUS       = 0x000000b4,
    PH_PERF_SEL_SC1_PA3_DATA_FIFO_WE__GFX101PLUS       = 0x000000b5,
    PH_PERF_SEL_SC1_PA3_FIFO_EMPTY__GFX101PLUS         = 0x000000b6,
    PH_PERF_SEL_SC1_PA3_FIFO_FULL__GFX101PLUS          = 0x000000b7,
    PH_PERF_SEL_SC1_PA3_NULL_WE__GFX101PLUS            = 0x000000b8,
    PH_PERF_SEL_SC1_PA3_EVENT_WE__GFX101PLUS           = 0x000000b9,
    PH_PERF_SEL_SC1_PA3_FPOV_WE__GFX101PLUS            = 0x000000ba,
    PH_PERF_SEL_SC1_PA3_LPOV_WE__GFX101PLUS            = 0x000000bb,
    PH_PERF_SEL_SC1_PA3_EOP_WE__GFX101PLUS             = 0x000000bc,
    PH_PERF_SEL_SC1_PA3_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000000bd,
    PH_PERF_SEL_SC1_PA3_EOPG_WE__GFX101PLUS            = 0x000000be,
    PH_PERF_SEL_SC1_PA3_DEALLOC_4_0_RD__GFX101PLUS     = 0x000000bf,
    PH_PERF_SEL_SC1_PA4_DATA_FIFO_RD__GFX101PLUS       = 0x000000c0,
    PH_PERF_SEL_SC1_PA4_DATA_FIFO_WE__GFX101PLUS       = 0x000000c1,
    PH_PERF_SEL_SC1_PA4_FIFO_EMPTY__GFX101PLUS         = 0x000000c2,
    PH_PERF_SEL_SC1_PA4_FIFO_FULL__GFX101PLUS          = 0x000000c3,
    PH_PERF_SEL_SC1_PA4_NULL_WE__GFX101PLUS            = 0x000000c4,
    PH_PERF_SEL_SC1_PA4_EVENT_WE__GFX101PLUS           = 0x000000c5,
    PH_PERF_SEL_SC1_PA4_FPOV_WE__GFX101PLUS            = 0x000000c6,
    PH_PERF_SEL_SC1_PA4_LPOV_WE__GFX101PLUS            = 0x000000c7,
    PH_PERF_SEL_SC1_PA4_EOP_WE__GFX101PLUS             = 0x000000c8,
    PH_PERF_SEL_SC1_PA4_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000000c9,
    PH_PERF_SEL_SC1_PA4_EOPG_WE__GFX101PLUS            = 0x000000ca,
    PH_PERF_SEL_SC1_PA4_DEALLOC_4_0_RD__GFX101PLUS     = 0x000000cb,
    PH_PERF_SEL_SC1_PA5_DATA_FIFO_RD__GFX101PLUS       = 0x000000cc,
    PH_PERF_SEL_SC1_PA5_DATA_FIFO_WE__GFX101PLUS       = 0x000000cd,
    PH_PERF_SEL_SC1_PA5_FIFO_EMPTY__GFX101PLUS         = 0x000000ce,
    PH_PERF_SEL_SC1_PA5_FIFO_FULL__GFX101PLUS          = 0x000000cf,
    PH_PERF_SEL_SC1_PA5_NULL_WE__GFX101PLUS            = 0x000000d0,
    PH_PERF_SEL_SC1_PA5_EVENT_WE__GFX101PLUS           = 0x000000d1,
    PH_PERF_SEL_SC1_PA5_FPOV_WE__GFX101PLUS            = 0x000000d2,
    PH_PERF_SEL_SC1_PA5_LPOV_WE__GFX101PLUS            = 0x000000d3,
    PH_PERF_SEL_SC1_PA5_EOP_WE__GFX101PLUS             = 0x000000d4,
    PH_PERF_SEL_SC1_PA5_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000000d5,
    PH_PERF_SEL_SC1_PA5_EOPG_WE__GFX101PLUS            = 0x000000d6,
    PH_PERF_SEL_SC1_PA5_DEALLOC_4_0_RD__GFX101PLUS     = 0x000000d7,
    PH_PERF_SEL_SC1_PA6_DATA_FIFO_RD__GFX101PLUS       = 0x000000d8,
    PH_PERF_SEL_SC1_PA6_DATA_FIFO_WE__GFX101PLUS       = 0x000000d9,
    PH_PERF_SEL_SC1_PA6_FIFO_EMPTY__GFX101PLUS         = 0x000000da,
    PH_PERF_SEL_SC1_PA6_FIFO_FULL__GFX101PLUS          = 0x000000db,
    PH_PERF_SEL_SC1_PA6_NULL_WE__GFX101PLUS            = 0x000000dc,
    PH_PERF_SEL_SC1_PA6_EVENT_WE__GFX101PLUS           = 0x000000dd,
    PH_PERF_SEL_SC1_PA6_FPOV_WE__GFX101PLUS            = 0x000000de,
    PH_PERF_SEL_SC1_PA6_LPOV_WE__GFX101PLUS            = 0x000000df,
    PH_PERF_SEL_SC1_PA6_EOP_WE__GFX101PLUS             = 0x000000e0,
    PH_PERF_SEL_SC1_PA6_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000000e1,
    PH_PERF_SEL_SC1_PA6_EOPG_WE__GFX101PLUS            = 0x000000e2,
    PH_PERF_SEL_SC1_PA6_DEALLOC_4_0_RD__GFX101PLUS     = 0x000000e3,
    PH_PERF_SEL_SC1_PA7_DATA_FIFO_RD__GFX101PLUS       = 0x000000e4,
    PH_PERF_SEL_SC1_PA7_DATA_FIFO_WE__GFX101PLUS       = 0x000000e5,
    PH_PERF_SEL_SC1_PA7_FIFO_EMPTY__GFX101PLUS         = 0x000000e6,
    PH_PERF_SEL_SC1_PA7_FIFO_FULL__GFX101PLUS          = 0x000000e7,
    PH_PERF_SEL_SC1_PA7_NULL_WE__GFX101PLUS            = 0x000000e8,
    PH_PERF_SEL_SC1_PA7_EVENT_WE__GFX101PLUS           = 0x000000e9,
    PH_PERF_SEL_SC1_PA7_FPOV_WE__GFX101PLUS            = 0x000000ea,
    PH_PERF_SEL_SC1_PA7_LPOV_WE__GFX101PLUS            = 0x000000eb,
    PH_PERF_SEL_SC1_PA7_EOP_WE__GFX101PLUS             = 0x000000ec,
    PH_PERF_SEL_SC1_PA7_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000000ed,
    PH_PERF_SEL_SC1_PA7_EOPG_WE__GFX101PLUS            = 0x000000ee,
    PH_PERF_SEL_SC1_PA7_DEALLOC_4_0_RD__GFX101PLUS     = 0x000000ef,
    PH_PERF_SEL_SC2_SRPS_WINDOW_VALID__GFX101PLUS      = 0x000000f0,
    PH_PERF_SEL_SC2_ARB_XFC_ALL_EVENT_OR_PRIM_CYCLES__GFX101PLUS = 0x000000f1,
    PH_PERF_SEL_SC2_ARB_XFC_ONLY_PRIM_CYCLES__GFX101PLUS = 0x000000f2,
    PH_PERF_SEL_SC2_ARB_XFC_ONLY_ONE_INC_PER_PRIM__GFX101PLUS = 0x000000f3,
    PH_PERF_SEL_SC2_ARB_STALLED_FROM_BELOW__GFX101PLUS = 0x000000f4,
    PH_PERF_SEL_SC2_ARB_STARVED_FROM_ABOVE__GFX101PLUS = 0x000000f5,
    PH_PERF_SEL_SC2_ARB_STARVED_FROM_ABOVE_WITH_UNSELECTED_FIFO_NOT_EMPTY__GFX101PLUS = 0x000000f6,
    PH_PERF_SEL_SC2_ARB_STARVED_FROM_ABOVE_WITH_UNSELECTED_FIFO_FULL__GFX101PLUS = 0x000000f7,
    PH_PERF_SEL_SC2_ARB_BUSY__GFX101PLUS               = 0x000000f8,
    PH_PERF_SEL_SC2_ARB_PA_BUSY_SOP__GFX101PLUS        = 0x000000f9,
    PH_PERF_SEL_SC2_ARB_EOP_POP_SYNC_POP__GFX101PLUS   = 0x000000fa,
    PH_PERF_SEL_SC2_ARB_EVENT_SYNC_POP__GFX101PLUS     = 0x000000fb,
    PH_PERF_SEL_SC2_PS_ENG_MULTICYCLE_BUBBLE__GFX101PLUS = 0x000000fc,
    PH_PERF_SEL_SC2_EOP_SYNC_WINDOW__GFX101PLUS        = 0x000000fd,
    PH_PERF_SEL_SC2_BUSY_PROCESSING_MULTICYCLE_PRIM__GFX101PLUS = 0x000000fe,
    PH_PERF_SEL_SC2_BUSY_CNT_NOT_ZERO__GFX101PLUS      = 0x000000ff,
    PH_PERF_SEL_SC2_SEND__GFX101PLUS                   = 0x00000100,
    PH_PERF_SEL_SC2_CREDIT_AT_ZERO_WITH_PENDING_SEND__GFX101PLUS = 0x00000101,
    PH_PERF_SEL_SC2_CREDIT_AT_MAX__GFX101PLUS          = 0x00000102,
    PH_PERF_SEL_SC2_CREDIT_AT_MAX_NO_PENDING_SEND__GFX101PLUS = 0x00000103,
    PH_PERF_SEL_SC2_GFX_PIPE_EVENT_PROVOKED_TRANSITION__GFX101PLUS = 0x00000104,
    PH_PERF_SEL_SC2_GFX_PIPE_EOP_PRIM_PROVOKED_TRANSITION__GFX101PLUS = 0x00000105,
    PH_PERF_SEL_SC2_GFX_PIPE0_TO_1_TRANSITION__GFX101PLUS = 0x00000106,
    PH_PERF_SEL_SC2_GFX_PIPE1_TO_0_TRANSITION__GFX101PLUS = 0x00000107,
    PH_PERF_SEL_SC2_PA0_DATA_FIFO_RD__GFX101PLUS       = 0x00000108,
    PH_PERF_SEL_SC2_PA0_DATA_FIFO_WE__GFX101PLUS       = 0x00000109,
    PH_PERF_SEL_SC2_PA0_FIFO_EMPTY__GFX101PLUS         = 0x0000010a,
    PH_PERF_SEL_SC2_PA0_FIFO_FULL__GFX101PLUS          = 0x0000010b,
    PH_PERF_SEL_SC2_PA0_NULL_WE__GFX101PLUS            = 0x0000010c,
    PH_PERF_SEL_SC2_PA0_EVENT_WE__GFX101PLUS           = 0x0000010d,
    PH_PERF_SEL_SC2_PA0_FPOV_WE__GFX101PLUS            = 0x0000010e,
    PH_PERF_SEL_SC2_PA0_LPOV_WE__GFX101PLUS            = 0x0000010f,
    PH_PERF_SEL_SC2_PA0_EOP_WE__GFX101PLUS             = 0x00000110,
    PH_PERF_SEL_SC2_PA0_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000111,
    PH_PERF_SEL_SC2_PA0_EOPG_WE__GFX101PLUS            = 0x00000112,
    PH_PERF_SEL_SC2_PA0_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000113,
    PH_PERF_SEL_SC2_PA1_DATA_FIFO_RD__GFX101PLUS       = 0x00000114,
    PH_PERF_SEL_SC2_PA1_DATA_FIFO_WE__GFX101PLUS       = 0x00000115,
    PH_PERF_SEL_SC2_PA1_FIFO_EMPTY__GFX101PLUS         = 0x00000116,
    PH_PERF_SEL_SC2_PA1_FIFO_FULL__GFX101PLUS          = 0x00000117,
    PH_PERF_SEL_SC2_PA1_NULL_WE__GFX101PLUS            = 0x00000118,
    PH_PERF_SEL_SC2_PA1_EVENT_WE__GFX101PLUS           = 0x00000119,
    PH_PERF_SEL_SC2_PA1_FPOV_WE__GFX101PLUS            = 0x0000011a,
    PH_PERF_SEL_SC2_PA1_LPOV_WE__GFX101PLUS            = 0x0000011b,
    PH_PERF_SEL_SC2_PA1_EOP_WE__GFX101PLUS             = 0x0000011c,
    PH_PERF_SEL_SC2_PA1_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x0000011d,
    PH_PERF_SEL_SC2_PA1_EOPG_WE__GFX101PLUS            = 0x0000011e,
    PH_PERF_SEL_SC2_PA1_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000011f,
    PH_PERF_SEL_SC2_PA2_DATA_FIFO_RD__GFX101PLUS       = 0x00000120,
    PH_PERF_SEL_SC2_PA2_DATA_FIFO_WE__GFX101PLUS       = 0x00000121,
    PH_PERF_SEL_SC2_PA2_FIFO_EMPTY__GFX101PLUS         = 0x00000122,
    PH_PERF_SEL_SC2_PA2_FIFO_FULL__GFX101PLUS          = 0x00000123,
    PH_PERF_SEL_SC2_PA2_NULL_WE__GFX101PLUS            = 0x00000124,
    PH_PERF_SEL_SC2_PA2_EVENT_WE__GFX101PLUS           = 0x00000125,
    PH_PERF_SEL_SC2_PA2_FPOV_WE__GFX101PLUS            = 0x00000126,
    PH_PERF_SEL_SC2_PA2_LPOV_WE__GFX101PLUS            = 0x00000127,
    PH_PERF_SEL_SC2_PA2_EOP_WE__GFX101PLUS             = 0x00000128,
    PH_PERF_SEL_SC2_PA2_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000129,
    PH_PERF_SEL_SC2_PA2_EOPG_WE__GFX101PLUS            = 0x0000012a,
    PH_PERF_SEL_SC2_PA2_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000012b,
    PH_PERF_SEL_SC2_PA3_DATA_FIFO_RD__GFX101PLUS       = 0x0000012c,
    PH_PERF_SEL_SC2_PA3_DATA_FIFO_WE__GFX101PLUS       = 0x0000012d,
    PH_PERF_SEL_SC2_PA3_FIFO_EMPTY__GFX101PLUS         = 0x0000012e,
    PH_PERF_SEL_SC2_PA3_FIFO_FULL__GFX101PLUS          = 0x0000012f,
    PH_PERF_SEL_SC2_PA3_NULL_WE__GFX101PLUS            = 0x00000130,
    PH_PERF_SEL_SC2_PA3_EVENT_WE__GFX101PLUS           = 0x00000131,
    PH_PERF_SEL_SC2_PA3_FPOV_WE__GFX101PLUS            = 0x00000132,
    PH_PERF_SEL_SC2_PA3_LPOV_WE__GFX101PLUS            = 0x00000133,
    PH_PERF_SEL_SC2_PA3_EOP_WE__GFX101PLUS             = 0x00000134,
    PH_PERF_SEL_SC2_PA3_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000135,
    PH_PERF_SEL_SC2_PA3_EOPG_WE__GFX101PLUS            = 0x00000136,
    PH_PERF_SEL_SC2_PA3_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000137,
    PH_PERF_SEL_SC2_PA4_DATA_FIFO_RD__GFX101PLUS       = 0x00000138,
    PH_PERF_SEL_SC2_PA4_DATA_FIFO_WE__GFX101PLUS       = 0x00000139,
    PH_PERF_SEL_SC2_PA4_FIFO_EMPTY__GFX101PLUS         = 0x0000013a,
    PH_PERF_SEL_SC2_PA4_FIFO_FULL__GFX101PLUS          = 0x0000013b,
    PH_PERF_SEL_SC2_PA4_NULL_WE__GFX101PLUS            = 0x0000013c,
    PH_PERF_SEL_SC2_PA4_EVENT_WE__GFX101PLUS           = 0x0000013d,
    PH_PERF_SEL_SC2_PA4_FPOV_WE__GFX101PLUS            = 0x0000013e,
    PH_PERF_SEL_SC2_PA4_LPOV_WE__GFX101PLUS            = 0x0000013f,
    PH_PERF_SEL_SC2_PA4_EOP_WE__GFX101PLUS             = 0x00000140,
    PH_PERF_SEL_SC2_PA4_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000141,
    PH_PERF_SEL_SC2_PA4_EOPG_WE__GFX101PLUS            = 0x00000142,
    PH_PERF_SEL_SC2_PA4_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000143,
    PH_PERF_SEL_SC2_PA5_DATA_FIFO_RD__GFX101PLUS       = 0x00000144,
    PH_PERF_SEL_SC2_PA5_DATA_FIFO_WE__GFX101PLUS       = 0x00000145,
    PH_PERF_SEL_SC2_PA5_FIFO_EMPTY__GFX101PLUS         = 0x00000146,
    PH_PERF_SEL_SC2_PA5_FIFO_FULL__GFX101PLUS          = 0x00000147,
    PH_PERF_SEL_SC2_PA5_NULL_WE__GFX101PLUS            = 0x00000148,
    PH_PERF_SEL_SC2_PA5_EVENT_WE__GFX101PLUS           = 0x00000149,
    PH_PERF_SEL_SC2_PA5_FPOV_WE__GFX101PLUS            = 0x0000014a,
    PH_PERF_SEL_SC2_PA5_LPOV_WE__GFX101PLUS            = 0x0000014b,
    PH_PERF_SEL_SC2_PA5_EOP_WE__GFX101PLUS             = 0x0000014c,
    PH_PERF_SEL_SC2_PA5_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x0000014d,
    PH_PERF_SEL_SC2_PA5_EOPG_WE__GFX101PLUS            = 0x0000014e,
    PH_PERF_SEL_SC2_PA5_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000014f,
    PH_PERF_SEL_SC2_PA6_DATA_FIFO_RD__GFX101PLUS       = 0x00000150,
    PH_PERF_SEL_SC2_PA6_DATA_FIFO_WE__GFX101PLUS       = 0x00000151,
    PH_PERF_SEL_SC2_PA6_FIFO_EMPTY__GFX101PLUS         = 0x00000152,
    PH_PERF_SEL_SC2_PA6_FIFO_FULL__GFX101PLUS          = 0x00000153,
    PH_PERF_SEL_SC2_PA6_NULL_WE__GFX101PLUS            = 0x00000154,
    PH_PERF_SEL_SC2_PA6_EVENT_WE__GFX101PLUS           = 0x00000155,
    PH_PERF_SEL_SC2_PA6_FPOV_WE__GFX101PLUS            = 0x00000156,
    PH_PERF_SEL_SC2_PA6_LPOV_WE__GFX101PLUS            = 0x00000157,
    PH_PERF_SEL_SC2_PA6_EOP_WE__GFX101PLUS             = 0x00000158,
    PH_PERF_SEL_SC2_PA6_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000159,
    PH_PERF_SEL_SC2_PA6_EOPG_WE__GFX101PLUS            = 0x0000015a,
    PH_PERF_SEL_SC2_PA6_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000015b,
    PH_PERF_SEL_SC2_PA7_DATA_FIFO_RD__GFX101PLUS       = 0x0000015c,
    PH_PERF_SEL_SC2_PA7_DATA_FIFO_WE__GFX101PLUS       = 0x0000015d,
    PH_PERF_SEL_SC2_PA7_FIFO_EMPTY__GFX101PLUS         = 0x0000015e,
    PH_PERF_SEL_SC2_PA7_FIFO_FULL__GFX101PLUS          = 0x0000015f,
    PH_PERF_SEL_SC2_PA7_NULL_WE__GFX101PLUS            = 0x00000160,
    PH_PERF_SEL_SC2_PA7_EVENT_WE__GFX101PLUS           = 0x00000161,
    PH_PERF_SEL_SC2_PA7_FPOV_WE__GFX101PLUS            = 0x00000162,
    PH_PERF_SEL_SC2_PA7_LPOV_WE__GFX101PLUS            = 0x00000163,
    PH_PERF_SEL_SC2_PA7_EOP_WE__GFX101PLUS             = 0x00000164,
    PH_PERF_SEL_SC2_PA7_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000165,
    PH_PERF_SEL_SC2_PA7_EOPG_WE__GFX101PLUS            = 0x00000166,
    PH_PERF_SEL_SC2_PA7_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000167,
    PH_PERF_SEL_SC3_SRPS_WINDOW_VALID__GFX101PLUS      = 0x00000168,
    PH_PERF_SEL_SC3_ARB_XFC_ALL_EVENT_OR_PRIM_CYCLES__GFX101PLUS = 0x00000169,
    PH_PERF_SEL_SC3_ARB_XFC_ONLY_PRIM_CYCLES__GFX101PLUS = 0x0000016a,
    PH_PERF_SEL_SC3_ARB_XFC_ONLY_ONE_INC_PER_PRIM__GFX101PLUS = 0x0000016b,
    PH_PERF_SEL_SC3_ARB_STALLED_FROM_BELOW__GFX101PLUS = 0x0000016c,
    PH_PERF_SEL_SC3_ARB_STARVED_FROM_ABOVE__GFX101PLUS = 0x0000016d,
    PH_PERF_SEL_SC3_ARB_STARVED_FROM_ABOVE_WITH_UNSELECTED_FIFO_NOT_EMPTY__GFX101PLUS = 0x0000016e,
    PH_PERF_SEL_SC3_ARB_STARVED_FROM_ABOVE_WITH_UNSELECTED_FIFO_FULL__GFX101PLUS = 0x0000016f,
    PH_PERF_SEL_SC3_ARB_BUSY__GFX101PLUS               = 0x00000170,
    PH_PERF_SEL_SC3_ARB_PA_BUSY_SOP__GFX101PLUS        = 0x00000171,
    PH_PERF_SEL_SC3_ARB_EOP_POP_SYNC_POP__GFX101PLUS   = 0x00000172,
    PH_PERF_SEL_SC3_ARB_EVENT_SYNC_POP__GFX101PLUS     = 0x00000173,
    PH_PERF_SEL_SC3_PS_ENG_MULTICYCLE_BUBBLE__GFX101PLUS = 0x00000174,
    PH_PERF_SEL_SC3_EOP_SYNC_WINDOW__GFX101PLUS        = 0x00000175,
    PH_PERF_SEL_SC3_BUSY_PROCESSING_MULTICYCLE_PRIM__GFX101PLUS = 0x00000176,
    PH_PERF_SEL_SC3_BUSY_CNT_NOT_ZERO__GFX101PLUS      = 0x00000177,
    PH_PERF_SEL_SC3_SEND__GFX101PLUS                   = 0x00000178,
    PH_PERF_SEL_SC3_CREDIT_AT_ZERO_WITH_PENDING_SEND__GFX101PLUS = 0x00000179,
    PH_PERF_SEL_SC3_CREDIT_AT_MAX__GFX101PLUS          = 0x0000017a,
    PH_PERF_SEL_SC3_CREDIT_AT_MAX_NO_PENDING_SEND__GFX101PLUS = 0x0000017b,
    PH_PERF_SEL_SC3_GFX_PIPE_EVENT_PROVOKED_TRANSITION__GFX101PLUS = 0x0000017c,
    PH_PERF_SEL_SC3_GFX_PIPE_EOP_PRIM_PROVOKED_TRANSITION__GFX101PLUS = 0x0000017d,
    PH_PERF_SEL_SC3_GFX_PIPE0_TO_1_TRANSITION__GFX101PLUS = 0x0000017e,
    PH_PERF_SEL_SC3_GFX_PIPE1_TO_0_TRANSITION__GFX101PLUS = 0x0000017f,
    PH_PERF_SEL_SC3_PA0_DATA_FIFO_RD__GFX101PLUS       = 0x00000180,
    PH_PERF_SEL_SC3_PA0_DATA_FIFO_WE__GFX101PLUS       = 0x00000181,
    PH_PERF_SEL_SC3_PA0_FIFO_EMPTY__GFX101PLUS         = 0x00000182,
    PH_PERF_SEL_SC3_PA0_FIFO_FULL__GFX101PLUS          = 0x00000183,
    PH_PERF_SEL_SC3_PA0_NULL_WE__GFX101PLUS            = 0x00000184,
    PH_PERF_SEL_SC3_PA0_EVENT_WE__GFX101PLUS           = 0x00000185,
    PH_PERF_SEL_SC3_PA0_FPOV_WE__GFX101PLUS            = 0x00000186,
    PH_PERF_SEL_SC3_PA0_LPOV_WE__GFX101PLUS            = 0x00000187,
    PH_PERF_SEL_SC3_PA0_EOP_WE__GFX101PLUS             = 0x00000188,
    PH_PERF_SEL_SC3_PA0_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000189,
    PH_PERF_SEL_SC3_PA0_EOPG_WE__GFX101PLUS            = 0x0000018a,
    PH_PERF_SEL_SC3_PA0_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000018b,
    PH_PERF_SEL_SC3_PA1_DATA_FIFO_RD__GFX101PLUS       = 0x0000018c,
    PH_PERF_SEL_SC3_PA1_DATA_FIFO_WE__GFX101PLUS       = 0x0000018d,
    PH_PERF_SEL_SC3_PA1_FIFO_EMPTY__GFX101PLUS         = 0x0000018e,
    PH_PERF_SEL_SC3_PA1_FIFO_FULL__GFX101PLUS          = 0x0000018f,
    PH_PERF_SEL_SC3_PA1_NULL_WE__GFX101PLUS            = 0x00000190,
    PH_PERF_SEL_SC3_PA1_EVENT_WE__GFX101PLUS           = 0x00000191,
    PH_PERF_SEL_SC3_PA1_FPOV_WE__GFX101PLUS            = 0x00000192,
    PH_PERF_SEL_SC3_PA1_LPOV_WE__GFX101PLUS            = 0x00000193,
    PH_PERF_SEL_SC3_PA1_EOP_WE__GFX101PLUS             = 0x00000194,
    PH_PERF_SEL_SC3_PA1_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000195,
    PH_PERF_SEL_SC3_PA1_EOPG_WE__GFX101PLUS            = 0x00000196,
    PH_PERF_SEL_SC3_PA1_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000197,
    PH_PERF_SEL_SC3_PA2_DATA_FIFO_RD__GFX101PLUS       = 0x00000198,
    PH_PERF_SEL_SC3_PA2_DATA_FIFO_WE__GFX101PLUS       = 0x00000199,
    PH_PERF_SEL_SC3_PA2_FIFO_EMPTY__GFX101PLUS         = 0x0000019a,
    PH_PERF_SEL_SC3_PA2_FIFO_FULL__GFX101PLUS          = 0x0000019b,
    PH_PERF_SEL_SC3_PA2_NULL_WE__GFX101PLUS            = 0x0000019c,
    PH_PERF_SEL_SC3_PA2_EVENT_WE__GFX101PLUS           = 0x0000019d,
    PH_PERF_SEL_SC3_PA2_FPOV_WE__GFX101PLUS            = 0x0000019e,
    PH_PERF_SEL_SC3_PA2_LPOV_WE__GFX101PLUS            = 0x0000019f,
    PH_PERF_SEL_SC3_PA2_EOP_WE__GFX101PLUS             = 0x000001a0,
    PH_PERF_SEL_SC3_PA2_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000001a1,
    PH_PERF_SEL_SC3_PA2_EOPG_WE__GFX101PLUS            = 0x000001a2,
    PH_PERF_SEL_SC3_PA2_DEALLOC_4_0_RD__GFX101PLUS     = 0x000001a3,
    PH_PERF_SEL_SC3_PA3_DATA_FIFO_RD__GFX101PLUS       = 0x000001a4,
    PH_PERF_SEL_SC3_PA3_DATA_FIFO_WE__GFX101PLUS       = 0x000001a5,
    PH_PERF_SEL_SC3_PA3_FIFO_EMPTY__GFX101PLUS         = 0x000001a6,
    PH_PERF_SEL_SC3_PA3_FIFO_FULL__GFX101PLUS          = 0x000001a7,
    PH_PERF_SEL_SC3_PA3_NULL_WE__GFX101PLUS            = 0x000001a8,
    PH_PERF_SEL_SC3_PA3_EVENT_WE__GFX101PLUS           = 0x000001a9,
    PH_PERF_SEL_SC3_PA3_FPOV_WE__GFX101PLUS            = 0x000001aa,
    PH_PERF_SEL_SC3_PA3_LPOV_WE__GFX101PLUS            = 0x000001ab,
    PH_PERF_SEL_SC3_PA3_EOP_WE__GFX101PLUS             = 0x000001ac,
    PH_PERF_SEL_SC3_PA3_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000001ad,
    PH_PERF_SEL_SC3_PA3_EOPG_WE__GFX101PLUS            = 0x000001ae,
    PH_PERF_SEL_SC3_PA3_DEALLOC_4_0_RD__GFX101PLUS     = 0x000001af,
    PH_PERF_SEL_SC3_PA4_DATA_FIFO_RD__GFX101PLUS       = 0x000001b0,
    PH_PERF_SEL_SC3_PA4_DATA_FIFO_WE__GFX101PLUS       = 0x000001b1,
    PH_PERF_SEL_SC3_PA4_FIFO_EMPTY__GFX101PLUS         = 0x000001b2,
    PH_PERF_SEL_SC3_PA4_FIFO_FULL__GFX101PLUS          = 0x000001b3,
    PH_PERF_SEL_SC3_PA4_NULL_WE__GFX101PLUS            = 0x000001b4,
    PH_PERF_SEL_SC3_PA4_EVENT_WE__GFX101PLUS           = 0x000001b5,
    PH_PERF_SEL_SC3_PA4_FPOV_WE__GFX101PLUS            = 0x000001b6,
    PH_PERF_SEL_SC3_PA4_LPOV_WE__GFX101PLUS            = 0x000001b7,
    PH_PERF_SEL_SC3_PA4_EOP_WE__GFX101PLUS             = 0x000001b8,
    PH_PERF_SEL_SC3_PA4_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000001b9,
    PH_PERF_SEL_SC3_PA4_EOPG_WE__GFX101PLUS            = 0x000001ba,
    PH_PERF_SEL_SC3_PA4_DEALLOC_4_0_RD__GFX101PLUS     = 0x000001bb,
    PH_PERF_SEL_SC3_PA5_DATA_FIFO_RD__GFX101PLUS       = 0x000001bc,
    PH_PERF_SEL_SC3_PA5_DATA_FIFO_WE__GFX101PLUS       = 0x000001bd,
    PH_PERF_SEL_SC3_PA5_FIFO_EMPTY__GFX101PLUS         = 0x000001be,
    PH_PERF_SEL_SC3_PA5_FIFO_FULL__GFX101PLUS          = 0x000001bf,
    PH_PERF_SEL_SC3_PA5_NULL_WE__GFX101PLUS            = 0x000001c0,
    PH_PERF_SEL_SC3_PA5_EVENT_WE__GFX101PLUS           = 0x000001c1,
    PH_PERF_SEL_SC3_PA5_FPOV_WE__GFX101PLUS            = 0x000001c2,
    PH_PERF_SEL_SC3_PA5_LPOV_WE__GFX101PLUS            = 0x000001c3,
    PH_PERF_SEL_SC3_PA5_EOP_WE__GFX101PLUS             = 0x000001c4,
    PH_PERF_SEL_SC3_PA5_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000001c5,
    PH_PERF_SEL_SC3_PA5_EOPG_WE__GFX101PLUS            = 0x000001c6,
    PH_PERF_SEL_SC3_PA5_DEALLOC_4_0_RD__GFX101PLUS     = 0x000001c7,
    PH_PERF_SEL_SC3_PA6_DATA_FIFO_RD__GFX101PLUS       = 0x000001c8,
    PH_PERF_SEL_SC3_PA6_DATA_FIFO_WE__GFX101PLUS       = 0x000001c9,
    PH_PERF_SEL_SC3_PA6_FIFO_EMPTY__GFX101PLUS         = 0x000001ca,
    PH_PERF_SEL_SC3_PA6_FIFO_FULL__GFX101PLUS          = 0x000001cb,
    PH_PERF_SEL_SC3_PA6_NULL_WE__GFX101PLUS            = 0x000001cc,
    PH_PERF_SEL_SC3_PA6_EVENT_WE__GFX101PLUS           = 0x000001cd,
    PH_PERF_SEL_SC3_PA6_FPOV_WE__GFX101PLUS            = 0x000001ce,
    PH_PERF_SEL_SC3_PA6_LPOV_WE__GFX101PLUS            = 0x000001cf,
    PH_PERF_SEL_SC3_PA6_EOP_WE__GFX101PLUS             = 0x000001d0,
    PH_PERF_SEL_SC3_PA6_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000001d1,
    PH_PERF_SEL_SC3_PA6_EOPG_WE__GFX101PLUS            = 0x000001d2,
    PH_PERF_SEL_SC3_PA6_DEALLOC_4_0_RD__GFX101PLUS     = 0x000001d3,
    PH_PERF_SEL_SC3_PA7_DATA_FIFO_RD__GFX101PLUS       = 0x000001d4,
    PH_PERF_SEL_SC3_PA7_DATA_FIFO_WE__GFX101PLUS       = 0x000001d5,
    PH_PERF_SEL_SC3_PA7_FIFO_EMPTY__GFX101PLUS         = 0x000001d6,
    PH_PERF_SEL_SC3_PA7_FIFO_FULL__GFX101PLUS          = 0x000001d7,
    PH_PERF_SEL_SC3_PA7_NULL_WE__GFX101PLUS            = 0x000001d8,
    PH_PERF_SEL_SC3_PA7_EVENT_WE__GFX101PLUS           = 0x000001d9,
    PH_PERF_SEL_SC3_PA7_FPOV_WE__GFX101PLUS            = 0x000001da,
    PH_PERF_SEL_SC3_PA7_LPOV_WE__GFX101PLUS            = 0x000001db,
    PH_PERF_SEL_SC3_PA7_EOP_WE__GFX101PLUS             = 0x000001dc,
    PH_PERF_SEL_SC3_PA7_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000001dd,
    PH_PERF_SEL_SC3_PA7_EOPG_WE__GFX101PLUS            = 0x000001de,
    PH_PERF_SEL_SC3_PA7_DEALLOC_4_0_RD__GFX101PLUS     = 0x000001df,
    PH_PERF_SEL_SC4_SRPS_WINDOW_VALID__GFX101PLUS      = 0x000001e0,
    PH_PERF_SEL_SC4_ARB_XFC_ALL_EVENT_OR_PRIM_CYCLES__GFX101PLUS = 0x000001e1,
    PH_PERF_SEL_SC4_ARB_XFC_ONLY_PRIM_CYCLES__GFX101PLUS = 0x000001e2,
    PH_PERF_SEL_SC4_ARB_XFC_ONLY_ONE_INC_PER_PRIM__GFX101PLUS = 0x000001e3,
    PH_PERF_SEL_SC4_ARB_STALLED_FROM_BELOW__GFX101PLUS = 0x000001e4,
    PH_PERF_SEL_SC4_ARB_STARVED_FROM_ABOVE__GFX101PLUS = 0x000001e5,
    PH_PERF_SEL_SC4_ARB_STARVED_FROM_ABOVE_WITH_UNSELECTED_FIFO_NOT_EMPTY__GFX101PLUS = 0x000001e6,
    PH_PERF_SEL_SC4_ARB_STARVED_FROM_ABOVE_WITH_UNSELECTED_FIFO_FULL__GFX101PLUS = 0x000001e7,
    PH_PERF_SEL_SC4_ARB_BUSY__GFX101PLUS               = 0x000001e8,
    PH_PERF_SEL_SC4_ARB_PA_BUSY_SOP__GFX101PLUS        = 0x000001e9,
    PH_PERF_SEL_SC4_ARB_EOP_POP_SYNC_POP__GFX101PLUS   = 0x000001ea,
    PH_PERF_SEL_SC4_ARB_EVENT_SYNC_POP__GFX101PLUS     = 0x000001eb,
    PH_PERF_SEL_SC4_PS_ENG_MULTICYCLE_BUBBLE__GFX101PLUS = 0x000001ec,
    PH_PERF_SEL_SC4_EOP_SYNC_WINDOW__GFX101PLUS        = 0x000001ed,
    PH_PERF_SEL_SC4_BUSY_PROCESSING_MULTICYCLE_PRIM__GFX101PLUS = 0x000001ee,
    PH_PERF_SEL_SC4_BUSY_CNT_NOT_ZERO__GFX101PLUS      = 0x000001ef,
    PH_PERF_SEL_SC4_SEND__GFX101PLUS                   = 0x000001f0,
    PH_PERF_SEL_SC4_CREDIT_AT_ZERO_WITH_PENDING_SEND__GFX101PLUS = 0x000001f1,
    PH_PERF_SEL_SC4_CREDIT_AT_MAX__GFX101PLUS          = 0x000001f2,
    PH_PERF_SEL_SC4_CREDIT_AT_MAX_NO_PENDING_SEND__GFX101PLUS = 0x000001f3,
    PH_PERF_SEL_SC4_GFX_PIPE_EVENT_PROVOKED_TRANSITION__GFX101PLUS = 0x000001f4,
    PH_PERF_SEL_SC4_GFX_PIPE_EOP_PRIM_PROVOKED_TRANSITION__GFX101PLUS = 0x000001f5,
    PH_PERF_SEL_SC4_GFX_PIPE0_TO_1_TRANSITION__GFX101PLUS = 0x000001f6,
    PH_PERF_SEL_SC4_GFX_PIPE1_TO_0_TRANSITION__GFX101PLUS = 0x000001f7,
    PH_PERF_SEL_SC4_PA0_DATA_FIFO_RD__GFX101PLUS       = 0x000001f8,
    PH_PERF_SEL_SC4_PA0_DATA_FIFO_WE__GFX101PLUS       = 0x000001f9,
    PH_PERF_SEL_SC4_PA0_FIFO_EMPTY__GFX101PLUS         = 0x000001fa,
    PH_PERF_SEL_SC4_PA0_FIFO_FULL__GFX101PLUS          = 0x000001fb,
    PH_PERF_SEL_SC4_PA0_NULL_WE__GFX101PLUS            = 0x000001fc,
    PH_PERF_SEL_SC4_PA0_EVENT_WE__GFX101PLUS           = 0x000001fd,
    PH_PERF_SEL_SC4_PA0_FPOV_WE__GFX101PLUS            = 0x000001fe,
    PH_PERF_SEL_SC4_PA0_LPOV_WE__GFX101PLUS            = 0x000001ff,
    PH_PERF_SEL_SC4_PA0_EOP_WE__GFX101PLUS             = 0x00000200,
    PH_PERF_SEL_SC4_PA0_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000201,
    PH_PERF_SEL_SC4_PA0_EOPG_WE__GFX101PLUS            = 0x00000202,
    PH_PERF_SEL_SC4_PA0_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000203,
    PH_PERF_SEL_SC4_PA1_DATA_FIFO_RD__GFX101PLUS       = 0x00000204,
    PH_PERF_SEL_SC4_PA1_DATA_FIFO_WE__GFX101PLUS       = 0x00000205,
    PH_PERF_SEL_SC4_PA1_FIFO_EMPTY__GFX101PLUS         = 0x00000206,
    PH_PERF_SEL_SC4_PA1_FIFO_FULL__GFX101PLUS          = 0x00000207,
    PH_PERF_SEL_SC4_PA1_NULL_WE__GFX101PLUS            = 0x00000208,
    PH_PERF_SEL_SC4_PA1_EVENT_WE__GFX101PLUS           = 0x00000209,
    PH_PERF_SEL_SC4_PA1_FPOV_WE__GFX101PLUS            = 0x0000020a,
    PH_PERF_SEL_SC4_PA1_LPOV_WE__GFX101PLUS            = 0x0000020b,
    PH_PERF_SEL_SC4_PA1_EOP_WE__GFX101PLUS             = 0x0000020c,
    PH_PERF_SEL_SC4_PA1_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x0000020d,
    PH_PERF_SEL_SC4_PA1_EOPG_WE__GFX101PLUS            = 0x0000020e,
    PH_PERF_SEL_SC4_PA1_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000020f,
    PH_PERF_SEL_SC4_PA2_DATA_FIFO_RD__GFX101PLUS       = 0x00000210,
    PH_PERF_SEL_SC4_PA2_DATA_FIFO_WE__GFX101PLUS       = 0x00000211,
    PH_PERF_SEL_SC4_PA2_FIFO_EMPTY__GFX101PLUS         = 0x00000212,
    PH_PERF_SEL_SC4_PA2_FIFO_FULL__GFX101PLUS          = 0x00000213,
    PH_PERF_SEL_SC4_PA2_NULL_WE__GFX101PLUS            = 0x00000214,
    PH_PERF_SEL_SC4_PA2_EVENT_WE__GFX101PLUS           = 0x00000215,
    PH_PERF_SEL_SC4_PA2_FPOV_WE__GFX101PLUS            = 0x00000216,
    PH_PERF_SEL_SC4_PA2_LPOV_WE__GFX101PLUS            = 0x00000217,
    PH_PERF_SEL_SC4_PA2_EOP_WE__GFX101PLUS             = 0x00000218,
    PH_PERF_SEL_SC4_PA2_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000219,
    PH_PERF_SEL_SC4_PA2_EOPG_WE__GFX101PLUS            = 0x0000021a,
    PH_PERF_SEL_SC4_PA2_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000021b,
    PH_PERF_SEL_SC4_PA3_DATA_FIFO_RD__GFX101PLUS       = 0x0000021c,
    PH_PERF_SEL_SC4_PA3_DATA_FIFO_WE__GFX101PLUS       = 0x0000021d,
    PH_PERF_SEL_SC4_PA3_FIFO_EMPTY__GFX101PLUS         = 0x0000021e,
    PH_PERF_SEL_SC4_PA3_FIFO_FULL__GFX101PLUS          = 0x0000021f,
    PH_PERF_SEL_SC4_PA3_NULL_WE__GFX101PLUS            = 0x00000220,
    PH_PERF_SEL_SC4_PA3_EVENT_WE__GFX101PLUS           = 0x00000221,
    PH_PERF_SEL_SC4_PA3_FPOV_WE__GFX101PLUS            = 0x00000222,
    PH_PERF_SEL_SC4_PA3_LPOV_WE__GFX101PLUS            = 0x00000223,
    PH_PERF_SEL_SC4_PA3_EOP_WE__GFX101PLUS             = 0x00000224,
    PH_PERF_SEL_SC4_PA3_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000225,
    PH_PERF_SEL_SC4_PA3_EOPG_WE__GFX101PLUS            = 0x00000226,
    PH_PERF_SEL_SC4_PA3_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000227,
    PH_PERF_SEL_SC4_PA4_DATA_FIFO_RD__GFX101PLUS       = 0x00000228,
    PH_PERF_SEL_SC4_PA4_DATA_FIFO_WE__GFX101PLUS       = 0x00000229,
    PH_PERF_SEL_SC4_PA4_FIFO_EMPTY__GFX101PLUS         = 0x0000022a,
    PH_PERF_SEL_SC4_PA4_FIFO_FULL__GFX101PLUS          = 0x0000022b,
    PH_PERF_SEL_SC4_PA4_NULL_WE__GFX101PLUS            = 0x0000022c,
    PH_PERF_SEL_SC4_PA4_EVENT_WE__GFX101PLUS           = 0x0000022d,
    PH_PERF_SEL_SC4_PA4_FPOV_WE__GFX101PLUS            = 0x0000022e,
    PH_PERF_SEL_SC4_PA4_LPOV_WE__GFX101PLUS            = 0x0000022f,
    PH_PERF_SEL_SC4_PA4_EOP_WE__GFX101PLUS             = 0x00000230,
    PH_PERF_SEL_SC4_PA4_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000231,
    PH_PERF_SEL_SC4_PA4_EOPG_WE__GFX101PLUS            = 0x00000232,
    PH_PERF_SEL_SC4_PA4_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000233,
    PH_PERF_SEL_SC4_PA5_DATA_FIFO_RD__GFX101PLUS       = 0x00000234,
    PH_PERF_SEL_SC4_PA5_DATA_FIFO_WE__GFX101PLUS       = 0x00000235,
    PH_PERF_SEL_SC4_PA5_FIFO_EMPTY__GFX101PLUS         = 0x00000236,
    PH_PERF_SEL_SC4_PA5_FIFO_FULL__GFX101PLUS          = 0x00000237,
    PH_PERF_SEL_SC4_PA5_NULL_WE__GFX101PLUS            = 0x00000238,
    PH_PERF_SEL_SC4_PA5_EVENT_WE__GFX101PLUS           = 0x00000239,
    PH_PERF_SEL_SC4_PA5_FPOV_WE__GFX101PLUS            = 0x0000023a,
    PH_PERF_SEL_SC4_PA5_LPOV_WE__GFX101PLUS            = 0x0000023b,
    PH_PERF_SEL_SC4_PA5_EOP_WE__GFX101PLUS             = 0x0000023c,
    PH_PERF_SEL_SC4_PA5_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x0000023d,
    PH_PERF_SEL_SC4_PA5_EOPG_WE__GFX101PLUS            = 0x0000023e,
    PH_PERF_SEL_SC4_PA5_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000023f,
    PH_PERF_SEL_SC4_PA6_DATA_FIFO_RD__GFX101PLUS       = 0x00000240,
    PH_PERF_SEL_SC4_PA6_DATA_FIFO_WE__GFX101PLUS       = 0x00000241,
    PH_PERF_SEL_SC4_PA6_FIFO_EMPTY__GFX101PLUS         = 0x00000242,
    PH_PERF_SEL_SC4_PA6_FIFO_FULL__GFX101PLUS          = 0x00000243,
    PH_PERF_SEL_SC4_PA6_NULL_WE__GFX101PLUS            = 0x00000244,
    PH_PERF_SEL_SC4_PA6_EVENT_WE__GFX101PLUS           = 0x00000245,
    PH_PERF_SEL_SC4_PA6_FPOV_WE__GFX101PLUS            = 0x00000246,
    PH_PERF_SEL_SC4_PA6_LPOV_WE__GFX101PLUS            = 0x00000247,
    PH_PERF_SEL_SC4_PA6_EOP_WE__GFX101PLUS             = 0x00000248,
    PH_PERF_SEL_SC4_PA6_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000249,
    PH_PERF_SEL_SC4_PA6_EOPG_WE__GFX101PLUS            = 0x0000024a,
    PH_PERF_SEL_SC4_PA6_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000024b,
    PH_PERF_SEL_SC4_PA7_DATA_FIFO_RD__GFX101PLUS       = 0x0000024c,
    PH_PERF_SEL_SC4_PA7_DATA_FIFO_WE__GFX101PLUS       = 0x0000024d,
    PH_PERF_SEL_SC4_PA7_FIFO_EMPTY__GFX101PLUS         = 0x0000024e,
    PH_PERF_SEL_SC4_PA7_FIFO_FULL__GFX101PLUS          = 0x0000024f,
    PH_PERF_SEL_SC4_PA7_NULL_WE__GFX101PLUS            = 0x00000250,
    PH_PERF_SEL_SC4_PA7_EVENT_WE__GFX101PLUS           = 0x00000251,
    PH_PERF_SEL_SC4_PA7_FPOV_WE__GFX101PLUS            = 0x00000252,
    PH_PERF_SEL_SC4_PA7_LPOV_WE__GFX101PLUS            = 0x00000253,
    PH_PERF_SEL_SC4_PA7_EOP_WE__GFX101PLUS             = 0x00000254,
    PH_PERF_SEL_SC4_PA7_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000255,
    PH_PERF_SEL_SC4_PA7_EOPG_WE__GFX101PLUS            = 0x00000256,
    PH_PERF_SEL_SC4_PA7_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000257,
    PH_PERF_SEL_SC5_SRPS_WINDOW_VALID__GFX101PLUS      = 0x00000258,
    PH_PERF_SEL_SC5_ARB_XFC_ALL_EVENT_OR_PRIM_CYCLES__GFX101PLUS = 0x00000259,
    PH_PERF_SEL_SC5_ARB_XFC_ONLY_PRIM_CYCLES__GFX101PLUS = 0x0000025a,
    PH_PERF_SEL_SC5_ARB_XFC_ONLY_ONE_INC_PER_PRIM__GFX101PLUS = 0x0000025b,
    PH_PERF_SEL_SC5_ARB_STALLED_FROM_BELOW__GFX101PLUS = 0x0000025c,
    PH_PERF_SEL_SC5_ARB_STARVED_FROM_ABOVE__GFX101PLUS = 0x0000025d,
    PH_PERF_SEL_SC5_ARB_STARVED_FROM_ABOVE_WITH_UNSELECTED_FIFO_NOT_EMPTY__GFX101PLUS = 0x0000025e,
    PH_PERF_SEL_SC5_ARB_STARVED_FROM_ABOVE_WITH_UNSELECTED_FIFO_FULL__GFX101PLUS = 0x0000025f,
    PH_PERF_SEL_SC5_ARB_BUSY__GFX101PLUS               = 0x00000260,
    PH_PERF_SEL_SC5_ARB_PA_BUSY_SOP__GFX101PLUS        = 0x00000261,
    PH_PERF_SEL_SC5_ARB_EOP_POP_SYNC_POP__GFX101PLUS   = 0x00000262,
    PH_PERF_SEL_SC5_ARB_EVENT_SYNC_POP__GFX101PLUS     = 0x00000263,
    PH_PERF_SEL_SC5_PS_ENG_MULTICYCLE_BUBBLE__GFX101PLUS = 0x00000264,
    PH_PERF_SEL_SC5_EOP_SYNC_WINDOW__GFX101PLUS        = 0x00000265,
    PH_PERF_SEL_SC5_BUSY_PROCESSING_MULTICYCLE_PRIM__GFX101PLUS = 0x00000266,
    PH_PERF_SEL_SC5_BUSY_CNT_NOT_ZERO__GFX101PLUS      = 0x00000267,
    PH_PERF_SEL_SC5_SEND__GFX101PLUS                   = 0x00000268,
    PH_PERF_SEL_SC5_CREDIT_AT_ZERO_WITH_PENDING_SEND__GFX101PLUS = 0x00000269,
    PH_PERF_SEL_SC5_CREDIT_AT_MAX__GFX101PLUS          = 0x0000026a,
    PH_PERF_SEL_SC5_CREDIT_AT_MAX_NO_PENDING_SEND__GFX101PLUS = 0x0000026b,
    PH_PERF_SEL_SC5_GFX_PIPE_EVENT_PROVOKED_TRANSITION__GFX101PLUS = 0x0000026c,
    PH_PERF_SEL_SC5_GFX_PIPE_EOP_PRIM_PROVOKED_TRANSITION__GFX101PLUS = 0x0000026d,
    PH_PERF_SEL_SC5_GFX_PIPE0_TO_1_TRANSITION__GFX101PLUS = 0x0000026e,
    PH_PERF_SEL_SC5_GFX_PIPE1_TO_0_TRANSITION__GFX101PLUS = 0x0000026f,
    PH_PERF_SEL_SC5_PA0_DATA_FIFO_RD__GFX101PLUS       = 0x00000270,
    PH_PERF_SEL_SC5_PA0_DATA_FIFO_WE__GFX101PLUS       = 0x00000271,
    PH_PERF_SEL_SC5_PA0_FIFO_EMPTY__GFX101PLUS         = 0x00000272,
    PH_PERF_SEL_SC5_PA0_FIFO_FULL__GFX101PLUS          = 0x00000273,
    PH_PERF_SEL_SC5_PA0_NULL_WE__GFX101PLUS            = 0x00000274,
    PH_PERF_SEL_SC5_PA0_EVENT_WE__GFX101PLUS           = 0x00000275,
    PH_PERF_SEL_SC5_PA0_FPOV_WE__GFX101PLUS            = 0x00000276,
    PH_PERF_SEL_SC5_PA0_LPOV_WE__GFX101PLUS            = 0x00000277,
    PH_PERF_SEL_SC5_PA0_EOP_WE__GFX101PLUS             = 0x00000278,
    PH_PERF_SEL_SC5_PA0_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000279,
    PH_PERF_SEL_SC5_PA0_EOPG_WE__GFX101PLUS            = 0x0000027a,
    PH_PERF_SEL_SC5_PA0_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000027b,
    PH_PERF_SEL_SC5_PA1_DATA_FIFO_RD__GFX101PLUS       = 0x0000027c,
    PH_PERF_SEL_SC5_PA1_DATA_FIFO_WE__GFX101PLUS       = 0x0000027d,
    PH_PERF_SEL_SC5_PA1_FIFO_EMPTY__GFX101PLUS         = 0x0000027e,
    PH_PERF_SEL_SC5_PA1_FIFO_FULL__GFX101PLUS          = 0x0000027f,
    PH_PERF_SEL_SC5_PA1_NULL_WE__GFX101PLUS            = 0x00000280,
    PH_PERF_SEL_SC5_PA1_EVENT_WE__GFX101PLUS           = 0x00000281,
    PH_PERF_SEL_SC5_PA1_FPOV_WE__GFX101PLUS            = 0x00000282,
    PH_PERF_SEL_SC5_PA1_LPOV_WE__GFX101PLUS            = 0x00000283,
    PH_PERF_SEL_SC5_PA1_EOP_WE__GFX101PLUS             = 0x00000284,
    PH_PERF_SEL_SC5_PA1_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000285,
    PH_PERF_SEL_SC5_PA1_EOPG_WE__GFX101PLUS            = 0x00000286,
    PH_PERF_SEL_SC5_PA1_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000287,
    PH_PERF_SEL_SC5_PA2_DATA_FIFO_RD__GFX101PLUS       = 0x00000288,
    PH_PERF_SEL_SC5_PA2_DATA_FIFO_WE__GFX101PLUS       = 0x00000289,
    PH_PERF_SEL_SC5_PA2_FIFO_EMPTY__GFX101PLUS         = 0x0000028a,
    PH_PERF_SEL_SC5_PA2_FIFO_FULL__GFX101PLUS          = 0x0000028b,
    PH_PERF_SEL_SC5_PA2_NULL_WE__GFX101PLUS            = 0x0000028c,
    PH_PERF_SEL_SC5_PA2_EVENT_WE__GFX101PLUS           = 0x0000028d,
    PH_PERF_SEL_SC5_PA2_FPOV_WE__GFX101PLUS            = 0x0000028e,
    PH_PERF_SEL_SC5_PA2_LPOV_WE__GFX101PLUS            = 0x0000028f,
    PH_PERF_SEL_SC5_PA2_EOP_WE__GFX101PLUS             = 0x00000290,
    PH_PERF_SEL_SC5_PA2_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000291,
    PH_PERF_SEL_SC5_PA2_EOPG_WE__GFX101PLUS            = 0x00000292,
    PH_PERF_SEL_SC5_PA2_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000293,
    PH_PERF_SEL_SC5_PA3_DATA_FIFO_RD__GFX101PLUS       = 0x00000294,
    PH_PERF_SEL_SC5_PA3_DATA_FIFO_WE__GFX101PLUS       = 0x00000295,
    PH_PERF_SEL_SC5_PA3_FIFO_EMPTY__GFX101PLUS         = 0x00000296,
    PH_PERF_SEL_SC5_PA3_FIFO_FULL__GFX101PLUS          = 0x00000297,
    PH_PERF_SEL_SC5_PA3_NULL_WE__GFX101PLUS            = 0x00000298,
    PH_PERF_SEL_SC5_PA3_EVENT_WE__GFX101PLUS           = 0x00000299,
    PH_PERF_SEL_SC5_PA3_FPOV_WE__GFX101PLUS            = 0x0000029a,
    PH_PERF_SEL_SC5_PA3_LPOV_WE__GFX101PLUS            = 0x0000029b,
    PH_PERF_SEL_SC5_PA3_EOP_WE__GFX101PLUS             = 0x0000029c,
    PH_PERF_SEL_SC5_PA3_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x0000029d,
    PH_PERF_SEL_SC5_PA3_EOPG_WE__GFX101PLUS            = 0x0000029e,
    PH_PERF_SEL_SC5_PA3_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000029f,
    PH_PERF_SEL_SC5_PA4_DATA_FIFO_RD__GFX101PLUS       = 0x000002a0,
    PH_PERF_SEL_SC5_PA4_DATA_FIFO_WE__GFX101PLUS       = 0x000002a1,
    PH_PERF_SEL_SC5_PA4_FIFO_EMPTY__GFX101PLUS         = 0x000002a2,
    PH_PERF_SEL_SC5_PA4_FIFO_FULL__GFX101PLUS          = 0x000002a3,
    PH_PERF_SEL_SC5_PA4_NULL_WE__GFX101PLUS            = 0x000002a4,
    PH_PERF_SEL_SC5_PA4_EVENT_WE__GFX101PLUS           = 0x000002a5,
    PH_PERF_SEL_SC5_PA4_FPOV_WE__GFX101PLUS            = 0x000002a6,
    PH_PERF_SEL_SC5_PA4_LPOV_WE__GFX101PLUS            = 0x000002a7,
    PH_PERF_SEL_SC5_PA4_EOP_WE__GFX101PLUS             = 0x000002a8,
    PH_PERF_SEL_SC5_PA4_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000002a9,
    PH_PERF_SEL_SC5_PA4_EOPG_WE__GFX101PLUS            = 0x000002aa,
    PH_PERF_SEL_SC5_PA4_DEALLOC_4_0_RD__GFX101PLUS     = 0x000002ab,
    PH_PERF_SEL_SC5_PA5_DATA_FIFO_RD__GFX101PLUS       = 0x000002ac,
    PH_PERF_SEL_SC5_PA5_DATA_FIFO_WE__GFX101PLUS       = 0x000002ad,
    PH_PERF_SEL_SC5_PA5_FIFO_EMPTY__GFX101PLUS         = 0x000002ae,
    PH_PERF_SEL_SC5_PA5_FIFO_FULL__GFX101PLUS          = 0x000002af,
    PH_PERF_SEL_SC5_PA5_NULL_WE__GFX101PLUS            = 0x000002b0,
    PH_PERF_SEL_SC5_PA5_EVENT_WE__GFX101PLUS           = 0x000002b1,
    PH_PERF_SEL_SC5_PA5_FPOV_WE__GFX101PLUS            = 0x000002b2,
    PH_PERF_SEL_SC5_PA5_LPOV_WE__GFX101PLUS            = 0x000002b3,
    PH_PERF_SEL_SC5_PA5_EOP_WE__GFX101PLUS             = 0x000002b4,
    PH_PERF_SEL_SC5_PA5_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000002b5,
    PH_PERF_SEL_SC5_PA5_EOPG_WE__GFX101PLUS            = 0x000002b6,
    PH_PERF_SEL_SC5_PA5_DEALLOC_4_0_RD__GFX101PLUS     = 0x000002b7,
    PH_PERF_SEL_SC5_PA6_DATA_FIFO_RD__GFX101PLUS       = 0x000002b8,
    PH_PERF_SEL_SC5_PA6_DATA_FIFO_WE__GFX101PLUS       = 0x000002b9,
    PH_PERF_SEL_SC5_PA6_FIFO_EMPTY__GFX101PLUS         = 0x000002ba,
    PH_PERF_SEL_SC5_PA6_FIFO_FULL__GFX101PLUS          = 0x000002bb,
    PH_PERF_SEL_SC5_PA6_NULL_WE__GFX101PLUS            = 0x000002bc,
    PH_PERF_SEL_SC5_PA6_EVENT_WE__GFX101PLUS           = 0x000002bd,
    PH_PERF_SEL_SC5_PA6_FPOV_WE__GFX101PLUS            = 0x000002be,
    PH_PERF_SEL_SC5_PA6_LPOV_WE__GFX101PLUS            = 0x000002bf,
    PH_PERF_SEL_SC5_PA6_EOP_WE__GFX101PLUS             = 0x000002c0,
    PH_PERF_SEL_SC5_PA6_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000002c1,
    PH_PERF_SEL_SC5_PA6_EOPG_WE__GFX101PLUS            = 0x000002c2,
    PH_PERF_SEL_SC5_PA6_DEALLOC_4_0_RD__GFX101PLUS     = 0x000002c3,
    PH_PERF_SEL_SC5_PA7_DATA_FIFO_RD__GFX101PLUS       = 0x000002c4,
    PH_PERF_SEL_SC5_PA7_DATA_FIFO_WE__GFX101PLUS       = 0x000002c5,
    PH_PERF_SEL_SC5_PA7_FIFO_EMPTY__GFX101PLUS         = 0x000002c6,
    PH_PERF_SEL_SC5_PA7_FIFO_FULL__GFX101PLUS          = 0x000002c7,
    PH_PERF_SEL_SC5_PA7_NULL_WE__GFX101PLUS            = 0x000002c8,
    PH_PERF_SEL_SC5_PA7_EVENT_WE__GFX101PLUS           = 0x000002c9,
    PH_PERF_SEL_SC5_PA7_FPOV_WE__GFX101PLUS            = 0x000002ca,
    PH_PERF_SEL_SC5_PA7_LPOV_WE__GFX101PLUS            = 0x000002cb,
    PH_PERF_SEL_SC5_PA7_EOP_WE__GFX101PLUS             = 0x000002cc,
    PH_PERF_SEL_SC5_PA7_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000002cd,
    PH_PERF_SEL_SC5_PA7_EOPG_WE__GFX101PLUS            = 0x000002ce,
    PH_PERF_SEL_SC5_PA7_DEALLOC_4_0_RD__GFX101PLUS     = 0x000002cf,
    PH_PERF_SEL_SC6_SRPS_WINDOW_VALID__GFX101PLUS      = 0x000002d0,
    PH_PERF_SEL_SC6_ARB_XFC_ALL_EVENT_OR_PRIM_CYCLES__GFX101PLUS = 0x000002d1,
    PH_PERF_SEL_SC6_ARB_XFC_ONLY_PRIM_CYCLES__GFX101PLUS = 0x000002d2,
    PH_PERF_SEL_SC6_ARB_XFC_ONLY_ONE_INC_PER_PRIM__GFX101PLUS = 0x000002d3,
    PH_PERF_SEL_SC6_ARB_STALLED_FROM_BELOW__GFX101PLUS = 0x000002d4,
    PH_PERF_SEL_SC6_ARB_STARVED_FROM_ABOVE__GFX101PLUS = 0x000002d5,
    PH_PERF_SEL_SC6_ARB_STARVED_FROM_ABOVE_WITH_UNSELECTED_FIFO_NOT_EMPTY__GFX101PLUS = 0x000002d6,
    PH_PERF_SEL_SC6_ARB_STARVED_FROM_ABOVE_WITH_UNSELECTED_FIFO_FULL__GFX101PLUS = 0x000002d7,
    PH_PERF_SEL_SC6_ARB_BUSY__GFX101PLUS               = 0x000002d8,
    PH_PERF_SEL_SC6_ARB_PA_BUSY_SOP__GFX101PLUS        = 0x000002d9,
    PH_PERF_SEL_SC6_ARB_EOP_POP_SYNC_POP__GFX101PLUS   = 0x000002da,
    PH_PERF_SEL_SC6_ARB_EVENT_SYNC_POP__GFX101PLUS     = 0x000002db,
    PH_PERF_SEL_SC6_PS_ENG_MULTICYCLE_BUBBLE__GFX101PLUS = 0x000002dc,
    PH_PERF_SEL_SC6_EOP_SYNC_WINDOW__GFX101PLUS        = 0x000002dd,
    PH_PERF_SEL_SC6_BUSY_PROCESSING_MULTICYCLE_PRIM__GFX101PLUS = 0x000002de,
    PH_PERF_SEL_SC6_BUSY_CNT_NOT_ZERO__GFX101PLUS      = 0x000002df,
    PH_PERF_SEL_SC6_SEND__GFX101PLUS                   = 0x000002e0,
    PH_PERF_SEL_SC6_CREDIT_AT_ZERO_WITH_PENDING_SEND__GFX101PLUS = 0x000002e1,
    PH_PERF_SEL_SC6_CREDIT_AT_MAX__GFX101PLUS          = 0x000002e2,
    PH_PERF_SEL_SC6_CREDIT_AT_MAX_NO_PENDING_SEND__GFX101PLUS = 0x000002e3,
    PH_PERF_SEL_SC6_GFX_PIPE_EVENT_PROVOKED_TRANSITION__GFX101PLUS = 0x000002e4,
    PH_PERF_SEL_SC6_GFX_PIPE_EOP_PRIM_PROVOKED_TRANSITION__GFX101PLUS = 0x000002e5,
    PH_PERF_SEL_SC6_GFX_PIPE0_TO_1_TRANSITION__GFX101PLUS = 0x000002e6,
    PH_PERF_SEL_SC6_GFX_PIPE1_TO_0_TRANSITION__GFX101PLUS = 0x000002e7,
    PH_PERF_SEL_SC6_PA0_DATA_FIFO_RD__GFX101PLUS       = 0x000002e8,
    PH_PERF_SEL_SC6_PA0_DATA_FIFO_WE__GFX101PLUS       = 0x000002e9,
    PH_PERF_SEL_SC6_PA0_FIFO_EMPTY__GFX101PLUS         = 0x000002ea,
    PH_PERF_SEL_SC6_PA0_FIFO_FULL__GFX101PLUS          = 0x000002eb,
    PH_PERF_SEL_SC6_PA0_NULL_WE__GFX101PLUS            = 0x000002ec,
    PH_PERF_SEL_SC6_PA0_EVENT_WE__GFX101PLUS           = 0x000002ed,
    PH_PERF_SEL_SC6_PA0_FPOV_WE__GFX101PLUS            = 0x000002ee,
    PH_PERF_SEL_SC6_PA0_LPOV_WE__GFX101PLUS            = 0x000002ef,
    PH_PERF_SEL_SC6_PA0_EOP_WE__GFX101PLUS             = 0x000002f0,
    PH_PERF_SEL_SC6_PA0_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000002f1,
    PH_PERF_SEL_SC6_PA0_EOPG_WE__GFX101PLUS            = 0x000002f2,
    PH_PERF_SEL_SC6_PA0_DEALLOC_4_0_RD__GFX101PLUS     = 0x000002f3,
    PH_PERF_SEL_SC6_PA1_DATA_FIFO_RD__GFX101PLUS       = 0x000002f4,
    PH_PERF_SEL_SC6_PA1_DATA_FIFO_WE__GFX101PLUS       = 0x000002f5,
    PH_PERF_SEL_SC6_PA1_FIFO_EMPTY__GFX101PLUS         = 0x000002f6,
    PH_PERF_SEL_SC6_PA1_FIFO_FULL__GFX101PLUS          = 0x000002f7,
    PH_PERF_SEL_SC6_PA1_NULL_WE__GFX101PLUS            = 0x000002f8,
    PH_PERF_SEL_SC6_PA1_EVENT_WE__GFX101PLUS           = 0x000002f9,
    PH_PERF_SEL_SC6_PA1_FPOV_WE__GFX101PLUS            = 0x000002fa,
    PH_PERF_SEL_SC6_PA1_LPOV_WE__GFX101PLUS            = 0x000002fb,
    PH_PERF_SEL_SC6_PA1_EOP_WE__GFX101PLUS             = 0x000002fc,
    PH_PERF_SEL_SC6_PA1_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000002fd,
    PH_PERF_SEL_SC6_PA1_EOPG_WE__GFX101PLUS            = 0x000002fe,
    PH_PERF_SEL_SC6_PA1_DEALLOC_4_0_RD__GFX101PLUS     = 0x000002ff,
    PH_PERF_SEL_SC6_PA2_DATA_FIFO_RD__GFX101PLUS       = 0x00000300,
    PH_PERF_SEL_SC6_PA2_DATA_FIFO_WE__GFX101PLUS       = 0x00000301,
    PH_PERF_SEL_SC6_PA2_FIFO_EMPTY__GFX101PLUS         = 0x00000302,
    PH_PERF_SEL_SC6_PA2_FIFO_FULL__GFX101PLUS          = 0x00000303,
    PH_PERF_SEL_SC6_PA2_NULL_WE__GFX101PLUS            = 0x00000304,
    PH_PERF_SEL_SC6_PA2_EVENT_WE__GFX101PLUS           = 0x00000305,
    PH_PERF_SEL_SC6_PA2_FPOV_WE__GFX101PLUS            = 0x00000306,
    PH_PERF_SEL_SC6_PA2_LPOV_WE__GFX101PLUS            = 0x00000307,
    PH_PERF_SEL_SC6_PA2_EOP_WE__GFX101PLUS             = 0x00000308,
    PH_PERF_SEL_SC6_PA2_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000309,
    PH_PERF_SEL_SC6_PA2_EOPG_WE__GFX101PLUS            = 0x0000030a,
    PH_PERF_SEL_SC6_PA2_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000030b,
    PH_PERF_SEL_SC6_PA3_DATA_FIFO_RD__GFX101PLUS       = 0x0000030c,
    PH_PERF_SEL_SC6_PA3_DATA_FIFO_WE__GFX101PLUS       = 0x0000030d,
    PH_PERF_SEL_SC6_PA3_FIFO_EMPTY__GFX101PLUS         = 0x0000030e,
    PH_PERF_SEL_SC6_PA3_FIFO_FULL__GFX101PLUS          = 0x0000030f,
    PH_PERF_SEL_SC6_PA3_NULL_WE__GFX101PLUS            = 0x00000310,
    PH_PERF_SEL_SC6_PA3_EVENT_WE__GFX101PLUS           = 0x00000311,
    PH_PERF_SEL_SC6_PA3_FPOV_WE__GFX101PLUS            = 0x00000312,
    PH_PERF_SEL_SC6_PA3_LPOV_WE__GFX101PLUS            = 0x00000313,
    PH_PERF_SEL_SC6_PA3_EOP_WE__GFX101PLUS             = 0x00000314,
    PH_PERF_SEL_SC6_PA3_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000315,
    PH_PERF_SEL_SC6_PA3_EOPG_WE__GFX101PLUS            = 0x00000316,
    PH_PERF_SEL_SC6_PA3_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000317,
    PH_PERF_SEL_SC6_PA4_DATA_FIFO_RD__GFX101PLUS       = 0x00000318,
    PH_PERF_SEL_SC6_PA4_DATA_FIFO_WE__GFX101PLUS       = 0x00000319,
    PH_PERF_SEL_SC6_PA4_FIFO_EMPTY__GFX101PLUS         = 0x0000031a,
    PH_PERF_SEL_SC6_PA4_FIFO_FULL__GFX101PLUS          = 0x0000031b,
    PH_PERF_SEL_SC6_PA4_NULL_WE__GFX101PLUS            = 0x0000031c,
    PH_PERF_SEL_SC6_PA4_EVENT_WE__GFX101PLUS           = 0x0000031d,
    PH_PERF_SEL_SC6_PA4_FPOV_WE__GFX101PLUS            = 0x0000031e,
    PH_PERF_SEL_SC6_PA4_LPOV_WE__GFX101PLUS            = 0x0000031f,
    PH_PERF_SEL_SC6_PA4_EOP_WE__GFX101PLUS             = 0x00000320,
    PH_PERF_SEL_SC6_PA4_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000321,
    PH_PERF_SEL_SC6_PA4_EOPG_WE__GFX101PLUS            = 0x00000322,
    PH_PERF_SEL_SC6_PA4_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000323,
    PH_PERF_SEL_SC6_PA5_DATA_FIFO_RD__GFX101PLUS       = 0x00000324,
    PH_PERF_SEL_SC6_PA5_DATA_FIFO_WE__GFX101PLUS       = 0x00000325,
    PH_PERF_SEL_SC6_PA5_FIFO_EMPTY__GFX101PLUS         = 0x00000326,
    PH_PERF_SEL_SC6_PA5_FIFO_FULL__GFX101PLUS          = 0x00000327,
    PH_PERF_SEL_SC6_PA5_NULL_WE__GFX101PLUS            = 0x00000328,
    PH_PERF_SEL_SC6_PA5_EVENT_WE__GFX101PLUS           = 0x00000329,
    PH_PERF_SEL_SC6_PA5_FPOV_WE__GFX101PLUS            = 0x0000032a,
    PH_PERF_SEL_SC6_PA5_LPOV_WE__GFX101PLUS            = 0x0000032b,
    PH_PERF_SEL_SC6_PA5_EOP_WE__GFX101PLUS             = 0x0000032c,
    PH_PERF_SEL_SC6_PA5_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x0000032d,
    PH_PERF_SEL_SC6_PA5_EOPG_WE__GFX101PLUS            = 0x0000032e,
    PH_PERF_SEL_SC6_PA5_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000032f,
    PH_PERF_SEL_SC6_PA6_DATA_FIFO_RD__GFX101PLUS       = 0x00000330,
    PH_PERF_SEL_SC6_PA6_DATA_FIFO_WE__GFX101PLUS       = 0x00000331,
    PH_PERF_SEL_SC6_PA6_FIFO_EMPTY__GFX101PLUS         = 0x00000332,
    PH_PERF_SEL_SC6_PA6_FIFO_FULL__GFX101PLUS          = 0x00000333,
    PH_PERF_SEL_SC6_PA6_NULL_WE__GFX101PLUS            = 0x00000334,
    PH_PERF_SEL_SC6_PA6_EVENT_WE__GFX101PLUS           = 0x00000335,
    PH_PERF_SEL_SC6_PA6_FPOV_WE__GFX101PLUS            = 0x00000336,
    PH_PERF_SEL_SC6_PA6_LPOV_WE__GFX101PLUS            = 0x00000337,
    PH_PERF_SEL_SC6_PA6_EOP_WE__GFX101PLUS             = 0x00000338,
    PH_PERF_SEL_SC6_PA6_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000339,
    PH_PERF_SEL_SC6_PA6_EOPG_WE__GFX101PLUS            = 0x0000033a,
    PH_PERF_SEL_SC6_PA6_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000033b,
    PH_PERF_SEL_SC6_PA7_DATA_FIFO_RD__GFX101PLUS       = 0x0000033c,
    PH_PERF_SEL_SC6_PA7_DATA_FIFO_WE__GFX101PLUS       = 0x0000033d,
    PH_PERF_SEL_SC6_PA7_FIFO_EMPTY__GFX101PLUS         = 0x0000033e,
    PH_PERF_SEL_SC6_PA7_FIFO_FULL__GFX101PLUS          = 0x0000033f,
    PH_PERF_SEL_SC6_PA7_NULL_WE__GFX101PLUS            = 0x00000340,
    PH_PERF_SEL_SC6_PA7_EVENT_WE__GFX101PLUS           = 0x00000341,
    PH_PERF_SEL_SC6_PA7_FPOV_WE__GFX101PLUS            = 0x00000342,
    PH_PERF_SEL_SC6_PA7_LPOV_WE__GFX101PLUS            = 0x00000343,
    PH_PERF_SEL_SC6_PA7_EOP_WE__GFX101PLUS             = 0x00000344,
    PH_PERF_SEL_SC6_PA7_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000345,
    PH_PERF_SEL_SC6_PA7_EOPG_WE__GFX101PLUS            = 0x00000346,
    PH_PERF_SEL_SC6_PA7_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000347,
    PH_PERF_SEL_SC7_SRPS_WINDOW_VALID__GFX101PLUS      = 0x00000348,
    PH_PERF_SEL_SC7_ARB_XFC_ALL_EVENT_OR_PRIM_CYCLES__GFX101PLUS = 0x00000349,
    PH_PERF_SEL_SC7_ARB_XFC_ONLY_PRIM_CYCLES__GFX101PLUS = 0x0000034a,
    PH_PERF_SEL_SC7_ARB_XFC_ONLY_ONE_INC_PER_PRIM__GFX101PLUS = 0x0000034b,
    PH_PERF_SEL_SC7_ARB_STALLED_FROM_BELOW__GFX101PLUS = 0x0000034c,
    PH_PERF_SEL_SC7_ARB_STARVED_FROM_ABOVE__GFX101PLUS = 0x0000034d,
    PH_PERF_SEL_SC7_ARB_STARVED_FROM_ABOVE_WITH_UNSELECTED_FIFO_NOT_EMPTY__GFX101PLUS = 0x0000034e,
    PH_PERF_SEL_SC7_ARB_STARVED_FROM_ABOVE_WITH_UNSELECTED_FIFO_FULL__GFX101PLUS = 0x0000034f,
    PH_PERF_SEL_SC7_ARB_BUSY__GFX101PLUS               = 0x00000350,
    PH_PERF_SEL_SC7_ARB_PA_BUSY_SOP__GFX101PLUS        = 0x00000351,
    PH_PERF_SEL_SC7_ARB_EOP_POP_SYNC_POP__GFX101PLUS   = 0x00000352,
    PH_PERF_SEL_SC7_ARB_EVENT_SYNC_POP__GFX101PLUS     = 0x00000353,
    PH_PERF_SEL_SC7_PS_ENG_MULTICYCLE_BUBBLE__GFX101PLUS = 0x00000354,
    PH_PERF_SEL_SC7_EOP_SYNC_WINDOW__GFX101PLUS        = 0x00000355,
    PH_PERF_SEL_SC7_BUSY_PROCESSING_MULTICYCLE_PRIM__GFX101PLUS = 0x00000356,
    PH_PERF_SEL_SC7_BUSY_CNT_NOT_ZERO__GFX101PLUS      = 0x00000357,
    PH_PERF_SEL_SC7_SEND__GFX101PLUS                   = 0x00000358,
    PH_PERF_SEL_SC7_CREDIT_AT_ZERO_WITH_PENDING_SEND__GFX101PLUS = 0x00000359,
    PH_PERF_SEL_SC7_CREDIT_AT_MAX__GFX101PLUS          = 0x0000035a,
    PH_PERF_SEL_SC7_CREDIT_AT_MAX_NO_PENDING_SEND__GFX101PLUS = 0x0000035b,
    PH_PERF_SEL_SC7_GFX_PIPE_EVENT_PROVOKED_TRANSITION__GFX101PLUS = 0x0000035c,
    PH_PERF_SEL_SC7_GFX_PIPE_EOP_PRIM_PROVOKED_TRANSITION__GFX101PLUS = 0x0000035d,
    PH_PERF_SEL_SC7_GFX_PIPE0_TO_1_TRANSITION__GFX101PLUS = 0x0000035e,
    PH_PERF_SEL_SC7_GFX_PIPE1_TO_0_TRANSITION__GFX101PLUS = 0x0000035f,
    PH_PERF_SEL_SC7_PA0_DATA_FIFO_RD__GFX101PLUS       = 0x00000360,
    PH_PERF_SEL_SC7_PA0_DATA_FIFO_WE__GFX101PLUS       = 0x00000361,
    PH_PERF_SEL_SC7_PA0_FIFO_EMPTY__GFX101PLUS         = 0x00000362,
    PH_PERF_SEL_SC7_PA0_FIFO_FULL__GFX101PLUS          = 0x00000363,
    PH_PERF_SEL_SC7_PA0_NULL_WE__GFX101PLUS            = 0x00000364,
    PH_PERF_SEL_SC7_PA0_EVENT_WE__GFX101PLUS           = 0x00000365,
    PH_PERF_SEL_SC7_PA0_FPOV_WE__GFX101PLUS            = 0x00000366,
    PH_PERF_SEL_SC7_PA0_LPOV_WE__GFX101PLUS            = 0x00000367,
    PH_PERF_SEL_SC7_PA0_EOP_WE__GFX101PLUS             = 0x00000368,
    PH_PERF_SEL_SC7_PA0_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000369,
    PH_PERF_SEL_SC7_PA0_EOPG_WE__GFX101PLUS            = 0x0000036a,
    PH_PERF_SEL_SC7_PA0_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000036b,
    PH_PERF_SEL_SC7_PA1_DATA_FIFO_RD__GFX101PLUS       = 0x0000036c,
    PH_PERF_SEL_SC7_PA1_DATA_FIFO_WE__GFX101PLUS       = 0x0000036d,
    PH_PERF_SEL_SC7_PA1_FIFO_EMPTY__GFX101PLUS         = 0x0000036e,
    PH_PERF_SEL_SC7_PA1_FIFO_FULL__GFX101PLUS          = 0x0000036f,
    PH_PERF_SEL_SC7_PA1_NULL_WE__GFX101PLUS            = 0x00000370,
    PH_PERF_SEL_SC7_PA1_EVENT_WE__GFX101PLUS           = 0x00000371,
    PH_PERF_SEL_SC7_PA1_FPOV_WE__GFX101PLUS            = 0x00000372,
    PH_PERF_SEL_SC7_PA1_LPOV_WE__GFX101PLUS            = 0x00000373,
    PH_PERF_SEL_SC7_PA1_EOP_WE__GFX101PLUS             = 0x00000374,
    PH_PERF_SEL_SC7_PA1_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000375,
    PH_PERF_SEL_SC7_PA1_EOPG_WE__GFX101PLUS            = 0x00000376,
    PH_PERF_SEL_SC7_PA1_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000377,
    PH_PERF_SEL_SC7_PA2_DATA_FIFO_RD__GFX101PLUS       = 0x00000378,
    PH_PERF_SEL_SC7_PA2_DATA_FIFO_WE__GFX101PLUS       = 0x00000379,
    PH_PERF_SEL_SC7_PA2_FIFO_EMPTY__GFX101PLUS         = 0x0000037a,
    PH_PERF_SEL_SC7_PA2_FIFO_FULL__GFX101PLUS          = 0x0000037b,
    PH_PERF_SEL_SC7_PA2_NULL_WE__GFX101PLUS            = 0x0000037c,
    PH_PERF_SEL_SC7_PA2_EVENT_WE__GFX101PLUS           = 0x0000037d,
    PH_PERF_SEL_SC7_PA2_FPOV_WE__GFX101PLUS            = 0x0000037e,
    PH_PERF_SEL_SC7_PA2_LPOV_WE__GFX101PLUS            = 0x0000037f,
    PH_PERF_SEL_SC7_PA2_EOP_WE__GFX101PLUS             = 0x00000380,
    PH_PERF_SEL_SC7_PA2_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000381,
    PH_PERF_SEL_SC7_PA2_EOPG_WE__GFX101PLUS            = 0x00000382,
    PH_PERF_SEL_SC7_PA2_DEALLOC_4_0_RD__GFX101PLUS     = 0x00000383,
    PH_PERF_SEL_SC7_PA3_DATA_FIFO_RD__GFX101PLUS       = 0x00000384,
    PH_PERF_SEL_SC7_PA3_DATA_FIFO_WE__GFX101PLUS       = 0x00000385,
    PH_PERF_SEL_SC7_PA3_FIFO_EMPTY__GFX101PLUS         = 0x00000386,
    PH_PERF_SEL_SC7_PA3_FIFO_FULL__GFX101PLUS          = 0x00000387,
    PH_PERF_SEL_SC7_PA3_NULL_WE__GFX101PLUS            = 0x00000388,
    PH_PERF_SEL_SC7_PA3_EVENT_WE__GFX101PLUS           = 0x00000389,
    PH_PERF_SEL_SC7_PA3_FPOV_WE__GFX101PLUS            = 0x0000038a,
    PH_PERF_SEL_SC7_PA3_LPOV_WE__GFX101PLUS            = 0x0000038b,
    PH_PERF_SEL_SC7_PA3_EOP_WE__GFX101PLUS             = 0x0000038c,
    PH_PERF_SEL_SC7_PA3_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x0000038d,
    PH_PERF_SEL_SC7_PA3_EOPG_WE__GFX101PLUS            = 0x0000038e,
    PH_PERF_SEL_SC7_PA3_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000038f,
    PH_PERF_SEL_SC7_PA4_DATA_FIFO_RD__GFX101PLUS       = 0x00000390,
    PH_PERF_SEL_SC7_PA4_DATA_FIFO_WE__GFX101PLUS       = 0x00000391,
    PH_PERF_SEL_SC7_PA4_FIFO_EMPTY__GFX101PLUS         = 0x00000392,
    PH_PERF_SEL_SC7_PA4_FIFO_FULL__GFX101PLUS          = 0x00000393,
    PH_PERF_SEL_SC7_PA4_NULL_WE__GFX101PLUS            = 0x00000394,
    PH_PERF_SEL_SC7_PA4_EVENT_WE__GFX101PLUS           = 0x00000395,
    PH_PERF_SEL_SC7_PA4_FPOV_WE__GFX101PLUS            = 0x00000396,
    PH_PERF_SEL_SC7_PA4_LPOV_WE__GFX101PLUS            = 0x00000397,
    PH_PERF_SEL_SC7_PA4_EOP_WE__GFX101PLUS             = 0x00000398,
    PH_PERF_SEL_SC7_PA4_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x00000399,
    PH_PERF_SEL_SC7_PA4_EOPG_WE__GFX101PLUS            = 0x0000039a,
    PH_PERF_SEL_SC7_PA4_DEALLOC_4_0_RD__GFX101PLUS     = 0x0000039b,
    PH_PERF_SEL_SC7_PA5_DATA_FIFO_RD__GFX101PLUS       = 0x0000039c,
    PH_PERF_SEL_SC7_PA5_DATA_FIFO_WE__GFX101PLUS       = 0x0000039d,
    PH_PERF_SEL_SC7_PA5_FIFO_EMPTY__GFX101PLUS         = 0x0000039e,
    PH_PERF_SEL_SC7_PA5_FIFO_FULL__GFX101PLUS          = 0x0000039f,
    PH_PERF_SEL_SC7_PA5_NULL_WE__GFX101PLUS            = 0x000003a0,
    PH_PERF_SEL_SC7_PA5_EVENT_WE__GFX101PLUS           = 0x000003a1,
    PH_PERF_SEL_SC7_PA5_FPOV_WE__GFX101PLUS            = 0x000003a2,
    PH_PERF_SEL_SC7_PA5_LPOV_WE__GFX101PLUS            = 0x000003a3,
    PH_PERF_SEL_SC7_PA5_EOP_WE__GFX101PLUS             = 0x000003a4,
    PH_PERF_SEL_SC7_PA5_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000003a5,
    PH_PERF_SEL_SC7_PA5_EOPG_WE__GFX101PLUS            = 0x000003a6,
    PH_PERF_SEL_SC7_PA5_DEALLOC_4_0_RD__GFX101PLUS     = 0x000003a7,
    PH_PERF_SEL_SC7_PA6_DATA_FIFO_RD__GFX101PLUS       = 0x000003a8,
    PH_PERF_SEL_SC7_PA6_DATA_FIFO_WE__GFX101PLUS       = 0x000003a9,
    PH_PERF_SEL_SC7_PA6_FIFO_EMPTY__GFX101PLUS         = 0x000003aa,
    PH_PERF_SEL_SC7_PA6_FIFO_FULL__GFX101PLUS          = 0x000003ab,
    PH_PERF_SEL_SC7_PA6_NULL_WE__GFX101PLUS            = 0x000003ac,
    PH_PERF_SEL_SC7_PA6_EVENT_WE__GFX101PLUS           = 0x000003ad,
    PH_PERF_SEL_SC7_PA6_FPOV_WE__GFX101PLUS            = 0x000003ae,
    PH_PERF_SEL_SC7_PA6_LPOV_WE__GFX101PLUS            = 0x000003af,
    PH_PERF_SEL_SC7_PA6_EOP_WE__GFX101PLUS             = 0x000003b0,
    PH_PERF_SEL_SC7_PA6_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000003b1,
    PH_PERF_SEL_SC7_PA6_EOPG_WE__GFX101PLUS            = 0x000003b2,
    PH_PERF_SEL_SC7_PA6_DEALLOC_4_0_RD__GFX101PLUS     = 0x000003b3,
    PH_PERF_SEL_SC7_PA7_DATA_FIFO_RD__GFX101PLUS       = 0x000003b4,
    PH_PERF_SEL_SC7_PA7_DATA_FIFO_WE__GFX101PLUS       = 0x000003b5,
    PH_PERF_SEL_SC7_PA7_FIFO_EMPTY__GFX101PLUS         = 0x000003b6,
    PH_PERF_SEL_SC7_PA7_FIFO_FULL__GFX101PLUS          = 0x000003b7,
    PH_PERF_SEL_SC7_PA7_NULL_WE__GFX101PLUS            = 0x000003b8,
    PH_PERF_SEL_SC7_PA7_EVENT_WE__GFX101PLUS           = 0x000003b9,
    PH_PERF_SEL_SC7_PA7_FPOV_WE__GFX101PLUS            = 0x000003ba,
    PH_PERF_SEL_SC7_PA7_LPOV_WE__GFX101PLUS            = 0x000003bb,
    PH_PERF_SEL_SC7_PA7_EOP_WE__GFX101PLUS             = 0x000003bc,
    PH_PERF_SEL_SC7_PA7_DATA_FIFO_EOP_RD__GFX101PLUS   = 0x000003bd,
    PH_PERF_SEL_SC7_PA7_EOPG_WE__GFX101PLUS            = 0x000003be,
    PH_PERF_SEL_SC7_PA7_DEALLOC_4_0_RD__GFX101PLUS     = 0x000003bf,
} PH_PERFCNT_SEL;

constexpr unsigned int MaxPhPerfcntSelGfx101Plus       = PH_PERF_SEL_SC7_PA7_DEALLOC_4_0_RD__GFX101PLUS;

typedef enum PipeConfig {
    ADDR_SURF_P2                                       = 0x00000000,
    ADDR_SURF_P2_RESERVED0                             = 0x00000001,
    ADDR_SURF_P2_RESERVED1                             = 0x00000002,
    ADDR_SURF_P2_RESERVED2                             = 0x00000003,
    ADDR_SURF_P4_8x16                                  = 0x00000004,
    ADDR_SURF_P4_16x16                                 = 0x00000005,
    ADDR_SURF_P4_16x32                                 = 0x00000006,
    ADDR_SURF_P4_32x32                                 = 0x00000007,
    ADDR_SURF_P8_16x16_8x16                            = 0x00000008,
    ADDR_SURF_P8_16x32_8x16                            = 0x00000009,
    ADDR_SURF_P8_32x32_8x16                            = 0x0000000a,
    ADDR_SURF_P8_16x32_16x16                           = 0x0000000b,
    ADDR_SURF_P8_32x32_16x16                           = 0x0000000c,
    ADDR_SURF_P8_32x32_16x32                           = 0x0000000d,
    ADDR_SURF_P8_32x64_32x32                           = 0x0000000e,
    ADDR_SURF_P8_RESERVED0                             = 0x0000000f,
    ADDR_SURF_P16_32x32_8x16                           = 0x00000010,
    ADDR_SURF_P16_32x32_16x16                          = 0x00000011,
    ADDR_SURF_P16__GFX10                               = 0x00000012,
} PipeConfig;

typedef enum PipeInterleaveSize {
    ADDR_CONFIG_PIPE_INTERLEAVE_256B                   = 0x00000000,
    ADDR_CONFIG_PIPE_INTERLEAVE_512B                   = 0x00000001,
    ADDR_CONFIG_PIPE_INTERLEAVE_1KB                    = 0x00000002,
    ADDR_CONFIG_PIPE_INTERLEAVE_2KB                    = 0x00000003,
} PipeInterleaveSize;

typedef enum PipeTiling {
    CONFIG_1_PIPE                                      = 0x00000000,
    CONFIG_2_PIPE                                      = 0x00000001,
    CONFIG_4_PIPE                                      = 0x00000002,
    CONFIG_8_PIPE                                      = 0x00000003,
} PipeTiling;

typedef enum PixelPipeCounterId {
    PIXEL_PIPE_OCCLUSION_COUNT_0                       = 0x00000000,
    PIXEL_PIPE_OCCLUSION_COUNT_1                       = 0x00000001,
    PIXEL_PIPE_OCCLUSION_COUNT_2                       = 0x00000002,
    PIXEL_PIPE_OCCLUSION_COUNT_3                       = 0x00000003,
    PIXEL_PIPE_SCREEN_MIN_EXTENTS_0                    = 0x00000004,
    PIXEL_PIPE_SCREEN_MAX_EXTENTS_0                    = 0x00000005,
    PIXEL_PIPE_SCREEN_MIN_EXTENTS_1                    = 0x00000006,
    PIXEL_PIPE_SCREEN_MAX_EXTENTS_1                    = 0x00000007,
} PixelPipeCounterId;

typedef enum PixelPipeStride {
    PIXEL_PIPE_STRIDE_32_BITS                          = 0x00000000,
    PIXEL_PIPE_STRIDE_64_BITS                          = 0x00000001,
    PIXEL_PIPE_STRIDE_128_BITS                         = 0x00000002,
    PIXEL_PIPE_STRIDE_256_BITS                         = 0x00000003,
} PixelPipeStride;

typedef enum PkrMap {
    RASTER_CONFIG_PKR_MAP_0                            = 0x00000000,
    RASTER_CONFIG_PKR_MAP_1                            = 0x00000001,
    RASTER_CONFIG_PKR_MAP_2                            = 0x00000002,
    RASTER_CONFIG_PKR_MAP_3                            = 0x00000003,
} PkrMap;

typedef enum PkrXsel {
    RASTER_CONFIG_PKR_XSEL_0                           = 0x00000000,
    RASTER_CONFIG_PKR_XSEL_1                           = 0x00000001,
    RASTER_CONFIG_PKR_XSEL_2                           = 0x00000002,
    RASTER_CONFIG_PKR_XSEL_3                           = 0x00000003,
} PkrXsel;

typedef enum PkrXsel2 {
    RASTER_CONFIG_PKR_XSEL2_0                          = 0x00000000,
    RASTER_CONFIG_PKR_XSEL2_1                          = 0x00000001,
    RASTER_CONFIG_PKR_XSEL2_2                          = 0x00000002,
    RASTER_CONFIG_PKR_XSEL2_3                          = 0x00000003,
} PkrXsel2;

typedef enum PkrYsel {
    RASTER_CONFIG_PKR_YSEL_0                           = 0x00000000,
    RASTER_CONFIG_PKR_YSEL_1                           = 0x00000001,
    RASTER_CONFIG_PKR_YSEL_2                           = 0x00000002,
    RASTER_CONFIG_PKR_YSEL_3                           = 0x00000003,
} PkrYsel;

typedef enum QuadExportFormat {
    EXPORT_UNUSED                                      = 0x00000000,
    EXPORT_32_R                                        = 0x00000001,
    EXPORT_32_GR                                       = 0x00000002,
    EXPORT_32_AR                                       = 0x00000003,
    EXPORT_FP16_ABGR                                   = 0x00000004,
    EXPORT_UNSIGNED16_ABGR                             = 0x00000005,
    EXPORT_SIGNED16_ABGR                               = 0x00000006,
    EXPORT_32_ABGR                                     = 0x00000007,
    EXPORT_32BPP_8PIX                                  = 0x00000008,
    EXPORT_16_16_UNSIGNED_8PIX                         = 0x00000009,
    EXPORT_16_16_SIGNED_8PIX                           = 0x0000000a,
    EXPORT_16_16_FLOAT_8PIX                            = 0x0000000b,
} QuadExportFormat;

typedef enum QuadExportFormatOld {
    EXPORT_4P_32BPC_ABGR                               = 0x00000000,
    EXPORT_4P_16BPC_ABGR                               = 0x00000001,
    EXPORT_4P_32BPC_GR                                 = 0x00000002,
    EXPORT_4P_32BPC_AR                                 = 0x00000003,
    EXPORT_2P_32BPC_ABGR                               = 0x00000004,
    EXPORT_8P_32BPC_R                                  = 0x00000005,
} QuadExportFormatOld;

typedef enum RbMap {
    RASTER_CONFIG_RB_MAP_0                             = 0x00000000,
    RASTER_CONFIG_RB_MAP_1                             = 0x00000001,
    RASTER_CONFIG_RB_MAP_2                             = 0x00000002,
    RASTER_CONFIG_RB_MAP_3                             = 0x00000003,
} RbMap;

typedef enum RbXsel {
    RASTER_CONFIG_RB_XSEL_0                            = 0x00000000,
    RASTER_CONFIG_RB_XSEL_1                            = 0x00000001,
} RbXsel;

typedef enum RbXsel2 {
    RASTER_CONFIG_RB_XSEL2_0                           = 0x00000000,
    RASTER_CONFIG_RB_XSEL2_1                           = 0x00000001,
    RASTER_CONFIG_RB_XSEL2_2                           = 0x00000002,
    RASTER_CONFIG_RB_XSEL2_3                           = 0x00000003,
} RbXsel2;

typedef enum RbYsel {
    RASTER_CONFIG_RB_YSEL_0                            = 0x00000000,
    RASTER_CONFIG_RB_YSEL_1                            = 0x00000001,
} RbYsel;

typedef enum ReadPolicy {
    CACHE_LRU_RD                                       = 0x00000000,
    CACHE_STREAM_RD                                    = 0x00000001,
    CACHE_NOA                                          = 0x00000002,
    RESERVED_RDPOLICY                                  = 0x00000003,
} ReadPolicy;

typedef enum ReadSize {
    READ_256_BITS                                      = 0x00000000,
    READ_512_BITS                                      = 0x00000001,
} ReadSize;

typedef enum RingCounterControl {
    COUNTER_RING_SPLIT                                 = 0x00000000,
    COUNTER_RING_0                                     = 0x00000001,
    COUNTER_RING_1                                     = 0x00000002,
} RingCounterControl;

typedef enum RLC_PERFCOUNTER_SEL {
    RLC_PERF_SEL_POWER_FEATURE_0                       = 0x00000000,
    RLC_PERF_SEL_POWER_FEATURE_1                       = 0x00000001,
    RLC_PERF_SEL_CP_INTERRUPT                          = 0x00000002,
    RLC_PERF_SEL_GRBM_INTERRUPT                        = 0x00000003,
    RLC_PERF_SEL_SPM_INTERRUPT                         = 0x00000004,
    RLC_PERF_SEL_IH_INTERRUPT                          = 0x00000005,
    RLC_PERF_SEL_SERDES_COMMAND_WRITE                  = 0x00000006,
} RLC_PERFCOUNTER_SEL;

constexpr unsigned int MaxRlcPerfcounterSel            = RLC_PERF_SEL_SERDES_COMMAND_WRITE;

typedef enum RLC_PERFMON_STATE {
    RLC_PERFMON_STATE_RESET                            = 0x00000000,
    RLC_PERFMON_STATE_ENABLE                           = 0x00000001,
    RLC_PERFMON_STATE_DISABLE                          = 0x00000002,
    RLC_PERFMON_STATE_RESERVED_3                       = 0x00000003,
    RLC_PERFMON_STATE_RESERVED_4                       = 0x00000004,
    RLC_PERFMON_STATE_RESERVED_5                       = 0x00000005,
    RLC_PERFMON_STATE_RESERVED_6                       = 0x00000006,
    RLC_PERFMON_STATE_ROLLOVER                         = 0x00000007,
} RLC_PERFMON_STATE;

constexpr unsigned int MaxRlcPerfmonState              = RLC_PERFMON_STATE_ROLLOVER;

typedef enum RMIPerfSel {
    RMI_PERF_SEL_NONE                                  = 0x00000000,
    RMI_PERF_SEL_BUSY                                  = 0x00000001,
    RMI_PERF_SEL_REG_CLK_VLD                           = 0x00000002,
    RMI_PERF_SEL_DYN_CLK_CMN_VLD                       = 0x00000003,
    RMI_PERF_SEL_DYN_CLK_RB_VLD                        = 0x00000004,
    RMI_PERF_SEL_DYN_CLK_PERF_VLD                      = 0x00000005,
    RMI_PERF_SEL_PERF_WINDOW                           = 0x00000006,
    RMI_PERF_SEL_EVENT_SEND                            = 0x00000007,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID0        = 0x00000008,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID1        = 0x00000009,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID2        = 0x0000000a,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID3        = 0x0000000b,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID4        = 0x0000000c,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID5        = 0x0000000d,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID6        = 0x0000000e,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID7        = 0x0000000f,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID8        = 0x00000010,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID9        = 0x00000011,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID10       = 0x00000012,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID11       = 0x00000013,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID12       = 0x00000014,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID13       = 0x00000015,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID14       = 0x00000016,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID15       = 0x00000017,
    RMI_PERF_SEL_RMI_INVALIDATION_ATC_REQ_VMID_ALL     = 0x00000018,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID0 = 0x00000019,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID1 = 0x0000001a,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID2 = 0x0000001b,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID3 = 0x0000001c,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID4 = 0x0000001d,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID5 = 0x0000001e,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID6 = 0x0000001f,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID7 = 0x00000020,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID8 = 0x00000021,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID9 = 0x00000022,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID10 = 0x00000023,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID11 = 0x00000024,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID12 = 0x00000025,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID13 = 0x00000026,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID14 = 0x00000027,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID15 = 0x00000028,
    RMI_PERF_SEL_RMI_INVALIDATION_REQ_START_FINISH_VMID_ALL = 0x00000029,
    RMI_PERF_SEL_UTCL1_TRANSLATION_MISS                = 0x0000002a,
    RMI_PERF_SEL_UTCL1_PERMISSION_MISS                 = 0x0000002b,
    RMI_PERF_SEL_UTCL1_TRANSLATION_HIT                 = 0x0000002c,
    RMI_PERF_SEL_UTCL1_REQUEST                         = 0x0000002d,
    RMI_PERF_SEL_UTCL1_STALL_INFLIGHT_MAX              = 0x0000002e,
    RMI_PERF_SEL_UTCL1_STALL_LRU_INFLIGHT              = 0x0000002f,
    RMI_PERF_SEL_UTCL1_LFIFO_FULL                      = 0x00000030,
    RMI_PERF_SEL_UTCL1_STALL_LFIFO_NOT_RES             = 0x00000031,
    RMI_PERF_SEL_UTCL1_STALL_UTCL2_REQ_OUT_OF_CREDITS  = 0x00000032,
    RMI_PERF_SEL_UTCL1_STALL_MISSFIFO_FULL             = 0x00000033,
    RMI_PERF_SEL_UTCL1_HIT_FIFO_FULL                   = 0x00000034,
    RMI_PERF_SEL_UTCL1_STALL_MULTI_MISS                = 0x00000035,
    RMI_PERF_SEL_RB_RMI_WRREQ_ALL_CID                  = 0x00000036,
    RMI_PERF_SEL_RB_RMI_WRREQ_TO_WRRET_BUSY            = 0x00000037,
    RMI_PERF_SEL_RB_RMI_WRREQ_CID0                     = 0x00000038,
    RMI_PERF_SEL_RB_RMI_WRREQ_CID1                     = 0x00000039,
    RMI_PERF_SEL_RB_RMI_WRREQ_CID2                     = 0x0000003a,
    RMI_PERF_SEL_RB_RMI_WRREQ_CID3                     = 0x0000003b,
    RMI_PERF_SEL_RB_RMI_WRREQ_CID4                     = 0x0000003c,
    RMI_PERF_SEL_RB_RMI_WRREQ_CID5                     = 0x0000003d,
    RMI_PERF_SEL_RB_RMI_WRREQ_CID6                     = 0x0000003e,
    RMI_PERF_SEL_RB_RMI_WRREQ_CID7                     = 0x0000003f,
    RMI_PERF_SEL_RB_RMI_32BWRREQ_INFLIGHT_ALL_ORONE_CID = 0x00000040,
    RMI_PERF_SEL_RB_RMI_WRREQ_BURST_LENGTH_ALL_ORONE_CID = 0x00000041,
    RMI_PERF_SEL_RB_RMI_WRREQ_BURST_ALL_ORONE_CID      = 0x00000042,
    RMI_PERF_SEL_RB_RMI_WRREQ_RESIDENCY                = 0x00000043,
    RMI_PERF_SEL_RMI_RB_WRRET_VALID_ALL_CID            = 0x00000044,
    RMI_PERF_SEL_RMI_RB_WRRET_VALID_CID0               = 0x00000045,
    RMI_PERF_SEL_RMI_RB_WRRET_VALID_CID1               = 0x00000046,
    RMI_PERF_SEL_RMI_RB_WRRET_VALID_CID2               = 0x00000047,
    RMI_PERF_SEL_RMI_RB_WRRET_VALID_CID3               = 0x00000048,
    RMI_PERF_SEL_RMI_RB_WRRET_VALID_CID4               = 0x00000049,
    RMI_PERF_SEL_RMI_RB_WRRET_VALID_CID5               = 0x0000004a,
    RMI_PERF_SEL_RMI_RB_WRRET_VALID_CID6               = 0x0000004b,
    RMI_PERF_SEL_RMI_RB_WRRET_VALID_CID7               = 0x0000004c,
    RMI_PERF_SEL_RMI_RB_WRRET_VALID_NACK0              = 0x0000004d,
    RMI_PERF_SEL_RMI_RB_WRRET_VALID_NACK1              = 0x0000004e,
    RMI_PERF_SEL_RMI_RB_WRRET_VALID_NACK2              = 0x0000004f,
    RMI_PERF_SEL_RMI_RB_WRRET_VALID_NACK3              = 0x00000050,
    RMI_PERF_SEL_RB_RMI_32BRDREQ_ALL_CID               = 0x00000051,
    RMI_PERF_SEL_RB_RMI_RDREQ_ALL_CID                  = 0x00000052,
    RMI_PERF_SEL_RB_RMI_RDREQ_TO_RDRET_BUSY            = 0x00000053,
    RMI_PERF_SEL_RB_RMI_32BRDREQ_CID0                  = 0x00000054,
    RMI_PERF_SEL_RB_RMI_32BRDREQ_CID1                  = 0x00000055,
    RMI_PERF_SEL_RB_RMI_32BRDREQ_CID2                  = 0x00000056,
    RMI_PERF_SEL_RB_RMI_32BRDREQ_CID3                  = 0x00000057,
    RMI_PERF_SEL_RB_RMI_32BRDREQ_CID4                  = 0x00000058,
    RMI_PERF_SEL_RB_RMI_32BRDREQ_CID5                  = 0x00000059,
    RMI_PERF_SEL_RB_RMI_32BRDREQ_CID6                  = 0x0000005a,
    RMI_PERF_SEL_RB_RMI_32BRDREQ_CID7                  = 0x0000005b,
    RMI_PERF_SEL_RB_RMI_RDREQ_CID0                     = 0x0000005c,
    RMI_PERF_SEL_RB_RMI_RDREQ_CID1                     = 0x0000005d,
    RMI_PERF_SEL_RB_RMI_RDREQ_CID2                     = 0x0000005e,
    RMI_PERF_SEL_RB_RMI_RDREQ_CID3                     = 0x0000005f,
    RMI_PERF_SEL_RB_RMI_RDREQ_CID4                     = 0x00000060,
    RMI_PERF_SEL_RB_RMI_RDREQ_CID5                     = 0x00000061,
    RMI_PERF_SEL_RB_RMI_RDREQ_CID6                     = 0x00000062,
    RMI_PERF_SEL_RB_RMI_RDREQ_CID7                     = 0x00000063,
    RMI_PERF_SEL_RB_RMI_32BRDREQ_INFLIGHT_ALL_ORONE_CID = 0x00000064,
    RMI_PERF_SEL_RB_RMI_RDREQ_BURST_LENGTH_ALL_ORONE_CID = 0x00000065,
    RMI_PERF_SEL_RB_RMI_RDREQ_BURST_ALL_ORONE_CID      = 0x00000066,
    RMI_PERF_SEL_RB_RMI_RDREQ_RESIDENCY                = 0x00000067,
    RMI_PERF_SEL_RMI_RB_32BRDRET_VALID_ALL_CID         = 0x00000068,
    RMI_PERF_SEL_RMI_RB_32BRDRET_VALID_CID0            = 0x00000069,
    RMI_PERF_SEL_RMI_RB_32BRDRET_VALID_CID1            = 0x0000006a,
    RMI_PERF_SEL_RMI_RB_32BRDRET_VALID_CID2            = 0x0000006b,
    RMI_PERF_SEL_RMI_RB_32BRDRET_VALID_CID3            = 0x0000006c,
    RMI_PERF_SEL_RMI_RB_32BRDRET_VALID_CID4            = 0x0000006d,
    RMI_PERF_SEL_RMI_RB_32BRDRET_VALID_CID5            = 0x0000006e,
    RMI_PERF_SEL_RMI_RB_32BRDRET_VALID_CID6            = 0x0000006f,
    RMI_PERF_SEL_RMI_RB_32BRDRET_VALID_CID7            = 0x00000070,
    RMI_PERF_SEL_RMI_RB_32BRDRET_VALID_NACK0           = 0x00000071,
    RMI_PERF_SEL_RMI_RB_32BRDRET_VALID_NACK1           = 0x00000072,
    RMI_PERF_SEL_RMI_RB_32BRDRET_VALID_NACK2           = 0x00000073,
    RMI_PERF_SEL_RMI_RB_32BRDRET_VALID_NACK3           = 0x00000074,
    RMI_PERF_SEL_RB_RMI_WR_FIFO_MAX                    = 0x00000075,
    RMI_PERF_SEL_RB_RMI_WR_FIFO_EMPTY                  = 0x00000076,
    RMI_PERF_SEL_RB_RMI_WR_IDLE                        = 0x00000077,
    RMI_PERF_SEL_RB_RMI_WR_STARVE                      = 0x00000078,
    RMI_PERF_SEL_RB_RMI_WR_STALL                       = 0x00000079,
    RMI_PERF_SEL_RB_RMI_WR_BUSY                        = 0x0000007a,
    RMI_PERF_SEL_RB_RMI_WR_INTF_BUSY                   = 0x0000007b,
    RMI_PERF_SEL_RB_RMI_RD_FIFO_MAX                    = 0x0000007c,
    RMI_PERF_SEL_RB_RMI_RD_FIFO_EMPTY                  = 0x0000007d,
    RMI_PERF_SEL_RB_RMI_RD_IDLE                        = 0x0000007e,
    RMI_PERF_SEL_RB_RMI_RD_STARVE                      = 0x0000007f,
    RMI_PERF_SEL_RB_RMI_RD_STALL                       = 0x00000080,
    RMI_PERF_SEL_RB_RMI_RD_BUSY                        = 0x00000081,
    RMI_PERF_SEL_RB_RMI_RD_INTF_BUSY                   = 0x00000082,
    RMI_PERF_SEL_RMI_TC_64BWRREQ_ALL_ORONE_CID         = 0x00000083,
    RMI_PERF_SEL_RMI_TC_64BRDREQ_ALL_ORONE_CID         = 0x00000084,
    RMI_PERF_SEL_RMI_TC_WRREQ_ALL_CID                  = 0x00000085,
    RMI_PERF_SEL_RMI_TC_REQ_BUSY                       = 0x00000086,
    RMI_PERF_SEL_RMI_TC_WRREQ_CID0                     = 0x00000087,
    RMI_PERF_SEL_RMI_TC_WRREQ_CID1                     = 0x00000088,
    RMI_PERF_SEL_RMI_TC_WRREQ_CID2                     = 0x00000089,
    RMI_PERF_SEL_RMI_TC_WRREQ_CID3                     = 0x0000008a,
    RMI_PERF_SEL_RMI_TC_WRREQ_CID4                     = 0x0000008b,
    RMI_PERF_SEL_RMI_TC_WRREQ_CID5                     = 0x0000008c,
    RMI_PERF_SEL_RMI_TC_WRREQ_CID6                     = 0x0000008d,
    RMI_PERF_SEL_RMI_TC_WRREQ_CID7                     = 0x0000008e,
    RMI_PERF_SEL_RMI_TC_WRREQ_INFLIGHT_ALL_CID         = 0x0000008f,
    RMI_PERF_SEL_TC_RMI_WRRET_VALID_ALL_CID            = 0x00000090,
    RMI_PERF_SEL_RMI_TC_RDREQ_ALL_CID                  = 0x00000091,
    RMI_PERF_SEL_RMI_TC_RDREQ_CID0                     = 0x00000092,
    RMI_PERF_SEL_RMI_TC_RDREQ_CID1                     = 0x00000093,
    RMI_PERF_SEL_RMI_TC_RDREQ_CID2                     = 0x00000094,
    RMI_PERF_SEL_RMI_TC_RDREQ_CID3                     = 0x00000095,
    RMI_PERF_SEL_RMI_TC_RDREQ_CID4                     = 0x00000096,
    RMI_PERF_SEL_RMI_TC_RDREQ_CID5                     = 0x00000097,
    RMI_PERF_SEL_RMI_TC_RDREQ_CID6                     = 0x00000098,
    RMI_PERF_SEL_RMI_TC_RDREQ_CID7                     = 0x00000099,
    RMI_PERF_SEL_RMI_TC_STALL_RDREQ                    = 0x0000009a,
    RMI_PERF_SEL_RMI_TC_STALL_WRREQ                    = 0x0000009b,
    RMI_PERF_SEL_RMI_TC_STALL_ALLREQ                   = 0x0000009c,
    RMI_PERF_SEL_RMI_TC_CREDIT_FULL_NO_PENDING_SEND    = 0x0000009d,
    RMI_PERF_SEL_RMI_TC_CREDIT_ZERO_PENDING_SEND       = 0x0000009e,
    RMI_PERF_SEL_RMI_TC_RDREQ_INFLIGHT_ALL_CID         = 0x0000009f,
    RMI_PERF_SEL_TC_RMI_RDRET_VALID_ALL_CID            = 0x000000a0,
    RMI_PERF_SEL_UTCL1_BUSY                            = 0x000000a1,
    RMI_PERF_SEL_RMI_UTC_REQ                           = 0x000000a2,
    RMI_PERF_SEL_RMI_UTC_BUSY                          = 0x000000a3,
    RMI_PERF_SEL_UTCL1_UTCL2_REQ                       = 0x000000a4,
    RMI_PERF_SEL_LEVEL_ADD_UTCL1_TO_UTCL2              = 0x000000a5,
    RMI_PERF_SEL_PROBE_UTCL1_XNACK_RETRY               = 0x000000a6,
    RMI_PERF_SEL_PROBE_UTCL1_ALL_FAULT                 = 0x000000a7,
    RMI_PERF_SEL_PROBE_UTCL1_PRT_FAULT                 = 0x000000a8,
    RMI_PERF_SEL_PROBE_UTCL1_VMID_BYPASS               = 0x000000a9,
    RMI_PERF_SEL_PROBE_UTCL1_XNACK_NORETRY_FAULT       = 0x000000aa,
    RMI_PERF_SEL_XNACK_FIFO_NUM_USED                   = 0x000000ab,
    RMI_PERF_SEL_LAT_FIFO_NUM_USED                     = 0x000000ac,
    RMI_PERF_SEL_LAT_FIFO_BLOCKING_REQ                 = 0x000000ad,
    RMI_PERF_SEL_LAT_FIFO_NONBLOCKING_REQ              = 0x000000ae,
    RMI_PERF_SEL_XNACK_FIFO_FULL                       = 0x000000af,
    RMI_PERF_SEL_XNACK_FIFO_BUSY                       = 0x000000b0,
    RMI_PERF_SEL_LAT_FIFO_FULL                         = 0x000000b1,
    RMI_PERF_SEL_SKID_FIFO_DEPTH                       = 0x000000b2,
    RMI_PERF_SEL_TCIW_INFLIGHT_COUNT                   = 0x000000b3,
    RMI_PERF_SEL_PRT_FIFO_NUM_USED                     = 0x000000b4,
    RMI_PERF_SEL_PRT_FIFO_REQ                          = 0x000000b5,
    RMI_PERF_SEL_PRT_FIFO_BUSY                         = 0x000000b6,
    RMI_PERF_SEL_TCIW_REQ                              = 0x000000b7,
    RMI_PERF_SEL_TCIW_BUSY                             = 0x000000b8,
    RMI_PERF_SEL_SKID_FIFO_REQ                         = 0x000000b9,
    RMI_PERF_SEL_SKID_FIFO_BUSY                        = 0x000000ba,
    RMI_PERF_SEL_DEMUX_TCIW_RESIDENCY_NACK0            = 0x000000bb,
    RMI_PERF_SEL_DEMUX_TCIW_RESIDENCY_NACK1            = 0x000000bc,
    RMI_PERF_SEL_DEMUX_TCIW_RESIDENCY_NACK2            = 0x000000bd,
    RMI_PERF_SEL_DEMUX_TCIW_RESIDENCY_NACK3            = 0x000000be,
    RMI_PERF_SEL_XBAR_PROBEGEN_RTS_RTR                 = 0x000000bf,
    RMI_PERF_SEL_XBAR_PROBEGEN_RTSB_RTR                = 0x000000c0,
    RMI_PERF_SEL_XBAR_PROBEGEN_RTS_RTRB                = 0x000000c1,
    RMI_PERF_SEL_XBAR_PROBEGEN_RTSB_RTRB               = 0x000000c2,
    RMI_PERF_SEL_DEMUX_TCIW_FORMATTER_RTS_RTR          = 0x000000c3,
    RMI_PERF_SEL_DEMUX_TCIW_FORMATTER_RTSB_RTR         = 0x000000c4,
    RMI_PERF_SEL_DEMUX_TCIW_FORMATTER_RTS_RTRB         = 0x000000c5,
    RMI_PERF_SEL_DEMUX_TCIW_FORMATTER_RTSB_RTRB        = 0x000000c6,
    RMI_PERF_SEL_WRREQCONSUMER_XBAR_WRREQ_RTS_RTR      = 0x000000c7,
    RMI_PERF_SEL_WRREQCONSUMER_XBAR_WRREQ_RTSB_RTR     = 0x000000c8,
    RMI_PERF_SEL_WRREQCONSUMER_XBAR_WRREQ_RTS_RTRB     = 0x000000c9,
    RMI_PERF_SEL_WRREQCONSUMER_XBAR_WRREQ_RTSB_RTRB    = 0x000000ca,
    RMI_PERF_SEL_RDREQCONSUMER_XBAR_RDREQ_RTS_RTR      = 0x000000cb,
    RMI_PERF_SEL_RDREQCONSUMER_XBAR_RDREQ_RTSB_RTR     = 0x000000cc,
    RMI_PERF_SEL_RDREQCONSUMER_XBAR_RDREQ_RTS_RTRB     = 0x000000cd,
    RMI_PERF_SEL_RDREQCONSUMER_XBAR_RDREQ_RTSB_RTRB    = 0x000000ce,
    RMI_PERF_SEL_POP_DEMUX_RTS_RTR                     = 0x000000cf,
    RMI_PERF_SEL_POP_DEMUX_RTSB_RTR                    = 0x000000d0,
    RMI_PERF_SEL_POP_DEMUX_RTS_RTRB                    = 0x000000d1,
    RMI_PERF_SEL_POP_DEMUX_RTSB_RTRB                   = 0x000000d2,
    RMI_PERF_SEL_PROBEGEN_UTC_RTS_RTR                  = 0x000000d3,
    RMI_PERF_SEL_LEVEL_ADD_RMI_TO_UTC                  = 0x000000d4,
    RMI_PERF_SEL_PROBEGEN_UTC_RTSB_RTR                 = 0x000000d5,
    RMI_PERF_SEL_PROBEGEN_UTC_RTS_RTRB                 = 0x000000d6,
    RMI_PERF_SEL_PROBEGEN_UTC_RTSB_RTRB                = 0x000000d7,
    RMI_PERF_SEL_UTC_POP_RTS_RTR                       = 0x000000d8,
    RMI_PERF_SEL_UTC_POP_RTSB_RTR                      = 0x000000d9,
    RMI_PERF_SEL_UTC_POP_RTS_RTRB                      = 0x000000da,
    RMI_PERF_SEL_UTC_POP_RTSB_RTRB                     = 0x000000db,
    RMI_PERF_SEL_POP_XNACK_RTS_RTR                     = 0x000000dc,
    RMI_PERF_SEL_POP_XNACK_RTSB_RTR                    = 0x000000dd,
    RMI_PERF_SEL_POP_XNACK_RTS_RTRB                    = 0x000000de,
    RMI_PERF_SEL_POP_XNACK_RTSB_RTRB                   = 0x000000df,
    RMI_PERF_SEL_XNACK_PROBEGEN_RTS_RTR                = 0x000000e0,
    RMI_PERF_SEL_XNACK_PROBEGEN_RTSB_RTR               = 0x000000e1,
    RMI_PERF_SEL_XNACK_PROBEGEN_RTS_RTRB               = 0x000000e2,
    RMI_PERF_SEL_XNACK_PROBEGEN_RTSB_RTRB              = 0x000000e3,
    RMI_PERF_SEL_PRTFIFO_RTNFORMATTER_RTS_RTR          = 0x000000e4,
    RMI_PERF_SEL_PRTFIFO_RTNFORMATTER_RTSB_RTR         = 0x000000e5,
    RMI_PERF_SEL_PRTFIFO_RTNFORMATTER_RTS_RTRB         = 0x000000e6,
    RMI_PERF_SEL_PRTFIFO_RTNFORMATTER_RTSB_RTRB        = 0x000000e7,
    RMI_PERF_SEL_SKID_FIFO_IN_RTS                      = 0x000000e8,
    RMI_PERF_SEL_SKID_FIFO_IN_RTSB                     = 0x000000e9,
    RMI_PERF_SEL_SKID_FIFO_OUT_RTS                     = 0x000000ea,
    RMI_PERF_SEL_SKID_FIFO_OUT_RTSB                    = 0x000000eb,
    RMI_PERF_SEL_XBAR_PROBEGEN_READ_RTS_RTR            = 0x000000ec,
    RMI_PERF_SEL_XBAR_PROBEGEN_WRITE_RTS_RTR           = 0x000000ed,
    RMI_PERF_SEL_XBAR_PROBEGEN_IN0_RTS_RTR             = 0x000000ee,
    RMI_PERF_SEL_XBAR_PROBEGEN_IN1_RTS_RTR             = 0x000000ef,
    RMI_PERF_SEL_XBAR_PROBEGEN_CB_RTS_RTR              = 0x000000f0,
    RMI_PERF_SEL_XBAR_PROBEGEN_DB_RTS_RTR              = 0x000000f1,
    RMI_PERF_SEL_REORDER_FIFO_REQ                      = 0x000000f2,
    RMI_PERF_SEL_REORDER_FIFO_BUSY                     = 0x000000f3,
    RMI_PERF_SEL_RMI_RB_EARLY_WRACK_ALL_CID            = 0x000000f4,
    RMI_PERF_SEL_RMI_RB_EARLY_WRACK_CID0               = 0x000000f5,
    RMI_PERF_SEL_RMI_RB_EARLY_WRACK_CID1               = 0x000000f6,
    RMI_PERF_SEL_RMI_RB_EARLY_WRACK_CID2               = 0x000000f7,
    RMI_PERF_SEL_RMI_RB_EARLY_WRACK_CID3               = 0x000000f8,
    RMI_PERF_SEL_RMI_RB_EARLY_WRACK_CID4               = 0x000000f9,
    RMI_PERF_SEL_RMI_RB_EARLY_WRACK_CID5               = 0x000000fa,
    RMI_PERF_SEL_RMI_RB_EARLY_WRACK_CID6               = 0x000000fb,
    RMI_PERF_SEL_RMI_RB_EARLY_WRACK_CID7               = 0x000000fc,
    RMI_PERF_SEL_RMI_RB_EARLY_WRACK_NACK0              = 0x000000fd,
    RMI_PERF_SEL_RMI_RB_EARLY_WRACK_NACK1              = 0x000000fe,
    RMI_PERF_SEL_RMI_RB_EARLY_WRACK_NACK2              = 0x000000ff,
    RMI_PERF_SEL_RMI_RB_EARLY_WRACK_NACK3              = 0x00000100,
    RMI_PERF_SEL_UTCL0_UTCL1_PERM_FAULT__GFX10         = 0x00000101,
} RMIPerfSel;

constexpr unsigned int MaxRMIPerfSelGfx09              = RMI_PERF_SEL_RMI_RB_EARLY_WRACK_NACK3;
constexpr unsigned int MaxRMIPerfSelGfx10              = RMI_PERF_SEL_UTCL0_UTCL1_PERM_FAULT__GFX10;

typedef enum RMI_CID {
    RMI_CID_CC                                         = 0x00000000,
    RMI_CID_FC                                         = 0x00000001,
    RMI_CID_CM                                         = 0x00000002,
    RMI_CID_DC                                         = 0x00000003,
    RMI_CID_Z                                          = 0x00000004,
    RMI_CID_S                                          = 0x00000005,
    RMI_CID_TILE                                       = 0x00000006,
    RMI_CID_ZPCPSD                                     = 0x00000007,
} RMI_CID;

typedef enum RoundMode {
    ROUND_BY_HALF                                      = 0x00000000,
    ROUND_TRUNCATE                                     = 0x00000001,
} RoundMode;

typedef enum RowSize {
    ADDR_CONFIG_1KB_ROW                                = 0x00000000,
    ADDR_CONFIG_2KB_ROW                                = 0x00000001,
    ADDR_CONFIG_4KB_ROW                                = 0x00000002,
} RowSize;

typedef enum RowTiling {
    CONFIG_1KB_ROW                                     = 0x00000000,
    CONFIG_2KB_ROW                                     = 0x00000001,
    CONFIG_4KB_ROW                                     = 0x00000002,
    CONFIG_8KB_ROW                                     = 0x00000003,
    CONFIG_1KB_ROW_OPT                                 = 0x00000004,
    CONFIG_2KB_ROW_OPT                                 = 0x00000005,
    CONFIG_4KB_ROW_OPT                                 = 0x00000006,
    CONFIG_8KB_ROW_OPT                                 = 0x00000007,
} RowTiling;

typedef enum SampleSplit {
    ADDR_SURF_SAMPLE_SPLIT_1                           = 0x00000000,
    ADDR_SURF_SAMPLE_SPLIT_2                           = 0x00000001,
    ADDR_SURF_SAMPLE_SPLIT_4                           = 0x00000002,
    ADDR_SURF_SAMPLE_SPLIT_8                           = 0x00000003,
} SampleSplit;

typedef enum SampleSplitBytes {
    CONFIG_1KB_SPLIT                                   = 0x00000000,
    CONFIG_2KB_SPLIT                                   = 0x00000001,
    CONFIG_4KB_SPLIT                                   = 0x00000002,
    CONFIG_8KB_SPLIT                                   = 0x00000003,
} SampleSplitBytes;

typedef enum ScMap {
    RASTER_CONFIG_SC_MAP_0                             = 0x00000000,
    RASTER_CONFIG_SC_MAP_1                             = 0x00000001,
    RASTER_CONFIG_SC_MAP_2                             = 0x00000002,
    RASTER_CONFIG_SC_MAP_3                             = 0x00000003,
} ScMap;

typedef enum ScUncertaintyRegionMode {
    SC_HALF_LSB                                        = 0x00000000,
    SC_LSB_ONE_SIDED                                   = 0x00000001,
    SC_LSB_TWO_SIDED                                   = 0x00000002,
} ScUncertaintyRegionMode;

typedef enum ScUncertaintyRegionMult {
    SC_UR_1X                                           = 0x00000000,
    SC_UR_2X                                           = 0x00000001,
    SC_UR_4X                                           = 0x00000002,
    SC_UR_8X                                           = 0x00000003,
} ScUncertaintyRegionMult;

typedef enum ScXsel {
    RASTER_CONFIG_SC_XSEL_8_WIDE_TILE                  = 0x00000000,
    RASTER_CONFIG_SC_XSEL_16_WIDE_TILE                 = 0x00000001,
    RASTER_CONFIG_SC_XSEL_32_WIDE_TILE                 = 0x00000002,
    RASTER_CONFIG_SC_XSEL_64_WIDE_TILE                 = 0x00000003,
} ScXsel;

typedef enum ScYsel {
    RASTER_CONFIG_SC_YSEL_8_WIDE_TILE                  = 0x00000000,
    RASTER_CONFIG_SC_YSEL_16_WIDE_TILE                 = 0x00000001,
    RASTER_CONFIG_SC_YSEL_32_WIDE_TILE                 = 0x00000002,
    RASTER_CONFIG_SC_YSEL_64_WIDE_TILE                 = 0x00000003,
} ScYsel;

typedef enum SC_PERFCNT_SEL {
    SC_SRPS_WINDOW_VALID                               = 0x00000000,
    SC_PSSW_WINDOW_VALID                               = 0x00000001,
    SC_TPQZ_WINDOW_VALID                               = 0x00000002,
    SC_QZQP_WINDOW_VALID                               = 0x00000003,
    SC_TRPK_WINDOW_VALID                               = 0x00000004,
    SC_SRPS_WINDOW_VALID_BUSY                          = 0x00000005,
    SC_PSSW_WINDOW_VALID_BUSY                          = 0x00000006,
    SC_TPQZ_WINDOW_VALID_BUSY                          = 0x00000007,
    SC_QZQP_WINDOW_VALID_BUSY                          = 0x00000008,
    SC_TRPK_WINDOW_VALID_BUSY                          = 0x00000009,
    SC_STARVED_BY_PA                                   = 0x0000000a,
    SC_STALLED_BY_PRIMFIFO                             = 0x0000000b,
    SC_STALLED_BY_DB_TILE                              = 0x0000000c,
    SC_STARVED_BY_DB_TILE                              = 0x0000000d,
    SC_STALLED_BY_TILEORDERFIFO                        = 0x0000000e,
    SC_STALLED_BY_TILEFIFO                             = 0x0000000f,
    SC_STALLED_BY_DB_QUAD                              = 0x00000010,
    SC_STARVED_BY_DB_QUAD                              = 0x00000011,
    SC_STALLED_BY_QUADFIFO                             = 0x00000012,
    SC_STALLED_BY_BCI                                  = 0x00000013,
    SC_STALLED_BY_SPI                                  = 0x00000014,
    SC_SCISSOR_DISCARD                                 = 0x00000015,
    SC_BB_DISCARD                                      = 0x00000016,
    SC_SUPERTILE_COUNT                                 = 0x00000017,
    SC_SUPERTILE_PER_PRIM_H0                           = 0x00000018,
    SC_SUPERTILE_PER_PRIM_H1                           = 0x00000019,
    SC_SUPERTILE_PER_PRIM_H2                           = 0x0000001a,
    SC_SUPERTILE_PER_PRIM_H3                           = 0x0000001b,
    SC_SUPERTILE_PER_PRIM_H4                           = 0x0000001c,
    SC_SUPERTILE_PER_PRIM_H5                           = 0x0000001d,
    SC_SUPERTILE_PER_PRIM_H6                           = 0x0000001e,
    SC_SUPERTILE_PER_PRIM_H7                           = 0x0000001f,
    SC_SUPERTILE_PER_PRIM_H8                           = 0x00000020,
    SC_SUPERTILE_PER_PRIM_H9                           = 0x00000021,
    SC_SUPERTILE_PER_PRIM_H10                          = 0x00000022,
    SC_SUPERTILE_PER_PRIM_H11                          = 0x00000023,
    SC_SUPERTILE_PER_PRIM_H12                          = 0x00000024,
    SC_SUPERTILE_PER_PRIM_H13                          = 0x00000025,
    SC_SUPERTILE_PER_PRIM_H14                          = 0x00000026,
    SC_SUPERTILE_PER_PRIM_H15                          = 0x00000027,
    SC_SUPERTILE_PER_PRIM_H16                          = 0x00000028,
    SC_TILE_PER_PRIM_H0                                = 0x00000029,
    SC_TILE_PER_PRIM_H1                                = 0x0000002a,
    SC_TILE_PER_PRIM_H2                                = 0x0000002b,
    SC_TILE_PER_PRIM_H3                                = 0x0000002c,
    SC_TILE_PER_PRIM_H4                                = 0x0000002d,
    SC_TILE_PER_PRIM_H5                                = 0x0000002e,
    SC_TILE_PER_PRIM_H6                                = 0x0000002f,
    SC_TILE_PER_PRIM_H7                                = 0x00000030,
    SC_TILE_PER_PRIM_H8                                = 0x00000031,
    SC_TILE_PER_PRIM_H9                                = 0x00000032,
    SC_TILE_PER_PRIM_H10                               = 0x00000033,
    SC_TILE_PER_PRIM_H11                               = 0x00000034,
    SC_TILE_PER_PRIM_H12                               = 0x00000035,
    SC_TILE_PER_PRIM_H13                               = 0x00000036,
    SC_TILE_PER_PRIM_H14                               = 0x00000037,
    SC_TILE_PER_PRIM_H15                               = 0x00000038,
    SC_TILE_PER_PRIM_H16                               = 0x00000039,
    SC_TILE_PER_SUPERTILE_H0                           = 0x0000003a,
    SC_TILE_PER_SUPERTILE_H1                           = 0x0000003b,
    SC_TILE_PER_SUPERTILE_H2                           = 0x0000003c,
    SC_TILE_PER_SUPERTILE_H3                           = 0x0000003d,
    SC_TILE_PER_SUPERTILE_H4                           = 0x0000003e,
    SC_TILE_PER_SUPERTILE_H5                           = 0x0000003f,
    SC_TILE_PER_SUPERTILE_H6                           = 0x00000040,
    SC_TILE_PER_SUPERTILE_H7                           = 0x00000041,
    SC_TILE_PER_SUPERTILE_H8                           = 0x00000042,
    SC_TILE_PER_SUPERTILE_H9                           = 0x00000043,
    SC_TILE_PER_SUPERTILE_H10                          = 0x00000044,
    SC_TILE_PER_SUPERTILE_H11                          = 0x00000045,
    SC_TILE_PER_SUPERTILE_H12                          = 0x00000046,
    SC_TILE_PER_SUPERTILE_H13                          = 0x00000047,
    SC_TILE_PER_SUPERTILE_H14                          = 0x00000048,
    SC_TILE_PER_SUPERTILE_H15                          = 0x00000049,
    SC_TILE_PER_SUPERTILE_H16                          = 0x0000004a,
    SC_TILE_PICKED_H1                                  = 0x0000004b,
    SC_TILE_PICKED_H2                                  = 0x0000004c,
    SC_TILE_PICKED_H3                                  = 0x0000004d,
    SC_TILE_PICKED_H4                                  = 0x0000004e,
    SC_QZ0_TILE_COUNT                                  = 0x0000004f,
    SC_QZ1_TILE_COUNT                                  = 0x00000050,
    SC_QZ2_TILE_COUNT                                  = 0x00000051,
    SC_QZ3_TILE_COUNT                                  = 0x00000052,
    SC_QZ0_TILE_COVERED_COUNT                          = 0x00000053,
    SC_QZ1_TILE_COVERED_COUNT                          = 0x00000054,
    SC_QZ2_TILE_COVERED_COUNT                          = 0x00000055,
    SC_QZ3_TILE_COVERED_COUNT                          = 0x00000056,
    SC_QZ0_TILE_NOT_COVERED_COUNT                      = 0x00000057,
    SC_QZ1_TILE_NOT_COVERED_COUNT                      = 0x00000058,
    SC_QZ2_TILE_NOT_COVERED_COUNT                      = 0x00000059,
    SC_QZ3_TILE_NOT_COVERED_COUNT                      = 0x0000005a,
    SC_QZ0_QUAD_PER_TILE_H0                            = 0x0000005b,
    SC_QZ0_QUAD_PER_TILE_H1                            = 0x0000005c,
    SC_QZ0_QUAD_PER_TILE_H2                            = 0x0000005d,
    SC_QZ0_QUAD_PER_TILE_H3                            = 0x0000005e,
    SC_QZ0_QUAD_PER_TILE_H4                            = 0x0000005f,
    SC_QZ0_QUAD_PER_TILE_H5                            = 0x00000060,
    SC_QZ0_QUAD_PER_TILE_H6                            = 0x00000061,
    SC_QZ0_QUAD_PER_TILE_H7                            = 0x00000062,
    SC_QZ0_QUAD_PER_TILE_H8                            = 0x00000063,
    SC_QZ0_QUAD_PER_TILE_H9                            = 0x00000064,
    SC_QZ0_QUAD_PER_TILE_H10                           = 0x00000065,
    SC_QZ0_QUAD_PER_TILE_H11                           = 0x00000066,
    SC_QZ0_QUAD_PER_TILE_H12                           = 0x00000067,
    SC_QZ0_QUAD_PER_TILE_H13                           = 0x00000068,
    SC_QZ0_QUAD_PER_TILE_H14                           = 0x00000069,
    SC_QZ0_QUAD_PER_TILE_H15                           = 0x0000006a,
    SC_QZ0_QUAD_PER_TILE_H16                           = 0x0000006b,
    SC_QZ1_QUAD_PER_TILE_H0                            = 0x0000006c,
    SC_QZ1_QUAD_PER_TILE_H1                            = 0x0000006d,
    SC_QZ1_QUAD_PER_TILE_H2                            = 0x0000006e,
    SC_QZ1_QUAD_PER_TILE_H3                            = 0x0000006f,
    SC_QZ1_QUAD_PER_TILE_H4                            = 0x00000070,
    SC_QZ1_QUAD_PER_TILE_H5                            = 0x00000071,
    SC_QZ1_QUAD_PER_TILE_H6                            = 0x00000072,
    SC_QZ1_QUAD_PER_TILE_H7                            = 0x00000073,
    SC_QZ1_QUAD_PER_TILE_H8                            = 0x00000074,
    SC_QZ1_QUAD_PER_TILE_H9                            = 0x00000075,
    SC_QZ1_QUAD_PER_TILE_H10                           = 0x00000076,
    SC_QZ1_QUAD_PER_TILE_H11                           = 0x00000077,
    SC_QZ1_QUAD_PER_TILE_H12                           = 0x00000078,
    SC_QZ1_QUAD_PER_TILE_H13                           = 0x00000079,
    SC_QZ1_QUAD_PER_TILE_H14                           = 0x0000007a,
    SC_QZ1_QUAD_PER_TILE_H15                           = 0x0000007b,
    SC_QZ1_QUAD_PER_TILE_H16                           = 0x0000007c,
    SC_QZ2_QUAD_PER_TILE_H0                            = 0x0000007d,
    SC_QZ2_QUAD_PER_TILE_H1                            = 0x0000007e,
    SC_QZ2_QUAD_PER_TILE_H2                            = 0x0000007f,
    SC_QZ2_QUAD_PER_TILE_H3                            = 0x00000080,
    SC_QZ2_QUAD_PER_TILE_H4                            = 0x00000081,
    SC_QZ2_QUAD_PER_TILE_H5                            = 0x00000082,
    SC_QZ2_QUAD_PER_TILE_H6                            = 0x00000083,
    SC_QZ2_QUAD_PER_TILE_H7                            = 0x00000084,
    SC_QZ2_QUAD_PER_TILE_H8                            = 0x00000085,
    SC_QZ2_QUAD_PER_TILE_H9                            = 0x00000086,
    SC_QZ2_QUAD_PER_TILE_H10                           = 0x00000087,
    SC_QZ2_QUAD_PER_TILE_H11                           = 0x00000088,
    SC_QZ2_QUAD_PER_TILE_H12                           = 0x00000089,
    SC_QZ2_QUAD_PER_TILE_H13                           = 0x0000008a,
    SC_QZ2_QUAD_PER_TILE_H14                           = 0x0000008b,
    SC_QZ2_QUAD_PER_TILE_H15                           = 0x0000008c,
    SC_QZ2_QUAD_PER_TILE_H16                           = 0x0000008d,
    SC_QZ3_QUAD_PER_TILE_H0                            = 0x0000008e,
    SC_QZ3_QUAD_PER_TILE_H1                            = 0x0000008f,
    SC_QZ3_QUAD_PER_TILE_H2                            = 0x00000090,
    SC_QZ3_QUAD_PER_TILE_H3                            = 0x00000091,
    SC_QZ3_QUAD_PER_TILE_H4                            = 0x00000092,
    SC_QZ3_QUAD_PER_TILE_H5                            = 0x00000093,
    SC_QZ3_QUAD_PER_TILE_H6                            = 0x00000094,
    SC_QZ3_QUAD_PER_TILE_H7                            = 0x00000095,
    SC_QZ3_QUAD_PER_TILE_H8                            = 0x00000096,
    SC_QZ3_QUAD_PER_TILE_H9                            = 0x00000097,
    SC_QZ3_QUAD_PER_TILE_H10                           = 0x00000098,
    SC_QZ3_QUAD_PER_TILE_H11                           = 0x00000099,
    SC_QZ3_QUAD_PER_TILE_H12                           = 0x0000009a,
    SC_QZ3_QUAD_PER_TILE_H13                           = 0x0000009b,
    SC_QZ3_QUAD_PER_TILE_H14                           = 0x0000009c,
    SC_QZ3_QUAD_PER_TILE_H15                           = 0x0000009d,
    SC_QZ3_QUAD_PER_TILE_H16                           = 0x0000009e,
    SC_QZ0_QUAD_COUNT                                  = 0x0000009f,
    SC_QZ1_QUAD_COUNT                                  = 0x000000a0,
    SC_QZ2_QUAD_COUNT                                  = 0x000000a1,
    SC_QZ3_QUAD_COUNT                                  = 0x000000a2,
    SC_P0_HIZ_TILE_COUNT                               = 0x000000a3,
    SC_P1_HIZ_TILE_COUNT                               = 0x000000a4,
    SC_P2_HIZ_TILE_COUNT                               = 0x000000a5,
    SC_P3_HIZ_TILE_COUNT                               = 0x000000a6,
    SC_P0_HIZ_QUAD_PER_TILE_H0                         = 0x000000a7,
    SC_P0_HIZ_QUAD_PER_TILE_H1                         = 0x000000a8,
    SC_P0_HIZ_QUAD_PER_TILE_H2                         = 0x000000a9,
    SC_P0_HIZ_QUAD_PER_TILE_H3                         = 0x000000aa,
    SC_P0_HIZ_QUAD_PER_TILE_H4                         = 0x000000ab,
    SC_P0_HIZ_QUAD_PER_TILE_H5                         = 0x000000ac,
    SC_P0_HIZ_QUAD_PER_TILE_H6                         = 0x000000ad,
    SC_P0_HIZ_QUAD_PER_TILE_H7                         = 0x000000ae,
    SC_P0_HIZ_QUAD_PER_TILE_H8                         = 0x000000af,
    SC_P0_HIZ_QUAD_PER_TILE_H9                         = 0x000000b0,
    SC_P0_HIZ_QUAD_PER_TILE_H10                        = 0x000000b1,
    SC_P0_HIZ_QUAD_PER_TILE_H11                        = 0x000000b2,
    SC_P0_HIZ_QUAD_PER_TILE_H12                        = 0x000000b3,
    SC_P0_HIZ_QUAD_PER_TILE_H13                        = 0x000000b4,
    SC_P0_HIZ_QUAD_PER_TILE_H14                        = 0x000000b5,
    SC_P0_HIZ_QUAD_PER_TILE_H15                        = 0x000000b6,
    SC_P0_HIZ_QUAD_PER_TILE_H16                        = 0x000000b7,
    SC_P1_HIZ_QUAD_PER_TILE_H0                         = 0x000000b8,
    SC_P1_HIZ_QUAD_PER_TILE_H1                         = 0x000000b9,
    SC_P1_HIZ_QUAD_PER_TILE_H2                         = 0x000000ba,
    SC_P1_HIZ_QUAD_PER_TILE_H3                         = 0x000000bb,
    SC_P1_HIZ_QUAD_PER_TILE_H4                         = 0x000000bc,
    SC_P1_HIZ_QUAD_PER_TILE_H5                         = 0x000000bd,
    SC_P1_HIZ_QUAD_PER_TILE_H6                         = 0x000000be,
    SC_P1_HIZ_QUAD_PER_TILE_H7                         = 0x000000bf,
    SC_P1_HIZ_QUAD_PER_TILE_H8                         = 0x000000c0,
    SC_P1_HIZ_QUAD_PER_TILE_H9                         = 0x000000c1,
    SC_P1_HIZ_QUAD_PER_TILE_H10                        = 0x000000c2,
    SC_P1_HIZ_QUAD_PER_TILE_H11                        = 0x000000c3,
    SC_P1_HIZ_QUAD_PER_TILE_H12                        = 0x000000c4,
    SC_P1_HIZ_QUAD_PER_TILE_H13                        = 0x000000c5,
    SC_P1_HIZ_QUAD_PER_TILE_H14                        = 0x000000c6,
    SC_P1_HIZ_QUAD_PER_TILE_H15                        = 0x000000c7,
    SC_P1_HIZ_QUAD_PER_TILE_H16                        = 0x000000c8,
    SC_P2_HIZ_QUAD_PER_TILE_H0                         = 0x000000c9,
    SC_P2_HIZ_QUAD_PER_TILE_H1                         = 0x000000ca,
    SC_P2_HIZ_QUAD_PER_TILE_H2                         = 0x000000cb,
    SC_P2_HIZ_QUAD_PER_TILE_H3                         = 0x000000cc,
    SC_P2_HIZ_QUAD_PER_TILE_H4                         = 0x000000cd,
    SC_P2_HIZ_QUAD_PER_TILE_H5                         = 0x000000ce,
    SC_P2_HIZ_QUAD_PER_TILE_H6                         = 0x000000cf,
    SC_P2_HIZ_QUAD_PER_TILE_H7                         = 0x000000d0,
    SC_P2_HIZ_QUAD_PER_TILE_H8                         = 0x000000d1,
    SC_P2_HIZ_QUAD_PER_TILE_H9                         = 0x000000d2,
    SC_P2_HIZ_QUAD_PER_TILE_H10                        = 0x000000d3,
    SC_P2_HIZ_QUAD_PER_TILE_H11                        = 0x000000d4,
    SC_P2_HIZ_QUAD_PER_TILE_H12                        = 0x000000d5,
    SC_P2_HIZ_QUAD_PER_TILE_H13                        = 0x000000d6,
    SC_P2_HIZ_QUAD_PER_TILE_H14                        = 0x000000d7,
    SC_P2_HIZ_QUAD_PER_TILE_H15                        = 0x000000d8,
    SC_P2_HIZ_QUAD_PER_TILE_H16                        = 0x000000d9,
    SC_P3_HIZ_QUAD_PER_TILE_H0                         = 0x000000da,
    SC_P3_HIZ_QUAD_PER_TILE_H1                         = 0x000000db,
    SC_P3_HIZ_QUAD_PER_TILE_H2                         = 0x000000dc,
    SC_P3_HIZ_QUAD_PER_TILE_H3                         = 0x000000dd,
    SC_P3_HIZ_QUAD_PER_TILE_H4                         = 0x000000de,
    SC_P3_HIZ_QUAD_PER_TILE_H5                         = 0x000000df,
    SC_P3_HIZ_QUAD_PER_TILE_H6                         = 0x000000e0,
    SC_P3_HIZ_QUAD_PER_TILE_H7                         = 0x000000e1,
    SC_P3_HIZ_QUAD_PER_TILE_H8                         = 0x000000e2,
    SC_P3_HIZ_QUAD_PER_TILE_H9                         = 0x000000e3,
    SC_P3_HIZ_QUAD_PER_TILE_H10                        = 0x000000e4,
    SC_P3_HIZ_QUAD_PER_TILE_H11                        = 0x000000e5,
    SC_P3_HIZ_QUAD_PER_TILE_H12                        = 0x000000e6,
    SC_P3_HIZ_QUAD_PER_TILE_H13                        = 0x000000e7,
    SC_P3_HIZ_QUAD_PER_TILE_H14                        = 0x000000e8,
    SC_P3_HIZ_QUAD_PER_TILE_H15                        = 0x000000e9,
    SC_P3_HIZ_QUAD_PER_TILE_H16                        = 0x000000ea,
    SC_P0_HIZ_QUAD_COUNT                               = 0x000000eb,
    SC_P1_HIZ_QUAD_COUNT                               = 0x000000ec,
    SC_P2_HIZ_QUAD_COUNT                               = 0x000000ed,
    SC_P3_HIZ_QUAD_COUNT                               = 0x000000ee,
    SC_P0_DETAIL_QUAD_COUNT                            = 0x000000ef,
    SC_P1_DETAIL_QUAD_COUNT                            = 0x000000f0,
    SC_P2_DETAIL_QUAD_COUNT                            = 0x000000f1,
    SC_P3_DETAIL_QUAD_COUNT                            = 0x000000f2,
    SC_P0_DETAIL_QUAD_WITH_1_PIX                       = 0x000000f3,
    SC_P0_DETAIL_QUAD_WITH_2_PIX                       = 0x000000f4,
    SC_P0_DETAIL_QUAD_WITH_3_PIX                       = 0x000000f5,
    SC_P0_DETAIL_QUAD_WITH_4_PIX                       = 0x000000f6,
    SC_P1_DETAIL_QUAD_WITH_1_PIX                       = 0x000000f7,
    SC_P1_DETAIL_QUAD_WITH_2_PIX                       = 0x000000f8,
    SC_P1_DETAIL_QUAD_WITH_3_PIX                       = 0x000000f9,
    SC_P1_DETAIL_QUAD_WITH_4_PIX                       = 0x000000fa,
    SC_P2_DETAIL_QUAD_WITH_1_PIX                       = 0x000000fb,
    SC_P2_DETAIL_QUAD_WITH_2_PIX                       = 0x000000fc,
    SC_P2_DETAIL_QUAD_WITH_3_PIX                       = 0x000000fd,
    SC_P2_DETAIL_QUAD_WITH_4_PIX                       = 0x000000fe,
    SC_P3_DETAIL_QUAD_WITH_1_PIX                       = 0x000000ff,
    SC_P3_DETAIL_QUAD_WITH_2_PIX                       = 0x00000100,
    SC_P3_DETAIL_QUAD_WITH_3_PIX                       = 0x00000101,
    SC_P3_DETAIL_QUAD_WITH_4_PIX                       = 0x00000102,
    SC_EARLYZ_QUAD_COUNT                               = 0x00000103,
    SC_EARLYZ_QUAD_WITH_1_PIX                          = 0x00000104,
    SC_EARLYZ_QUAD_WITH_2_PIX                          = 0x00000105,
    SC_EARLYZ_QUAD_WITH_3_PIX                          = 0x00000106,
    SC_EARLYZ_QUAD_WITH_4_PIX                          = 0x00000107,
    SC_PKR_QUAD_PER_ROW_H1                             = 0x00000108,
    SC_PKR_QUAD_PER_ROW_H2                             = 0x00000109,
    SC_PKR_4X2_QUAD_SPLIT                              = 0x0000010a,
    SC_PKR_4X2_FILL_QUAD                               = 0x0000010b,
    SC_PKR_END_OF_VECTOR                               = 0x0000010c,
    SC_PKR_CONTROL_XFER                                = 0x0000010d,
    SC_PKR_DBHANG_FORCE_EOV                            = 0x0000010e,
    SC_REG_SCLK_BUSY                                   = 0x0000010f,
    SC_GRP0_DYN_SCLK_BUSY                              = 0x00000110,
    SC_GRP1_DYN_SCLK_BUSY                              = 0x00000111,
    SC_GRP2_DYN_SCLK_BUSY                              = 0x00000112,
    SC_GRP3_DYN_SCLK_BUSY                              = 0x00000113,
    SC_GRP4_DYN_SCLK_BUSY                              = 0x00000114,
    SC_PA0_SC_DATA_FIFO_RD                             = 0x00000115,
    SC_PA0_SC_DATA_FIFO_WE                             = 0x00000116,
    SC_PA1_SC_DATA_FIFO_RD                             = 0x00000117,
    SC_PA1_SC_DATA_FIFO_WE                             = 0x00000118,
    SC_PS_ARB_XFC_ALL_EVENT_OR_PRIM_CYCLES             = 0x00000119,
    SC_PS_ARB_XFC_ONLY_PRIM_CYCLES                     = 0x0000011a,
    SC_PS_ARB_XFC_ONLY_ONE_INC_PER_PRIM                = 0x0000011b,
    SC_PS_ARB_STALLED_FROM_BELOW                       = 0x0000011c,
    SC_PS_ARB_STARVED_FROM_ABOVE                       = 0x0000011d,
    SC_PS_ARB_SC_BUSY                                  = 0x0000011e,
    SC_PS_ARB_PA_SC_BUSY                               = 0x0000011f,
    SC_PA2_SC_DATA_FIFO_RD                             = 0x00000120,
    SC_PA2_SC_DATA_FIFO_WE                             = 0x00000121,
    SC_PA3_SC_DATA_FIFO_RD                             = 0x00000122,
    SC_PA3_SC_DATA_FIFO_WE                             = 0x00000123,
    SC_PA_SC_DEALLOC_0_0_WE                            = 0x00000124,
    SC_PA_SC_DEALLOC_0_1_WE                            = 0x00000125,
    SC_PA_SC_DEALLOC_1_0_WE                            = 0x00000126,
    SC_PA_SC_DEALLOC_1_1_WE                            = 0x00000127,
    SC_PA_SC_DEALLOC_2_0_WE                            = 0x00000128,
    SC_PA_SC_DEALLOC_2_1_WE                            = 0x00000129,
    SC_PA_SC_DEALLOC_3_0_WE                            = 0x0000012a,
    SC_PA_SC_DEALLOC_3_1_WE                            = 0x0000012b,
    SC_PA0_SC_EOP_WE                                   = 0x0000012c,
    SC_PA0_SC_EOPG_WE                                  = 0x0000012d,
    SC_PA0_SC_EVENT_WE                                 = 0x0000012e,
    SC_PA1_SC_EOP_WE                                   = 0x0000012f,
    SC_PA1_SC_EOPG_WE                                  = 0x00000130,
    SC_PA1_SC_EVENT_WE                                 = 0x00000131,
    SC_PA2_SC_EOP_WE                                   = 0x00000132,
    SC_PA2_SC_EOPG_WE                                  = 0x00000133,
    SC_PA2_SC_EVENT_WE                                 = 0x00000134,
    SC_PA3_SC_EOP_WE                                   = 0x00000135,
    SC_PA3_SC_EOPG_WE                                  = 0x00000136,
    SC_PA3_SC_EVENT_WE                                 = 0x00000137,
    SC_PS_ARB_OOO_THRESHOLD_SWITCH_TO_DESIRED_FIFO     = 0x00000138,
    SC_PS_ARB_OOO_FIFO_EMPTY_SWITCH                    = 0x00000139,
    SC_PS_ARB_NULL_PRIM_BUBBLE_POP                     = 0x0000013a,
    SC_PS_ARB_EOP_POP_SYNC_POP                         = 0x0000013b,
    SC_PS_ARB_EVENT_SYNC_POP                           = 0x0000013c,
    SC_PA0_SC_FPOV_WE                                  = 0x0000013e,
    SC_PA1_SC_FPOV_WE                                  = 0x0000013f,
    SC_PA2_SC_FPOV_WE                                  = 0x00000140,
    SC_PA3_SC_FPOV_WE                                  = 0x00000141,
    SC_PA0_SC_LPOV_WE                                  = 0x00000142,
    SC_PA1_SC_LPOV_WE                                  = 0x00000143,
    SC_PA2_SC_LPOV_WE                                  = 0x00000144,
    SC_PA3_SC_LPOV_WE                                  = 0x00000145,
    SC_PS_TS_EVENT_FIFO_PUSH                           = 0x00000157,
    SC_PS_TS_EVENT_FIFO_POP                            = 0x00000158,
    SC_PS_CTX_DONE_FIFO_PUSH                           = 0x00000159,
    SC_PS_CTX_DONE_FIFO_POP                            = 0x0000015a,
    SC_MULTICYCLE_BUBBLE_FREEZE                        = 0x0000015b,
    SC_EOP_SYNC_WINDOW                                 = 0x0000015c,
    SC_PA0_SC_NULL_WE                                  = 0x0000015d,
    SC_PA0_SC_NULL_DEALLOC_WE                          = 0x0000015e,
    SC_PA0_SC_DATA_FIFO_EOPG_RD                        = 0x0000015f,
    SC_PA0_SC_DATA_FIFO_EOP_RD                         = 0x00000160,
    SC_PA0_SC_DEALLOC_0_RD                             = 0x00000161,
    SC_PA0_SC_DEALLOC_1_RD                             = 0x00000162,
    SC_PA1_SC_DATA_FIFO_EOPG_RD                        = 0x00000163,
    SC_PA1_SC_DATA_FIFO_EOP_RD                         = 0x00000164,
    SC_PA1_SC_DEALLOC_0_RD                             = 0x00000165,
    SC_PA1_SC_DEALLOC_1_RD                             = 0x00000166,
    SC_PA1_SC_NULL_WE                                  = 0x00000167,
    SC_PA1_SC_NULL_DEALLOC_WE                          = 0x00000168,
    SC_PA2_SC_DATA_FIFO_EOPG_RD                        = 0x00000169,
    SC_PA2_SC_DATA_FIFO_EOP_RD                         = 0x0000016a,
    SC_PA2_SC_DEALLOC_0_RD                             = 0x0000016b,
    SC_PA2_SC_DEALLOC_1_RD                             = 0x0000016c,
    SC_PA2_SC_NULL_WE                                  = 0x0000016d,
    SC_PA2_SC_NULL_DEALLOC_WE                          = 0x0000016e,
    SC_PA3_SC_DATA_FIFO_EOPG_RD                        = 0x0000016f,
    SC_PA3_SC_DATA_FIFO_EOP_RD                         = 0x00000170,
    SC_PA3_SC_DEALLOC_0_RD                             = 0x00000171,
    SC_PA3_SC_DEALLOC_1_RD                             = 0x00000172,
    SC_PA3_SC_NULL_WE                                  = 0x00000173,
    SC_PA3_SC_NULL_DEALLOC_WE                          = 0x00000174,
    SC_PS_PA0_SC_FIFO_EMPTY                            = 0x00000175,
    SC_PS_PA0_SC_FIFO_FULL                             = 0x00000176,
    SC_PS_PA1_SC_FIFO_EMPTY                            = 0x00000178,
    SC_PS_PA1_SC_FIFO_FULL                             = 0x00000179,
    SC_PS_PA2_SC_FIFO_EMPTY                            = 0x0000017b,
    SC_PS_PA2_SC_FIFO_FULL                             = 0x0000017c,
    SC_PS_PA3_SC_FIFO_EMPTY                            = 0x0000017e,
    SC_PS_PA3_SC_FIFO_FULL                             = 0x0000017f,
    SC_BUSY_PROCESSING_MULTICYCLE_PRIM                 = 0x00000181,
    SC_BUSY_CNT_NOT_ZERO                               = 0x00000182,
    SC_BM_BUSY                                         = 0x00000183,
    SC_BACKEND_BUSY                                    = 0x00000184,
    SC_SCF_SCB_INTERFACE_BUSY                          = 0x00000185,
    SC_SCB_BUSY                                        = 0x00000186,
    SC_STARVED_BY_PA_WITH_UNSELECTED_PA_NOT_EMPTY      = 0x00000187,
    SC_STARVED_BY_PA_WITH_UNSELECTED_PA_FULL           = 0x00000188,
    SC_PBB_BIN_HIST_NUM_PRIMS                          = 0x00000189,
    SC_PBB_BATCH_HIST_NUM_PRIMS                        = 0x0000018a,
    SC_PBB_BIN_HIST_NUM_CONTEXTS                       = 0x0000018b,
    SC_PBB_BATCH_HIST_NUM_CONTEXTS                     = 0x0000018c,
    SC_PBB_BIN_HIST_NUM_PERSISTENT_STATES              = 0x0000018d,
    SC_PBB_BATCH_HIST_NUM_PERSISTENT_STATES            = 0x0000018e,
    SC_PBB_BATCH_HIST_NUM_PS_WAVE_BREAKS               = 0x0000018f,
    SC_PBB_BATCH_HIST_NUM_TRIV_REJECTED_PRIMS          = 0x00000190,
    SC_PBB_BATCH_HIST_NUM_ROWS_PER_PRIM                = 0x00000191,
    SC_PBB_BATCH_HIST_NUM_COLUMNS_PER_ROW              = 0x00000192,
    SC_PBB_BUSY                                        = 0x00000193,
    SC_PBB_BUSY_AND_NO_SENDS                           = 0x00000194,
    SC_PBB_STALLS_PA_DUE_TO_NO_TILES                   = 0x00000195,
    SC_PBB_NUM_BINS                                    = 0x00000196,
    SC_PBB_END_OF_BIN                                  = 0x00000197,
    SC_PBB_END_OF_BATCH                                = 0x00000198,
    SC_PBB_PRIMBIN_PROCESSED                           = 0x00000199,
    SC_PBB_PRIM_ADDED_TO_BATCH                         = 0x0000019a,
    SC_PBB_NONBINNED_PRIM                              = 0x0000019b,
    SC_PBB_TOTAL_REAL_PRIMS_OUT_OF_PBB                 = 0x0000019c,
    SC_PBB_TOTAL_NULL_PRIMS_OUT_OF_PBB                 = 0x0000019d,
    SC_PBB_IDLE_CLK_DUE_TO_ROW_TO_COLUMN_TRANSITION    = 0x0000019e,
    SC_PBB_IDLE_CLK_DUE_TO_FALSE_POSITIVE_ON_ROW       = 0x0000019f,
    SC_PBB_IDLE_CLK_DUE_TO_FALSE_POSITIVE_ON_COLUMN    = 0x000001a0,
    SC_PBB_BATCH_BREAK_DUE_TO_PERSISTENT_STATE         = 0x000001a1,
    SC_PBB_BATCH_BREAK_DUE_TO_CONTEXT_STATE            = 0x000001a2,
    SC_PBB_BATCH_BREAK_DUE_TO_PRIM                     = 0x000001a3,
    SC_PBB_BATCH_BREAK_DUE_TO_PC_STORAGE               = 0x000001a4,
    SC_PBB_BATCH_BREAK_DUE_TO_EVENT                    = 0x000001a5,
    SC_PBB_BATCH_BREAK_DUE_TO_FPOV_LIMIT               = 0x000001a6,
    SC_POPS_INTRA_WAVE_OVERLAPS                        = 0x000001a7,
    SC_POPS_FORCE_EOV                                  = 0x000001a8,
    SC_PKR_QUAD_OVLP_NOT_FOUND_IN_WAVE_TABLE_AND_WAVES_SINCE_OVLP_SET_TO_MAX = 0x000001a9,
    SC_PKR_QUAD_OVLP_NOT_FOUND_IN_WAVE_TABLE_AND_NO_CHANGE_TO_WAVES_SINCE_OVLP = 0x000001aa,
    SC_PKR_QUAD_OVLP_FOUND_IN_WAVE_TABLE               = 0x000001ab,
    SC_GRP5_DYN_SCLK_BUSY                              = 0x000001b5,
    SC_GRP6_DYN_SCLK_BUSY                              = 0x000001b6,
    SC_GRP7_DYN_SCLK_BUSY                              = 0x000001b7,
    SC_GRP8_DYN_SCLK_BUSY                              = 0x000001b8,
    SC_GRP9_DYN_SCLK_BUSY                              = 0x000001b9,
    SC_PS_TO_BE_SCLK_GATE_STALL                        = 0x000001ba,
    SC_PA_TO_PBB_SCLK_GATE_STALL_STALL                 = 0x000001bb,
    SC_PK_BUSY                                         = 0x000001bc,
    SC_PK_MAX_DEALLOC_FORCE_EOV                        = 0x000001bd,
    SC_PK_DEALLOC_WAVE_BREAK                           = 0x000001be,
    SC_SPI_SEND                                        = 0x000001bf,
    SC_SPI_CREDIT_AT_ZERO_WITH_PENDING_SEND            = 0x000001c0,
    SC_SPI_CREDIT_AT_MAX                               = 0x000001c1,
    SC_SPI_CREDIT_AT_MAX_NO_PENDING_SEND               = 0x000001c2,
    SC_BCI_SEND                                        = 0x000001c3,
    SC_BCI_CREDIT_AT_ZERO_WITH_PENDING_SEND            = 0x000001c4,
    SC_BCI_CREDIT_AT_MAX                               = 0x000001c5,
    SC_BCI_CREDIT_AT_MAX_NO_PENDING_SEND               = 0x000001c6,
    SC_SPIBC_FULL_FREEZE                               = 0x000001c7,
    SC_PW_BM_PASS_EMPTY_PRIM                           = 0x000001c8,
    SC_SUPERTILE_COUNT_EXCLUDE_PASS_EMPTY_PRIM         = 0x000001c9,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H0   = 0x000001ca,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H1   = 0x000001cb,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H2   = 0x000001cc,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H3   = 0x000001cd,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H4   = 0x000001ce,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H5   = 0x000001cf,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H6   = 0x000001d0,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H7   = 0x000001d1,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H8   = 0x000001d2,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H9   = 0x000001d3,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H10  = 0x000001d4,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H11  = 0x000001d5,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H12  = 0x000001d6,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H13  = 0x000001d7,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H14  = 0x000001d8,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H15  = 0x000001d9,
    SC_SUPERTILE_PER_PRIM_EXCLUDE_PASS_EMPTY_PRIM_H16  = 0x000001da,
    SC_DB0_TILE_INTERFACE_BUSY                         = 0x000001db,
    SC_DB0_TILE_INTERFACE_SEND                         = 0x000001dc,
    SC_DB0_TILE_INTERFACE_SEND_EVENT                   = 0x000001dd,
    SC_DB0_TILE_INTERFACE_SEND_SOP_ONLY_EVENT          = 0x000001de,
    SC_DB0_TILE_INTERFACE_SEND_SOP                     = 0x000001df,
    SC_DB0_TILE_INTERFACE_CREDIT_AT_ZERO_WITH_PENDING_SEND = 0x000001e0,
    SC_DB0_TILE_INTERFACE_CREDIT_AT_MAX                = 0x000001e1,
    SC_DB0_TILE_INTERFACE_CREDIT_AT_MAX_WITH_NO_PENDING_SEND = 0x000001e2,
    SC_DB1_TILE_INTERFACE_BUSY                         = 0x000001e3,
    SC_DB1_TILE_INTERFACE_SEND                         = 0x000001e4,
    SC_DB1_TILE_INTERFACE_SEND_EVENT                   = 0x000001e5,
    SC_DB1_TILE_INTERFACE_SEND_SOP_ONLY_EVENT          = 0x000001e6,
    SC_DB1_TILE_INTERFACE_SEND_SOP                     = 0x000001e7,
    SC_DB1_TILE_INTERFACE_CREDIT_AT_ZERO_WITH_PENDING_SEND = 0x000001e8,
    SC_DB1_TILE_INTERFACE_CREDIT_AT_MAX                = 0x000001e9,
    SC_DB1_TILE_INTERFACE_CREDIT_AT_MAX_WITH_NO_PENDING_SEND = 0x000001ea,
    SC_SC_PS_ENG_MULTICYCLE_BUBBLE__GFX09              = 0x0000013d,
    SC_SC_SPI_DEALLOC_0_0__GFX09                       = 0x00000146,
    SC_SC_SPI_DEALLOC_0_1__GFX09                       = 0x00000147,
    SC_SC_SPI_DEALLOC_0_2__GFX09                       = 0x00000148,
    SC_SC_SPI_DEALLOC_1_0__GFX09                       = 0x00000149,
    SC_SC_SPI_DEALLOC_1_1__GFX09                       = 0x0000014a,
    SC_SC_SPI_DEALLOC_1_2__GFX09                       = 0x0000014b,
    SC_SC_SPI_DEALLOC_2_0__GFX09                       = 0x0000014c,
    SC_SC_SPI_DEALLOC_2_1__GFX09                       = 0x0000014d,
    SC_SC_SPI_DEALLOC_2_2__GFX09                       = 0x0000014e,
    SC_SC_SPI_DEALLOC_3_0__GFX09                       = 0x0000014f,
    SC_SC_SPI_DEALLOC_3_1__GFX09                       = 0x00000150,
    SC_SC_SPI_DEALLOC_3_2__GFX09                       = 0x00000151,
    SC_SC_SPI_FPOV_0__GFX09                            = 0x00000152,
    SC_SC_SPI_FPOV_1__GFX09                            = 0x00000153,
    SC_SC_SPI_FPOV_2__GFX09                            = 0x00000154,
    SC_SC_SPI_FPOV_3__GFX09                            = 0x00000155,
    SC_SC_SPI_EVENT__GFX09                             = 0x00000156,
    SC_PA0_PS_DATA_FULL_MINUS3__GFX09                  = 0x00000177,
    SC_PA1_PS_DATA_FULL_MINUS3__GFX09                  = 0x0000017a,
    SC_PA2_PS_DATA_FULL_MINUS3__GFX09                  = 0x0000017d,
    SC_PA3_PS_DATA_FULL_MINUS3__GFX09                  = 0x00000180,
    SC_FULL_FULL_QUAD__GFX09                           = 0x000001ac,
    SC_FULL_HALF_QUAD__GFX09                           = 0x000001ad,
    SC_FULL_QTR_QUAD__GFX09                            = 0x000001ae,
    SC_HALF_FULL_QUAD__GFX09                           = 0x000001af,
    SC_HALF_HALF_QUAD__GFX09                           = 0x000001b0,
    SC_HALF_QTR_QUAD__GFX09                            = 0x000001b1,
    SC_QTR_FULL_QUAD__GFX09                            = 0x000001b2,
    SC_QTR_HALF_QUAD__GFX09                            = 0x000001b3,
    SC_QTR_QTR_QUAD__GFX09                             = 0x000001b4,
    SC_RESERVED_0__GFX10                               = 0x00000177,
    SC_RESERVED_1__GFX10                               = 0x0000017a,
    SC_RESERVED_2__GFX10                               = 0x0000017d,
    SC_RESERVED_3__GFX10                               = 0x00000180,
    SC_BACKEND_PRIM_FIFO_FULL__GFX10                   = 0x000001eb,
    SC_PBB_BATCH_BREAK_DUE_TO_TIMEOUT_COUNTER__GFX10   = 0x000001ec,
    SC_PBB_BATCH_BREAK_DUE_TO_NONBINNED_BATCH__GFX10   = 0x000001ed,
    SC_PBB_BATCH_BREAK_DUE_TO_DEBUG_DATA_PER_DRAW_DISPATCH__GFX10 = 0x000001ee,
    SC_PBB_BATCH_BREAK_DUE_TO_OVERRIDE_REGISTER_PERSISTENT__GFX10 = 0x000001ef,
    SC_PBB_BATCH_BREAK_DUE_TO_OVERRIDE_REGISTER_CONTEXT__GFX10 = 0x000001f0,
    SC_PBB_BATCH_BREAK_DUE_TO_OVERRIDE_REGISTER_FPOV__GFX10 = 0x000001f1,
    SC_PBB_BATCH_BREAK_DUE_TO_NEW_SC_MODE__GFX10       = 0x000001f2,
    SC_PBB_BATCH_BREAK_DUE_TO_BINNING_MODE_CHANGE__GFX10 = 0x000001f3,
    SC_PBB_BATCH_BREAK_DUE_TO_PIPELINE_EVENT_COUNT__GFX10 = 0x000001f4,
    SC_PBB_BATCH_BREAK_DUE_TO_PIPE_RESET__GFX10        = 0x000001f5,
    SC_PBB_BATCH_BREAK_DUE_TO_GFX_PIPE_CHANGE__GFX10   = 0x000001f6,
    SC_STALLED_BY_DB0_TILEFIFO__GFX10                  = 0x000001f7,
    SC_DB0_QUAD_INTF_SEND__GFX10                       = 0x000001f8,
    SC_DB0_QUAD_INTF_BUSY__GFX10                       = 0x000001f9,
    SC_DB0_QUAD_INTF_STALLED_BY_DB__GFX10              = 0x000001fa,
    SC_DB0_QUAD_INTF_CREDIT_AT_MAX__GFX10              = 0x000001fb,
    SC_DB0_QUAD_INTF_IDLE__GFX10                       = 0x000001fc,
    SC_DB1_QUAD_INTF_SEND__GFX10                       = 0x000001fd,
    SC_STALLED_BY_DB1_TILEFIFO__GFX10                  = 0x000001fe,
    SC_DB1_QUAD_INTF_BUSY__GFX10                       = 0x000001ff,
    SC_DB1_QUAD_INTF_STALLED_BY_DB__GFX10              = 0x00000200,
    SC_DB1_QUAD_INTF_CREDIT_AT_MAX__GFX10              = 0x00000201,
    SC_DB1_QUAD_INTF_IDLE__GFX10                       = 0x00000202,
    SC_PKR_WAVE_BREAK_OUTSIDE_REGION__GFX10            = 0x00000203,
    SC_PKR_WAVE_BREAK_FULL_TILE__GFX10                 = 0x00000204,
    SC_FULL_FULL_QUAD__GFX101                          = 0x000001ac,
    SC_FULL_HALF_QUAD__GFX101                          = 0x000001ad,
    SC_FULL_QTR_QUAD__GFX101                           = 0x000001ae,
    SC_HALF_FULL_QUAD__GFX101                          = 0x000001af,
    SC_HALF_HALF_QUAD__GFX101                          = 0x000001b0,
    SC_HALF_QTR_QUAD__GFX101                           = 0x000001b1,
    SC_QTR_FULL_QUAD__GFX101                           = 0x000001b2,
    SC_QTR_HALF_QUAD__GFX101                           = 0x000001b3,
    SC_QTR_QTR_QUAD__GFX101                            = 0x000001b4,
    SC_FSR_WALKED__GFX101PLUS                          = 0x00000205,
    SC_PBB_EMPTY_INPUT_CYCLE_WHEN_BATCH_OPEN__GFX101PLUS = 0x00000206,
    SC_PBB_BATCH_BREAK_DUE_TO_NULL_PRIM_BREAK_BATCH_LIMIT__GFX101PLUS = 0x00000207,
    SC_DB0_WE_STALLED_BY_RSLT_FIFO_FULL__GFX101PLUS    = 0x00000208,
    SC_DB0_WE_TILE_MASK_RETURN_FIFO_FULL_WITH_WE_RSLT_FIFO_STALL__GFX101PLUS = 0x00000209,
    SC_DB0_TILE_MASK_FIFO_FULL__GFX101PLUS             = 0x0000020a,
    SC_DB1_WE_STALLED_BY_RSLT_FIFO_FULL__GFX101PLUS    = 0x0000020b,
    SC_DB1_WE_TILE_MASK_RETURN_FIFO_FULL_WITH_WE_RSLT_FIFO_STALL__GFX101PLUS = 0x0000020c,
    SC_DB1_TILE_MASK_FIFO_FULL__GFX101PLUS             = 0x0000020d,
    SC_PS_PM_PBB_TO_PSE_FIFO_WE_STALL_BY_PFF_PW_FULL__GFX101PLUS = 0x0000020e,
    SC_PS_PM_PBB_TO_PSE_FIFO_WE_STALL_BY_ZFF_PW_FULL__GFX101PLUS = 0x0000020f,
    SC_PS_PM_PBB_TO_PSE_FIFO_WE_STALL_BY_PBB_TO_PSE_FIFO_FULL__GFX101PLUS = 0x00000210,
    SC_PS_PM_PFF_PW_FULL__GFX101PLUS                   = 0x00000211,
    SC_PS_PM_ZFF_PW_FULL__GFX101PLUS                   = 0x00000212,
    SC_PS_PM_PBB_TO_PSE_FIFO_FULL__GFX101PLUS          = 0x00000213,
    SC_PK_PM_QD1_FD_CONFLICT_WAVE_BRK_1H__GFX101PLUS   = 0x00000214,
    SC_PK_PM_QD1_FORCE_PARTIAL_FOR_DEALLOC_WAVE_BRK_1H__GFX101PLUS = 0x00000215,
    SC_PK_PM_QD1_AVOID_DEALLOC_ADD_WAVE_BRK_1H__GFX101PLUS = 0x00000216,
    SC_PK_PM_4X2_SPLIT_WAVE_BRK_1H__GFX101PLUS         = 0x00000217,
    SC_PK_PM_PKR_FILL_4X2_WAVE_BRK_1H__GFX101PLUS      = 0x00000218,
    SC_PK_PM_SPLIT_OR_FILL_4X2_WAVE_BRK_1H__GFX101PLUS = 0x00000219,
    SC_PK_PM_END_OF_VECTOR_WAVE_BRK_1H__GFX101PLUS     = 0x0000021a,
    SC_PK_PM_LAST_AND_DEALLOC_WAVE_BRK_1H__GFX101PLUS  = 0x0000021b,
    SC_PK_PM_CTL_ONLY_CMD_WAVE_BRK_1H__GFX101PLUS      = 0x0000021c,
    SC_PK_PM_AVOID_DEALLOC_ADD_WAVE_BRK_1H__GFX101PLUS = 0x0000021d,
    SC_PK_PM_FD_CONFLICT_WAVE_BRK_1H__GFX101PLUS       = 0x0000021e,
    SC_PK_PM_FORCE_PARTIAL_FOR_DEALLOC_WAVE_BRK_1H__GFX101PLUS = 0x0000021f,
    SC_PK_PM_AE_CONFLICT_WAVE_BRK_1H__GFX101PLUS       = 0x00000220,
    SC_PK_PM_EOP_OR_LAD_WAVE_BRK_1H__GFX101PLUS        = 0x00000221,
    SC_PK_PM_FULL_TILE_WAVE_BRK_1H__GFX101PLUS         = 0x00000222,
    SC_PK_PM_POPS_FORCE_EOV_WAVE_BRK_1H__GFX101PLUS    = 0x00000223,
    SC_PK_PM_MAX_DEALLOC_FORCE_EOV_WAVE_BRK_1H__GFX101PLUS = 0x00000224,
    SC_PK_PM_WAVE_BREAK_OUTSIDE_REGION_WAVE_BRK_1H__GFX101PLUS = 0x00000225,
    SC_PK_PM_MAX_CLK_CNT_FORCE_EOV_WAVE_BRK_1H__GFX101PLUS = 0x00000226,
    SC_PK_PM_MAX_REZ_CNT_FORCE_EOV_WAVE_BRK_1H__GFX101PLUS = 0x00000227,
    SC_SC_PS_ENG_MULTICYCLE_BUBBLE__NV10               = 0x0000013d,
    SC_SC_SPI_DEALLOC_0_0__NV10                        = 0x00000146,
    SC_SC_SPI_DEALLOC_0_1__NV10                        = 0x00000147,
    SC_SC_SPI_DEALLOC_0_2__NV10                        = 0x00000148,
    SC_SC_SPI_DEALLOC_1_0__NV10                        = 0x00000149,
    SC_SC_SPI_DEALLOC_1_1__NV10                        = 0x0000014a,
    SC_SC_SPI_DEALLOC_1_2__NV10                        = 0x0000014b,
    SC_SC_SPI_DEALLOC_2_0__NV10                        = 0x0000014c,
    SC_SC_SPI_DEALLOC_2_1__NV10                        = 0x0000014d,
    SC_SC_SPI_DEALLOC_2_2__NV10                        = 0x0000014e,
    SC_SC_SPI_DEALLOC_3_0__NV10                        = 0x0000014f,
    SC_SC_SPI_DEALLOC_3_1__NV10                        = 0x00000150,
    SC_SC_SPI_DEALLOC_3_2__NV10                        = 0x00000151,
    SC_SC_SPI_FPOV_0__NV10                             = 0x00000152,
    SC_SC_SPI_FPOV_1__NV10                             = 0x00000153,
    SC_SC_SPI_FPOV_2__NV10                             = 0x00000154,
    SC_SC_SPI_FPOV_3__NV10                             = 0x00000155,
    SC_SC_SPI_EVENT__NV10                              = 0x00000156,
    SC_BACKEND_PRIM_FIFO_FULL__VG12                    = 0x000001eb,
    SC_BACKEND_PRIM_FIFO_FULL__VG20                    = 0x000001eb,
} SC_PERFCNT_SEL;

constexpr unsigned int MaxScPerfcntSelGfx09_0          = SC_DB1_TILE_INTERFACE_CREDIT_AT_MAX_WITH_NO_PENDING_SEND;
constexpr unsigned int MaxScPerfcntSelRv2x             = SC_DB1_TILE_INTERFACE_CREDIT_AT_MAX_WITH_NO_PENDING_SEND;
constexpr unsigned int MaxScPerfcntSelVg20             = SC_BACKEND_PRIM_FIFO_FULL__VG20;
constexpr unsigned int MaxScPerfcntSelVg12             = SC_BACKEND_PRIM_FIFO_FULL__VG12;
constexpr unsigned int MaxScPerfcntSelGfx101Plus       = SC_PK_PM_MAX_REZ_CNT_FORCE_EOV_WAVE_BRK_1H__GFX101PLUS;

typedef enum SDMA_PERF_SEL {
    SDMA_PERF_SEL_CYCLE                                = 0x00000000,
    SDMA_PERF_SEL_IDLE                                 = 0x00000001,
    SDMA_PERF_SEL_REG_IDLE                             = 0x00000002,
    SDMA_PERF_SEL_RB_EMPTY                             = 0x00000003,
    SDMA_PERF_SEL_RB_FULL                              = 0x00000004,
    SDMA_PERF_SEL_RB_WPTR_WRAP                         = 0x00000005,
    SDMA_PERF_SEL_RB_RPTR_WRAP                         = 0x00000006,
    SDMA_PERF_SEL_RB_WPTR_POLL_READ                    = 0x00000007,
    SDMA_PERF_SEL_RB_RPTR_WB                           = 0x00000008,
    SDMA_PERF_SEL_RB_CMD_IDLE                          = 0x00000009,
    SDMA_PERF_SEL_RB_CMD_FULL                          = 0x0000000a,
    SDMA_PERF_SEL_IB_CMD_IDLE                          = 0x0000000b,
    SDMA_PERF_SEL_IB_CMD_FULL                          = 0x0000000c,
    SDMA_PERF_SEL_EX_IDLE                              = 0x0000000d,
    SDMA_PERF_SEL_SRBM_REG_SEND                        = 0x0000000e,
    SDMA_PERF_SEL_EX_IDLE_POLL_TIMER_EXPIRE            = 0x0000000f,
    SDMA_PERF_SEL_MC_WR_IDLE                           = 0x00000010,
    SDMA_PERF_SEL_MC_WR_COUNT                          = 0x00000011,
    SDMA_PERF_SEL_MC_RD_IDLE                           = 0x00000012,
    SDMA_PERF_SEL_MC_RD_COUNT                          = 0x00000013,
    SDMA_PERF_SEL_MC_RD_RET_STALL                      = 0x00000014,
    SDMA_PERF_SEL_MC_RD_NO_POLL_IDLE                   = 0x00000015,
    SDMA_PERF_SEL_DRM_IDLE                             = 0x00000016,
    SDMA_PERF_SEL_DRM_REQ_STALL                        = 0x00000017,
    SDMA_PERF_SEL_SEM_IDLE                             = 0x00000018,
    SDMA_PERF_SEL_SEM_REQ_STALL                        = 0x00000019,
    SDMA_PERF_SEL_SEM_REQ_COUNT                        = 0x0000001a,
    SDMA_PERF_SEL_SEM_RESP_INCOMPLETE                  = 0x0000001b,
    SDMA_PERF_SEL_SEM_RESP_FAIL                        = 0x0000001c,
    SDMA_PERF_SEL_SEM_RESP_PASS                        = 0x0000001d,
    SDMA_PERF_SEL_INT_IDLE                             = 0x0000001e,
    SDMA_PERF_SEL_INT_REQ_STALL                        = 0x0000001f,
    SDMA_PERF_SEL_INT_REQ_COUNT                        = 0x00000020,
    SDMA_PERF_SEL_INT_RESP_ACCEPTED                    = 0x00000021,
    SDMA_PERF_SEL_INT_RESP_RETRY                       = 0x00000022,
    SDMA_PERF_SEL_NUM_PACKET                           = 0x00000023,
    SDMA_PERF_SEL_DRM1_REQ_STALL                       = 0x00000024,
    SDMA_PERF_SEL_CE_WREQ_IDLE                         = 0x00000025,
    SDMA_PERF_SEL_CE_WR_IDLE                           = 0x00000026,
    SDMA_PERF_SEL_CE_SPLIT_IDLE                        = 0x00000027,
    SDMA_PERF_SEL_CE_RREQ_IDLE                         = 0x00000028,
    SDMA_PERF_SEL_CE_OUT_IDLE                          = 0x00000029,
    SDMA_PERF_SEL_CE_IN_IDLE                           = 0x0000002a,
    SDMA_PERF_SEL_CE_DST_IDLE                          = 0x0000002b,
    SDMA_PERF_SEL_CE_DRM_IDLE                          = 0x0000002c,
    SDMA_PERF_SEL_CE_DRM1_IDLE                         = 0x0000002d,
    SDMA_PERF_SEL_CE_AFIFO_FULL                        = 0x0000002e,
    SDMA_PERF_SEL_CE_DRM_FULL                          = 0x0000002f,
    SDMA_PERF_SEL_CE_DRM1_FULL                         = 0x00000030,
    SDMA_PERF_SEL_CE_INFO_FULL                         = 0x00000031,
    SDMA_PERF_SEL_CE_INFO1_FULL                        = 0x00000032,
    SDMA_PERF_SEL_CE_RD_STALL                          = 0x00000033,
    SDMA_PERF_SEL_CE_WR_STALL                          = 0x00000034,
    SDMA_PERF_SEL_GFX_SELECT                           = 0x00000035,
    SDMA_PERF_SEL_RLC0_SELECT                          = 0x00000036,
    SDMA_PERF_SEL_RLC1_SELECT                          = 0x00000037,
    SDMA_PERF_SEL_PAGE_SELECT                          = 0x00000038,
    SDMA_PERF_SEL_CTX_CHANGE                           = 0x00000039,
    SDMA_PERF_SEL_CTX_CHANGE_EXPIRED                   = 0x0000003a,
    SDMA_PERF_SEL_CTX_CHANGE_EXCEPTION                 = 0x0000003b,
    SDMA_PERF_SEL_DOORBELL                             = 0x0000003c,
    SDMA_PERF_SEL_RD_BA_RTR                            = 0x0000003d,
    SDMA_PERF_SEL_WR_BA_RTR                            = 0x0000003e,
    SDMA_PERF_SEL_F32_L1_WR_VLD                        = 0x0000003f,
    SDMA_PERF_SEL_CE_L1_WR_VLD                         = 0x00000040,
    SDMA_PERF_SEL_CE_L1_STALL__GFX09                   = 0x00000041,
    SDMA_PERF_SEL_SDMA_INVACK_NFLUSH__GFX09            = 0x00000042,
    SDMA_PERF_SEL_SDMA_INVACK_FLUSH__GFX09             = 0x00000043,
    SDMA_PERF_SEL_ATCL2_INVREQ_NFLUSH__GFX09           = 0x00000044,
    SDMA_PERF_SEL_ATCL2_INVREQ_FLUSH__GFX09            = 0x00000045,
    SDMA_PERF_SEL_ATCL2_RET_XNACK__GFX09               = 0x00000046,
    SDMA_PERF_SEL_ATCL2_RET_ACK__GFX09                 = 0x00000047,
    SDMA_PERF_SEL_ATCL2_FREE__GFX09                    = 0x00000048,
    SDMA_PERF_SEL_SDMA_ATCL2_SEND__GFX09               = 0x00000049,
    SDMA_PERF_SEL_DMA_L1_WR_SEND__GFX09                = 0x0000004a,
    SDMA_PERF_SEL_DMA_L1_RD_SEND__GFX09                = 0x0000004b,
    SDMA_PERF_SEL_DMA_MC_WR_SEND__GFX09                = 0x0000004c,
    SDMA_PERF_SEL_DMA_MC_RD_SEND__GFX09                = 0x0000004d,
    SDMA_PERF_SEL_L1_WR_FIFO_IDLE__GFX09               = 0x0000004e,
    SDMA_PERF_SEL_L1_RD_FIFO_IDLE__GFX09               = 0x0000004f,
    SDMA_PERF_SEL_L1_WRL2_IDLE__GFX09                  = 0x00000050,
    SDMA_PERF_SEL_L1_RDL2_IDLE__GFX09                  = 0x00000051,
    SDMA_PERF_SEL_L1_WRMC_IDLE__GFX09                  = 0x00000052,
    SDMA_PERF_SEL_L1_RDMC_IDLE__GFX09                  = 0x00000053,
    SDMA_PERF_SEL_L1_WR_INV_IDLE__GFX09                = 0x00000054,
    SDMA_PERF_SEL_L1_RD_INV_IDLE__GFX09                = 0x00000055,
    SDMA_PERF_SEL_L1_WR_INV_EN__GFX09                  = 0x00000056,
    SDMA_PERF_SEL_L1_RD_INV_EN__GFX09                  = 0x00000057,
    SDMA_PERF_SEL_L1_WR_WAIT_INVADR__GFX09             = 0x00000058,
    SDMA_PERF_SEL_L1_RD_WAIT_INVADR__GFX09             = 0x00000059,
    SDMA_PERF_SEL_IS_INVREQ_ADDR_WR__GFX09             = 0x0000005a,
    SDMA_PERF_SEL_IS_INVREQ_ADDR_RD__GFX09             = 0x0000005b,
    SDMA_PERF_SEL_L1_WR_XNACK_TIMEOUT__GFX09           = 0x0000005c,
    SDMA_PERF_SEL_L1_RD_XNACK_TIMEOUT__GFX09           = 0x0000005d,
    SDMA_PERF_SEL_L1_INV_MIDDLE__GFX09                 = 0x0000005e,
    SDMA_PERF_SEL_UTCL1_TAG_DELAY_COUNTER__GFX09       = 0x000000fe,
    SDMA_PERF_SEL_MMHUB_TAG_DELAY_COUNTER__GFX09       = 0x000000ff,
    SDMA_PERF_SEL_CPF_SDMA_INVREQ__GFX10               = 0x00000041,
    SDMA_PERF_SEL_SDMA_CPF_INVACK__GFX10               = 0x00000042,
    SDMA_PERF_SEL_UTCL2_SDMA_INVREQ__GFX10             = 0x00000043,
    SDMA_PERF_SEL_SDMA_UTCL2_INVACK__GFX10             = 0x00000044,
    SDMA_PERF_SEL_UTCL2_SDMA_INVREQ_ALL__GFX10         = 0x00000045,
    SDMA_PERF_SEL_SDMA_UTCL2_INVACK_ALL__GFX10         = 0x00000046,
    SDMA_PERF_SEL_UTCL2_RET_XNACK__GFX10               = 0x00000047,
    SDMA_PERF_SEL_UTCL2_RET_ACK__GFX10                 = 0x00000048,
    SDMA_PERF_SEL_UTCL2_FREE__GFX10                    = 0x00000049,
    SDMA_PERF_SEL_SDMA_UTCL2_SEND__GFX10               = 0x0000004a,
    SDMA_PERF_SEL_DMA_L1_WR_SEND__GFX10                = 0x0000004b,
    SDMA_PERF_SEL_DMA_L1_RD_SEND__GFX10                = 0x0000004c,
    SDMA_PERF_SEL_DMA_MC_WR_SEND__GFX10                = 0x0000004d,
    SDMA_PERF_SEL_DMA_MC_RD_SEND__GFX10                = 0x0000004e,
    SDMA_PERF_SEL_GPUVM_INVREQ_HIGH__GFX10             = 0x0000004f,
    SDMA_PERF_SEL_GPUVM_INVREQ_LOW__GFX10              = 0x00000050,
    SDMA_PERF_SEL_L1_WRL2_IDLE__GFX10                  = 0x00000051,
    SDMA_PERF_SEL_L1_RDL2_IDLE__GFX10                  = 0x00000052,
    SDMA_PERF_SEL_L1_WRMC_IDLE__GFX10                  = 0x00000053,
    SDMA_PERF_SEL_L1_RDMC_IDLE__GFX10                  = 0x00000054,
    SDMA_PERF_SEL_L1_WR_INV_IDLE__GFX10                = 0x00000055,
    SDMA_PERF_SEL_L1_RD_INV_IDLE__GFX10                = 0x00000056,
    SDMA_PERF_SEL_META_L2_REQ_SEND__GFX10              = 0x00000057,
    SDMA_PERF_SEL_L2_META_RET_VLD__GFX10               = 0x00000058,
    SDMA_PERF_SEL_SDMA_UTCL2_RD_SEND__GFX10            = 0x00000059,
    SDMA_PERF_SEL_UTCL2_SDMA_RD_RTN__GFX10             = 0x0000005a,
    SDMA_PERF_SEL_SDMA_UTCL2_WR_SEND__GFX10            = 0x0000005b,
    SDMA_PERF_SEL_UTCL2_SDMA_WR_RTN__GFX10             = 0x0000005c,
    SDMA_PERF_SEL_META_REQ_SEND__GFX10                 = 0x0000005d,
    SDMA_PERF_SEL_META_RTN_VLD__GFX10                  = 0x0000005e,
    SDMA_PERF_SEL_TLBI_SEND__GFX10                     = 0x0000005f,
    SDMA_PERF_SEL_TLBI_RTN__GFX10                      = 0x00000060,
    SDMA_PERF_SEL_GCR_SEND__GFX10                      = 0x00000061,
    SDMA_PERF_SEL_GCR_RTN__GFX10                       = 0x00000062,
    SDMA_PERF_SEL_UTCL1_TAG_DELAY_COUNTER__GFX10       = 0x00000063,
    SDMA_PERF_SEL_MMHUB_TAG_DELAY_COUNTER__GFX10       = 0x00000064,
} SDMA_PERF_SEL;

constexpr unsigned int MaxSdmaPerfSelGfx09             = SDMA_PERF_SEL_MMHUB_TAG_DELAY_COUNTER__GFX09;
constexpr unsigned int MaxSdmaPerfSelGfx10             = SDMA_PERF_SEL_MMHUB_TAG_DELAY_COUNTER__GFX10;

typedef enum SeEnable {
    ADDR_CONFIG_DISABLE_SE                             = 0x00000000,
    ADDR_CONFIG_ENABLE_SE                              = 0x00000001,
} SeEnable;

typedef enum SeMap {
    RASTER_CONFIG_SE_MAP_0                             = 0x00000000,
    RASTER_CONFIG_SE_MAP_1                             = 0x00000001,
    RASTER_CONFIG_SE_MAP_2                             = 0x00000002,
    RASTER_CONFIG_SE_MAP_3                             = 0x00000003,
} SeMap;

typedef enum SePairMap {
    RASTER_CONFIG_SE_PAIR_MAP_0                        = 0x00000000,
    RASTER_CONFIG_SE_PAIR_MAP_1                        = 0x00000001,
    RASTER_CONFIG_SE_PAIR_MAP_2                        = 0x00000002,
    RASTER_CONFIG_SE_PAIR_MAP_3                        = 0x00000003,
} SePairMap;

typedef enum SePairXsel {
    RASTER_CONFIG_SE_PAIR_XSEL_8_WIDE_TILE             = 0x00000000,
    RASTER_CONFIG_SE_PAIR_XSEL_16_WIDE_TILE            = 0x00000001,
    RASTER_CONFIG_SE_PAIR_XSEL_32_WIDE_TILE            = 0x00000002,
    RASTER_CONFIG_SE_PAIR_XSEL_64_WIDE_TILE            = 0x00000003,
    RASTER_CONFIG_SE_PAIR_XSEL_128_WIDE_TILE__GFX09    = 0x00000004,
} SePairXsel;

typedef enum SePairYsel {
    RASTER_CONFIG_SE_PAIR_YSEL_8_WIDE_TILE             = 0x00000000,
    RASTER_CONFIG_SE_PAIR_YSEL_16_WIDE_TILE            = 0x00000001,
    RASTER_CONFIG_SE_PAIR_YSEL_32_WIDE_TILE            = 0x00000002,
    RASTER_CONFIG_SE_PAIR_YSEL_64_WIDE_TILE            = 0x00000003,
    RASTER_CONFIG_SE_PAIR_YSEL_128_WIDE_TILE__GFX09    = 0x00000004,
} SePairYsel;

typedef enum SeXsel {
    RASTER_CONFIG_SE_XSEL_8_WIDE_TILE                  = 0x00000000,
    RASTER_CONFIG_SE_XSEL_16_WIDE_TILE                 = 0x00000001,
    RASTER_CONFIG_SE_XSEL_32_WIDE_TILE                 = 0x00000002,
    RASTER_CONFIG_SE_XSEL_64_WIDE_TILE                 = 0x00000003,
    RASTER_CONFIG_SE_XSEL_128_WIDE_TILE__GFX09         = 0x00000004,
} SeXsel;

typedef enum SeYsel {
    RASTER_CONFIG_SE_YSEL_8_WIDE_TILE                  = 0x00000000,
    RASTER_CONFIG_SE_YSEL_16_WIDE_TILE                 = 0x00000001,
    RASTER_CONFIG_SE_YSEL_32_WIDE_TILE                 = 0x00000002,
    RASTER_CONFIG_SE_YSEL_64_WIDE_TILE                 = 0x00000003,
    RASTER_CONFIG_SE_YSEL_128_WIDE_TILE__GFX09         = 0x00000004,
} SeYsel;

typedef enum ShaderEngineTileSize {
    ADDR_CONFIG_SE_TILE_16                             = 0x00000000,
    ADDR_CONFIG_SE_TILE_32                             = 0x00000001,
} ShaderEngineTileSize;

typedef enum SH_MEM_ADDRESS_MODE {
    SH_MEM_ADDRESS_MODE_64                             = 0x00000000,
    SH_MEM_ADDRESS_MODE_32                             = 0x00000001,
} SH_MEM_ADDRESS_MODE;

typedef enum SH_MEM_ALIGNMENT_MODE {
    SH_MEM_ALIGNMENT_MODE_DWORD                        = 0x00000000,
    SH_MEM_ALIGNMENT_MODE_DWORD_STRICT                 = 0x00000001,
    SH_MEM_ALIGNMENT_MODE_STRICT                       = 0x00000002,
    SH_MEM_ALIGNMENT_MODE_UNALIGNED                    = 0x00000003,
} SH_MEM_ALIGNMENT_MODE;

typedef enum SH_MEM_RETRY_MODE {
    SH_MEM_RETRY_MODE_ALL                              = 0x00000000,
    SH_MEM_RETRY_MODE_WRITEATOMIC                      = 0x00000001,
    SH_MEM_RETRY_MODE_NONE                             = 0x00000002,
} SH_MEM_RETRY_MODE;

typedef enum SourceFormat {
    EXPORT_4C_32BPC                                    = 0x00000000,
    EXPORT_4C_16BPC                                    = 0x00000001,
    EXPORT_2C_32BPC_GR                                 = 0x00000002,
    EXPORT_2C_32BPC_AR                                 = 0x00000003,
} SourceFormat;

typedef enum SPDIF1_SOFT_RESET {
    SPDIF1_SOFT_RESET_0                                = 0x00000000,
    SPDIF1_SOFT_RESET_1                                = 0x00000001,
} SPDIF1_SOFT_RESET;

typedef enum SPDIF_INVERT_EN {
    SPDIF_INVERT_DISABLE                               = 0x00000000,
    SPDIF_INVERT_ENABLE                                = 0x00000001,
} SPDIF_INVERT_EN;

typedef enum SPI_FOG_MODE {
    SPI_FOG_NONE                                       = 0x00000000,
    SPI_FOG_EXP                                        = 0x00000001,
    SPI_FOG_EXP2                                       = 0x00000002,
    SPI_FOG_LINEAR                                     = 0x00000003,
} SPI_FOG_MODE;

typedef enum SPI_LB_WAVES_SELECT {
    HS_GS                                              = 0x00000000,
    VS_PS                                              = 0x00000001,
    CS_NA                                              = 0x00000002,
    SPI_LB_WAVES_RSVD                                  = 0x00000003,
} SPI_LB_WAVES_SELECT;

typedef enum SPI_PERFCNT_SEL {
    SPI_PERF_VS_WINDOW_VALID                           = 0x00000000,
    SPI_PERF_VS_BUSY                                   = 0x00000001,
    SPI_PERF_VS_FIRST_WAVE                             = 0x00000002,
    SPI_PERF_VS_LAST_WAVE                              = 0x00000003,
    SPI_PERF_VS_LSHS_DEALLOC                           = 0x00000004,
    SPI_PERF_VS_PC_STALL__GFX09                        = 0x00000005,
    SPI_PERF_VS_POS0_STALL__GFX09                      = 0x00000006,
    SPI_PERF_VS_POS1_STALL__GFX09                      = 0x00000007,
    SPI_PERF_VS_CRAWLER_STALL__GFX09                   = 0x00000008,
    SPI_PERF_VS_EVENT_WAVE__GFX09                      = 0x00000009,
    SPI_PERF_VS_WAVE__GFX09                            = 0x0000000a,
    SPI_PERF_VS_PERS_UPD_FULL0__GFX09                  = 0x0000000b,
    SPI_PERF_VS_PERS_UPD_FULL1__GFX09                  = 0x0000000c,
    SPI_PERF_VS_LATE_ALLOC_FULL__GFX09                 = 0x0000000d,
    SPI_PERF_VS_FIRST_SUBGRP__GFX09                    = 0x0000000e,
    SPI_PERF_VS_LAST_SUBGRP__GFX09                     = 0x0000000f,
    SPI_PERF_VS_ALLOC_CNT__GFX09                       = 0x00000010,
    SPI_PERF_VS_PC_ALLOC_CNT__GFX09                    = 0x00000011,
    SPI_PERF_VS_LATE_ALLOC_ACCUM__GFX09                = 0x00000012,
    SPI_PERF_GS_WINDOW_VALID__GFX09                    = 0x00000013,
    SPI_PERF_GS_BUSY__GFX09                            = 0x00000014,
    SPI_PERF_GS_CRAWLER_STALL__GFX09                   = 0x00000015,
    SPI_PERF_GS_EVENT_WAVE__GFX09                      = 0x00000016,
    SPI_PERF_GS_WAVE__GFX09                            = 0x00000017,
    SPI_PERF_GS_PERS_UPD_FULL0__GFX09                  = 0x00000018,
    SPI_PERF_GS_PERS_UPD_FULL1__GFX09                  = 0x00000019,
    SPI_PERF_GS_FIRST_SUBGRP__GFX09                    = 0x0000001a,
    SPI_PERF_GS_LAST_SUBGRP__GFX09                     = 0x0000001b,
    SPI_PERF_GS_HS_DEALLOC__GFX09                      = 0x0000001c,
    SPI_PERF_GS_NGG_SE_LATE_ALLOC_LIMIT__GFX09         = 0x0000001d,
    SPI_PERF_GS_GRP_FIFO_FULL__GFX09                   = 0x0000001e,
    SPI_PERF_HS_WINDOW_VALID__GFX09                    = 0x0000001f,
    SPI_PERF_HS_BUSY__GFX09                            = 0x00000020,
    SPI_PERF_HS_CRAWLER_STALL__GFX09                   = 0x00000021,
    SPI_PERF_HS_FIRST_WAVE__GFX09                      = 0x00000022,
    SPI_PERF_HS_LAST_WAVE__GFX09                       = 0x00000023,
    SPI_PERF_HS_OFFCHIP_LDS_STALL__GFX09               = 0x00000024,
    SPI_PERF_HS_EVENT_WAVE__GFX09                      = 0x00000025,
    SPI_PERF_HS_WAVE__GFX09                            = 0x00000026,
    SPI_PERF_HS_PERS_UPD_FULL0__GFX09                  = 0x00000027,
    SPI_PERF_HS_PERS_UPD_FULL1__GFX09                  = 0x00000028,
    SPI_PERF_CSG_WINDOW_VALID__GFX09                   = 0x00000029,
    SPI_PERF_CSG_BUSY__GFX09                           = 0x0000002a,
    SPI_PERF_CSG_NUM_THREADGROUPS__GFX09               = 0x0000002b,
    SPI_PERF_CSG_CRAWLER_STALL__GFX09                  = 0x0000002c,
    SPI_PERF_CSG_EVENT_WAVE__GFX09                     = 0x0000002d,
    SPI_PERF_CSG_WAVE__GFX09                           = 0x0000002e,
    SPI_PERF_CSN_WINDOW_VALID__GFX09                   = 0x0000002f,
    SPI_PERF_CSN_BUSY__GFX09                           = 0x00000030,
    SPI_PERF_CSN_NUM_THREADGROUPS__GFX09               = 0x00000031,
    SPI_PERF_CSN_CRAWLER_STALL__GFX09                  = 0x00000032,
    SPI_PERF_CSN_EVENT_WAVE__GFX09                     = 0x00000033,
    SPI_PERF_CSN_WAVE__GFX09                           = 0x00000034,
    SPI_PERF_PS_WINDOW_VALID__GFX09                    = 0x00000035,
    SPI_PERF_PS_BUSY__GFX09                            = 0x00000036,
    SPI_PERF_PS_ACTIVE__GFX09                          = 0x00000037,
    SPI_PERF_PS_DEALLOC_BIN0__GFX09                    = 0x00000038,
    SPI_PERF_PS_FPOS_BIN1_STALL__GFX09                 = 0x00000039,
    SPI_PERF_PS_EVENT_WAVE__GFX09                      = 0x0000003a,
    SPI_PERF_PS_WAVE__GFX09                            = 0x0000003b,
    SPI_PERF_PS_OPT_WAVE__GFX09                        = 0x0000003c,
    SPI_PERF_PS_PASS_BIN0__GFX09                       = 0x0000003d,
    SPI_PERF_PS_PASS_BIN1__GFX09                       = 0x0000003e,
    SPI_PERF_PS_FPOS_BIN2__GFX09                       = 0x0000003f,
    SPI_PERF_PS_PRIM_BIN0__GFX09                       = 0x00000040,
    SPI_PERF_PS_PRIM_BIN1__GFX09                       = 0x00000041,
    SPI_PERF_PS_CNF_BIN2__GFX09                        = 0x00000042,
    SPI_PERF_PS_CNF_BIN3__GFX09                        = 0x00000043,
    SPI_PERF_PS_CRAWLER_STALL__GFX09                   = 0x00000044,
    SPI_PERF_PS_LDS_RES_FULL__GFX09                    = 0x00000045,
    SPI_PERF_PS_PERS_UPD_FULL0__GFX09                  = 0x00000046,
    SPI_PERF_PS_PERS_UPD_FULL1__GFX09                  = 0x00000047,
    SPI_PERF_PS_POPS_WAVE_SENT__GFX09                  = 0x00000048,
    SPI_PERF_PS_POPS_WAVE_EXIT__GFX09                  = 0x00000049,
    SPI_PERF_LDS0_PC_VALID__GFX09                      = 0x0000004a,
    SPI_PERF_LDS1_PC_VALID__GFX09                      = 0x0000004b,
    SPI_PERF_RA_PIPE_REQ_BIN2__GFX09                   = 0x0000004c,
    SPI_PERF_RA_TASK_REQ_BIN3__GFX09                   = 0x0000004d,
    SPI_PERF_RA_WR_CTL_FULL__GFX09                     = 0x0000004e,
    SPI_PERF_RA_REQ_NO_ALLOC__GFX09                    = 0x0000004f,
    SPI_PERF_RA_REQ_NO_ALLOC_PS__GFX09                 = 0x00000050,
    SPI_PERF_RA_REQ_NO_ALLOC_VS__GFX09                 = 0x00000051,
    SPI_PERF_RA_REQ_NO_ALLOC_GS__GFX09                 = 0x00000052,
    SPI_PERF_RA_REQ_NO_ALLOC_HS__GFX09                 = 0x00000053,
    SPI_PERF_RA_REQ_NO_ALLOC_CSG__GFX09                = 0x00000054,
    SPI_PERF_RA_REQ_NO_ALLOC_CSN__GFX09                = 0x00000055,
    SPI_PERF_RA_RES_STALL_PS__GFX09                    = 0x00000056,
    SPI_PERF_RA_RES_STALL_VS__GFX09                    = 0x00000057,
    SPI_PERF_RA_RES_STALL_GS__GFX09                    = 0x00000058,
    SPI_PERF_RA_RES_STALL_HS__GFX09                    = 0x00000059,
    SPI_PERF_RA_RES_STALL_CSG__GFX09                   = 0x0000005a,
    SPI_PERF_RA_RES_STALL_CSN__GFX09                   = 0x0000005b,
    SPI_PERF_RA_TMP_STALL_PS__GFX09                    = 0x0000005c,
    SPI_PERF_RA_TMP_STALL_VS__GFX09                    = 0x0000005d,
    SPI_PERF_RA_TMP_STALL_GS__GFX09                    = 0x0000005e,
    SPI_PERF_RA_TMP_STALL_HS__GFX09                    = 0x0000005f,
    SPI_PERF_RA_TMP_STALL_CSG__GFX09                   = 0x00000060,
    SPI_PERF_RA_TMP_STALL_CSN__GFX09                   = 0x00000061,
    SPI_PERF_RA_WAVE_SIMD_FULL_PS__GFX09               = 0x00000062,
    SPI_PERF_RA_WAVE_SIMD_FULL_VS__GFX09               = 0x00000063,
    SPI_PERF_RA_WAVE_SIMD_FULL_GS__GFX09               = 0x00000064,
    SPI_PERF_RA_WAVE_SIMD_FULL_HS__GFX09               = 0x00000065,
    SPI_PERF_RA_WAVE_SIMD_FULL_CSG__GFX09              = 0x00000066,
    SPI_PERF_RA_WAVE_SIMD_FULL_CSN__GFX09              = 0x00000067,
    SPI_PERF_RA_VGPR_SIMD_FULL_PS__GFX09               = 0x00000068,
    SPI_PERF_RA_VGPR_SIMD_FULL_VS__GFX09               = 0x00000069,
    SPI_PERF_RA_VGPR_SIMD_FULL_GS__GFX09               = 0x0000006a,
    SPI_PERF_RA_VGPR_SIMD_FULL_HS__GFX09               = 0x0000006b,
    SPI_PERF_RA_VGPR_SIMD_FULL_CSG__GFX09              = 0x0000006c,
    SPI_PERF_RA_VGPR_SIMD_FULL_CSN__GFX09              = 0x0000006d,
    SPI_PERF_RA_SGPR_SIMD_FULL_PS__GFX09               = 0x0000006e,
    SPI_PERF_RA_SGPR_SIMD_FULL_VS__GFX09               = 0x0000006f,
    SPI_PERF_RA_SGPR_SIMD_FULL_GS__GFX09               = 0x00000070,
    SPI_PERF_RA_SGPR_SIMD_FULL_HS__GFX09               = 0x00000071,
    SPI_PERF_RA_SGPR_SIMD_FULL_CSG__GFX09              = 0x00000072,
    SPI_PERF_RA_SGPR_SIMD_FULL_CSN__GFX09              = 0x00000073,
    SPI_PERF_RA_LDS_CU_FULL_PS__GFX09                  = 0x00000074,
    SPI_PERF_RA_LDS_CU_FULL_LS__GFX09                  = 0x00000075,
    SPI_PERF_RA_LDS_CU_FULL_ES__GFX09                  = 0x00000076,
    SPI_PERF_RA_LDS_CU_FULL_CSG__GFX09                 = 0x00000077,
    SPI_PERF_RA_LDS_CU_FULL_CSN__GFX09                 = 0x00000078,
    SPI_PERF_RA_BAR_CU_FULL_HS__GFX09                  = 0x00000079,
    SPI_PERF_RA_BAR_CU_FULL_CSG__GFX09                 = 0x0000007a,
    SPI_PERF_RA_BAR_CU_FULL_CSN__GFX09                 = 0x0000007b,
    SPI_PERF_RA_BULKY_CU_FULL_CSG__GFX09               = 0x0000007c,
    SPI_PERF_RA_BULKY_CU_FULL_CSN__GFX09               = 0x0000007d,
    SPI_PERF_RA_TGLIM_CU_FULL_CSG__GFX09               = 0x0000007e,
    SPI_PERF_RA_TGLIM_CU_FULL_CSN__GFX09               = 0x0000007f,
    SPI_PERF_RA_WVLIM_STALL_PS__GFX09                  = 0x00000080,
    SPI_PERF_RA_WVLIM_STALL_VS__GFX09                  = 0x00000081,
    SPI_PERF_RA_WVLIM_STALL_GS__GFX09                  = 0x00000082,
    SPI_PERF_RA_WVLIM_STALL_HS__GFX09                  = 0x00000083,
    SPI_PERF_RA_WVLIM_STALL_CSG__GFX09                 = 0x00000084,
    SPI_PERF_RA_WVLIM_STALL_CSN__GFX09                 = 0x00000085,
    SPI_PERF_RA_VS_LOCK__GFX09                         = 0x00000086,
    SPI_PERF_RA_GS_LOCK__GFX09                         = 0x00000087,
    SPI_PERF_RA_HS_LOCK__GFX09                         = 0x00000088,
    SPI_PERF_RA_CSG_LOCK__GFX09                        = 0x00000089,
    SPI_PERF_RA_CSN_LOCK__GFX09                        = 0x0000008a,
    SPI_PERF_RA_RSV_UPD__GFX09                         = 0x0000008b,
    SPI_PERF_EXP_ARB_COL_CNT__GFX09                    = 0x0000008c,
    SPI_PERF_EXP_ARB_PAR_CNT__GFX09                    = 0x0000008d,
    SPI_PERF_EXP_ARB_POS_CNT__GFX09                    = 0x0000008e,
    SPI_PERF_EXP_ARB_GDS_CNT__GFX09                    = 0x0000008f,
    SPI_PERF_NUM_PS_COL_R0_EXPORTS__GFX09              = 0x00000090,
    SPI_PERF_NUM_PS_COL_R1_EXPORTS__GFX09              = 0x00000091,
    SPI_PERF_NUM_VS_POS_R0_EXPORTS__GFX09              = 0x00000092,
    SPI_PERF_NUM_VS_POS_R1_EXPORTS__GFX09              = 0x00000093,
    SPI_PERF_NUM_VS_PARAM_R0_EXPORTS__GFX09            = 0x00000094,
    SPI_PERF_NUM_VS_PARAM_R1_EXPORTS__GFX09            = 0x00000095,
    SPI_PERF_NUM_VS_GDS_R0_EXPORTS__GFX09              = 0x00000096,
    SPI_PERF_NUM_VS_GDS_R1_EXPORTS__GFX09              = 0x00000097,
    SPI_PERF_NUM_EXPGRANT_EXPORTS__GFX09               = 0x00000098,
    SPI_PERF_CLKGATE_BUSY_STALL__GFX09                 = 0x00000099,
    SPI_PERF_CLKGATE_ACTIVE_STALL__GFX09               = 0x0000009a,
    SPI_PERF_CLKGATE_ALL_CLOCKS_ON__GFX09              = 0x0000009b,
    SPI_PERF_CLKGATE_CGTT_DYN_ON__GFX09                = 0x0000009c,
    SPI_PERF_CLKGATE_CGTT_REG_ON__GFX09                = 0x0000009d,
    SPI_PERF_PIX_ALLOC_PEND_CNT__GFX09                 = 0x0000009e,
    SPI_PERF_PIX_ALLOC_SCB_STALL__GFX09                = 0x0000009f,
    SPI_PERF_PIX_ALLOC_DB0_STALL__GFX09                = 0x000000a0,
    SPI_PERF_PIX_ALLOC_DB1_STALL__GFX09                = 0x000000a1,
    SPI_PERF_PIX_ALLOC_DB2_STALL__GFX09                = 0x000000a2,
    SPI_PERF_PIX_ALLOC_DB3_STALL__GFX09                = 0x000000a3,
    SPI_PERF_PC_ALLOC_ACCUM__GFX09                     = 0x000000a4,
    SPI_PERF_GS_NGG_SE_HAS_BATON__GFX09                = 0x000000a5,
    SPI_PERF_GS_NGG_SE_DOES_NOT_HAVE_BATON__GFX09      = 0x000000a6,
    SPI_PERF_GS_NGG_SE_FORWARDED_BATON__GFX09          = 0x000000a7,
    SPI_PERF_GS_NGG_SE_AT_SYNC_EVENT__GFX09            = 0x000000a8,
    SPI_PERF_GS_NGG_SE_SG_ALLOC_PC_SPACE_CNT__GFX09    = 0x000000a9,
    SPI_PERF_GS_NGG_SE_DEALLOC_PC_SPACE_CNT__GFX09     = 0x000000aa,
    SPI_PERF_GS_NGG_PC_FULL__GFX09                     = 0x000000ab,
    SPI_PERF_GS_NGG_SE_SEND_GS_ALLOC__GFX09            = 0x000000ac,
    SPI_PERF_GS_NGG_GS_ALLOC_FIFO_EMPTY__GFX09         = 0x000000ad,
    SPI_PERF_GSC_VTX_BUSY__GFX09                       = 0x000000ae,
    SPI_PERF_GSC_VTX_INPUT_STARVED__GFX09              = 0x000000af,
    SPI_PERF_GSC_VTX_VSR_STALL__GFX09                  = 0x000000b0,
    SPI_PERF_GSC_VTX_VSR_FULL__GFX09                   = 0x000000b1,
    SPI_PERF_GSC_VTX_CAC_BUSY__GFX09                   = 0x000000b2,
    SPI_PERF_ESC_VTX_BUSY__GFX09                       = 0x000000b3,
    SPI_PERF_ESC_VTX_INPUT_STARVED__GFX09              = 0x000000b4,
    SPI_PERF_ESC_VTX_VSR_STALL__GFX09                  = 0x000000b5,
    SPI_PERF_ESC_VTX_VSR_FULL__GFX09                   = 0x000000b6,
    SPI_PERF_ESC_VTX_CAC_BUSY__GFX09                   = 0x000000b7,
    SPI_PERF_SWC_PS_WR__GFX09                          = 0x000000b8,
    SPI_PERF_SWC_VS_WR__GFX09                          = 0x000000b9,
    SPI_PERF_SWC_GS_WR__GFX09                          = 0x000000ba,
    SPI_PERF_SWC_HS_WR__GFX09                          = 0x000000bb,
    SPI_PERF_SWC_CSG_WR__GFX09                         = 0x000000bc,
    SPI_PERF_SWC_CSC_WR__GFX09                         = 0x000000bd,
    SPI_PERF_VWC_PS_WR__GFX09                          = 0x000000be,
    SPI_PERF_VWC_VS_WR__GFX09                          = 0x000000bf,
    SPI_PERF_VWC_GS_WR__GFX09                          = 0x000000c0,
    SPI_PERF_VWC_HS_WR__GFX09                          = 0x000000c1,
    SPI_PERF_VWC_CSG_WR__GFX09                         = 0x000000c2,
    SPI_PERF_VWC_CSC_WR__GFX09                         = 0x000000c3,
    SPI_PERF_VS_POS0_STALL__GFX10                      = 0x00000005,
    SPI_PERF_VS_POS1_STALL__GFX10                      = 0x00000006,
    SPI_PERF_VS_CRAWLER_STALL__GFX10                   = 0x00000007,
    SPI_PERF_VS_EVENT_WAVE__GFX10                      = 0x00000008,
    SPI_PERF_VS_WAVE__GFX10                            = 0x00000009,
    SPI_PERF_VS_PERS_UPD_FULL0__GFX10                  = 0x0000000a,
    SPI_PERF_VS_PERS_UPD_FULL1__GFX10                  = 0x0000000b,
    SPI_PERF_VS_LATE_ALLOC_FULL__GFX10                 = 0x0000000c,
    SPI_PERF_VS_FIRST_SUBGRP__GFX10                    = 0x0000000d,
    SPI_PERF_VS_LAST_SUBGRP__GFX10                     = 0x0000000e,
    SPI_PERF_VS_ALLOC_CNT__GFX10                       = 0x0000000f,
    SPI_PERF_VS_LATE_ALLOC_ACCUM__GFX10                = 0x00000010,
    SPI_PERF_GS_WINDOW_VALID__GFX10                    = 0x00000011,
    SPI_PERF_GS_BUSY__GFX10                            = 0x00000012,
    SPI_PERF_GS_CRAWLER_STALL__GFX10                   = 0x00000013,
    SPI_PERF_GS_EVENT_WAVE__GFX10                      = 0x00000014,
    SPI_PERF_GS_WAVE__GFX10                            = 0x00000015,
    SPI_PERF_GS_PERS_UPD_FULL0__GFX10                  = 0x00000016,
    SPI_PERF_GS_PERS_UPD_FULL1__GFX10                  = 0x00000017,
    SPI_PERF_GS_FIRST_SUBGRP__GFX10                    = 0x00000018,
    SPI_PERF_GS_LAST_SUBGRP__GFX10                     = 0x00000019,
    SPI_PERF_GS_HS_DEALLOC__GFX10                      = 0x0000001a,
    SPI_PERF_GS_NGG_SE_LATE_ALLOC_LIMIT__GFX10         = 0x0000001b,
    SPI_PERF_GS_GRP_FIFO_FULL__GFX10                   = 0x0000001c,
    SPI_PERF_GS_POS0_STALL__GFX10                      = 0x0000001d,
    SPI_PERF_GS_POS1_STALL__GFX10                      = 0x0000001e,
    SPI_PERF_GS_INDX0_STALL__GFX10                     = 0x0000001f,
    SPI_PERF_GS_INDX1_STALL__GFX10                     = 0x00000020,
    SPI_PERF_HS_WINDOW_VALID__GFX10                    = 0x00000021,
    SPI_PERF_HS_BUSY__GFX10                            = 0x00000022,
    SPI_PERF_HS_CRAWLER_STALL__GFX10                   = 0x00000023,
    SPI_PERF_HS_FIRST_WAVE__GFX10                      = 0x00000024,
    SPI_PERF_HS_LAST_WAVE__GFX10                       = 0x00000025,
    SPI_PERF_HS_LSHS_DEALLOC__GFX10                    = 0x00000026,
    SPI_PERF_HS_OFFCHIP_LDS_STALL__GFX10               = 0x00000027,
    SPI_PERF_HS_EVENT_WAVE__GFX10                      = 0x00000028,
    SPI_PERF_HS_WAVE__GFX10                            = 0x00000029,
    SPI_PERF_HS_PERS_UPD_FULL0__GFX10                  = 0x0000002a,
    SPI_PERF_HS_PERS_UPD_FULL1__GFX10                  = 0x0000002b,
    SPI_PERF_CSN_WINDOW_VALID__GFX10                   = 0x00000032,
    SPI_PERF_CSN_BUSY__GFX10                           = 0x00000033,
    SPI_PERF_CSN_NUM_THREADGROUPS__GFX10               = 0x00000034,
    SPI_PERF_CSN_CRAWLER_STALL__GFX10                  = 0x00000035,
    SPI_PERF_CSN_EVENT_WAVE__GFX10                     = 0x00000036,
    SPI_PERF_CSN_WAVE__GFX10                           = 0x00000037,
    SPI_PERF_PS0_WINDOW_VALID__GFX10                   = 0x00000038,
    SPI_PERF_PS1_WINDOW_VALID__GFX10                   = 0x00000039,
    SPI_PERF_PS2_WINDOW_VALID__GFX10                   = 0x0000003a,
    SPI_PERF_PS3_WINDOW_VALID__GFX10                   = 0x0000003b,
    SPI_PERF_PS0_BUSY__GFX10                           = 0x0000003c,
    SPI_PERF_PS1_BUSY__GFX10                           = 0x0000003d,
    SPI_PERF_PS2_BUSY__GFX10                           = 0x0000003e,
    SPI_PERF_PS3_BUSY__GFX10                           = 0x0000003f,
    SPI_PERF_PS0_ACTIVE__GFX10                         = 0x00000040,
    SPI_PERF_PS1_ACTIVE__GFX10                         = 0x00000041,
    SPI_PERF_PS2_ACTIVE__GFX10                         = 0x00000042,
    SPI_PERF_PS3_ACTIVE__GFX10                         = 0x00000043,
    SPI_PERF_PS0_DEALLOC__GFX10                        = 0x00000044,
    SPI_PERF_PS1_DEALLOC__GFX10                        = 0x00000045,
    SPI_PERF_PS2_DEALLOC__GFX10                        = 0x00000046,
    SPI_PERF_PS3_DEALLOC__GFX10                        = 0x00000047,
    SPI_PERF_PS0_FPOS_STALL__GFX10                     = 0x00000048,
    SPI_PERF_PS1_FPOS_STALL__GFX10                     = 0x00000049,
    SPI_PERF_PS2_FPOS_STALL__GFX10                     = 0x0000004a,
    SPI_PERF_PS3_FPOS_STALL__GFX10                     = 0x0000004b,
    SPI_PERF_PS0_EVENT_WAVE__GFX10                     = 0x0000004c,
    SPI_PERF_PS1_EVENT_WAVE__GFX10                     = 0x0000004d,
    SPI_PERF_PS2_EVENT_WAVE__GFX10                     = 0x0000004e,
    SPI_PERF_PS3_EVENT_WAVE__GFX10                     = 0x0000004f,
    SPI_PERF_PS0_WAVE__GFX10                           = 0x00000050,
    SPI_PERF_PS1_WAVE__GFX10                           = 0x00000051,
    SPI_PERF_PS2_WAVE__GFX10                           = 0x00000052,
    SPI_PERF_PS3_WAVE__GFX10                           = 0x00000053,
    SPI_PERF_PS0_OPT_WAVE__GFX10                       = 0x00000054,
    SPI_PERF_PS1_OPT_WAVE__GFX10                       = 0x00000055,
    SPI_PERF_PS2_OPT_WAVE__GFX10                       = 0x00000056,
    SPI_PERF_PS3_OPT_WAVE__GFX10                       = 0x00000057,
    SPI_PERF_PS0_PASS_BIN0__GFX10                      = 0x00000058,
    SPI_PERF_PS1_PASS_BIN0__GFX10                      = 0x00000059,
    SPI_PERF_PS2_PASS_BIN0__GFX10                      = 0x0000005a,
    SPI_PERF_PS3_PASS_BIN0__GFX10                      = 0x0000005b,
    SPI_PERF_PS0_PASS_BIN1__GFX10                      = 0x0000005c,
    SPI_PERF_PS1_PASS_BIN1__GFX10                      = 0x0000005d,
    SPI_PERF_PS2_PASS_BIN1__GFX10                      = 0x0000005e,
    SPI_PERF_PS3_PASS_BIN1__GFX10                      = 0x0000005f,
    SPI_PERF_PS0_FPOS__GFX10                           = 0x00000060,
    SPI_PERF_PS1_FPOS__GFX10                           = 0x00000061,
    SPI_PERF_PS2_FPOS__GFX10                           = 0x00000062,
    SPI_PERF_PS3_FPOS__GFX10                           = 0x00000063,
    SPI_PERF_PS0_PRIM_BIN0__GFX10                      = 0x00000064,
    SPI_PERF_PS1_PRIM_BIN0__GFX10                      = 0x00000065,
    SPI_PERF_PS2_PRIM_BIN0__GFX10                      = 0x00000066,
    SPI_PERF_PS3_PRIM_BIN0__GFX10                      = 0x00000067,
    SPI_PERF_PS0_PRIM_BIN1__GFX10                      = 0x00000068,
    SPI_PERF_PS1_PRIM_BIN1__GFX10                      = 0x00000069,
    SPI_PERF_PS2_PRIM_BIN1__GFX10                      = 0x0000006a,
    SPI_PERF_PS3_PRIM_BIN1__GFX10                      = 0x0000006b,
    SPI_PERF_PS0_CNF_BIN2__GFX10                       = 0x0000006c,
    SPI_PERF_PS1_CNF_BIN2__GFX10                       = 0x0000006d,
    SPI_PERF_PS2_CNF_BIN2__GFX10                       = 0x0000006e,
    SPI_PERF_PS3_CNF_BIN2__GFX10                       = 0x0000006f,
    SPI_PERF_PS0_CNF_BIN3__GFX10                       = 0x00000070,
    SPI_PERF_PS1_CNF_BIN3__GFX10                       = 0x00000071,
    SPI_PERF_PS2_CNF_BIN3__GFX10                       = 0x00000072,
    SPI_PERF_PS3_CNF_BIN3__GFX10                       = 0x00000073,
    SPI_PERF_PS0_CRAWLER_STALL__GFX10                  = 0x00000074,
    SPI_PERF_PS1_CRAWLER_STALL__GFX10                  = 0x00000075,
    SPI_PERF_PS2_CRAWLER_STALL__GFX10                  = 0x00000076,
    SPI_PERF_PS3_CRAWLER_STALL__GFX10                  = 0x00000077,
    SPI_PERF_PS0_LDS_RES_FULL__GFX10                   = 0x00000078,
    SPI_PERF_PS1_LDS_RES_FULL__GFX10                   = 0x00000079,
    SPI_PERF_PS2_LDS_RES_FULL__GFX10                   = 0x0000007a,
    SPI_PERF_PS3_LDS_RES_FULL__GFX10                   = 0x0000007b,
    SPI_PERF_PS0_POPS_WAVE_SENT__GFX10                 = 0x0000007c,
    SPI_PERF_PS1_POPS_WAVE_SENT__GFX10                 = 0x0000007d,
    SPI_PERF_PS2_POPS_WAVE_SENT__GFX10                 = 0x0000007e,
    SPI_PERF_PS3_POPS_WAVE_SENT__GFX10                 = 0x0000007f,
    SPI_PERF_PS0_POPS_WAVE_EXIT__GFX10                 = 0x00000080,
    SPI_PERF_PS1_POPS_WAVE_EXIT__GFX10                 = 0x00000081,
    SPI_PERF_PS2_POPS_WAVE_EXIT__GFX10                 = 0x00000082,
    SPI_PERF_PS3_POPS_WAVE_EXIT__GFX10                 = 0x00000083,
    SPI_PERF_PS_PERS_UPD_FULL0__GFX10                  = 0x00000084,
    SPI_PERF_PS_PERS_UPD_FULL1__GFX10                  = 0x00000085,
    SPI_PERF_CSGN_WINDOW_VALID__GFX101PLUS             = 0x0000002c,
    SPI_PERF_CSGN_BUSY__GFX101PLUS                     = 0x0000002d,
    SPI_PERF_CSGN_NUM_THREADGROUPS__GFX101PLUS         = 0x0000002e,
    SPI_PERF_CSGN_CRAWLER_STALL__GFX101PLUS            = 0x0000002f,
    SPI_PERF_CSGN_EVENT_WAVE__GFX101PLUS               = 0x00000030,
    SPI_PERF_CSGN_WAVE__GFX101PLUS                     = 0x00000031,
    SPI_PERF_PS0_INTRA_PRIM_CNFLCT__GFX101PLUS         = 0x00000086,
    SPI_PERF_PS1_INTRA_PRIM_CNFLCT__GFX101PLUS         = 0x00000087,
    SPI_PERF_PS2_INTRA_PRIM_CNFLCT__GFX101PLUS         = 0x00000088,
    SPI_PERF_PS3_INTRA_PRIM_CNFLCT__GFX101PLUS         = 0x00000089,
    SPI_PERF_LDS0_PC_VALID__GFX101PLUS                 = 0x0000008a,
    SPI_PERF_LDS1_PC_VALID__GFX101PLUS                 = 0x0000008b,
    SPI_PERF_RA_PIPE_REQ_BIN2__GFX101PLUS              = 0x0000008c,
    SPI_PERF_RA_TASK_REQ_BIN3__GFX101PLUS              = 0x0000008d,
    SPI_PERF_RA_WR_CTL_FULL__GFX101PLUS                = 0x0000008e,
    SPI_PERF_RA_REQ_NO_ALLOC__GFX101PLUS               = 0x0000008f,
    SPI_PERF_RA_REQ_NO_ALLOC_PS__GFX101PLUS            = 0x00000090,
    SPI_PERF_RA_REQ_NO_ALLOC_VS__GFX101PLUS            = 0x00000091,
    SPI_PERF_RA_REQ_NO_ALLOC_ES__GFX101PLUS            = 0x00000092,
    SPI_PERF_RA_REQ_NO_ALLOC_GS__GFX101PLUS            = 0x00000093,
    SPI_PERF_RA_REQ_NO_ALLOC_LS__GFX101PLUS            = 0x00000094,
    SPI_PERF_RA_REQ_NO_ALLOC_HS__GFX101PLUS            = 0x00000095,
    SPI_PERF_RA_REQ_NO_ALLOC_CSG__GFX101PLUS           = 0x00000096,
    SPI_PERF_RA_REQ_NO_ALLOC_CSN__GFX101PLUS           = 0x00000097,
    SPI_PERF_RA_RES_STALL_PS__GFX101PLUS               = 0x00000098,
    SPI_PERF_RA_RES_STALL_VS__GFX101PLUS               = 0x00000099,
    SPI_PERF_RA_RES_STALL_ES__GFX101PLUS               = 0x0000009a,
    SPI_PERF_RA_RES_STALL_GS__GFX101PLUS               = 0x0000009b,
    SPI_PERF_RA_RES_STALL_LS__GFX101PLUS               = 0x0000009c,
    SPI_PERF_RA_RES_STALL_HS__GFX101PLUS               = 0x0000009d,
    SPI_PERF_RA_RES_STALL_CSG__GFX101PLUS              = 0x0000009e,
    SPI_PERF_RA_RES_STALL_CSN__GFX101PLUS              = 0x0000009f,
    SPI_PERF_RA_TMP_STALL_PS__GFX101PLUS               = 0x000000a0,
    SPI_PERF_RA_TMP_STALL_VS__GFX101PLUS               = 0x000000a1,
    SPI_PERF_RA_TMP_STALL_ES__GFX101PLUS               = 0x000000a2,
    SPI_PERF_RA_TMP_STALL_GS__GFX101PLUS               = 0x000000a3,
    SPI_PERF_RA_TMP_STALL_LS__GFX101PLUS               = 0x000000a4,
    SPI_PERF_RA_TMP_STALL_HS__GFX101PLUS               = 0x000000a5,
    SPI_PERF_RA_TMP_STALL_CSG__GFX101PLUS              = 0x000000a6,
    SPI_PERF_RA_TMP_STALL_CSN__GFX101PLUS              = 0x000000a7,
    SPI_PERF_RA_WAVE_SIMD_FULL_PS__GFX101PLUS          = 0x000000a8,
    SPI_PERF_RA_WAVE_SIMD_FULL_VS__GFX101PLUS          = 0x000000a9,
    SPI_PERF_RA_WAVE_SIMD_FULL_ES__GFX101PLUS          = 0x000000aa,
    SPI_PERF_RA_WAVE_SIMD_FULL_GS__GFX101PLUS          = 0x000000ab,
    SPI_PERF_RA_WAVE_SIMD_FULL_LS__GFX101PLUS          = 0x000000ac,
    SPI_PERF_RA_WAVE_SIMD_FULL_HS__GFX101PLUS          = 0x000000ad,
    SPI_PERF_RA_WAVE_SIMD_FULL_CSG__GFX101PLUS         = 0x000000ae,
    SPI_PERF_RA_WAVE_SIMD_FULL_CSN__GFX101PLUS         = 0x000000af,
    SPI_PERF_RA_VGPR_SIMD_FULL_PS__GFX101PLUS          = 0x000000b0,
    SPI_PERF_RA_VGPR_SIMD_FULL_VS__GFX101PLUS          = 0x000000b1,
    SPI_PERF_RA_VGPR_SIMD_FULL_ES__GFX101PLUS          = 0x000000b2,
    SPI_PERF_RA_VGPR_SIMD_FULL_GS__GFX101PLUS          = 0x000000b3,
    SPI_PERF_RA_VGPR_SIMD_FULL_HS__GFX101PLUS          = 0x000000b4,
    SPI_PERF_RA_VGPR_SIMD_FULL_LS__GFX101PLUS          = 0x000000b5,
    SPI_PERF_RA_VGPR_SIMD_FULL_CSG__GFX101PLUS         = 0x000000b6,
    SPI_PERF_RA_VGPR_SIMD_FULL_CSN__GFX101PLUS         = 0x000000b7,
    SPI_PERF_RA_SGPR_SIMD_FULL_PS__GFX101PLUS          = 0x000000b8,
    SPI_PERF_RA_SGPR_SIMD_FULL_VS__GFX101PLUS          = 0x000000b9,
    SPI_PERF_RA_SGPR_SIMD_FULL_ES__GFX101PLUS          = 0x000000ba,
    SPI_PERF_RA_SGPR_SIMD_FULL_GS__GFX101PLUS          = 0x000000bb,
    SPI_PERF_RA_SGPR_SIMD_FULL_LS__GFX101PLUS          = 0x000000bc,
    SPI_PERF_RA_SGPR_SIMD_FULL_HS__GFX101PLUS          = 0x000000bd,
    SPI_PERF_RA_SGPR_SIMD_FULL_CSG__GFX101PLUS         = 0x000000be,
    SPI_PERF_RA_SGPR_SIMD_FULL_CSN__GFX101PLUS         = 0x000000bf,
    SPI_PERF_RA_LDS_CU_FULL_PS__GFX101PLUS             = 0x000000c0,
    SPI_PERF_RA_LDS_CU_FULL_LS__GFX101PLUS             = 0x000000c1,
    SPI_PERF_RA_LDS_CU_FULL_HS__GFX101PLUS             = 0x000000c2,
    SPI_PERF_RA_LDS_CU_FULL_ES__GFX101PLUS             = 0x000000c3,
    SPI_PERF_RA_LDS_CU_FULL_GS__GFX101PLUS             = 0x000000c4,
    SPI_PERF_RA_LDS_CU_FULL_CSG__GFX101PLUS            = 0x000000c5,
    SPI_PERF_RA_LDS_CU_FULL_CSN__GFX101PLUS            = 0x000000c6,
    SPI_PERF_RA_BAR_CU_FULL_HS__GFX101PLUS             = 0x000000c7,
    SPI_PERF_RA_BAR_CU_FULL_CSG__GFX101PLUS            = 0x000000c8,
    SPI_PERF_RA_BAR_CU_FULL_CSN__GFX101PLUS            = 0x000000c9,
    SPI_PERF_RA_BULKY_CU_FULL_CSG__GFX101PLUS          = 0x000000ca,
    SPI_PERF_RA_BULKY_CU_FULL_CSN__GFX101PLUS          = 0x000000cb,
    SPI_PERF_RA_TGLIM_CU_FULL_CSG__GFX101PLUS          = 0x000000cc,
    SPI_PERF_RA_TGLIM_CU_FULL_CSN__GFX101PLUS          = 0x000000cd,
    SPI_PERF_RA_WVLIM_STALL_PS__GFX101PLUS             = 0x000000ce,
    SPI_PERF_RA_WVLIM_STALL_VS__GFX101PLUS             = 0x000000cf,
    SPI_PERF_RA_WVLIM_STALL_ES__GFX101PLUS             = 0x000000d0,
    SPI_PERF_RA_WVLIM_STALL_GS__GFX101PLUS             = 0x000000d1,
    SPI_PERF_RA_WVLIM_STALL_LS__GFX101PLUS             = 0x000000d2,
    SPI_PERF_RA_WVLIM_STALL_HS__GFX101PLUS             = 0x000000d3,
    SPI_PERF_RA_WVLIM_STALL_CSG__GFX101PLUS            = 0x000000d4,
    SPI_PERF_RA_WVLIM_STALL_CSN__GFX101PLUS            = 0x000000d5,
    SPI_PERF_RA_VS_LOCK__GFX101PLUS                    = 0x000000d6,
    SPI_PERF_RA_PS_LOCK__GFX101PLUS                    = 0x000000d7,
    SPI_PERF_RA_ES_LOCK__GFX101PLUS                    = 0x000000d8,
    SPI_PERF_RA_GS_LOCK__GFX101PLUS                    = 0x000000d9,
    SPI_PERF_RA_LS_LOCK__GFX101PLUS                    = 0x000000da,
    SPI_PERF_RA_HS_LOCK__GFX101PLUS                    = 0x000000db,
    SPI_PERF_RA_CSG_LOCK__GFX101PLUS                   = 0x000000dc,
    SPI_PERF_RA_CSN_LOCK__GFX101PLUS                   = 0x000000dd,
    SPI_PERF_RA_RSV_UPD__GFX101PLUS                    = 0x000000de,
    SPI_PERF_RA_PRE_ALLOC_STALL__GFX101PLUS            = 0x000000df,
    SPI_PERF_RA_GFX_UNDER_TUNNEL__GFX101PLUS           = 0x000000e0,
    SPI_PERF_RA_CSC_UNDER_TUNNEL__GFX101PLUS           = 0x000000e1,
    SPI_PERF_RA_WVALLOC_STALL__GFX101PLUS              = 0x000000e2,
    SPI_PERF_RA_ACCUM0_SIMD_FULL_PS__GFX101PLUS        = 0x000000e3,
    SPI_PERF_RA_ACCUM1_SIMD_FULL_PS__GFX101PLUS        = 0x000000e4,
    SPI_PERF_RA_ACCUM2_SIMD_FULL_PS__GFX101PLUS        = 0x000000e5,
    SPI_PERF_RA_ACCUM3_SIMD_FULL_PS__GFX101PLUS        = 0x000000e6,
    SPI_PERF_RA_ACCUM0_SIMD_FULL_VS__GFX101PLUS        = 0x000000e7,
    SPI_PERF_RA_ACCUM1_SIMD_FULL_VS__GFX101PLUS        = 0x000000e8,
    SPI_PERF_RA_ACCUM2_SIMD_FULL_VS__GFX101PLUS        = 0x000000e9,
    SPI_PERF_RA_ACCUM3_SIMD_FULL_VS__GFX101PLUS        = 0x000000ea,
    SPI_PERF_RA_ACCUM0_SIMD_FULL_GS__GFX101PLUS        = 0x000000eb,
    SPI_PERF_RA_ACCUM1_SIMD_FULL_GS__GFX101PLUS        = 0x000000ec,
    SPI_PERF_RA_ACCUM2_SIMD_FULL_GS__GFX101PLUS        = 0x000000ed,
    SPI_PERF_RA_ACCUM3_SIMD_FULL_GS__GFX101PLUS        = 0x000000ee,
    SPI_PERF_RA_ACCUM0_SIMD_FULL_HS__GFX101PLUS        = 0x000000ef,
    SPI_PERF_RA_ACCUM1_SIMD_FULL_HS__GFX101PLUS        = 0x000000f0,
    SPI_PERF_RA_ACCUM2_SIMD_FULL_HS__GFX101PLUS        = 0x000000f1,
    SPI_PERF_RA_ACCUM3_SIMD_FULL_HS__GFX101PLUS        = 0x000000f2,
    SPI_PERF_RA_ACCUM0_SIMD_FULL_CSG__GFX101PLUS       = 0x000000f3,
    SPI_PERF_RA_ACCUM1_SIMD_FULL_CSG__GFX101PLUS       = 0x000000f4,
    SPI_PERF_RA_ACCUM2_SIMD_FULL_CSG__GFX101PLUS       = 0x000000f5,
    SPI_PERF_RA_ACCUM3_SIMD_FULL_CSG__GFX101PLUS       = 0x000000f6,
    SPI_PERF_RA_ACCUM0_SIMD_FULL_CSN__GFX101PLUS       = 0x000000f7,
    SPI_PERF_RA_ACCUM1_SIMD_FULL_CSN__GFX101PLUS       = 0x000000f8,
    SPI_PERF_RA_ACCUM2_SIMD_FULL_CSN__GFX101PLUS       = 0x000000f9,
    SPI_PERF_RA_ACCUM3_SIMD_FULL_CSN__GFX101PLUS       = 0x000000fa,
    SPI_PERF_EXP_ARB_COL_CNT__GFX101PLUS               = 0x000000fb,
    SPI_PERF_EXP_ARB_PAR_CNT__GFX101PLUS               = 0x000000fc,
    SPI_PERF_EXP_ARB_POS_CNT__GFX101PLUS               = 0x000000fd,
    SPI_PERF_EXP_ARB_GDS_CNT__GFX101PLUS               = 0x000000fe,
    SPI_PERF_NUM_PS_COL_SA0SQ0_EXPORTS__GFX101PLUS     = 0x000000ff,
    SPI_PERF_NUM_PS_COL_SA0SQ1_EXPORTS__GFX101PLUS     = 0x00000100,
    SPI_PERF_NUM_PS_COL_SA1SQ0_EXPORTS__GFX101PLUS     = 0x00000101,
    SPI_PERF_NUM_PS_COL_SA1SQ1_EXPORTS__GFX101PLUS     = 0x00000102,
    SPI_PERF_NUM_VS_POS_SA0SQ0_EXPORTS__GFX101PLUS     = 0x00000103,
    SPI_PERF_NUM_VS_POS_SA0SQ1_EXPORTS__GFX101PLUS     = 0x00000104,
    SPI_PERF_NUM_VS_POS_SA1SQ0_EXPORTS__GFX101PLUS     = 0x00000105,
    SPI_PERF_NUM_VS_POS_SA1SQ1_EXPORTS__GFX101PLUS     = 0x00000106,
    SPI_PERF_NUM_VS_PARAM_SA0SQ0_EXPORTS__GFX101PLUS   = 0x00000107,
    SPI_PERF_NUM_VS_PARAM_SA0SQ1_EXPORTS__GFX101PLUS   = 0x00000108,
    SPI_PERF_NUM_VS_PARAM_SA1SQ0_EXPORTS__GFX101PLUS   = 0x00000109,
    SPI_PERF_NUM_VS_PARAM_SA1SQ1_EXPORTS__GFX101PLUS   = 0x0000010a,
    SPI_PERF_NUM_VS_GDS_SA0SQ0_EXPORTS__GFX101PLUS     = 0x0000010b,
    SPI_PERF_NUM_VS_GDS_SA0SQ1_EXPORTS__GFX101PLUS     = 0x0000010c,
    SPI_PERF_NUM_VS_GDS_SA1SQ0_EXPORTS__GFX101PLUS     = 0x0000010d,
    SPI_PERF_NUM_VS_GDS_SA1SQ1_EXPORTS__GFX101PLUS     = 0x0000010e,
    SPI_PERF_NUM_EXPGRANT_EXPORTS__GFX101PLUS          = 0x0000010f,
    SPI_PERF_CLKGATE_BUSY_STALL__GFX101PLUS            = 0x00000110,
    SPI_PERF_CLKGATE_ACTIVE_STALL__GFX101PLUS          = 0x00000111,
    SPI_PERF_CLKGATE_ALL_CLOCKS_ON__GFX101PLUS         = 0x00000112,
    SPI_PERF_CLKGATE_CGTT_DYN_ON__GFX101PLUS           = 0x00000113,
    SPI_PERF_CLKGATE_CGTT_REG_ON__GFX101PLUS           = 0x00000114,
    SPI_PERF_PIX_ALLOC_PEND_CNT__GFX101PLUS            = 0x00000115,
    SPI_PERF_PIX_ALLOC_SCB0_STALL__GFX101PLUS          = 0x00000116,
    SPI_PERF_PIX_ALLOC_SCB1_STALL__GFX101PLUS          = 0x00000117,
    SPI_PERF_PIX_ALLOC_SCB2_STALL__GFX101PLUS          = 0x00000118,
    SPI_PERF_PIX_ALLOC_SCB3_STALL__GFX101PLUS          = 0x00000119,
    SPI_PERF_PIX_ALLOC_DB0_STALL__GFX101PLUS           = 0x0000011a,
    SPI_PERF_PIX_ALLOC_DB1_STALL__GFX101PLUS           = 0x0000011b,
    SPI_PERF_PIX_ALLOC_DB2_STALL__GFX101PLUS           = 0x0000011c,
    SPI_PERF_PIX_ALLOC_DB3_STALL__GFX101PLUS           = 0x0000011d,
    SPI_PERF_PIX_ALLOC_DB4_STALL__GFX101PLUS           = 0x0000011e,
    SPI_PERF_PIX_ALLOC_DB5_STALL__GFX101PLUS           = 0x0000011f,
    SPI_PERF_PIX_ALLOC_DB6_STALL__GFX101PLUS           = 0x00000120,
    SPI_PERF_PIX_ALLOC_DB7_STALL__GFX101PLUS           = 0x00000121,
    SPI_PERF_GS_NGG_SE_SEND_GS_ALLOC__GFX101PLUS       = 0x00000122,
    SPI_PERF_SWC_PS_WR__GFX101PLUS                     = 0x00000123,
    SPI_PERF_SWC_VS_WR__GFX101PLUS                     = 0x00000124,
    SPI_PERF_SWC_ES_WR__GFX101PLUS                     = 0x00000125,
    SPI_PERF_SWC_GS_WR__GFX101PLUS                     = 0x00000126,
    SPI_PERF_SWC_LS_WR__GFX101PLUS                     = 0x00000127,
    SPI_PERF_SWC_HS_WR__GFX101PLUS                     = 0x00000128,
    SPI_PERF_SWC_CSGN_WR__GFX101PLUS                   = 0x00000129,
    SPI_PERF_SWC_CSN_WR__GFX101PLUS                    = 0x0000012a,
    SPI_PERF_VWC_PS_WR__GFX101PLUS                     = 0x0000012b,
    SPI_PERF_VWC_VS_WR__GFX101PLUS                     = 0x0000012c,
    SPI_PERF_VWC_ES_WR__GFX101PLUS                     = 0x0000012d,
    SPI_PERF_VWC_GS_WR__GFX101PLUS                     = 0x0000012e,
    SPI_PERF_VWC_LS_WR__GFX101PLUS                     = 0x0000012f,
    SPI_PERF_VWC_HS_WR__GFX101PLUS                     = 0x00000130,
    SPI_PERF_VWC_CSGN_WR__GFX101PLUS                   = 0x00000131,
    SPI_PERF_VWC_CSN_WR__GFX101PLUS                    = 0x00000132,
    SPI_PERF_ES_WINDOW_VALID__GFX101PLUS               = 0x00000133,
    SPI_PERF_ES_BUSY__GFX101PLUS                       = 0x00000134,
    SPI_PERF_ES_CRAWLER_STALL__GFX101PLUS              = 0x00000135,
    SPI_PERF_ES_FIRST_WAVE__GFX101PLUS                 = 0x00000136,
    SPI_PERF_ES_LAST_WAVE__GFX101PLUS                  = 0x00000137,
    SPI_PERF_ES_LSHS_DEALLOC__GFX101PLUS               = 0x00000138,
    SPI_PERF_ES_EVENT_WAVE__GFX101PLUS                 = 0x00000139,
    SPI_PERF_ES_WAVE__GFX101PLUS                       = 0x0000013a,
    SPI_PERF_ES_PERS_UPD_FULL0__GFX101PLUS             = 0x0000013b,
    SPI_PERF_ES_PERS_UPD_FULL1__GFX101PLUS             = 0x0000013c,
    SPI_PERF_ES_FIRST_SUBGRP__GFX101PLUS               = 0x0000013d,
    SPI_PERF_ES_LAST_SUBGRP__GFX101PLUS                = 0x0000013e,
    SPI_PERF_LS_WINDOW_VALID__GFX101PLUS               = 0x0000013f,
    SPI_PERF_LS_BUSY__GFX101PLUS                       = 0x00000140,
    SPI_PERF_LS_CRAWLER_STALL__GFX101PLUS              = 0x00000141,
    SPI_PERF_LS_FIRST_WAVE__GFX101PLUS                 = 0x00000142,
    SPI_PERF_LS_LAST_WAVE__GFX101PLUS                  = 0x00000143,
    SPI_PERF_LS_OFFCHIP_LDS_STALL__GFX101PLUS          = 0x00000144,
    SPI_PERF_LS_EVENT_WAVE__GFX101PLUS                 = 0x00000145,
    SPI_PERF_LS_WAVE__GFX101PLUS                       = 0x00000146,
    SPI_PERF_LS_PERS_UPD_FULL0__GFX101PLUS             = 0x00000147,
    SPI_PERF_LS_PERS_UPD_FULL1__GFX101PLUS             = 0x00000148,
} SPI_PERFCNT_SEL;

constexpr unsigned int MaxSpiPerfcntSelGfx09           = SPI_PERF_VWC_CSC_WR__GFX09;
constexpr unsigned int MaxSpiPerfcntSelGfx101Plus      = SPI_PERF_LS_PERS_UPD_FULL1__GFX101PLUS;

typedef enum SPI_PNT_SPRITE_OVERRIDE {
    SPI_PNT_SPRITE_SEL_0                               = 0x00000000,
    SPI_PNT_SPRITE_SEL_1                               = 0x00000001,
    SPI_PNT_SPRITE_SEL_S                               = 0x00000002,
    SPI_PNT_SPRITE_SEL_T                               = 0x00000003,
    SPI_PNT_SPRITE_SEL_NONE                            = 0x00000004,
} SPI_PNT_SPRITE_OVERRIDE;

typedef enum SPI_SAMPLE_CNTL {
    CENTROIDS_ONLY                                     = 0x00000000,
    CENTERS_ONLY                                       = 0x00000001,
    CENTROIDS_AND_CENTERS                              = 0x00000002,
    UNDEF                                              = 0x00000003,
} SPI_SAMPLE_CNTL;

typedef enum SPI_SHADER_EX_FORMAT {
    SPI_SHADER_ZERO                                    = 0x00000000,
    SPI_SHADER_32_R                                    = 0x00000001,
    SPI_SHADER_32_GR                                   = 0x00000002,
    SPI_SHADER_32_AR                                   = 0x00000003,
    SPI_SHADER_FP16_ABGR                               = 0x00000004,
    SPI_SHADER_UNORM16_ABGR                            = 0x00000005,
    SPI_SHADER_SNORM16_ABGR                            = 0x00000006,
    SPI_SHADER_UINT16_ABGR                             = 0x00000007,
    SPI_SHADER_SINT16_ABGR                             = 0x00000008,
    SPI_SHADER_32_ABGR                                 = 0x00000009,
} SPI_SHADER_EX_FORMAT;

typedef enum SPI_SHADER_FORMAT {
    SPI_SHADER_NONE                                    = 0x00000000,
    SPI_SHADER_1COMP                                   = 0x00000001,
    SPI_SHADER_2COMP                                   = 0x00000002,
    SPI_SHADER_4COMPRESS                               = 0x00000003,
    SPI_SHADER_4COMP                                   = 0x00000004,
} SPI_SHADER_FORMAT;

typedef enum SPM_PERFMON_STATE {
    STRM_PERFMON_STATE_DISABLE_AND_RESET               = 0x00000000,
    STRM_PERFMON_STATE_START_COUNTING                  = 0x00000001,
    STRM_PERFMON_STATE_STOP_COUNTING                   = 0x00000002,
    STRM_PERFMON_STATE_RESERVED_3                      = 0x00000003,
    STRM_PERFMON_STATE_DISABLE_AND_RESET_PHANTOM       = 0x00000004,
    STRM_PERFMON_STATE_COUNT_AND_DUMP_PHANTOM          = 0x00000005,
} SPM_PERFMON_STATE;

constexpr unsigned int MaxSpmPerfmonState              = STRM_PERFMON_STATE_COUNT_AND_DUMP_PHANTOM;

typedef enum SQ_CAC_POWER_SEL {
    SQ_CAC_POWER_VALU                                  = 0x00000000,
    SQ_CAC_POWER_VALU0                                 = 0x00000001,
    SQ_CAC_POWER_VALU1                                 = 0x00000002,
    SQ_CAC_POWER_VALU2                                 = 0x00000003,
    SQ_CAC_POWER_GPR_RD                                = 0x00000004,
    SQ_CAC_POWER_GPR_WR                                = 0x00000005,
    SQ_CAC_POWER_LDS_BUSY                              = 0x00000006,
    SQ_CAC_POWER_ALU_BUSY                              = 0x00000007,
    SQ_CAC_POWER_TEX_BUSY                              = 0x00000008,
} SQ_CAC_POWER_SEL;

typedef enum SQ_EDC_INFO_SOURCE {
    SQ_EDC_INFO_SOURCE_INVALID                         = 0x00000000,
    SQ_EDC_INFO_SOURCE_INST                            = 0x00000001,
    SQ_EDC_INFO_SOURCE_SGPR                            = 0x00000002,
    SQ_EDC_INFO_SOURCE_VGPR                            = 0x00000003,
    SQ_EDC_INFO_SOURCE_LDS                             = 0x00000004,
    SQ_EDC_INFO_SOURCE_GDS                             = 0x00000005,
    SQ_EDC_INFO_SOURCE_TA                              = 0x00000006,
} SQ_EDC_INFO_SOURCE;

typedef enum SQ_IBUF_ST {
    SQ_IBUF_IB_IDLE                                    = 0x00000000,
    SQ_IBUF_IB_INI_WAIT_GNT                            = 0x00000001,
    SQ_IBUF_IB_INI_WAIT_DRET                           = 0x00000002,
    SQ_IBUF_IB_LE_4DW                                  = 0x00000003,
    SQ_IBUF_IB_WAIT_DRET                               = 0x00000004,
    SQ_IBUF_IB_EMPTY_WAIT_DRET                         = 0x00000005,
    SQ_IBUF_IB_DRET                                    = 0x00000006,
    SQ_IBUF_IB_EMPTY_WAIT_GNT                          = 0x00000007,
} SQ_IBUF_ST;

typedef enum SQ_IMG_FILTER_TYPE {
    SQ_IMG_FILTER_MODE_BLEND                           = 0x00000000,
    SQ_IMG_FILTER_MODE_MIN                             = 0x00000001,
    SQ_IMG_FILTER_MODE_MAX                             = 0x00000002,
} SQ_IMG_FILTER_TYPE;

typedef enum SQ_IND_CMD_CMD {
    SQ_IND_CMD_CMD_NULL                                = 0x00000000,
    SQ_IND_CMD_CMD_SETHALT                             = 0x00000001,
    SQ_IND_CMD_CMD_SAVECTX                             = 0x00000002,
    SQ_IND_CMD_CMD_KILL                                = 0x00000003,
    SQ_IND_CMD_CMD_DEBUG                               = 0x00000004,
    SQ_IND_CMD_CMD_TRAP                                = 0x00000005,
    SQ_IND_CMD_CMD_SET_SPI_PRIO                        = 0x00000006,
    SQ_IND_CMD_CMD_SETFATALHALT                        = 0x00000007,
    SQ_IND_CMD_CMD_SINGLE_STEP__GFX10                  = 0x00000008,
} SQ_IND_CMD_CMD;

typedef enum SQ_IND_CMD_MODE {
    SQ_IND_CMD_MODE_SINGLE                             = 0x00000000,
    SQ_IND_CMD_MODE_BROADCAST                          = 0x00000001,
    SQ_IND_CMD_MODE_BROADCAST_QUEUE                    = 0x00000002,
    SQ_IND_CMD_MODE_BROADCAST_PIPE                     = 0x00000003,
    SQ_IND_CMD_MODE_BROADCAST_ME                       = 0x00000004,
} SQ_IND_CMD_MODE;

typedef enum SQ_INST_STR_ST {
    SQ_INST_STR_IB_WAVE_NORML                          = 0x00000000,
    SQ_INST_STR_IB_WAVE2ID_NORMAL_INST_AV              = 0x00000001,
    SQ_INST_STR_IB_WAVE_INTERNAL_INST_AV               = 0x00000002,
    SQ_INST_STR_IB_WAVE_INST_SKIP_AV                   = 0x00000003,
    SQ_INST_STR_IB_WAVE_SETVSKIP_ST0                   = 0x00000004,
    SQ_INST_STR_IB_WAVE_SETVSKIP_ST1                   = 0x00000005,
    SQ_INST_STR_IB_WAVE_NOP_SLEEP_WAIT                 = 0x00000006,
    SQ_INST_STR_IB_WAVE_PC_FROM_SGPR_MSG_WAIT          = 0x00000007,
} SQ_INST_STR_ST;

typedef enum SQ_INTERRUPT_WORD_ENCODING {
    SQ_INTERRUPT_WORD_ENCODING_AUTO                    = 0x00000000,
    SQ_INTERRUPT_WORD_ENCODING_INST                    = 0x00000001,
    SQ_INTERRUPT_WORD_ENCODING_ERROR                   = 0x00000002,
} SQ_INTERRUPT_WORD_ENCODING;

typedef enum SQ_LB_CTR_SEL_VALUES {
    SQ_LB_CTR_SEL_ALU_CYCLES                           = 0x00000000,
    SQ_LB_CTR_SEL_ALU_STALLS                           = 0x00000001,
    SQ_LB_CTR_SEL_TEX_CYCLES                           = 0x00000002,
    SQ_LB_CTR_SEL_TEX_STALLS                           = 0x00000003,
    SQ_LB_CTR_SEL_SALU_CYCLES                          = 0x00000004,
    SQ_LB_CTR_SEL_SCALAR_STALLS                        = 0x00000005,
    SQ_LB_CTR_SEL_SMEM_CYCLES                          = 0x00000006,
    SQ_LB_CTR_SEL_ICACHE_STALLS                        = 0x00000007,
    SQ_LB_CTR_SEL_DCACHE_STALLS                        = 0x00000008,
    SQ_LB_CTR_SEL_RESERVED0                            = 0x00000009,
    SQ_LB_CTR_SEL_RESERVED1                            = 0x0000000a,
    SQ_LB_CTR_SEL_RESERVED2                            = 0x0000000b,
    SQ_LB_CTR_SEL_RESERVED3                            = 0x0000000c,
    SQ_LB_CTR_SEL_RESERVED4                            = 0x0000000d,
    SQ_LB_CTR_SEL_RESERVED5                            = 0x0000000e,
    SQ_LB_CTR_SEL_RESERVED6                            = 0x0000000f,
} SQ_LB_CTR_SEL_VALUES;

typedef enum SQ_OOB_SELECT {
    SQ_OOB_INDEX_AND_OFFSET                            = 0x00000000,
    SQ_OOB_INDEX_ONLY                                  = 0x00000001,
    SQ_OOB_NUM_RECORDS_0                               = 0x00000002,
    SQ_OOB_COMPLETE                                    = 0x00000003,
} SQ_OOB_SELECT;

typedef enum SQ_PERF_SEL {
    SQ_PERF_SEL_NONE                                   = 0x00000000,
    SQ_PERF_SEL_ACCUM_PREV                             = 0x00000001,
    SQ_PERF_SEL_CYCLES                                 = 0x00000002,
    SQ_PERF_SEL_BUSY_CYCLES                            = 0x00000003,
    SQ_PERF_SEL_WAVES                                  = 0x00000004,
    SQ_PERF_SEL_DUMMY_LAST                             = 0x000000ff,
    SQ_PERF_SEL_LEVEL_WAVES__GFX09                     = 0x00000005,
    SQ_PERF_SEL_WAVES_EQ_64__GFX09                     = 0x00000006,
    SQ_PERF_SEL_WAVES_LT_64__GFX09                     = 0x00000007,
    SQ_PERF_SEL_WAVES_LT_48__GFX09                     = 0x00000008,
    SQ_PERF_SEL_WAVES_LT_32__GFX09                     = 0x00000009,
    SQ_PERF_SEL_WAVES_LT_16__GFX09                     = 0x0000000a,
    SQ_PERF_SEL_WAVES_CU__GFX09                        = 0x0000000b,
    SQ_PERF_SEL_LEVEL_WAVES_CU__GFX09                  = 0x0000000c,
    SQ_PERF_SEL_BUSY_CU_CYCLES__GFX09                  = 0x0000000d,
    SQ_PERF_SEL_ITEMS__GFX09                           = 0x0000000e,
    SQ_PERF_SEL_QUADS__GFX09                           = 0x0000000f,
    SQ_PERF_SEL_EVENTS__GFX09                          = 0x00000010,
    SQ_PERF_SEL_SURF_SYNCS__GFX09                      = 0x00000011,
    SQ_PERF_SEL_TTRACE_REQS__GFX09                     = 0x00000012,
    SQ_PERF_SEL_TTRACE_INFLIGHT_REQS__GFX09            = 0x00000013,
    SQ_PERF_SEL_TTRACE_STALL__GFX09                    = 0x00000014,
    SQ_PERF_SEL_MSG_CNTR__GFX09                        = 0x00000015,
    SQ_PERF_SEL_MSG_PERF__GFX09                        = 0x00000016,
    SQ_PERF_SEL_MSG_GSCNT__GFX09                       = 0x00000017,
    SQ_PERF_SEL_MSG_INTERRUPT__GFX09                   = 0x00000018,
    SQ_PERF_SEL_INSTS__GFX09                           = 0x00000019,
    SQ_PERF_SEL_INSTS_VALU__GFX09                      = 0x0000001a,
    SQ_PERF_SEL_INSTS_VMEM_WR__GFX09                   = 0x0000001b,
    SQ_PERF_SEL_INSTS_VMEM_RD__GFX09                   = 0x0000001c,
    SQ_PERF_SEL_INSTS_VMEM__GFX09                      = 0x0000001d,
    SQ_PERF_SEL_INSTS_SALU__GFX09                      = 0x0000001e,
    SQ_PERF_SEL_INSTS_SMEM__GFX09                      = 0x0000001f,
    SQ_PERF_SEL_INSTS_FLAT__GFX09                      = 0x00000020,
    SQ_PERF_SEL_INSTS_FLAT_LDS_ONLY__GFX09             = 0x00000021,
    SQ_PERF_SEL_INSTS_LDS__GFX09                       = 0x00000022,
    SQ_PERF_SEL_INSTS_GDS__GFX09                       = 0x00000023,
    SQ_PERF_SEL_INSTS_EXP__GFX09                       = 0x00000024,
    SQ_PERF_SEL_INSTS_EXP_GDS__GFX09                   = 0x00000025,
    SQ_PERF_SEL_INSTS_BRANCH__GFX09                    = 0x00000026,
    SQ_PERF_SEL_INSTS_SENDMSG__GFX09                   = 0x00000027,
    SQ_PERF_SEL_INSTS_VSKIPPED__GFX09                  = 0x00000028,
    SQ_PERF_SEL_INST_LEVEL_VMEM__GFX09                 = 0x00000029,
    SQ_PERF_SEL_INST_LEVEL_SMEM__GFX09                 = 0x0000002a,
    SQ_PERF_SEL_INST_LEVEL_LDS__GFX09                  = 0x0000002b,
    SQ_PERF_SEL_INST_LEVEL_GDS__GFX09                  = 0x0000002c,
    SQ_PERF_SEL_INST_LEVEL_EXP__GFX09                  = 0x0000002d,
    SQ_PERF_SEL_WAVE_CYCLES__GFX09                     = 0x0000002e,
    SQ_PERF_SEL_WAVE_READY__GFX09                      = 0x0000002f,
    SQ_PERF_SEL_WAIT_CNT_VM__GFX09                     = 0x00000030,
    SQ_PERF_SEL_WAIT_CNT_LGKM__GFX09                   = 0x00000031,
    SQ_PERF_SEL_WAIT_CNT_EXP__GFX09                    = 0x00000032,
    SQ_PERF_SEL_WAIT_CNT_ANY__GFX09                    = 0x00000033,
    SQ_PERF_SEL_WAIT_BARRIER__GFX09                    = 0x00000034,
    SQ_PERF_SEL_WAIT_EXP_ALLOC__GFX09                  = 0x00000035,
    SQ_PERF_SEL_WAIT_SLEEP__GFX09                      = 0x00000036,
    SQ_PERF_SEL_WAIT_SLEEP_XNACK__GFX09                = 0x00000037,
    SQ_PERF_SEL_WAIT_OTHER__GFX09                      = 0x00000038,
    SQ_PERF_SEL_WAIT_ANY__GFX09                        = 0x00000039,
    SQ_PERF_SEL_WAIT_TTRACE__GFX09                     = 0x0000003a,
    SQ_PERF_SEL_WAIT_IFETCH__GFX09                     = 0x0000003b,
    SQ_PERF_SEL_WAIT_INST_ANY__GFX09                   = 0x0000003c,
    SQ_PERF_SEL_WAIT_INST_VMEM__GFX09                  = 0x0000003d,
    SQ_PERF_SEL_WAIT_INST_SCA__GFX09                   = 0x0000003e,
    SQ_PERF_SEL_WAIT_INST_LDS__GFX09                   = 0x0000003f,
    SQ_PERF_SEL_WAIT_INST_VALU__GFX09                  = 0x00000040,
    SQ_PERF_SEL_WAIT_INST_EXP_GDS__GFX09               = 0x00000041,
    SQ_PERF_SEL_WAIT_INST_MISC__GFX09                  = 0x00000042,
    SQ_PERF_SEL_WAIT_INST_FLAT__GFX09                  = 0x00000043,
    SQ_PERF_SEL_ACTIVE_INST_ANY__GFX09                 = 0x00000044,
    SQ_PERF_SEL_ACTIVE_INST_VMEM__GFX09                = 0x00000045,
    SQ_PERF_SEL_ACTIVE_INST_LDS__GFX09                 = 0x00000046,
    SQ_PERF_SEL_ACTIVE_INST_VALU__GFX09                = 0x00000047,
    SQ_PERF_SEL_ACTIVE_INST_SCA__GFX09                 = 0x00000048,
    SQ_PERF_SEL_ACTIVE_INST_EXP_GDS__GFX09             = 0x00000049,
    SQ_PERF_SEL_ACTIVE_INST_MISC__GFX09                = 0x0000004a,
    SQ_PERF_SEL_ACTIVE_INST_FLAT__GFX09                = 0x0000004b,
    SQ_PERF_SEL_INST_CYCLES_VMEM_WR__GFX09             = 0x0000004c,
    SQ_PERF_SEL_INST_CYCLES_VMEM_RD__GFX09             = 0x0000004d,
    SQ_PERF_SEL_INST_CYCLES_VMEM_ADDR__GFX09           = 0x0000004e,
    SQ_PERF_SEL_INST_CYCLES_VMEM_DATA__GFX09           = 0x0000004f,
    SQ_PERF_SEL_INST_CYCLES_VMEM_CMD__GFX09            = 0x00000050,
    SQ_PERF_SEL_INST_CYCLES_EXP__GFX09                 = 0x00000051,
    SQ_PERF_SEL_INST_CYCLES_GDS__GFX09                 = 0x00000052,
    SQ_PERF_SEL_INST_CYCLES_SMEM__GFX09                = 0x00000053,
    SQ_PERF_SEL_INST_CYCLES_SALU__GFX09                = 0x00000054,
    SQ_PERF_SEL_THREAD_CYCLES_VALU__GFX09              = 0x00000055,
    SQ_PERF_SEL_THREAD_CYCLES_VALU_MAX__GFX09          = 0x00000056,
    SQ_PERF_SEL_IFETCH__GFX09                          = 0x00000057,
    SQ_PERF_SEL_IFETCH_LEVEL__GFX09                    = 0x00000058,
    SQ_PERF_SEL_CBRANCH_FORK__GFX09                    = 0x00000059,
    SQ_PERF_SEL_CBRANCH_FORK_SPLIT__GFX09              = 0x0000005a,
    SQ_PERF_SEL_VALU_LDS_DIRECT_RD__GFX09              = 0x0000005b,
    SQ_PERF_SEL_VALU_LDS_INTERP_OP__GFX09              = 0x0000005c,
    SQ_PERF_SEL_LDS_BANK_CONFLICT__GFX09               = 0x0000005d,
    SQ_PERF_SEL_LDS_ADDR_CONFLICT__GFX09               = 0x0000005e,
    SQ_PERF_SEL_LDS_UNALIGNED_STALL__GFX09             = 0x0000005f,
    SQ_PERF_SEL_LDS_MEM_VIOLATIONS__GFX09              = 0x00000060,
    SQ_PERF_SEL_LDS_ATOMIC_RETURN__GFX09               = 0x00000061,
    SQ_PERF_SEL_LDS_IDX_ACTIVE__GFX09                  = 0x00000062,
    SQ_PERF_SEL_VALU_DEP_STALL__GFX09                  = 0x00000063,
    SQ_PERF_SEL_VALU_STARVE__GFX09                     = 0x00000064,
    SQ_PERF_SEL_TA_STARVE__GFX09                       = 0x00000065,
    SQ_PERF_SEL_EXP_REQ_FIFO_FULL__GFX09               = 0x00000066,
    SQ_PERF_SEL_LDS_DATA_FIFO_FULL__GFX09              = 0x00000067,
    SQ_PERF_SEL_LDS_CMD_FIFO_FULL__GFX09               = 0x00000068,
    SQ_PERF_SEL_VMEM_TA_ADDR_FIFO_FULL__GFX09          = 0x00000069,
    SQ_PERF_SEL_VMEM_TA_CMD_FIFO_FULL__GFX09           = 0x0000006a,
    SQ_PERF_SEL_VMEM_EX_DATA_REG_BUSY__GFX09           = 0x0000006b,
    SQ_PERF_SEL_VMEM_WR_TA_DATA_FIFO_FULL__GFX09       = 0x0000006c,
    SQ_PERF_SEL_VALU_SRC_C_CONFLICT__GFX09             = 0x0000006d,
    SQ_PERF_SEL_VMEM_RD_SRC_CD_CONFLICT__GFX09         = 0x0000006e,
    SQ_PERF_SEL_VMEM_WR_SRC_CD_CONFLICT__GFX09         = 0x0000006f,
    SQ_PERF_SEL_FLAT_SRC_CD_CONFLICT__GFX09            = 0x00000070,
    SQ_PERF_SEL_LDS_SRC_CD_CONFLICT__GFX09             = 0x00000071,
    SQ_PERF_SEL_SRC_CD_BUSY__GFX09                     = 0x00000072,
    SQ_PERF_SEL_PT_POWER_STALL__GFX09                  = 0x00000073,
    SQ_PERF_SEL_USER0__GFX09                           = 0x00000074,
    SQ_PERF_SEL_USER1__GFX09                           = 0x00000075,
    SQ_PERF_SEL_USER2__GFX09                           = 0x00000076,
    SQ_PERF_SEL_USER3__GFX09                           = 0x00000077,
    SQ_PERF_SEL_USER4__GFX09                           = 0x00000078,
    SQ_PERF_SEL_USER5__GFX09                           = 0x00000079,
    SQ_PERF_SEL_USER6__GFX09                           = 0x0000007a,
    SQ_PERF_SEL_USER7__GFX09                           = 0x0000007b,
    SQ_PERF_SEL_USER8__GFX09                           = 0x0000007c,
    SQ_PERF_SEL_USER9__GFX09                           = 0x0000007d,
    SQ_PERF_SEL_USER10__GFX09                          = 0x0000007e,
    SQ_PERF_SEL_USER11__GFX09                          = 0x0000007f,
    SQ_PERF_SEL_USER12__GFX09                          = 0x00000080,
    SQ_PERF_SEL_USER13__GFX09                          = 0x00000081,
    SQ_PERF_SEL_USER14__GFX09                          = 0x00000082,
    SQ_PERF_SEL_USER15__GFX09                          = 0x00000083,
    SQ_PERF_SEL_USER_LEVEL0__GFX09                     = 0x00000084,
    SQ_PERF_SEL_USER_LEVEL1__GFX09                     = 0x00000085,
    SQ_PERF_SEL_USER_LEVEL2__GFX09                     = 0x00000086,
    SQ_PERF_SEL_USER_LEVEL3__GFX09                     = 0x00000087,
    SQ_PERF_SEL_USER_LEVEL4__GFX09                     = 0x00000088,
    SQ_PERF_SEL_USER_LEVEL5__GFX09                     = 0x00000089,
    SQ_PERF_SEL_USER_LEVEL6__GFX09                     = 0x0000008a,
    SQ_PERF_SEL_USER_LEVEL7__GFX09                     = 0x0000008b,
    SQ_PERF_SEL_USER_LEVEL8__GFX09                     = 0x0000008c,
    SQ_PERF_SEL_USER_LEVEL9__GFX09                     = 0x0000008d,
    SQ_PERF_SEL_USER_LEVEL10__GFX09                    = 0x0000008e,
    SQ_PERF_SEL_USER_LEVEL11__GFX09                    = 0x0000008f,
    SQ_PERF_SEL_USER_LEVEL12__GFX09                    = 0x00000090,
    SQ_PERF_SEL_USER_LEVEL13__GFX09                    = 0x00000091,
    SQ_PERF_SEL_USER_LEVEL14__GFX09                    = 0x00000092,
    SQ_PERF_SEL_USER_LEVEL15__GFX09                    = 0x00000093,
    SQ_PERF_SEL_POWER_VALU__GFX09                      = 0x00000094,
    SQ_PERF_SEL_POWER_VALU0__GFX09                     = 0x00000095,
    SQ_PERF_SEL_POWER_VALU1__GFX09                     = 0x00000096,
    SQ_PERF_SEL_POWER_VALU2__GFX09                     = 0x00000097,
    SQ_PERF_SEL_POWER_GPR_RD__GFX09                    = 0x00000098,
    SQ_PERF_SEL_POWER_GPR_WR__GFX09                    = 0x00000099,
    SQ_PERF_SEL_POWER_LDS_BUSY__GFX09                  = 0x0000009a,
    SQ_PERF_SEL_POWER_ALU_BUSY__GFX09                  = 0x0000009b,
    SQ_PERF_SEL_POWER_TEX_BUSY__GFX09                  = 0x0000009c,
    SQ_PERF_SEL_ACCUM_PREV_HIRES__GFX09                = 0x0000009d,
    SQ_PERF_SEL_WAVES_RESTORED__GFX09                  = 0x0000009e,
    SQ_PERF_SEL_WAVES_SAVED__GFX09                     = 0x0000009f,
    SQ_PERF_SEL_INSTS_SMEM_NORM__GFX09                 = 0x000000a0,
    SQ_PERF_SEL_XNACK_FIRST__GFX09                     = 0x000000a1,
    SQ_PERF_SEL_XNACK_ALL__GFX09                       = 0x000000a2,
    SQ_PERF_SEL_XNACK_FIFO_FULL__GFX09                 = 0x000000a3,
    SQ_PERF_SEL_IFETCH_XNACK__GFX09                    = 0x000000a4,
    SQ_PERF_SEL_TLB_SHOOTDOWN__GFX09                   = 0x000000a5,
    SQ_PERF_SEL_TLB_SHOOTDOWN_CYCLES__GFX09            = 0x000000a6,
    SQ_PERF_SEL_INSTS_VMEM_WR_REPLAY__GFX09            = 0x000000a7,
    SQ_PERF_SEL_INSTS_VMEM_RD_REPLAY__GFX09            = 0x000000a8,
    SQ_PERF_SEL_INSTS_VMEM_REPLAY__GFX09               = 0x000000a9,
    SQ_PERF_SEL_INSTS_SMEM_REPLAY__GFX09               = 0x000000aa,
    SQ_PERF_SEL_INSTS_SMEM_NORM_REPLAY__GFX09          = 0x000000ab,
    SQ_PERF_SEL_INSTS_FLAT_REPLAY__GFX09               = 0x000000ac,
    SQ_PERF_SEL_UTCL1_TRANSLATION_MISS__GFX09          = 0x000000ad,
    SQ_PERF_SEL_UTCL1_PERMISSION_MISS__GFX09           = 0x000000ae,
    SQ_PERF_SEL_UTCL1_TRANSLATION_HIT_EVENT__GFX09     = 0x000000af,
    SQ_PERF_SEL_UTCL1_REQUEST__GFX09                   = 0x000000b0,
    SQ_PERF_SEL_UTCL1_STALL_MISSFIFO_FULL__GFX09       = 0x000000b1,
    SQ_PERF_SEL_UTCL1_STALL_INFLIGHT_MAX__GFX09        = 0x000000b2,
    SQ_PERF_SEL_UTCL1_STALL_LRU_INFLIGHT__GFX09        = 0x000000b3,
    SQ_PERF_SEL_UTCL1_LFIFO_FULL__GFX09                = 0x000000b4,
    SQ_PERF_SEL_UTCL1_STALL_LFIFO_NOT_RES__GFX09       = 0x000000b5,
    SQ_PERF_SEL_UTCL1_STALL_UTCL2_REQ_OUT_OF_CREDITS__GFX09 = 0x000000b6,
    SQ_PERF_SEL_DUMMY_END__GFX09                       = 0x000000b7,
    SQC_PERF_SEL_ICACHE_INPUT_VALID_READY__GFX09       = 0x00000100,
    SQC_PERF_SEL_ICACHE_INPUT_VALID_READYB__GFX09      = 0x00000101,
    SQC_PERF_SEL_ICACHE_INPUT_VALIDB__GFX09            = 0x00000102,
    SQC_PERF_SEL_DCACHE_INPUT_VALID_READY__GFX09       = 0x00000103,
    SQC_PERF_SEL_DCACHE_INPUT_VALID_READYB__GFX09      = 0x00000104,
    SQC_PERF_SEL_DCACHE_INPUT_VALIDB__GFX09            = 0x00000105,
    SQC_PERF_SEL_TC_REQ__GFX09                         = 0x00000106,
    SQC_PERF_SEL_TC_INST_REQ__GFX09                    = 0x00000107,
    SQC_PERF_SEL_TC_DATA_READ_REQ__GFX09               = 0x00000108,
    SQC_PERF_SEL_TC_DATA_WRITE_REQ__GFX09              = 0x00000109,
    SQC_PERF_SEL_TC_DATA_ATOMIC_REQ__GFX09             = 0x0000010a,
    SQC_PERF_SEL_TC_STALL__GFX09                       = 0x0000010b,
    SQC_PERF_SEL_TC_STARVE__GFX09                      = 0x0000010c,
    SQC_PERF_SEL_ICACHE_BUSY_CYCLES__GFX09             = 0x0000010d,
    SQC_PERF_SEL_ICACHE_REQ__GFX09                     = 0x0000010e,
    SQC_PERF_SEL_ICACHE_HITS__GFX09                    = 0x0000010f,
    SQC_PERF_SEL_ICACHE_MISSES__GFX09                  = 0x00000110,
    SQC_PERF_SEL_ICACHE_MISSES_DUPLICATE__GFX09        = 0x00000111,
    SQC_PERF_SEL_ICACHE_INVAL_INST__GFX09              = 0x00000112,
    SQC_PERF_SEL_ICACHE_INVAL_ASYNC__GFX09             = 0x00000113,
    SQC_PERF_SEL_ICACHE_INPUT_STALL_ARB_NO_GRANT__GFX09 = 0x00000114,
    SQC_PERF_SEL_ICACHE_INPUT_STALL_BANK_READYB__GFX09 = 0x00000115,
    SQC_PERF_SEL_ICACHE_CACHE_STALLED__GFX09           = 0x00000116,
    SQC_PERF_SEL_ICACHE_CACHE_STALL_INFLIGHT_NONZERO__GFX09 = 0x00000117,
    SQC_PERF_SEL_ICACHE_CACHE_STALL_INFLIGHT_MAX__GFX09 = 0x00000118,
    SQC_PERF_SEL_ICACHE_CACHE_STALL_OUTPUT__GFX09      = 0x00000119,
    SQC_PERF_SEL_ICACHE_CACHE_STALL_OUTPUT_MISS_FIFO__GFX09 = 0x0000011a,
    SQC_PERF_SEL_ICACHE_CACHE_STALL_OUTPUT_HIT_FIFO__GFX09 = 0x0000011b,
    SQC_PERF_SEL_ICACHE_CACHE_STALL_OUTPUT_TC_IF__GFX09 = 0x0000011c,
    SQC_PERF_SEL_ICACHE_STALL_OUTXBAR_ARB_NO_GRANT__GFX09 = 0x0000011d,
    SQC_PERF_SEL_ICACHE_PREFETCH_1__GFX09              = 0x0000011e,
    SQC_PERF_SEL_ICACHE_PREFETCH_2__GFX09              = 0x0000011f,
    SQC_PERF_SEL_ICACHE_PREFETCH_FILTERED__GFX09       = 0x00000120,
    SQC_PERF_SEL_DCACHE_BUSY_CYCLES__GFX09             = 0x00000121,
    SQC_PERF_SEL_DCACHE_REQ__GFX09                     = 0x00000122,
    SQC_PERF_SEL_DCACHE_HITS__GFX09                    = 0x00000123,
    SQC_PERF_SEL_DCACHE_MISSES__GFX09                  = 0x00000124,
    SQC_PERF_SEL_DCACHE_MISSES_DUPLICATE__GFX09        = 0x00000125,
    SQC_PERF_SEL_DCACHE_HIT_LRU_READ__GFX09            = 0x00000126,
    SQC_PERF_SEL_DCACHE_MISS_EVICT_READ__GFX09         = 0x00000127,
    SQC_PERF_SEL_DCACHE_WC_LRU_WRITE__GFX09            = 0x00000128,
    SQC_PERF_SEL_DCACHE_WT_EVICT_WRITE__GFX09          = 0x00000129,
    SQC_PERF_SEL_DCACHE_ATOMIC__GFX09                  = 0x0000012a,
    SQC_PERF_SEL_DCACHE_VOLATILE__GFX09                = 0x0000012b,
    SQC_PERF_SEL_DCACHE_INVAL_INST__GFX09              = 0x0000012c,
    SQC_PERF_SEL_DCACHE_INVAL_ASYNC__GFX09             = 0x0000012d,
    SQC_PERF_SEL_DCACHE_INVAL_VOLATILE_INST__GFX09     = 0x0000012e,
    SQC_PERF_SEL_DCACHE_INVAL_VOLATILE_ASYNC__GFX09    = 0x0000012f,
    SQC_PERF_SEL_DCACHE_WB_INST__GFX09                 = 0x00000130,
    SQC_PERF_SEL_DCACHE_WB_ASYNC__GFX09                = 0x00000131,
    SQC_PERF_SEL_DCACHE_WB_VOLATILE_INST__GFX09        = 0x00000132,
    SQC_PERF_SEL_DCACHE_WB_VOLATILE_ASYNC__GFX09       = 0x00000133,
    SQC_PERF_SEL_DCACHE_INPUT_STALL_ARB_NO_GRANT__GFX09 = 0x00000134,
    SQC_PERF_SEL_DCACHE_INPUT_STALL_BANK_READYB__GFX09 = 0x00000135,
    SQC_PERF_SEL_DCACHE_CACHE_STALLED__GFX09           = 0x00000136,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_INFLIGHT_MAX__GFX09 = 0x00000137,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_OUTPUT__GFX09      = 0x00000138,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_EVICT__GFX09       = 0x00000139,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_UNORDERED__GFX09   = 0x0000013a,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_ALLOC_UNAVAILABLE__GFX09 = 0x0000013b,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_FORCE_EVICT__GFX09 = 0x0000013c,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_MULTI_FLUSH__GFX09 = 0x0000013d,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_FLUSH_DONE__GFX09  = 0x0000013e,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_OUTPUT_MISS_FIFO__GFX09 = 0x0000013f,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_OUTPUT_HIT_FIFO__GFX09 = 0x00000140,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_OUTPUT_TC_IF__GFX09 = 0x00000141,
    SQC_PERF_SEL_DCACHE_STALL_OUTXBAR_ARB_NO_GRANT__GFX09 = 0x00000142,
    SQC_PERF_SEL_DCACHE_REQ_READ_1__GFX09              = 0x00000143,
    SQC_PERF_SEL_DCACHE_REQ_READ_2__GFX09              = 0x00000144,
    SQC_PERF_SEL_DCACHE_REQ_READ_4__GFX09              = 0x00000145,
    SQC_PERF_SEL_DCACHE_REQ_READ_8__GFX09              = 0x00000146,
    SQC_PERF_SEL_DCACHE_REQ_READ_16__GFX09             = 0x00000147,
    SQC_PERF_SEL_DCACHE_REQ_TIME__GFX09                = 0x00000148,
    SQC_PERF_SEL_DCACHE_REQ_WRITE_1__GFX09             = 0x00000149,
    SQC_PERF_SEL_DCACHE_REQ_WRITE_2__GFX09             = 0x0000014a,
    SQC_PERF_SEL_DCACHE_REQ_WRITE_4__GFX09             = 0x0000014b,
    SQC_PERF_SEL_DCACHE_REQ_ATC_PROBE__GFX09           = 0x0000014c,
    SQC_PERF_SEL_SQ_DCACHE_REQS__GFX09                 = 0x0000014d,
    SQC_PERF_SEL_DCACHE_FLAT_REQ__GFX09                = 0x0000014e,
    SQC_PERF_SEL_DCACHE_NONFLAT_REQ__GFX09             = 0x0000014f,
    SQC_PERF_SEL_ICACHE_INFLIGHT_LEVEL__GFX09          = 0x00000150,
    SQC_PERF_SEL_DCACHE_INFLIGHT_LEVEL__GFX09          = 0x00000151,
    SQC_PERF_SEL_TC_INFLIGHT_LEVEL__GFX09              = 0x00000152,
    SQC_PERF_SEL_ICACHE_TC_INFLIGHT_LEVEL__GFX09       = 0x00000153,
    SQC_PERF_SEL_DCACHE_TC_INFLIGHT_LEVEL__GFX09       = 0x00000154,
    SQC_PERF_SEL_ICACHE_GATCL1_TRANSLATION_MISS__GFX09 = 0x00000155,
    SQC_PERF_SEL_ICACHE_GATCL1_PERMISSION_MISS__GFX09  = 0x00000156,
    SQC_PERF_SEL_ICACHE_GATCL1_TRANSLATION_HIT__GFX09  = 0x00000157,
    SQC_PERF_SEL_ICACHE_GATCL1_REQUEST__GFX09          = 0x00000158,
    SQC_PERF_SEL_ICACHE_GATCL1_STALL_INFLIGHT_MAX__GFX09 = 0x00000159,
    SQC_PERF_SEL_ICACHE_GATCL1_STALL_LRU_INFLIGHT__GFX09 = 0x0000015a,
    SQC_PERF_SEL_ICACHE_GATCL1_LFIFO_FULL__GFX09       = 0x0000015b,
    SQC_PERF_SEL_ICACHE_GATCL1_STALL_LFIFO_NOT_RES__GFX09 = 0x0000015c,
    SQC_PERF_SEL_ICACHE_GATCL1_STALL_ATCL2_REQ_OUT_OF_CREDITS__GFX09 = 0x0000015d,
    SQC_PERF_SEL_ICACHE_GATCL1_ATCL2_INFLIGHT__GFX09   = 0x0000015e,
    SQC_PERF_SEL_ICACHE_GATCL1_STALL_MISSFIFO_FULL__GFX09 = 0x0000015f,
    SQC_PERF_SEL_DCACHE_GATCL1_TRANSLATION_MISS__GFX09 = 0x00000160,
    SQC_PERF_SEL_DCACHE_GATCL1_PERMISSION_MISS__GFX09  = 0x00000161,
    SQC_PERF_SEL_DCACHE_GATCL1_TRANSLATION_HIT__GFX09  = 0x00000162,
    SQC_PERF_SEL_DCACHE_GATCL1_REQUEST__GFX09          = 0x00000163,
    SQC_PERF_SEL_DCACHE_GATCL1_STALL_INFLIGHT_MAX__GFX09 = 0x00000164,
    SQC_PERF_SEL_DCACHE_GATCL1_STALL_LRU_INFLIGHT__GFX09 = 0x00000165,
    SQC_PERF_SEL_DCACHE_GATCL1_LFIFO_FULL__GFX09       = 0x00000166,
    SQC_PERF_SEL_DCACHE_GATCL1_STALL_LFIFO_NOT_RES__GFX09 = 0x00000167,
    SQC_PERF_SEL_DCACHE_GATCL1_STALL_ATCL2_REQ_OUT_OF_CREDITS__GFX09 = 0x00000168,
    SQC_PERF_SEL_DCACHE_GATCL1_ATCL2_INFLIGHT__GFX09   = 0x00000169,
    SQC_PERF_SEL_DCACHE_GATCL1_STALL_MISSFIFO_FULL__GFX09 = 0x0000016a,
    SQC_PERF_SEL_DCACHE_GATCL1_STALL_MULTI_MISS__GFX09 = 0x0000016b,
    SQC_PERF_SEL_DCACHE_GATCL1_HIT_FIFO_FULL__GFX09    = 0x0000016c,
    SQC_PERF_SEL_ICACHE_UTCL1_INFLIGHT_LEVEL__GFX09    = 0x0000016d,
    SQC_PERF_SEL_ICACHE_UTCL1_ALL_REQ__GFX09           = 0x0000016e,
    SQC_PERF_SEL_ICACHE_UTCL2_INFLIGHT_LEVEL__GFX09    = 0x0000016f,
    SQC_PERF_SEL_ICACHE_UTCL2_ALL_REQ__GFX09           = 0x00000170,
    SQC_PERF_SEL_DCACHE_UTCL1_INFLIGHT_LEVEL__GFX09    = 0x00000171,
    SQC_PERF_SEL_DCACHE_UTCL1_ALL_REQ__GFX09           = 0x00000172,
    SQC_PERF_SEL_DCACHE_UTCL2_INFLIGHT_LEVEL__GFX09    = 0x00000173,
    SQC_PERF_SEL_DCACHE_UTCL2_ALL_REQ__GFX09           = 0x00000174,
    SQC_PERF_SEL_DUMMY_LAST__GFX09                     = 0x00000175,
    SQ_PERF_SEL_WAVES_32__GFX10                        = 0x00000005,
    SQ_PERF_SEL_WAVES_64__GFX10                        = 0x00000006,
    SQ_PERF_SEL_LEVEL_WAVES__GFX10                     = 0x00000007,
    SQ_PERF_SEL_ITEMS__GFX10                           = 0x00000008,
    SQ_PERF_SEL_WAVE32_ITEMS__GFX10                    = 0x00000009,
    SQ_PERF_SEL_WAVE64_ITEMS__GFX10                    = 0x0000000a,
    SQ_PERF_SEL_QUADS__GFX10                           = 0x0000000b,
    SQ_PERF_SEL_EVENTS__GFX10                          = 0x0000000c,
    SQ_PERF_SEL_WAVES_EQ_64__GFX10                     = 0x0000000d,
    SQ_PERF_SEL_WAVES_LT_64__GFX10                     = 0x0000000e,
    SQ_PERF_SEL_WAVES_LT_48__GFX10                     = 0x0000000f,
    SQ_PERF_SEL_WAVES_LT_32__GFX10                     = 0x00000010,
    SQ_PERF_SEL_WAVES_LT_16__GFX10                     = 0x00000011,
    SQ_PERF_SEL_WAVES_RESTORED__GFX10                  = 0x00000012,
    SQ_PERF_SEL_WAVES_SAVED__GFX10                     = 0x00000013,
    SQ_PERF_SEL_MSG__GFX10                             = 0x00000014,
    SQ_PERF_SEL_MSG_GSCNT__GFX10                       = 0x00000015,
    SQ_PERF_SEL_MSG_INTERRUPT__GFX10                   = 0x00000016,
    SQ_PERF_SEL_Reserved_1__GFX10                      = 0x00000017,
    SQ_PERF_SEL_Reserved_2__GFX10                      = 0x00000018,
    SQ_PERF_SEL_Reserved_3__GFX10                      = 0x00000019,
    SQ_PERF_SEL_WAVE_CYCLES__GFX10                     = 0x0000001a,
    SQ_PERF_SEL_WAVE_READY__GFX10                      = 0x0000001b,
    SQ_PERF_SEL_WAIT_INST_ANY__GFX10                   = 0x0000001c,
    SQ_PERF_SEL_WAIT_INST_VALU__GFX10                  = 0x0000001d,
    SQ_PERF_SEL_WAIT_INST_SCA__GFX10                   = 0x0000001e,
    SQ_PERF_SEL_WAIT_INST_LDS__GFX10                   = 0x0000001f,
    SQ_PERF_SEL_WAIT_INST_TEX__GFX10                   = 0x00000020,
    SQ_PERF_SEL_WAIT_INST_FLAT__GFX10                  = 0x00000021,
    SQ_PERF_SEL_WAIT_INST_VMEM__GFX10                  = 0x00000022,
    SQ_PERF_SEL_WAIT_INST_EXP_GDS__GFX10               = 0x00000023,
    SQ_PERF_SEL_WAIT_INST_BR_MSG__GFX10                = 0x00000024,
    SQ_PERF_SEL_WAIT_ANY__GFX10                        = 0x00000025,
    SQ_PERF_SEL_WAIT_CNT_ANY__GFX10                    = 0x00000026,
    SQ_PERF_SEL_WAIT_CNT_VMVS__GFX10                   = 0x00000027,
    SQ_PERF_SEL_WAIT_CNT_LGKM__GFX10                   = 0x00000028,
    SQ_PERF_SEL_WAIT_CNT_EXP__GFX10                    = 0x00000029,
    SQ_PERF_SEL_WAIT_TTRACE__GFX10                     = 0x0000002a,
    SQ_PERF_SEL_WAIT_IFETCH__GFX10                     = 0x0000002b,
    SQ_PERF_SEL_WAIT_BARRIER__GFX10                    = 0x0000002c,
    SQ_PERF_SEL_WAIT_EXP_ALLOC__GFX10                  = 0x0000002d,
    SQ_PERF_SEL_WAIT_SLEEP__GFX10                      = 0x0000002e,
    SQ_PERF_SEL_WAIT_SLEEP_XNACK__GFX10                = 0x0000002f,
    SQ_PERF_SEL_WAIT_OTHER__GFX10                      = 0x00000030,
    SQ_PERF_SEL_INSTS_ALL__GFX10                       = 0x00000031,
    SQ_PERF_SEL_INSTS_BRANCH__GFX10                    = 0x00000032,
    SQ_PERF_SEL_INSTS_CBRANCH_NOT_TAKEN__GFX10         = 0x00000033,
    SQ_PERF_SEL_INSTS_CBRANCH_TAKEN__GFX10             = 0x00000034,
    SQ_PERF_SEL_INSTS_CBRANCH_TAKEN_HIT_IS__GFX10      = 0x00000035,
    SQ_PERF_SEL_INSTS_EXP_GDS__GFX10                   = 0x00000036,
    SQ_PERF_SEL_INSTS_GDS__GFX10                       = 0x00000037,
    SQ_PERF_SEL_INSTS_EXP__GFX10                       = 0x00000038,
    SQ_PERF_SEL_INSTS_FLAT__GFX10                      = 0x00000039,
    SQ_PERF_SEL_Reserved_4__GFX10                      = 0x0000003a,
    SQ_PERF_SEL_INSTS_LDS__GFX10                       = 0x0000003b,
    SQ_PERF_SEL_INSTS_SALU__GFX10                      = 0x0000003c,
    SQ_PERF_SEL_INSTS_SMEM__GFX10                      = 0x0000003d,
    SQ_PERF_SEL_INSTS_SMEM_NORM__GFX10                 = 0x0000003e,
    SQ_PERF_SEL_INSTS_SENDMSG__GFX10                   = 0x0000003f,
    SQ_PERF_SEL_INSTS_VALU__GFX10                      = 0x00000040,
    SQ_PERF_SEL_Reserved_17__GFX10                     = 0x00000041,
    SQ_PERF_SEL_INSTS_VALU_TRANS32__GFX10              = 0x00000042,
    SQ_PERF_SEL_INSTS_VALU_NO_COEXEC__GFX10            = 0x00000043,
    SQ_PERF_SEL_INSTS_TEX__GFX10                       = 0x00000044,
    SQ_PERF_SEL_INSTS_TEX_LOAD__GFX10                  = 0x00000045,
    SQ_PERF_SEL_INSTS_TEX_STORE__GFX10                 = 0x00000046,
    SQ_PERF_SEL_INSTS_WAVE32__GFX10                    = 0x00000047,
    SQ_PERF_SEL_INSTS_WAVE32_FLAT__GFX10               = 0x00000048,
    SQ_PERF_SEL_Reserved_5__GFX10                      = 0x00000049,
    SQ_PERF_SEL_INSTS_WAVE32_LDS__GFX10                = 0x0000004a,
    SQ_PERF_SEL_INSTS_WAVE32_VALU__GFX10               = 0x0000004b,
    SQ_PERF_SEL_INSTS_WAVE32_EXP_GDS__GFX10            = 0x0000004c,
    SQ_PERF_SEL_INSTS_WAVE32_VALU_TRANS32__GFX10       = 0x0000004d,
    SQ_PERF_SEL_INSTS_WAVE32_VALU_NO_COEXEC__GFX10     = 0x0000004e,
    SQ_PERF_SEL_INSTS_WAVE32_TEX__GFX10                = 0x0000004f,
    SQ_PERF_SEL_INSTS_WAVE32_TEX_LOAD__GFX10           = 0x00000050,
    SQ_PERF_SEL_INSTS_WAVE32_TEX_STORE__GFX10          = 0x00000051,
    SQ_PERF_SEL_ITEM_CYCLES_VALU__GFX10                = 0x00000052,
    SQ_PERF_SEL_VALU_READWRITELANE_CYCLES__GFX10       = 0x00000053,
    SQ_PERF_SEL_WAVE32_INSTS__GFX10                    = 0x00000054,
    SQ_PERF_SEL_WAVE64_INSTS__GFX10                    = 0x00000055,
    SQ_PERF_SEL_Reserved_18__GFX10                     = 0x00000056,
    SQ_PERF_SEL_INSTS_VALU_EXEC_SKIPPED__GFX10         = 0x00000057,
    SQ_PERF_SEL_WAVE64_HALF_SKIP__GFX10                = 0x00000058,
    SQ_PERF_SEL_INSTS_TEX_REPLAY__GFX10                = 0x00000059,
    SQ_PERF_SEL_INSTS_SMEM_REPLAY__GFX10               = 0x0000005a,
    SQ_PERF_SEL_Reserved_20__GFX10                     = 0x0000005b,
    SQ_PERF_SEL_INSTS_FLAT_REPLAY__GFX10               = 0x0000005c,
    SQ_PERF_SEL_TA_XNACK_ALL__GFX10                    = 0x0000005d,
    SQ_PERF_SEL_TA_XNACK_FIRST__GFX10                  = 0x0000005e,
    SQ_PERF_SEL_INSTS_VALU_LDS_DIRECT_RD__GFX10        = 0x0000005f,
    SQ_PERF_SEL_INSTS_VALU_VINTRP_OP__GFX10            = 0x00000060,
    SQ_PERF_SEL_INST_LEVEL_EXP__GFX10                  = 0x00000061,
    SQ_PERF_SEL_INST_LEVEL_GDS__GFX10                  = 0x00000062,
    SQ_PERF_SEL_INST_LEVEL_LDS__GFX10                  = 0x00000063,
    SQ_PERF_SEL_INST_LEVEL_SMEM__GFX10                 = 0x00000064,
    SQ_PERF_SEL_INST_LEVEL_TEX_LOAD__GFX10             = 0x00000065,
    SQ_PERF_SEL_INST_LEVEL_TEX_STORE__GFX10            = 0x00000066,
    SQ_PERF_SEL_IFETCH_REQS__GFX10                     = 0x00000067,
    SQ_PERF_SEL_IFETCH_LEVEL__GFX10                    = 0x00000068,
    SQ_PERF_SEL_IFETCH_XNACK__GFX10                    = 0x00000069,
    SQ_PERF_SEL_Reserved_6__GFX10                      = 0x0000006a,
    SQ_PERF_SEL_Reserved_7__GFX10                      = 0x0000006b,
    SQ_PERF_SEL_LDS_DIRECT_CMD_FIFO_FULL_STALL__GFX10  = 0x0000006c,
    SQ_PERF_SEL_VALU_SGATHER_STALL__GFX10              = 0x0000006d,
    SQ_PERF_SEL_VALU_FWD_BUFFER_FULL_STALL__GFX10      = 0x0000006e,
    SQ_PERF_SEL_VALU_SGPR_RD_FIFO_FULL_STALL__GFX10    = 0x0000006f,
    SQ_PERF_SEL_VALU_SGATHER_FULL_STALL__GFX10         = 0x00000070,
    SQ_PERF_SEL_SALU_SGATHER_STALL__GFX10              = 0x00000071,
    SQ_PERF_SEL_SALU_SGPR_RD_FIFO_FULL_STALL__GFX10    = 0x00000072,
    SQ_PERF_SEL_SALU_GATHER_FULL_STALL__GFX10          = 0x00000073,
    SQ_PERF_SEL_SMEM_DCACHE_FIFO_FULL_STALL__GFX10     = 0x00000074,
    SQ_PERF_SEL_INST_CYCLES_VALU__GFX10                = 0x00000075,
    SQ_PERF_SEL_INST_CYCLES_VALU_TRANS32__GFX10        = 0x00000076,
    SQ_PERF_SEL_INST_CYCLES_VALU_NO_COEXEC__GFX10      = 0x00000077,
    SQ_PERF_SEL_INST_CYCLES_VMEM__GFX10                = 0x00000078,
    SQ_PERF_SEL_INST_CYCLES_VMEM_LOAD__GFX10           = 0x00000079,
    SQ_PERF_SEL_INST_CYCLES_VMEM_STORE__GFX10          = 0x0000007a,
    SQ_PERF_SEL_INST_CYCLES_LDS__GFX10                 = 0x0000007b,
    SQ_PERF_SEL_INST_CYCLES_TEX__GFX10                 = 0x0000007c,
    SQ_PERF_SEL_INST_CYCLES_FLAT__GFX10                = 0x0000007d,
    SQ_PERF_SEL_INST_CYCLES_EXP_GDS__GFX10             = 0x0000007e,
    SQ_PERF_SEL_INST_CYCLES_EXP__GFX10                 = 0x0000007f,
    SQ_PERF_SEL_INST_CYCLES_GDS__GFX10                 = 0x00000080,
    SQ_PERF_SEL_VALU_STARVE__GFX10                     = 0x00000081,
    SQ_PERF_SEL_VMEM_ARB_FIFO_FULL__GFX10              = 0x00000082,
    SQ_PERF_SEL_MSG_FIFO_FULL_STALL__GFX10             = 0x00000083,
    SQ_PERF_SEL_EXP_REQ_FIFO_FULL__GFX10               = 0x00000084,
    SQ_PERF_SEL_Reserved_11__GFX10                     = 0x00000085,
    SQ_PERF_SEL_Reserved_12__GFX10                     = 0x00000086,
    SQ_PERF_SEL_Reserved_13__GFX10                     = 0x00000087,
    SQ_PERF_SEL_Reserved_14__GFX10                     = 0x00000088,
    SQ_PERF_SEL_VMEM_BUS_ACTIVE__GFX10                 = 0x00000089,
    SQ_PERF_SEL_VMEM_BUS_STALL__GFX10                  = 0x0000008a,
    SQ_PERF_SEL_VMEM_BUS_STALL_TA_ADDR_FIFO_FULL__GFX10 = 0x0000008b,
    SQ_PERF_SEL_VMEM_BUS_STALL_TA_CMD_FIFO_FULL__GFX10 = 0x0000008c,
    SQ_PERF_SEL_VMEM_BUS_STALL_LDS_ADDR_FIFO_FULL__GFX10 = 0x0000008d,
    SQ_PERF_SEL_VMEM_BUS_STALL_LDS_CMD_FIFO_FULL__GFX10 = 0x0000008e,
    SQ_PERF_SEL_VMEM_STARVE_TA_ADDR_EMPTY__GFX10       = 0x0000008f,
    SQ_PERF_SEL_VMEM_STARVE_LDS_ADDR_EMPTY__GFX10      = 0x00000090,
    SQ_PERF_SEL_Reserved_15__GFX10                     = 0x00000091,
    SQ_PERF_SEL_SALU_PIPE_STALL__GFX10                 = 0x00000092,
    SQ_PERF_SEL_SMEM_DCACHE_RETURN_CYCLES__GFX10       = 0x00000093,
    SQ_PERF_SEL_Reserved_21__GFX10                     = 0x00000094,
    SQ_PERF_SEL_MSG_BUS_BUSY__GFX10                    = 0x00000095,
    SQ_PERF_SEL_EXP_REQ_BUS_STALL__GFX10               = 0x00000096,
    SQ_PERF_SEL_EXP_REQ0_BUS_BUSY__GFX10               = 0x00000097,
    SQ_PERF_SEL_EXP_REQ1_BUS_BUSY__GFX10               = 0x00000098,
    SQ_PERF_SEL_EXP_BUS0_BUSY__GFX10                   = 0x00000099,
    SQ_PERF_SEL_EXP_BUS1_BUSY__GFX10                   = 0x0000009a,
    SQ_PERF_SEL_Reserved_19__GFX10                     = 0x0000009b,
    SQ_PERF_SEL_INST_CACHE_REQ_STALL__GFX10            = 0x0000009c,
    SQ_PERF_SEL_MIXED_SUBSEQUENT_ISSUES_VALU__GFX10    = 0x0000009d,
    SQ_PERF_SEL_MIXED_SUBSEQUENT_ISSUES_SALU__GFX10    = 0x0000009e,
    SQ_PERF_SEL_MIXED_SUBSEQUENT_ISSUES_VMEM__GFX10    = 0x0000009f,
    SQ_PERF_SEL_USER0__GFX10                           = 0x000000a0,
    SQ_PERF_SEL_USER1__GFX10                           = 0x000000a1,
    SQ_PERF_SEL_USER2__GFX10                           = 0x000000a2,
    SQ_PERF_SEL_USER3__GFX10                           = 0x000000a3,
    SQ_PERF_SEL_USER4__GFX10                           = 0x000000a4,
    SQ_PERF_SEL_USER5__GFX10                           = 0x000000a5,
    SQ_PERF_SEL_USER6__GFX10                           = 0x000000a6,
    SQ_PERF_SEL_USER7__GFX10                           = 0x000000a7,
    SQ_PERF_SEL_USER8__GFX10                           = 0x000000a8,
    SQ_PERF_SEL_USER9__GFX10                           = 0x000000a9,
    SQ_PERF_SEL_USER10__GFX10                          = 0x000000aa,
    SQ_PERF_SEL_USER11__GFX10                          = 0x000000ab,
    SQ_PERF_SEL_USER12__GFX10                          = 0x000000ac,
    SQ_PERF_SEL_USER13__GFX10                          = 0x000000ad,
    SQ_PERF_SEL_USER14__GFX10                          = 0x000000ae,
    SQ_PERF_SEL_USER15__GFX10                          = 0x000000af,
    SQ_PERF_SEL_USER_LEVEL0__GFX10                     = 0x000000b0,
    SQ_PERF_SEL_USER_LEVEL1__GFX10                     = 0x000000b1,
    SQ_PERF_SEL_USER_LEVEL2__GFX10                     = 0x000000b2,
    SQ_PERF_SEL_USER_LEVEL3__GFX10                     = 0x000000b3,
    SQ_PERF_SEL_USER_LEVEL4__GFX10                     = 0x000000b4,
    SQ_PERF_SEL_USER_LEVEL5__GFX10                     = 0x000000b5,
    SQ_PERF_SEL_USER_LEVEL6__GFX10                     = 0x000000b6,
    SQ_PERF_SEL_USER_LEVEL7__GFX10                     = 0x000000b7,
    SQ_PERF_SEL_USER_LEVEL8__GFX10                     = 0x000000b8,
    SQ_PERF_SEL_USER_LEVEL9__GFX10                     = 0x000000b9,
    SQ_PERF_SEL_USER_LEVEL10__GFX10                    = 0x000000ba,
    SQ_PERF_SEL_USER_LEVEL11__GFX10                    = 0x000000bb,
    SQ_PERF_SEL_USER_LEVEL12__GFX10                    = 0x000000bc,
    SQ_PERF_SEL_USER_LEVEL13__GFX10                    = 0x000000bd,
    SQ_PERF_SEL_USER_LEVEL14__GFX10                    = 0x000000be,
    SQ_PERF_SEL_USER_LEVEL15__GFX10                    = 0x000000bf,
    SQ_PERF_SEL_VALU_RETURN_SDST__GFX10                = 0x000000c0,
    SQ_PERF_SEL_VMEM_SECOND_TRY_USED__GFX10            = 0x000000c1,
    SQ_PERF_SEL_VMEM_SECOND_TRY_STALL__GFX10           = 0x000000c2,
    SQ_PERF_SEL_DUMMY_END__GFX10                       = 0x000000c3,
    SQG_PERF_SEL_UTCL0_TRANSLATION_MISS__GFX10         = 0x00000100,
    SQG_PERF_SEL_UTCL0_PERMISSION_MISS__GFX10          = 0x00000101,
    SQG_PERF_SEL_UTCL0_TRANSLATION_HIT__GFX10          = 0x00000102,
    SQG_PERF_SEL_UTCL0_REQUEST__GFX10                  = 0x00000103,
    SQG_PERF_SEL_UTCL0_STALL_MISSFIFO_FULL__GFX10      = 0x00000104,
    SQG_PERF_SEL_UTCL0_STALL_INFLIGHT_MAX__GFX10       = 0x00000105,
    SQG_PERF_SEL_UTCL0_STALL_LRU_INFLIGHT__GFX10       = 0x00000106,
    SQG_PERF_SEL_UTCL0_LFIFO_FULL__GFX10               = 0x00000107,
    SQG_PERF_SEL_UTCL0_STALL_LFIFO_NOT_RES__GFX10      = 0x00000108,
    SQG_PERF_SEL_UTCL0_STALL_UTCL1_REQ_OUT_OF_CREDITS__GFX10 = 0x00000109,
    SQG_PERF_SEL_UTCL0_HIT_FIFO_FULL__GFX10            = 0x0000010a,
    SQG_PERF_SEL_UTCL0_UTCL1_REQ__GFX10                = 0x0000010b,
    SQG_PERF_SEL_TLB_SHOOTDOWN__GFX10                  = 0x0000010c,
    SQG_PERF_SEL_TLB_SHOOTDOWN_CYCLES__GFX10           = 0x0000010d,
    SQG_PERF_SEL_TTRACE_REQS__GFX10                    = 0x0000010e,
    SQG_PERF_SEL_TTRACE_INFLIGHT_REQS__GFX10           = 0x0000010f,
    SQG_PERF_SEL_TTRACE_STALL__GFX10                   = 0x00000110,
    SQG_PERF_SEL_TTRACE_LOST_PACKETS__GFX10            = 0x00000111,
    SQG_PERF_SEL_DUMMY_LAST__GFX10                     = 0x00000112,
    SQC_PERF_SEL_POWER_VALU__GFX10                     = 0x00000113,
    SQC_PERF_SEL_POWER_VALU0__GFX10                    = 0x00000114,
    SQC_PERF_SEL_POWER_VALU1__GFX10                    = 0x00000115,
    SQC_PERF_SEL_POWER_VALU2__GFX10                    = 0x00000116,
    SQC_PERF_SEL_POWER_GPR_RD__GFX10                   = 0x00000117,
    SQC_PERF_SEL_POWER_GPR_WR__GFX10                   = 0x00000118,
    SQC_PERF_SEL_POWER_LDS_BUSY__GFX10                 = 0x00000119,
    SQC_PERF_SEL_POWER_ALU_BUSY__GFX10                 = 0x0000011a,
    SQC_PERF_SEL_POWER_TEX_BUSY__GFX10                 = 0x0000011b,
    SQC_PERF_SEL_PT_POWER_STALL__GFX10                 = 0x0000011c,
    SQC_PERF_SEL_LDS_BANK_CONFLICT__GFX10              = 0x0000011d,
    SQC_PERF_SEL_LDS_ADDR_CONFLICT__GFX10              = 0x0000011e,
    SQC_PERF_SEL_LDS_UNALIGNED_STALL__GFX10            = 0x0000011f,
    SQC_PERF_SEL_LDS_MEM_VIOLATIONS__GFX10             = 0x00000120,
    SQC_PERF_SEL_LDS_ATOMIC_RETURN__GFX10              = 0x00000121,
    SQC_PERF_SEL_LDS_IDX_ACTIVE__GFX10                 = 0x00000122,
    SQC_PERF_SEL_LDS_ADDR_STALL__GFX10                 = 0x00000123,
    SQC_PERF_SEL_LDS_ADDR_ACTIVE__GFX10                = 0x00000124,
    SQC_PERF_SEL_LDS_DIRECT_FIFO_FULL_STALL__GFX10     = 0x00000125,
    SQC_PERF_SEL_LDS_PC_LDS_WRITE_STALL_TD__GFX10      = 0x00000126,
    SQC_PERF_SEL_LDS_SPI_VGPR_WRITE_STALL_TD__GFX10    = 0x00000127,
    SQC_PERF_SEL_LDS_LDS_VGPR_WRITE_STALL__GFX10       = 0x00000128,
    SQC_PERF_SEL_LDS_FP_ADD_CYCLES__GFX10              = 0x00000129,
    SQC_PERF_SEL_ICACHE_BUSY_CYCLES__GFX10             = 0x0000012a,
    SQC_PERF_SEL_ICACHE_REQ__GFX10                     = 0x0000012b,
    SQC_PERF_SEL_ICACHE_HITS__GFX10                    = 0x0000012c,
    SQC_PERF_SEL_ICACHE_MISSES__GFX10                  = 0x0000012d,
    SQC_PERF_SEL_ICACHE_MISSES_DUPLICATE__GFX10        = 0x0000012e,
    SQC_PERF_SEL_ICACHE_INVAL_INST__GFX10              = 0x0000012f,
    SQC_PERF_SEL_ICACHE_INVAL_ASYNC__GFX10             = 0x00000130,
    SQC_PERF_SEL_ICACHE_INFLIGHT_LEVEL__GFX10          = 0x00000131,
    SQC_PERF_SEL_DCACHE_INFLIGHT_LEVEL__GFX10          = 0x00000132,
    SQC_PERF_SEL_TC_INFLIGHT_LEVEL__GFX10              = 0x00000133,
    SQC_PERF_SEL_ICACHE_TC_INFLIGHT_LEVEL__GFX10       = 0x00000134,
    SQC_PERF_SEL_DCACHE_TC_INFLIGHT_LEVEL__GFX10       = 0x00000135,
    SQC_PERF_SEL_ICACHE_INPUT_VALID_READY__GFX10       = 0x00000136,
    SQC_PERF_SEL_ICACHE_INPUT_VALID_READYB__GFX10      = 0x00000137,
    SQC_PERF_SEL_ICACHE_INPUT_VALIDB__GFX10            = 0x00000138,
    SQC_PERF_SEL_DCACHE_INPUT_VALID_READY__GFX10       = 0x00000139,
    SQC_PERF_SEL_DCACHE_INPUT_VALID_READYB__GFX10      = 0x0000013a,
    SQC_PERF_SEL_DCACHE_INPUT_VALIDB__GFX10            = 0x0000013b,
    SQC_PERF_SEL_TC_REQ__GFX10                         = 0x0000013c,
    SQC_PERF_SEL_TC_INST_REQ__GFX10                    = 0x0000013d,
    SQC_PERF_SEL_TC_DATA_READ_REQ__GFX10               = 0x0000013e,
    SQC_PERF_SEL_TC_DATA_WRITE_REQ__GFX10              = 0x0000013f,
    SQC_PERF_SEL_TC_DATA_ATOMIC_REQ__GFX10             = 0x00000140,
    SQC_PERF_SEL_TC_STALL__GFX10                       = 0x00000141,
    SQC_PERF_SEL_TC_STARVE__GFX10                      = 0x00000142,
    SQC_PERF_SEL_ICACHE_INPUT_STALL_ARB_NO_GRANT__GFX10 = 0x00000143,
    SQC_PERF_SEL_ICACHE_INPUT_STALL_BANK_READYB__GFX10 = 0x00000144,
    SQC_PERF_SEL_ICACHE_CACHE_STALLED__GFX10           = 0x00000145,
    SQC_PERF_SEL_ICACHE_CACHE_STALL_INFLIGHT_NONZERO__GFX10 = 0x00000146,
    SQC_PERF_SEL_ICACHE_CACHE_STALL_INFLIGHT_MAX__GFX10 = 0x00000147,
    SQC_PERF_SEL_ICACHE_CACHE_STALL_OUTPUT__GFX10      = 0x00000148,
    SQC_PERF_SEL_ICACHE_CACHE_STALL_OUTPUT_MISS_FIFO__GFX10 = 0x00000149,
    SQC_PERF_SEL_ICACHE_CACHE_STALL_OUTPUT_HIT_FIFO__GFX10 = 0x0000014a,
    SQC_PERF_SEL_ICACHE_CACHE_STALL_OUTPUT_TC_IF__GFX10 = 0x0000014b,
    SQC_PERF_SEL_ICACHE_STALL_OUTXBAR_ARB_NO_GRANT__GFX10 = 0x0000014c,
    SQC_PERF_SEL_DCACHE_BUSY_CYCLES__GFX10             = 0x0000014d,
    SQC_PERF_SEL_DCACHE_REQ__GFX10                     = 0x0000014e,
    SQC_PERF_SEL_DCACHE_HITS__GFX10                    = 0x0000014f,
    SQC_PERF_SEL_DCACHE_MISSES__GFX10                  = 0x00000150,
    SQC_PERF_SEL_DCACHE_MISSES_DUPLICATE__GFX10        = 0x00000151,
    SQC_PERF_SEL_DCACHE_INVAL_INST__GFX10              = 0x00000152,
    SQC_PERF_SEL_DCACHE_INVAL_ASYNC__GFX10             = 0x00000153,
    SQC_PERF_SEL_DCACHE_HIT_LRU_READ__GFX10            = 0x00000154,
    SQC_PERF_SEL_DCACHE_WC_LRU_WRITE__GFX10            = 0x00000155,
    SQC_PERF_SEL_DCACHE_WT_EVICT_WRITE__GFX10          = 0x00000156,
    SQC_PERF_SEL_DCACHE_ATOMIC__GFX10                  = 0x00000157,
    SQC_PERF_SEL_DCACHE_WB_INST__GFX10                 = 0x00000158,
    SQC_PERF_SEL_DCACHE_WB_ASYNC__GFX10                = 0x00000159,
    SQC_PERF_SEL_DCACHE_INPUT_STALL_ARB_NO_GRANT__GFX10 = 0x0000015a,
    SQC_PERF_SEL_DCACHE_INPUT_STALL_BANK_READYB__GFX10 = 0x0000015b,
    SQC_PERF_SEL_DCACHE_CACHE_STALLED__GFX10           = 0x0000015c,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_INFLIGHT_MAX__GFX10 = 0x0000015d,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_OUTPUT__GFX10      = 0x0000015e,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_EVICT__GFX10       = 0x0000015f,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_UNORDERED__GFX10   = 0x00000160,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_ALLOC_UNAVAILABLE__GFX10 = 0x00000161,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_FORCE_EVICT__GFX10 = 0x00000162,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_MULTI_FLUSH__GFX10 = 0x00000163,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_FLUSH_DONE__GFX10  = 0x00000164,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_OUTPUT_MISS_FIFO__GFX10 = 0x00000165,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_OUTPUT_HIT_FIFO__GFX10 = 0x00000166,
    SQC_PERF_SEL_DCACHE_CACHE_STALL_OUTPUT_TC_IF__GFX10 = 0x00000167,
    SQC_PERF_SEL_DCACHE_STALL_OUTXBAR_ARB_NO_GRANT__GFX10 = 0x00000168,
    SQC_PERF_SEL_DCACHE_REQ_READ_1__GFX10              = 0x00000169,
    SQC_PERF_SEL_DCACHE_REQ_READ_2__GFX10              = 0x0000016a,
    SQC_PERF_SEL_DCACHE_REQ_READ_4__GFX10              = 0x0000016b,
    SQC_PERF_SEL_DCACHE_REQ_READ_8__GFX10              = 0x0000016c,
    SQC_PERF_SEL_DCACHE_REQ_READ_16__GFX10             = 0x0000016d,
    SQC_PERF_SEL_DCACHE_REQ_TIME__GFX10                = 0x0000016e,
    SQC_PERF_SEL_DCACHE_REQ_WRITE_1__GFX10             = 0x0000016f,
    SQC_PERF_SEL_DCACHE_REQ_WRITE_2__GFX10             = 0x00000170,
    SQC_PERF_SEL_DCACHE_REQ_WRITE_4__GFX10             = 0x00000171,
    SQC_PERF_SEL_DCACHE_REQ_ATC_PROBE__GFX10           = 0x00000172,
    SQC_PERF_SEL_SQ_DCACHE_REQS__GFX10                 = 0x00000173,
    SQC_PERF_SEL_DCACHE_FLAT_REQ__GFX10                = 0x00000174,
    SQC_PERF_SEL_DCACHE_NONFLAT_REQ__GFX10             = 0x00000175,
    SQC_PERF_SEL_ICACHE_UTCL0_TRANSLATION_MISS__GFX10  = 0x00000176,
    SQC_PERF_SEL_ICACHE_UTCL0_PERMISSION_MISS__GFX10   = 0x00000177,
    SQC_PERF_SEL_ICACHE_UTCL0_TRANSLATION_HIT__GFX10   = 0x00000178,
    SQC_PERF_SEL_ICACHE_UTCL0_REQUEST__GFX10           = 0x00000179,
    SQC_PERF_SEL_ICACHE_UTCL0_XNACK__GFX10             = 0x0000017a,
    SQC_PERF_SEL_ICACHE_UTCL0_STALL_INFLIGHT_MAX__GFX10 = 0x0000017b,
    SQC_PERF_SEL_ICACHE_UTCL0_STALL_LRU_INFLIGHT__GFX10 = 0x0000017c,
    SQC_PERF_SEL_ICACHE_UTCL0_LFIFO_FULL__GFX10        = 0x0000017d,
    SQC_PERF_SEL_ICACHE_UTCL0_STALL_LFIFO_NOT_RES__GFX10 = 0x0000017e,
    SQC_PERF_SEL_ICACHE_UTCL0_STALL_UTCL1_REQ_OUT_OF_CREDITS__GFX10 = 0x0000017f,
    SQC_PERF_SEL_ICACHE_UTCL0_UTCL1_INFLIGHT__GFX10    = 0x00000180,
    SQC_PERF_SEL_ICACHE_UTCL0_STALL_MISSFIFO_FULL__GFX10 = 0x00000181,
    SQC_PERF_SEL_DCACHE_UTCL0_TRANSLATION_MISS__GFX10  = 0x00000182,
    SQC_PERF_SEL_DCACHE_UTCL0_PERMISSION_MISS__GFX10   = 0x00000183,
    SQC_PERF_SEL_DCACHE_UTCL0_TRANSLATION_HIT__GFX10   = 0x00000184,
    SQC_PERF_SEL_DCACHE_UTCL0_REQUEST__GFX10           = 0x00000185,
    SQC_PERF_SEL_DCACHE_UTCL0_XNACK__GFX10             = 0x00000186,
    SQC_PERF_SEL_DCACHE_UTCL0_STALL_INFLIGHT_MAX__GFX10 = 0x00000187,
    SQC_PERF_SEL_DCACHE_UTCL0_STALL_LRU_INFLIGHT__GFX10 = 0x00000188,
    SQC_PERF_SEL_DCACHE_UTCL0_LFIFO_FULL__GFX10        = 0x00000189,
    SQC_PERF_SEL_DCACHE_UTCL0_STALL_LFIFO_NOT_RES__GFX10 = 0x0000018a,
    SQC_PERF_SEL_DCACHE_UTCL0_STALL_UTCL1_REQ_OUT_OF_CREDITS__GFX10 = 0x0000018b,
    SQC_PERF_SEL_DCACHE_UTCL0_UTCL1_INFLIGHT__GFX10    = 0x0000018c,
    SQC_PERF_SEL_DCACHE_UTCL0_STALL_MISSFIFO_FULL__GFX10 = 0x0000018d,
    SQC_PERF_SEL_DCACHE_UTCL0_STALL_MULTI_MISS__GFX10  = 0x0000018e,
    SQC_PERF_SEL_DCACHE_UTCL0_HIT_FIFO_FULL__GFX10     = 0x0000018f,
    SQC_PERF_SEL_ICACHE_UTCL0_INFLIGHT_LEVEL__GFX10    = 0x00000190,
    SQC_PERF_SEL_ICACHE_UTCL0_ALL_REQ__GFX10           = 0x00000191,
    SQC_PERF_SEL_ICACHE_UTCL1_INFLIGHT_LEVEL__GFX10    = 0x00000192,
    SQC_PERF_SEL_ICACHE_UTCL1_ALL_REQ__GFX10           = 0x00000193,
    SQC_PERF_SEL_ICACHE_UTCL0_UTCL1_PERM_FAULT__GFX10  = 0x00000194,
    SQC_PERF_SEL_DCACHE_UTCL0_INFLIGHT_LEVEL__GFX10    = 0x00000195,
    SQC_PERF_SEL_DCACHE_UTCL0_ALL_REQ__GFX10           = 0x00000196,
    SQC_PERF_SEL_DCACHE_UTCL1_INFLIGHT_LEVEL__GFX10    = 0x00000197,
    SQC_PERF_SEL_DCACHE_UTCL1_ALL_REQ__GFX10           = 0x00000198,
    SQC_PERF_SEL_DCACHE_UTCL0_UTCL1_PERM_FAULT__GFX10  = 0x00000199,
    SQC_PERF_SEL_ICACHE_GCR__GFX10                     = 0x0000019a,
    SQC_PERF_SEL_ICACHE_GCR_HITS__GFX10                = 0x0000019b,
    SQC_PERF_SEL_DCACHE_GCR__GFX10                     = 0x0000019c,
    SQC_PERF_SEL_DCACHE_GCR_HITS__GFX10                = 0x0000019d,
    SQC_PERF_SEL_ICACHE_GCR_INVALIDATE__GFX10          = 0x0000019e,
    SQC_PERF_SEL_DCACHE_GCR_INVALIDATE__GFX10          = 0x0000019f,
    SQC_PERF_SEL_DCACHE_GCR_WRITEBACK__GFX10           = 0x000001a0,
    SQC_PERF_SEL_DCACHE_SPI_RETURN_STALL__GFX10        = 0x000001a1,
    SQC_PERF_SEL_DUMMY_LAST__GFX10                     = 0x000001a2,
    SP_PERF_SEL_DCACHE_WB_CNT__GFX10                   = 0x000001c0,
    SP_PERF_SEL_DCACHE_STALL__GFX10                    = 0x000001c1,
    SP_PERF_SEL_DCACHE_HIT__GFX10                      = 0x000001c2,
    SP_PERF_SEL_DCACHE_HIT_DIRTY__GFX10                = 0x000001c3,
    SP_PERF_SEL_DCACHE_WB_CONF_W_LDS__GFX10            = 0x000001c4,
    SP_PERF_SEL_DCACHE_WB_CONF_W_TD__GFX10             = 0x000001c5,
    SP_PERF_SEL_DCACHE_WB_CONF_W_SPI__GFX10            = 0x000001c6,
    SP_PERF_SEL_DCACHE_WB_CONF_W_EXP_VMEM__GFX10       = 0x000001c7,
    SP_PERF_SEL_DCACHE_EVEN_DIRTY_CNT__GFX10           = 0x000001c8,
    SP_PERF_SEL_DCACHE_ODD_DIRTY_CNT__GFX10            = 0x000001c9,
    SP_PERF_SEL_DCACHE_INVALIDATE_BY_VEC__GFX10        = 0x000001ca,
    SP_PERF_SEL_GATHER_SRCA_FWD__GFX10                 = 0x000001cb,
    SP_PERF_SEL_GATHER_SRCB_FWD__GFX10                 = 0x000001cc,
    SP_PERF_SEL_GATHER_SRCC_FWD__GFX10                 = 0x000001cd,
    SP_PERF_SEL_GATHER_SRCA_REDUNDANT__GFX10           = 0x000001ce,
    SP_PERF_SEL_GATHER_SRCB_REDUNDANT__GFX10           = 0x000001cf,
    SP_PERF_SEL_GATHER_SRCC_REDUNDANT__GFX10           = 0x000001d0,
    SP_PERF_SEL_GATHER_SRCA_DIRECT__GFX10              = 0x000001d1,
    SP_PERF_SEL_GATHER_SRCB_DIRECT__GFX10              = 0x000001d2,
    SP_PERF_SEL_GATHER_SRCC_DIRECT__GFX10              = 0x000001d3,
    SP_PERF_SEL_VGPR_VALU_BANK0_RD__GFX10              = 0x000001d4,
    SP_PERF_SEL_VGPR_VALU_BANK1_RD__GFX10              = 0x000001d5,
    SP_PERF_SEL_VGPR_VALU_BANK2_RD__GFX10              = 0x000001d6,
    SP_PERF_SEL_VGPR_VALU_BANK3_RD__GFX10              = 0x000001d7,
    SP_PERF_SEL_VGPR_VMEM_BANK_RD__GFX10               = 0x000001d8,
    SP_PERF_SEL_VGPR_EXP_BANK_RD__GFX10                = 0x000001d9,
    SP_PERF_SEL_VGPR_TDDATA_WR__GFX10                  = 0x000001da,
    SP_PERF_SEL_VGPR_LDSDATA_WR__GFX10                 = 0x000001db,
    SP_PERF_SEL_PB_STALL__GFX10                        = 0x000001dc,
    SP_PERF_SEL_PB_SEND__GFX10                         = 0x000001dd,
    SP_PERF_SEL_LDS_DIRECT_FIFO_FULL__GFX10            = 0x000001de,
    SP_PERF_SEL_LDS_DIRECT_FIFO_SEND__GFX10            = 0x000001df,
    SP_PERF_SEL_SQ_SP_CONST_FIFO_FULL__GFX10           = 0x000001e0,
    SP_PERF_SEL_SQ_SP_CONST_FIFO_SEND__GFX10           = 0x000001e1,
    SP_PERF_SEL_SGPR_FULL__GFX10                       = 0x000001e2,
    SP_PERF_SEL_VALU_CONFLICT_WITH_EXP__GFX10          = 0x000001e3,
    SP_PERF_SEL_VALU_CONFLICT_WITH_VMEM_LDS__GFX10     = 0x000001e4,
    SP_PERF_SEL_VALU_CONFLICT_WITH_VMEM_NON_LDS__GFX10 = 0x000001e5,
    SP_PERF_SEL_VALU_STALL_DUE_CONST_NOT_READY__GFX10  = 0x000001e6,
    SP_PERF_SEL_VALU_STALL_DUE_VDST_FWD__GFX10         = 0x000001e7,
    SP_PERF_SEL_VALU_STALL_DUE_SDST_FWD__GFX10         = 0x000001e8,
    SP_PERF_SEL_VALU_STALL_DUE_LDS_DIR_NOT_READY__GFX10 = 0x000001e9,
    SP_PERF_SEL_VALU_STALL_DUE_VGPR_NOT_READY__GFX10   = 0x000001ea,
    SP_PERF_SEL_VALU_STALL_DUE_DST_STALL__GFX10        = 0x000001eb,
    SP_PERF_SEL_VALU_STALL_DUE_DST_CACHE_WRITE_CONF__GFX10 = 0x000001ec,
    SP_PERF_SEL_VALU_STALL__GFX10                      = 0x000001ed,
    SP_PERF_SEL_PERF_MEM_RD_CNT__GFX10                 = 0x000001ee,
    SP_PERF_SEL_PERF_MEM_WR_CNT__GFX10                 = 0x000001ef,
    SP_PERF_SEL_PERF_THREAD_REDUNDANT__GFX10           = 0x000001f0,
    SP_PERF_SEL_PERF_OP_W_1_PASS__GFX10                = 0x000001f1,
    SP_PERF_SEL_PERF_OP_W_2_PASS__GFX10                = 0x000001f2,
    SP_PERF_SEL_PERF_OP_W_4_PASS__GFX10                = 0x000001f3,
    SP_PERF_SEL_PERF_OP_W_16_PASS__GFX10               = 0x000001f4,
    SP_PERF_SEL_PERF_COEXEC__GFX10                     = 0x000001f5,
    SP_PERF_SEL_PERF_ACTIVE_THREAD__GFX10              = 0x000001f6,
    SP_PERF_SEL_PERF_ALL_ACTIVE__GFX10                 = 0x000001f7,
    SP_PERF_SEL_PERF_ZERO_P_ZERO__GFX10                = 0x000001f8,
    SP_PERF_SEL_PERF_TRANS_OP__GFX10                   = 0x000001f9,
    SP_PERF_SEL_PERF_OP_W_MAD__GFX10                   = 0x000001fa,
    SP_PERF_SEL_PERF_OP_W_MUL__GFX10                   = 0x000001fb,
    SP_PERF_SEL_PERF_OP_W_ADD__GFX10                   = 0x000001fc,
    SP_PERF_SEL_DUMMY_LAST__GFX10                      = 0x000001ff,
} SQ_PERF_SEL;

constexpr unsigned int MaxSqPerfSelGfx09               = SQC_PERF_SEL_DUMMY_LAST__GFX09;
constexpr unsigned int MaxSqPerfSelGfx10               = SP_PERF_SEL_DUMMY_LAST__GFX10;

typedef enum SQ_ROUND_MODE {
    SQ_ROUND_NEAREST_EVEN                              = 0x00000000,
    SQ_ROUND_PLUS_INFINITY                             = 0x00000001,
    SQ_ROUND_MINUS_INFINITY                            = 0x00000002,
    SQ_ROUND_TO_ZERO                                   = 0x00000003,
} SQ_ROUND_MODE;

typedef enum SQ_RSRC_BUF_TYPE {
    SQ_RSRC_BUF                                        = 0x00000000,
    SQ_RSRC_BUF_RSVD_1                                 = 0x00000001,
    SQ_RSRC_BUF_RSVD_2                                 = 0x00000002,
    SQ_RSRC_BUF_RSVD_3                                 = 0x00000003,
} SQ_RSRC_BUF_TYPE;

typedef enum SQ_RSRC_FLAT_TYPE {
    SQ_RSRC_FLAT_RSVD_0                                = 0x00000000,
    SQ_RSRC_FLAT                                       = 0x00000001,
    SQ_RSRC_FLAT_RSVD_2                                = 0x00000002,
    SQ_RSRC_FLAT_RSVD_3                                = 0x00000003,
} SQ_RSRC_FLAT_TYPE;

typedef enum SQ_RSRC_IMG_TYPE {
    SQ_RSRC_IMG_RSVD_0                                 = 0x00000000,
    SQ_RSRC_IMG_RSVD_1                                 = 0x00000001,
    SQ_RSRC_IMG_RSVD_2                                 = 0x00000002,
    SQ_RSRC_IMG_RSVD_3                                 = 0x00000003,
    SQ_RSRC_IMG_RSVD_4                                 = 0x00000004,
    SQ_RSRC_IMG_RSVD_5                                 = 0x00000005,
    SQ_RSRC_IMG_RSVD_6                                 = 0x00000006,
    SQ_RSRC_IMG_RSVD_7                                 = 0x00000007,
    SQ_RSRC_IMG_1D                                     = 0x00000008,
    SQ_RSRC_IMG_2D                                     = 0x00000009,
    SQ_RSRC_IMG_3D                                     = 0x0000000a,
    SQ_RSRC_IMG_CUBE                                   = 0x0000000b,
    SQ_RSRC_IMG_1D_ARRAY                               = 0x0000000c,
    SQ_RSRC_IMG_2D_ARRAY                               = 0x0000000d,
    SQ_RSRC_IMG_2D_MSAA                                = 0x0000000e,
    SQ_RSRC_IMG_2D_MSAA_ARRAY                          = 0x0000000f,
} SQ_RSRC_IMG_TYPE;

typedef enum SQ_SEL_XYZW01 {
    SQ_SEL_0                                           = 0x00000000,
    SQ_SEL_1                                           = 0x00000001,
    SQ_SEL_N_BC_1                                      = 0x00000002,
    SQ_SEL_RESERVED_1                                  = 0x00000003,
    SQ_SEL_X                                           = 0x00000004,
    SQ_SEL_Y                                           = 0x00000005,
    SQ_SEL_Z                                           = 0x00000006,
    SQ_SEL_W                                           = 0x00000007,
} SQ_SEL_XYZW01;

typedef enum SQ_TEX_ANISO_RATIO {
    SQ_TEX_ANISO_RATIO_1                               = 0x00000000,
    SQ_TEX_ANISO_RATIO_2                               = 0x00000001,
    SQ_TEX_ANISO_RATIO_4                               = 0x00000002,
    SQ_TEX_ANISO_RATIO_8                               = 0x00000003,
    SQ_TEX_ANISO_RATIO_16                              = 0x00000004,
} SQ_TEX_ANISO_RATIO;

typedef enum SQ_TEX_BORDER_COLOR {
    SQ_TEX_BORDER_COLOR_TRANS_BLACK                    = 0x00000000,
    SQ_TEX_BORDER_COLOR_OPAQUE_BLACK                   = 0x00000001,
    SQ_TEX_BORDER_COLOR_OPAQUE_WHITE                   = 0x00000002,
    SQ_TEX_BORDER_COLOR_REGISTER                       = 0x00000003,
} SQ_TEX_BORDER_COLOR;

typedef enum SQ_TEX_CLAMP {
    SQ_TEX_WRAP                                        = 0x00000000,
    SQ_TEX_MIRROR                                      = 0x00000001,
    SQ_TEX_CLAMP_LAST_TEXEL                            = 0x00000002,
    SQ_TEX_MIRROR_ONCE_LAST_TEXEL                      = 0x00000003,
    SQ_TEX_CLAMP_HALF_BORDER                           = 0x00000004,
    SQ_TEX_MIRROR_ONCE_HALF_BORDER                     = 0x00000005,
    SQ_TEX_CLAMP_BORDER                                = 0x00000006,
    SQ_TEX_MIRROR_ONCE_BORDER                          = 0x00000007,
} SQ_TEX_CLAMP;

typedef enum SQ_TEX_DEPTH_COMPARE {
    SQ_TEX_DEPTH_COMPARE_NEVER                         = 0x00000000,
    SQ_TEX_DEPTH_COMPARE_LESS                          = 0x00000001,
    SQ_TEX_DEPTH_COMPARE_EQUAL                         = 0x00000002,
    SQ_TEX_DEPTH_COMPARE_LESSEQUAL                     = 0x00000003,
    SQ_TEX_DEPTH_COMPARE_GREATER                       = 0x00000004,
    SQ_TEX_DEPTH_COMPARE_NOTEQUAL                      = 0x00000005,
    SQ_TEX_DEPTH_COMPARE_GREATEREQUAL                  = 0x00000006,
    SQ_TEX_DEPTH_COMPARE_ALWAYS                        = 0x00000007,
} SQ_TEX_DEPTH_COMPARE;

typedef enum SQ_TEX_MIP_FILTER {
    SQ_TEX_MIP_FILTER_NONE                             = 0x00000000,
    SQ_TEX_MIP_FILTER_POINT                            = 0x00000001,
    SQ_TEX_MIP_FILTER_LINEAR                           = 0x00000002,
    SQ_TEX_MIP_FILTER_POINT_ANISO_ADJ                  = 0x00000003,
} SQ_TEX_MIP_FILTER;

typedef enum SQ_TEX_XY_FILTER {
    SQ_TEX_XY_FILTER_POINT                             = 0x00000000,
    SQ_TEX_XY_FILTER_BILINEAR                          = 0x00000001,
    SQ_TEX_XY_FILTER_ANISO_POINT                       = 0x00000002,
    SQ_TEX_XY_FILTER_ANISO_BILINEAR                    = 0x00000003,
} SQ_TEX_XY_FILTER;

typedef enum SQ_TEX_Z_FILTER {
    SQ_TEX_Z_FILTER_NONE                               = 0x00000000,
    SQ_TEX_Z_FILTER_POINT                              = 0x00000001,
    SQ_TEX_Z_FILTER_LINEAR                             = 0x00000002,
} SQ_TEX_Z_FILTER;

typedef enum SQ_THREAD_TRACE_CAPTURE_MODE {
    SQ_THREAD_TRACE_CAPTURE_MODE_ALL                   = 0x00000000,
    SQ_THREAD_TRACE_CAPTURE_MODE_SELECT                = 0x00000001,
    SQ_THREAD_TRACE_CAPTURE_MODE_SELECT_DETAIL         = 0x00000002,
} SQ_THREAD_TRACE_CAPTURE_MODE;

typedef enum SQ_THREAD_TRACE_INST_TYPE {
    SQ_THREAD_TRACE_INST_TYPE_SMEM_RD                  = 0x00000000,
    SQ_THREAD_TRACE_INST_TYPE_SALU_32                  = 0x00000001,
    SQ_THREAD_TRACE_INST_TYPE_VMEM_RD                  = 0x00000002,
    SQ_THREAD_TRACE_INST_TYPE_VMEM_WR                  = 0x00000003,
    SQ_THREAD_TRACE_INST_TYPE_FLAT_WR                  = 0x00000004,
    SQ_THREAD_TRACE_INST_TYPE_VALU_32                  = 0x00000005,
    SQ_THREAD_TRACE_INST_TYPE_LDS                      = 0x00000006,
    SQ_THREAD_TRACE_INST_TYPE_PC                       = 0x00000007,
    SQ_THREAD_TRACE_INST_TYPE_EXPREQ_GDS               = 0x00000008,
    SQ_THREAD_TRACE_INST_TYPE_EXPREQ_GFX               = 0x00000009,
    SQ_THREAD_TRACE_INST_TYPE_EXPGNT_PAR_COL           = 0x0000000a,
    SQ_THREAD_TRACE_INST_TYPE_EXPGNT_POS_GDS           = 0x0000000b,
    SQ_THREAD_TRACE_INST_TYPE_JUMP                     = 0x0000000c,
    SQ_THREAD_TRACE_INST_TYPE_NEXT                     = 0x0000000d,
    SQ_THREAD_TRACE_INST_TYPE_FLAT_RD                  = 0x0000000e,
    SQ_THREAD_TRACE_INST_TYPE_OTHER_MSG                = 0x0000000f,
    SQ_THREAD_TRACE_INST_TYPE_SMEM_WR                  = 0x00000010,
    SQ_THREAD_TRACE_INST_TYPE_SALU_64                  = 0x00000011,
    SQ_THREAD_TRACE_INST_TYPE_VALU_64                  = 0x00000012,
    SQ_THREAD_TRACE_INST_TYPE_SMEM_RD_REPLAY           = 0x00000013,
    SQ_THREAD_TRACE_INST_TYPE_SMEM_WR_REPLAY           = 0x00000014,
    SQ_THREAD_TRACE_INST_TYPE_VMEM_RD_REPLAY           = 0x00000015,
    SQ_THREAD_TRACE_INST_TYPE_VMEM_WR_REPLAY           = 0x00000016,
    SQ_THREAD_TRACE_INST_TYPE_FLAT_RD_REPLAY           = 0x00000017,
    SQ_THREAD_TRACE_INST_TYPE_FLAT_WR_REPLAY           = 0x00000018,
    SQ_THREAD_TRACE_INST_TYPE_FATAL_HALT               = 0x00000019,
    SQ_THREAD_TRACE_INST_TYPE_DIDT_STALL_START         = 0x0000001a,
    SQ_THREAD_TRACE_INST_TYPE_DIDT_STALL_END           = 0x0000001b,
} SQ_THREAD_TRACE_INST_TYPE;

typedef enum SQ_THREAD_TRACE_ISSUE {
    SQ_THREAD_TRACE_ISSUE_NULL                         = 0x00000000,
    SQ_THREAD_TRACE_ISSUE_STALL                        = 0x00000001,
    SQ_THREAD_TRACE_ISSUE_INST                         = 0x00000002,
    SQ_THREAD_TRACE_ISSUE_IMMED                        = 0x00000003,
} SQ_THREAD_TRACE_ISSUE;

typedef enum SQ_THREAD_TRACE_ISSUE_MASK {
    SQ_THREAD_TRACE_ISSUE_MASK_ALL                     = 0x00000000,
    SQ_THREAD_TRACE_ISSUE_MASK_STALLED                 = 0x00000001,
    SQ_THREAD_TRACE_ISSUE_MASK_STALLED_AND_IMMED       = 0x00000002,
    SQ_THREAD_TRACE_ISSUE_MASK_IMMED                   = 0x00000003,
} SQ_THREAD_TRACE_ISSUE_MASK;

typedef enum SQ_THREAD_TRACE_MISC_TOKEN_TYPE {
    SQ_THREAD_TRACE_MISC_TOKEN_TIME                    = 0x00000000,
    SQ_THREAD_TRACE_MISC_TOKEN_TIME_RESET              = 0x00000001,
    SQ_THREAD_TRACE_MISC_TOKEN_PACKET_LOST             = 0x00000002,
    SQ_THREAD_TRACE_MISC_TOKEN_SURF_SYNC               = 0x00000003,
    SQ_THREAD_TRACE_MISC_TOKEN_TTRACE_STALL_BEGIN      = 0x00000004,
    SQ_THREAD_TRACE_MISC_TOKEN_TTRACE_STALL_END        = 0x00000005,
    SQ_THREAD_TRACE_MISC_TOKEN_SAVECTX                 = 0x00000006,
    SQ_THREAD_TRACE_MISC_TOKEN_SHOOT_DOWN              = 0x00000007,
} SQ_THREAD_TRACE_MISC_TOKEN_TYPE;

typedef enum SQ_THREAD_TRACE_MODE_SEL {
    SQ_THREAD_TRACE_MODE_OFF                           = 0x00000000,
    SQ_THREAD_TRACE_MODE_ON                            = 0x00000001,
} SQ_THREAD_TRACE_MODE_SEL;

typedef enum SQ_THREAD_TRACE_REG_OP {
    SQ_THREAD_TRACE_REG_OP_READ                        = 0x00000000,
    SQ_THREAD_TRACE_REG_OP_WRITE                       = 0x00000001,
} SQ_THREAD_TRACE_REG_OP;

typedef enum SQ_THREAD_TRACE_REG_TYPE {
    SQ_THREAD_TRACE_REG_TYPE_EVENT                     = 0x00000000,
    SQ_THREAD_TRACE_REG_TYPE_DRAW                      = 0x00000001,
    SQ_THREAD_TRACE_REG_TYPE_DISPATCH                  = 0x00000002,
    SQ_THREAD_TRACE_REG_TYPE_USERDATA                  = 0x00000003,
    SQ_THREAD_TRACE_REG_TYPE_MARKER                    = 0x00000004,
    SQ_THREAD_TRACE_REG_TYPE_GFXDEC                    = 0x00000005,
    SQ_THREAD_TRACE_REG_TYPE_SHDEC                     = 0x00000006,
    SQ_THREAD_TRACE_REG_TYPE_OTHER                     = 0x00000007,
} SQ_THREAD_TRACE_REG_TYPE;

typedef enum SQ_THREAD_TRACE_TOKEN_TYPE {
    SQ_THREAD_TRACE_TOKEN_MISC                         = 0x00000000,
    SQ_THREAD_TRACE_TOKEN_TIMESTAMP                    = 0x00000001,
    SQ_THREAD_TRACE_TOKEN_REG                          = 0x00000002,
    SQ_THREAD_TRACE_TOKEN_WAVE_START                   = 0x00000003,
    SQ_THREAD_TRACE_TOKEN_WAVE_ALLOC                   = 0x00000004,
    SQ_THREAD_TRACE_TOKEN_REG_CSPRIV                   = 0x00000005,
    SQ_THREAD_TRACE_TOKEN_WAVE_END                     = 0x00000006,
    SQ_THREAD_TRACE_TOKEN_EVENT                        = 0x00000007,
    SQ_THREAD_TRACE_TOKEN_EVENT_CS                     = 0x00000008,
    SQ_THREAD_TRACE_TOKEN_EVENT_GFX1                   = 0x00000009,
    SQ_THREAD_TRACE_TOKEN_INST                         = 0x0000000a,
    SQ_THREAD_TRACE_TOKEN_INST_PC                      = 0x0000000b,
    SQ_THREAD_TRACE_TOKEN_INST_USERDATA                = 0x0000000c,
    SQ_THREAD_TRACE_TOKEN_ISSUE                        = 0x0000000d,
    SQ_THREAD_TRACE_TOKEN_PERF                         = 0x0000000e,
    SQ_THREAD_TRACE_TOKEN_REG_CS                       = 0x0000000f,
} SQ_THREAD_TRACE_TOKEN_TYPE;

typedef enum SQ_THREAD_TRACE_VM_ID_MASK {
    SQ_THREAD_TRACE_VM_ID_MASK_SINGLE                  = 0x00000000,
    SQ_THREAD_TRACE_VM_ID_MASK_ALL                     = 0x00000001,
    SQ_THREAD_TRACE_VM_ID_MASK_SINGLE_DETAIL           = 0x00000002,
} SQ_THREAD_TRACE_VM_ID_MASK;

typedef enum SQ_THREAD_TRACE_WAVE_MASK {
    SQ_THREAD_TRACE_WAVE_MASK_NONE                     = 0x00000000,
    SQ_THREAD_TRACE_WAVE_MASK_ALL                      = 0x00000001,
} SQ_THREAD_TRACE_WAVE_MASK;

typedef enum SQ_THREAD_TRACE_WAVE_START_COUNT_PREFIX {
    SQ_THREAD_TRACE_WAVE_START_COUNT_PREFIX_WREXEC     = 0x00000018,
    SQ_THREAD_TRACE_WAVE_START_COUNT_PREFIX_RESTORE    = 0x00000019,
} SQ_THREAD_TRACE_WAVE_START_COUNT_PREFIX;

typedef enum SQ_TT_MODE {
    SQ_TT_MODE_OFF                                     = 0x00000000,
    SQ_TT_MODE_ON                                      = 0x00000001,
    SQ_TT_MODE_GLOBAL                                  = 0x00000002,
    SQ_TT_MODE_DETAIL                                  = 0x00000003,
} SQ_TT_MODE;

typedef enum SQ_TT_RT_FREQ {
    SQ_TT_RT_FREQ_NEVER                                = 0x00000000,
    SQ_TT_RT_FREQ_1024_CLK                             = 0x00000001,
    SQ_TT_RT_FREQ_4096_CLK                             = 0x00000002,
} SQ_TT_RT_FREQ;

typedef enum SQ_TT_TOKEN_MASK_INST_EXCLUDE {
    SQ_TT_INST_EXCLUDE_VMEM_OTHER_SIMD_BIT__GFX101PLUS = 0x00000001,
    SQ_TT_INST_EXCLUDE_EXPGNT234_BIT__GFX101PLUS       = 0x00000002,
} SQ_TT_TOKEN_MASK_INST_EXCLUDE;

typedef enum SQ_TT_TOKEN_MASK_INST_EXCLUDE_SHIFT {
    SQ_TT_INST_EXCLUDE_VMEM_OTHER_SIMD_SHIFT           = 0x00000000,
    SQ_TT_INST_EXCLUDE_EXPGNT234_SHIFT                 = 0x00000001,
} SQ_TT_TOKEN_MASK_INST_EXCLUDE_SHIFT;

typedef enum SQ_TT_TOKEN_MASK_REG_INCLUDE {
    SQ_TT_TOKEN_MASK_SQDEC_BIT                         = 0x00000001,
    SQ_TT_TOKEN_MASK_SHDEC_BIT                         = 0x00000002,
    SQ_TT_TOKEN_MASK_GFXUDEC_BIT                       = 0x00000004,
    SQ_TT_TOKEN_MASK_COMP_BIT                          = 0x00000008,
    SQ_TT_TOKEN_MASK_CONTEXT_BIT                       = 0x00000010,
    SQ_TT_TOKEN_MASK_CONFIG_BIT                        = 0x00000020,
    SQ_TT_TOKEN_MASK_OTHER_BIT                         = 0x00000040,
    SQ_TT_TOKEN_MASK_READS_BIT                         = 0x00000080,
} SQ_TT_TOKEN_MASK_REG_INCLUDE;

typedef enum SQ_TT_TOKEN_MASK_REG_INCLUDE_SHIFT {
    SQ_TT_TOKEN_MASK_SQDEC_SHIFT                       = 0x00000000,
    SQ_TT_TOKEN_MASK_SHDEC_SHIFT                       = 0x00000001,
    SQ_TT_TOKEN_MASK_GFXUDEC_SHIFT                     = 0x00000002,
    SQ_TT_TOKEN_MASK_COMP_SHIFT                        = 0x00000003,
    SQ_TT_TOKEN_MASK_CONTEXT_SHIFT                     = 0x00000004,
    SQ_TT_TOKEN_MASK_CONFIG_SHIFT                      = 0x00000005,
    SQ_TT_TOKEN_MASK_OTHER_SHIFT                       = 0x00000006,
    SQ_TT_TOKEN_MASK_READS_SHIFT                       = 0x00000007,
} SQ_TT_TOKEN_MASK_REG_INCLUDE_SHIFT;

typedef enum SQ_TT_TOKEN_MASK_TOKEN_EXCLUDE_SHIFT {
    SQ_TT_TOKEN_EXCLUDE_VMEMEXEC_SHIFT                 = 0x00000000,
    SQ_TT_TOKEN_EXCLUDE_ALUEXEC_SHIFT                  = 0x00000001,
    SQ_TT_TOKEN_EXCLUDE_VALUINST_SHIFT                 = 0x00000002,
    SQ_TT_TOKEN_EXCLUDE_WAVERDY_SHIFT                  = 0x00000003,
    SQ_TT_TOKEN_EXCLUDE_IMMED1_SHIFT                   = 0x00000004,
    SQ_TT_TOKEN_EXCLUDE_IMMEDIATE_SHIFT                = 0x00000005,
    SQ_TT_TOKEN_EXCLUDE_REG_SHIFT                      = 0x00000006,
    SQ_TT_TOKEN_EXCLUDE_EVENT_SHIFT                    = 0x00000007,
    SQ_TT_TOKEN_EXCLUDE_INST_SHIFT                     = 0x00000008,
    SQ_TT_TOKEN_EXCLUDE_UTILCTR_SHIFT                  = 0x00000009,
    SQ_TT_TOKEN_EXCLUDE_WAVEALLOC_SHIFT                = 0x0000000a,
    SQ_TT_TOKEN_EXCLUDE_PERF_SHIFT                     = 0x0000000b,
} SQ_TT_TOKEN_MASK_TOKEN_EXCLUDE_SHIFT;

typedef enum SQ_TT_UTIL_TIMER {
    SQ_TT_UTIL_TIMER_100_CLK                           = 0x00000000,
    SQ_TT_UTIL_TIMER_250_CLK                           = 0x00000001,
} SQ_TT_UTIL_TIMER;

typedef enum SQ_TT_WAVESTART_MODE {
    SQ_TT_WAVESTART_MODE_SHORT                         = 0x00000000,
    SQ_TT_WAVESTART_MODE_ALLOC                         = 0x00000001,
    SQ_TT_WAVESTART_MODE_PBB_ID                        = 0x00000002,
} SQ_TT_WAVESTART_MODE;

typedef enum SQ_TT_WTYPE_INCLUDE {
    SQ_TT_WTYPE_INCLUDE_PS_BIT                         = 0x00000001,
    SQ_TT_WTYPE_INCLUDE_VS_BIT                         = 0x00000002,
    SQ_TT_WTYPE_INCLUDE_GS_BIT                         = 0x00000004,
    SQ_TT_WTYPE_INCLUDE_ES_BIT                         = 0x00000008,
    SQ_TT_WTYPE_INCLUDE_HS_BIT                         = 0x00000010,
    SQ_TT_WTYPE_INCLUDE_LS_BIT                         = 0x00000020,
    SQ_TT_WTYPE_INCLUDE_CS_BIT                         = 0x00000040,
} SQ_TT_WTYPE_INCLUDE;

typedef enum SQ_TT_WTYPE_INCLUDE_SHIFT {
    SQ_TT_WTYPE_INCLUDE_PS_SHIFT                       = 0x00000000,
    SQ_TT_WTYPE_INCLUDE_VS_SHIFT                       = 0x00000001,
    SQ_TT_WTYPE_INCLUDE_GS_SHIFT                       = 0x00000002,
    SQ_TT_WTYPE_INCLUDE_ES_SHIFT                       = 0x00000003,
    SQ_TT_WTYPE_INCLUDE_HS_SHIFT                       = 0x00000004,
    SQ_TT_WTYPE_INCLUDE_LS_SHIFT                       = 0x00000005,
    SQ_TT_WTYPE_INCLUDE_CS_SHIFT                       = 0x00000006,
} SQ_TT_WTYPE_INCLUDE_SHIFT;

typedef enum SQ_WATCH_MODES {
    SQ_WATCH_MODE_READ                                 = 0x00000000,
    SQ_WATCH_MODE_NONREAD                              = 0x00000001,
    SQ_WATCH_MODE_ATOMIC                               = 0x00000002,
    SQ_WATCH_MODE_ALL                                  = 0x00000003,
} SQ_WATCH_MODES;

typedef enum SQ_WAVE_IB_ECC_ST {
    SQ_WAVE_IB_ECC_CLEAN                               = 0x00000000,
    SQ_WAVE_IB_ECC_ERR_CONTINUE                        = 0x00000001,
    SQ_WAVE_IB_ECC_ERR_HALT                            = 0x00000002,
    SQ_WAVE_IB_ECC_WITH_ERR_MSG                        = 0x00000003,
} SQ_WAVE_IB_ECC_ST;

typedef enum SQ_WAVE_SCHED_MODES {
    SQ_WAVE_SCHED_MODE_NORMAL                          = 0x00000000,
    SQ_WAVE_SCHED_MODE_EXPERT                          = 0x00000001,
    SQ_WAVE_SCHED_MODE_DISABLE_VA_VDST                 = 0x00000002,
} SQ_WAVE_SCHED_MODES;

typedef enum SQ_WAVE_TYPE {
    SQ_WAVE_TYPE_PS                                    = 0x00000000,
    SQ_WAVE_TYPE_VS                                    = 0x00000001,
    SQ_WAVE_TYPE_GS                                    = 0x00000002,
    SQ_WAVE_TYPE_ES                                    = 0x00000003,
    SQ_WAVE_TYPE_HS                                    = 0x00000004,
    SQ_WAVE_TYPE_LS                                    = 0x00000005,
    SQ_WAVE_TYPE_CS                                    = 0x00000006,
    SQ_WAVE_TYPE_PS1                                   = 0x00000007,
    SQ_WAVE_TYPE_PS2__GFX10                            = 0x00000008,
    SQ_WAVE_TYPE_PS3__GFX10                            = 0x00000009,
} SQ_WAVE_TYPE;

typedef enum StencilFormat {
    STENCIL_INVALID                                    = 0x00000000,
    STENCIL_8                                          = 0x00000001,
} StencilFormat;

typedef enum StencilOp {
    STENCIL_KEEP                                       = 0x00000000,
    STENCIL_ZERO                                       = 0x00000001,
    STENCIL_ONES                                       = 0x00000002,
    STENCIL_REPLACE_TEST                               = 0x00000003,
    STENCIL_REPLACE_OP                                 = 0x00000004,
    STENCIL_ADD_CLAMP                                  = 0x00000005,
    STENCIL_SUB_CLAMP                                  = 0x00000006,
    STENCIL_INVERT                                     = 0x00000007,
    STENCIL_ADD_WRAP                                   = 0x00000008,
    STENCIL_SUB_WRAP                                   = 0x00000009,
    STENCIL_AND                                        = 0x0000000a,
    STENCIL_OR                                         = 0x0000000b,
    STENCIL_XOR                                        = 0x0000000c,
    STENCIL_NAND                                       = 0x0000000d,
    STENCIL_NOR                                        = 0x0000000e,
    STENCIL_XNOR                                       = 0x0000000f,
} StencilOp;

typedef enum SurfaceArray {
    ARRAY_1D                                           = 0x00000000,
    ARRAY_2D                                           = 0x00000001,
    ARRAY_3D                                           = 0x00000002,
    ARRAY_3D_SLICE                                     = 0x00000003,
} SurfaceArray;

typedef enum SurfaceEndian {
    ENDIAN_NONE                                        = 0x00000000,
    ENDIAN_8IN16                                       = 0x00000001,
    ENDIAN_8IN32                                       = 0x00000002,
    ENDIAN_8IN64                                       = 0x00000003,
} SurfaceEndian;

typedef enum SurfaceFormat {
    FMT_INVALID                                        = 0x00000000,
    FMT_8                                              = 0x00000001,
    FMT_16                                             = 0x00000002,
    FMT_8_8                                            = 0x00000003,
    FMT_32                                             = 0x00000004,
    FMT_16_16                                          = 0x00000005,
    FMT_10_11_11                                       = 0x00000006,
    FMT_11_11_10                                       = 0x00000007,
    FMT_10_10_10_2                                     = 0x00000008,
    FMT_2_10_10_10                                     = 0x00000009,
    FMT_8_8_8_8                                        = 0x0000000a,
    FMT_32_32                                          = 0x0000000b,
    FMT_16_16_16_16                                    = 0x0000000c,
    FMT_32_32_32                                       = 0x0000000d,
    FMT_32_32_32_32                                    = 0x0000000e,
    FMT_RESERVED_4                                     = 0x0000000f,
    FMT_5_6_5                                          = 0x00000010,
    FMT_1_5_5_5                                        = 0x00000011,
    FMT_5_5_5_1                                        = 0x00000012,
    FMT_4_4_4_4                                        = 0x00000013,
    FMT_8_24                                           = 0x00000014,
    FMT_24_8                                           = 0x00000015,
    FMT_X24_8_32_FLOAT                                 = 0x00000016,
    FMT_RESERVED_33                                    = 0x00000017,
    FMT_11_11_10_FLOAT                                 = 0x00000018,
    FMT_16_FLOAT                                       = 0x00000019,
    FMT_32_FLOAT                                       = 0x0000001a,
    FMT_16_16_FLOAT                                    = 0x0000001b,
    FMT_8_24_FLOAT                                     = 0x0000001c,
    FMT_24_8_FLOAT                                     = 0x0000001d,
    FMT_32_32_FLOAT                                    = 0x0000001e,
    FMT_10_11_11_FLOAT                                 = 0x0000001f,
    FMT_16_16_16_16_FLOAT                              = 0x00000020,
    FMT_3_3_2                                          = 0x00000021,
    FMT_6_5_5                                          = 0x00000022,
    FMT_32_32_32_32_FLOAT                              = 0x00000023,
    FMT_RESERVED_36                                    = 0x00000024,
    FMT_1                                              = 0x00000025,
    FMT_1_REVERSED                                     = 0x00000026,
    FMT_GB_GR                                          = 0x00000027,
    FMT_BG_RG                                          = 0x00000028,
    FMT_32_AS_8                                        = 0x00000029,
    FMT_32_AS_8_8                                      = 0x0000002a,
    FMT_5_9_9_9_SHAREDEXP                              = 0x0000002b,
    FMT_8_8_8                                          = 0x0000002c,
    FMT_16_16_16                                       = 0x0000002d,
    FMT_16_16_16_FLOAT                                 = 0x0000002e,
    FMT_4_4                                            = 0x0000002f,
    FMT_32_32_32_FLOAT                                 = 0x00000030,
    FMT_BC1                                            = 0x00000031,
    FMT_BC2                                            = 0x00000032,
    FMT_BC3                                            = 0x00000033,
    FMT_BC4                                            = 0x00000034,
    FMT_BC5                                            = 0x00000035,
    FMT_BC6                                            = 0x00000036,
    FMT_BC7                                            = 0x00000037,
    FMT_32_AS_32_32_32_32                              = 0x00000038,
    FMT_APC3                                           = 0x00000039,
    FMT_APC4                                           = 0x0000003a,
    FMT_APC5                                           = 0x0000003b,
    FMT_APC6                                           = 0x0000003c,
    FMT_APC7                                           = 0x0000003d,
    FMT_CTX1                                           = 0x0000003e,
    FMT_RESERVED_63                                    = 0x0000003f,
} SurfaceFormat;

typedef enum SurfaceNumber {
    NUMBER_UNORM                                       = 0x00000000,
    NUMBER_SNORM                                       = 0x00000001,
    NUMBER_USCALED                                     = 0x00000002,
    NUMBER_SSCALED                                     = 0x00000003,
    NUMBER_UINT                                        = 0x00000004,
    NUMBER_SINT                                        = 0x00000005,
    NUMBER_SRGB                                        = 0x00000006,
    NUMBER_FLOAT                                       = 0x00000007,
} SurfaceNumber;

typedef enum SurfaceSwap {
    SWAP_STD                                           = 0x00000000,
    SWAP_ALT                                           = 0x00000001,
    SWAP_STD_REV                                       = 0x00000002,
    SWAP_ALT_REV                                       = 0x00000003,
} SurfaceSwap;

typedef enum SurfaceTiling {
    ARRAY_LINEAR                                       = 0x00000000,
    ARRAY_TILED                                        = 0x00000001,
} SurfaceTiling;

typedef enum SU_PERFCNT_SEL {
    PERF_PAPC_PASX_REQ                                 = 0x00000000,
    PERF_PAPC_PASX_DISABLE_PIPE                        = 0x00000001,
    PERF_PAPC_PASX_FIRST_VECTOR                        = 0x00000002,
    PERF_PAPC_PASX_SECOND_VECTOR                       = 0x00000003,
    PERF_PAPC_PASX_FIRST_DEAD                          = 0x00000004,
    PERF_PAPC_PASX_SECOND_DEAD                         = 0x00000005,
    PERF_PAPC_PASX_VTX_KILL_DISCARD                    = 0x00000006,
    PERF_PAPC_PASX_VTX_NAN_DISCARD                     = 0x00000007,
    PERF_PAPC_PA_INPUT_PRIM                            = 0x00000008,
    PERF_PAPC_PA_INPUT_NULL_PRIM                       = 0x00000009,
    PERF_PAPC_PA_INPUT_EVENT_FLAG                      = 0x0000000a,
    PERF_PAPC_PA_INPUT_FIRST_PRIM_SLOT                 = 0x0000000b,
    PERF_PAPC_PA_INPUT_END_OF_PACKET                   = 0x0000000c,
    PERF_PAPC_PA_INPUT_EXTENDED_EVENT                  = 0x0000000d,
    PERF_PAPC_CLPR_CULL_PRIM                           = 0x0000000e,
    PERF_PAPC_CLPR_VVUCP_CULL_PRIM                     = 0x0000000f,
    PERF_PAPC_CLPR_VV_CULL_PRIM                        = 0x00000010,
    PERF_PAPC_CLPR_UCP_CULL_PRIM                       = 0x00000011,
    PERF_PAPC_CLPR_VTX_KILL_CULL_PRIM                  = 0x00000012,
    PERF_PAPC_CLPR_VTX_NAN_CULL_PRIM                   = 0x00000013,
    PERF_PAPC_CLPR_CULL_TO_NULL_PRIM                   = 0x00000014,
    PERF_PAPC_CLPR_VVUCP_CLIP_PRIM                     = 0x00000015,
    PERF_PAPC_CLPR_VV_CLIP_PRIM                        = 0x00000016,
    PERF_PAPC_CLPR_UCP_CLIP_PRIM                       = 0x00000017,
    PERF_PAPC_CLPR_POINT_CLIP_CANDIDATE                = 0x00000018,
    PERF_PAPC_CLPR_CLIP_PLANE_CNT_1                    = 0x00000019,
    PERF_PAPC_CLPR_CLIP_PLANE_CNT_2                    = 0x0000001a,
    PERF_PAPC_CLPR_CLIP_PLANE_CNT_3                    = 0x0000001b,
    PERF_PAPC_CLPR_CLIP_PLANE_CNT_4                    = 0x0000001c,
    PERF_PAPC_CLPR_CLIP_PLANE_CNT_5_8                  = 0x0000001d,
    PERF_PAPC_CLPR_CLIP_PLANE_CNT_9_12                 = 0x0000001e,
    PERF_PAPC_CLPR_CLIP_PLANE_NEAR                     = 0x0000001f,
    PERF_PAPC_CLPR_CLIP_PLANE_FAR                      = 0x00000020,
    PERF_PAPC_CLPR_CLIP_PLANE_LEFT                     = 0x00000021,
    PERF_PAPC_CLPR_CLIP_PLANE_RIGHT                    = 0x00000022,
    PERF_PAPC_CLPR_CLIP_PLANE_TOP                      = 0x00000023,
    PERF_PAPC_CLPR_CLIP_PLANE_BOTTOM                   = 0x00000024,
    PERF_PAPC_CLPR_GSC_KILL_CULL_PRIM                  = 0x00000025,
    PERF_PAPC_CLPR_RASTER_KILL_CULL_PRIM               = 0x00000026,
    PERF_PAPC_CLSM_NULL_PRIM                           = 0x00000027,
    PERF_PAPC_CLSM_TOTALLY_VISIBLE_PRIM                = 0x00000028,
    PERF_PAPC_CLSM_CULL_TO_NULL_PRIM                   = 0x00000029,
    PERF_PAPC_CLSM_OUT_PRIM_CNT_1                      = 0x0000002a,
    PERF_PAPC_CLSM_OUT_PRIM_CNT_2                      = 0x0000002b,
    PERF_PAPC_CLSM_OUT_PRIM_CNT_3                      = 0x0000002c,
    PERF_PAPC_CLSM_OUT_PRIM_CNT_4                      = 0x0000002d,
    PERF_PAPC_CLSM_OUT_PRIM_CNT_5_8                    = 0x0000002e,
    PERF_PAPC_CLSM_OUT_PRIM_CNT_9_13                   = 0x0000002f,
    PERF_PAPC_CLIPGA_VTE_KILL_PRIM                     = 0x00000030,
    PERF_PAPC_SU_INPUT_PRIM                            = 0x00000031,
    PERF_PAPC_SU_INPUT_CLIP_PRIM                       = 0x00000032,
    PERF_PAPC_SU_INPUT_NULL_PRIM                       = 0x00000033,
    PERF_PAPC_SU_INPUT_PRIM_DUAL                       = 0x00000034,
    PERF_PAPC_SU_INPUT_CLIP_PRIM_DUAL                  = 0x00000035,
    PERF_PAPC_SU_ZERO_AREA_CULL_PRIM                   = 0x00000036,
    PERF_PAPC_SU_BACK_FACE_CULL_PRIM                   = 0x00000037,
    PERF_PAPC_SU_FRONT_FACE_CULL_PRIM                  = 0x00000038,
    PERF_PAPC_SU_POLYMODE_FACE_CULL                    = 0x00000039,
    PERF_PAPC_SU_POLYMODE_BACK_CULL                    = 0x0000003a,
    PERF_PAPC_SU_POLYMODE_FRONT_CULL                   = 0x0000003b,
    PERF_PAPC_SU_POLYMODE_INVALID_FILL                 = 0x0000003c,
    PERF_PAPC_SU_OUTPUT_PRIM                           = 0x0000003d,
    PERF_PAPC_SU_OUTPUT_CLIP_PRIM                      = 0x0000003e,
    PERF_PAPC_SU_OUTPUT_NULL_PRIM                      = 0x0000003f,
    PERF_PAPC_SU_OUTPUT_EVENT_FLAG                     = 0x00000040,
    PERF_PAPC_SU_OUTPUT_FIRST_PRIM_SLOT                = 0x00000041,
    PERF_PAPC_SU_OUTPUT_END_OF_PACKET                  = 0x00000042,
    PERF_PAPC_SU_OUTPUT_POLYMODE_FACE                  = 0x00000043,
    PERF_PAPC_SU_OUTPUT_POLYMODE_BACK                  = 0x00000044,
    PERF_PAPC_SU_OUTPUT_POLYMODE_FRONT                 = 0x00000045,
    PERF_PAPC_SU_OUT_CLIP_POLYMODE_FACE                = 0x00000046,
    PERF_PAPC_SU_OUT_CLIP_POLYMODE_BACK                = 0x00000047,
    PERF_PAPC_SU_OUT_CLIP_POLYMODE_FRONT               = 0x00000048,
    PERF_PAPC_SU_OUTPUT_PRIM_DUAL                      = 0x00000049,
    PERF_PAPC_SU_OUTPUT_CLIP_PRIM_DUAL                 = 0x0000004a,
    PERF_PAPC_SU_OUTPUT_POLYMODE_DUAL                  = 0x0000004b,
    PERF_PAPC_SU_OUTPUT_CLIP_POLYMODE_DUAL             = 0x0000004c,
    PERF_PAPC_PASX_REQ_IDLE                            = 0x0000004d,
    PERF_PAPC_PASX_REQ_BUSY                            = 0x0000004e,
    PERF_PAPC_PASX_REQ_STALLED                         = 0x0000004f,
    PERF_PAPC_PASX_REC_IDLE                            = 0x00000050,
    PERF_PAPC_PASX_REC_BUSY                            = 0x00000051,
    PERF_PAPC_PASX_REC_STARVED_SX                      = 0x00000052,
    PERF_PAPC_PASX_REC_STALLED                         = 0x00000053,
    PERF_PAPC_PASX_REC_STALLED_POS_MEM                 = 0x00000054,
    PERF_PAPC_PASX_REC_STALLED_CCGSM_IN                = 0x00000055,
    PERF_PAPC_CCGSM_IDLE                               = 0x00000056,
    PERF_PAPC_CCGSM_BUSY                               = 0x00000057,
    PERF_PAPC_CCGSM_STALLED                            = 0x00000058,
    PERF_PAPC_CLPRIM_IDLE                              = 0x00000059,
    PERF_PAPC_CLPRIM_BUSY                              = 0x0000005a,
    PERF_PAPC_CLPRIM_STALLED                           = 0x0000005b,
    PERF_PAPC_CLPRIM_STARVED_CCGSM                     = 0x0000005c,
    PERF_PAPC_CLIPSM_IDLE                              = 0x0000005d,
    PERF_PAPC_CLIPSM_BUSY                              = 0x0000005e,
    PERF_PAPC_CLIPSM_WAIT_CLIP_VERT_ENGH               = 0x0000005f,
    PERF_PAPC_CLIPSM_WAIT_HIGH_PRI_SEQ                 = 0x00000060,
    PERF_PAPC_CLIPSM_WAIT_CLIPGA                       = 0x00000061,
    PERF_PAPC_CLIPSM_WAIT_AVAIL_VTE_CLIP               = 0x00000062,
    PERF_PAPC_CLIPSM_WAIT_CLIP_OUTSM                   = 0x00000063,
    PERF_PAPC_CLIPGA_IDLE                              = 0x00000064,
    PERF_PAPC_CLIPGA_BUSY                              = 0x00000065,
    PERF_PAPC_CLIPGA_STARVED_VTE_CLIP                  = 0x00000066,
    PERF_PAPC_CLIPGA_STALLED                           = 0x00000067,
    PERF_PAPC_CLIP_IDLE                                = 0x00000068,
    PERF_PAPC_CLIP_BUSY                                = 0x00000069,
    PERF_PAPC_SU_IDLE                                  = 0x0000006a,
    PERF_PAPC_SU_BUSY                                  = 0x0000006b,
    PERF_PAPC_SU_STARVED_CLIP                          = 0x0000006c,
    PERF_PAPC_SU_STALLED_SC                            = 0x0000006d,
    PERF_PAPC_CL_DYN_SCLK_VLD                          = 0x0000006e,
    PERF_PAPC_SU_DYN_SCLK_VLD                          = 0x0000006f,
    PERF_PAPC_PA_REG_SCLK_VLD                          = 0x00000070,
    PERF_PAPC_SU_MULTI_GPU_PRIM_FILTER_CULL            = 0x00000071,
    PERF_PAPC_PASX_SE0_REQ                             = 0x00000072,
    PERF_PAPC_PASX_SE1_REQ                             = 0x00000073,
    PERF_PAPC_PASX_SE0_FIRST_VECTOR                    = 0x00000074,
    PERF_PAPC_PASX_SE0_SECOND_VECTOR                   = 0x00000075,
    PERF_PAPC_PASX_SE1_FIRST_VECTOR                    = 0x00000076,
    PERF_PAPC_PASX_SE1_SECOND_VECTOR                   = 0x00000077,
    PERF_PAPC_SU_SE0_PRIM_FILTER_CULL                  = 0x00000078,
    PERF_PAPC_SU_SE1_PRIM_FILTER_CULL                  = 0x00000079,
    PERF_PAPC_SU_SE01_PRIM_FILTER_CULL                 = 0x0000007a,
    PERF_PAPC_SU_SE0_OUTPUT_PRIM                       = 0x0000007b,
    PERF_PAPC_SU_SE1_OUTPUT_PRIM                       = 0x0000007c,
    PERF_PAPC_SU_SE01_OUTPUT_PRIM                      = 0x0000007d,
    PERF_PAPC_SU_SE0_OUTPUT_NULL_PRIM                  = 0x0000007e,
    PERF_PAPC_SU_SE1_OUTPUT_NULL_PRIM                  = 0x0000007f,
    PERF_PAPC_SU_SE01_OUTPUT_NULL_PRIM                 = 0x00000080,
    PERF_PAPC_SU_SE0_OUTPUT_FIRST_PRIM_SLOT            = 0x00000081,
    PERF_PAPC_SU_SE1_OUTPUT_FIRST_PRIM_SLOT            = 0x00000082,
    PERF_PAPC_SU_SE0_STALLED_SC                        = 0x00000083,
    PERF_PAPC_SU_SE1_STALLED_SC                        = 0x00000084,
    PERF_PAPC_SU_SE01_STALLED_SC                       = 0x00000085,
    PERF_PAPC_CLSM_CLIPPING_PRIM                       = 0x00000086,
    PERF_PAPC_SU_CULLED_PRIM                           = 0x00000087,
    PERF_PAPC_SU_OUTPUT_EOPG                           = 0x00000088,
    PERF_PAPC_SU_SE2_PRIM_FILTER_CULL                  = 0x00000089,
    PERF_PAPC_SU_SE3_PRIM_FILTER_CULL                  = 0x0000008a,
    PERF_PAPC_SU_SE2_OUTPUT_PRIM                       = 0x0000008b,
    PERF_PAPC_SU_SE3_OUTPUT_PRIM                       = 0x0000008c,
    PERF_PAPC_SU_SE2_OUTPUT_NULL_PRIM                  = 0x0000008d,
    PERF_PAPC_SU_SE3_OUTPUT_NULL_PRIM                  = 0x0000008e,
    PERF_PAPC_SU_SE0_OUTPUT_END_OF_PACKET              = 0x0000008f,
    PERF_PAPC_SU_SE1_OUTPUT_END_OF_PACKET              = 0x00000090,
    PERF_PAPC_SU_SE2_OUTPUT_END_OF_PACKET              = 0x00000091,
    PERF_PAPC_SU_SE3_OUTPUT_END_OF_PACKET              = 0x00000092,
    PERF_PAPC_SU_SE0_OUTPUT_EOPG                       = 0x00000093,
    PERF_PAPC_SU_SE1_OUTPUT_EOPG                       = 0x00000094,
    PERF_PAPC_SU_SE2_OUTPUT_EOPG                       = 0x00000095,
    PERF_PAPC_SU_SE3_OUTPUT_EOPG                       = 0x00000096,
    PERF_PAPC_SU_SE2_STALLED_SC                        = 0x00000097,
    PERF_PAPC_SU_SE3_STALLED_SC                        = 0x00000098,
    PERF_SU_SMALL_PRIM_FILTER_CULL_CNT                 = 0x00000099,
    PERF_SMALL_PRIM_CULL_PRIM_1X1                      = 0x0000009a,
    PERF_SMALL_PRIM_CULL_PRIM_2X1                      = 0x0000009b,
    PERF_SMALL_PRIM_CULL_PRIM_1X2                      = 0x0000009c,
    PERF_SMALL_PRIM_CULL_PRIM_2X2                      = 0x0000009d,
    PERF_SMALL_PRIM_CULL_PRIM_3X1                      = 0x0000009e,
    PERF_SMALL_PRIM_CULL_PRIM_1X3                      = 0x0000009f,
    PERF_SMALL_PRIM_CULL_PRIM_3X2                      = 0x000000a0,
    PERF_SMALL_PRIM_CULL_PRIM_2X3                      = 0x000000a1,
    PERF_SMALL_PRIM_CULL_PRIM_NX1                      = 0x000000a2,
    PERF_SMALL_PRIM_CULL_PRIM_1XN                      = 0x000000a3,
    PERF_SMALL_PRIM_CULL_PRIM_NX2                      = 0x000000a4,
    PERF_SMALL_PRIM_CULL_PRIM_2XN                      = 0x000000a5,
    PERF_SMALL_PRIM_CULL_PRIM_FULL_RES_EVENT           = 0x000000a6,
    PERF_SMALL_PRIM_CULL_PRIM_HALF_RES_EVENT           = 0x000000a7,
    PERF_SMALL_PRIM_CULL_PRIM_QUARTER_RES_EVENT        = 0x000000a8,
    PERF_SC0_QUALIFIED_SEND_BUSY_EVENT                 = 0x000000a9,
    PERF_SC0_QUALIFIED_SEND_NOT_BUSY_EVENT             = 0x000000aa,
    PERF_SC1_QUALIFIED_SEND_BUSY_EVENT                 = 0x000000ab,
    PERF_SC1_QUALIFIED_SEND_NOT_BUSY_EVENT             = 0x000000ac,
    PERF_SC2_QUALIFIED_SEND_BUSY_EVENT                 = 0x000000ad,
    PERF_SC2_QUALIFIED_SEND_NOT_BUSY_EVENT             = 0x000000ae,
    PERF_SC3_QUALIFIED_SEND_BUSY_EVENT                 = 0x000000af,
    PERF_SC3_QUALIFIED_SEND_NOT_BUSY_EVENT             = 0x000000b0,
    PERF_UTC_SIDEBAND_DRIVER_WAITING_ON_UTCL1__GFX09   = 0x000000b1,
    PERF_UTC_SIDEBAND_DRIVER_STALLING_CLIENT__GFX09    = 0x000000b2,
    PERF_UTC_SIDEBAND_DRIVER_BUSY__GFX09               = 0x000000b3,
    PERF_UTC_INDEX_DRIVER_WAITING_ON_UTCL1__GFX09      = 0x000000b4,
    PERF_UTC_INDEX_DRIVER_STALLING_CLIENT__GFX09       = 0x000000b5,
    PERF_UTC_INDEX_DRIVER_BUSY__GFX09                  = 0x000000b6,
    PERF_UTC_POSITION_DRIVER_WAITING_ON_UTCL1__GFX09   = 0x000000b7,
    PERF_UTC_POSITION_DRIVER_STALLING_CLIENT__GFX09    = 0x000000b8,
    PERF_UTC_POSITION_DRIVER_BUSY__GFX09               = 0x000000b9,
    PERF_UTC_SIDEBAND_RECEIVER_STALLING_UTCL1__GFX09   = 0x000000ba,
    PERF_UTC_SIDEBAND_RECEIVER_STALLED_BY_ARBITER__GFX09 = 0x000000bb,
    PERF_UTC_SIDEBAND_RECEIVER_BUSY__GFX09             = 0x000000bc,
    PERF_UTC_INDEX_RECEIVER_STALLING_UTCL1__GFX09      = 0x000000bd,
    PERF_UTC_INDEX_RECEIVER_STALLED_BY_ARBITER__GFX09  = 0x000000be,
    PERF_UTC_INDEX_RECEIVER_BUSY__GFX09                = 0x000000bf,
    PERF_UTC_POSITION_RECEIVER_STALLING_UTCL1__GFX09   = 0x000000c0,
    PERF_UTC_POSITION_RECEIVER_STALLED_BY_ARBITER__GFX09 = 0x000000c1,
    PERF_UTC_POSITION_RECEIVER_BUSY__GFX09             = 0x000000c2,
    PERF_TC_ARBITER_WAITING_FOR_TC_INTERFACE__GFX09    = 0x000000c3,
    PERF_TCIF_STALLING_CLIENT_NO_CREDITS__GFX09        = 0x000000c4,
    PERF_TCIF_BUSY__GFX09                              = 0x000000c5,
    PERF_TCIF_SIDEBAND_RDREQ__GFX09                    = 0x000000c6,
    PERF_TCIF_INDEX_RDREQ__GFX09                       = 0x000000c7,
    PERF_TCIF_POSITION_RDREQ__GFX09                    = 0x000000c8,
    PERF_SIDEBAND_WAITING_ON_UTCL1__GFX09              = 0x000000c9,
    PERF_SIDEBAND_WAITING_ON_FULL_SIDEBAND_MEMORY__GFX09 = 0x000000ca,
    PERF_WRITING_TO_SIDEBAND_MEMORY__GFX09             = 0x000000cb,
    PERF_SIDEBAND_EXPECTING_1_POSSIBLE_VALID_DWORD__GFX09 = 0x000000cc,
    PERF_SIDEBAND_EXPECTING_2_TO_15_POSSIBLE_VALID_DWORD__GFX09 = 0x000000cd,
    PERF_SIDEBAND_EXPECTING_16_POSSIBLE_VALID_DWORD__GFX09 = 0x000000ce,
    PERF_SIDEBAND_WAITING_ON_RETURNED_DATA__GFX09      = 0x000000cf,
    PERF_SIDEBAND_POP_BIT_FIFO_FULL__GFX09             = 0x000000d0,
    PERF_SIDEBAND_FIFO_VMID_FIFO_FULL__GFX09           = 0x000000d1,
    PERF_SIDEBAND_INVALID_REFETCH__GFX09               = 0x000000d2,
    PERF_SIDEBAND_QUALIFIED_BUSY__GFX09                = 0x000000d3,
    PERF_SIDEBAND_QUALIFIED_STARVED__GFX09             = 0x000000d4,
    PERF_SIDEBAND_0_VALID_DWORDS_RECEIVED___GFX09      = 0x000000d5,
    PERF_SIDEBAND_1_TO_7_VALID_DWORDS_RECEIVED___GFX09 = 0x000000d6,
    PERF_SIDEBAND_8_TO_15_VALID_DWORDS_RECEIVED___GFX09 = 0x000000d7,
    PERF_SIDEBAND_16_VALID_DWORDS_RECEIVED___GFX09     = 0x000000d8,
    PERF_INDEX_REQUEST_WAITING_ON_TOKENS__GFX09        = 0x000000d9,
    PERF_INDEX_REQUEST_WAITING_ON_FULL_RECEIVE_FIFO__GFX09 = 0x000000da,
    PERF_INDEX_REQUEST_QUALIFIED_BUSY__GFX09           = 0x000000db,
    PERF_INDEX_REQUEST_QUALIFIED_STARVED__GFX09        = 0x000000dc,
    PERF_INDEX_RECEIVE_WAITING_ON_RETURNED_CACHELINE__GFX09 = 0x000000dd,
    PERF_INDEX_RECEIVE_WAITING_ON_PRIM_INDICES_FIFO__GFX09 = 0x000000de,
    PERF_INDEX_RECEIVE_PRIM_INDICES_FIFO_WRITE__GFX09  = 0x000000df,
    PERF_INDEX_RECEIVE_QUALIFIED_BUSY__GFX09           = 0x000000e0,
    PERF_INDEX_RECEIVE_QUALIFIED_STARVED__GFX09        = 0x000000e1,
    PERF_INDEX_RECEIVE_0_VALID_DWORDS_THIS_CACHELINE__GFX09 = 0x000000e2,
    PERF_INDEX_RECEIVE_1_TO_7_VALID_DWORDS_THIS_CACHELINE__GFX09_0 = 0x000000e3,
    PERF_INDEX_RECEIVE_8_TO_15_VALID_DWORDS_THIS_CACHELINE__GFX09_0 = 0x000000e4,
    PERF_INDEX_RECEIVE_16_VALID_DWORDS_THIS_CACHELINE__GFX09_0 = 0x000000e5,
    PERF_POS_REQ_STALLED_BY_FULL_FETCH_TO_PRIMIC_P_FIFO__GFX09_0 = 0x000000e6,
    PERF_POS_REQ_STALLED_BY_FULL_FETCH_TO_PRIMIC_S_FIFO__GFX09_0 = 0x000000e7,
    PERF_POS_REQ_STALLED_BY_FULL_POSREQ_TO_POSRTN_V_FIFO__GFX09_0 = 0x000000e8,
    PERF_POS_REQ_STALLED_BY_FULL_POSREQ_TO_POSRTN_S_FIFO__GFX09_0 = 0x000000e9,
    PERF_POS_REQ_STALLED_BY_FULL_PA_TO_WD_DEALLOC_INDEX_FIFO__GFX09_0 = 0x000000ea,
    PERF_POS_REQ_STALLED_BY_NO_TOKENS__GFX09_0         = 0x000000eb,
    PERF_POS_REQ_STALLED_BY_NO_PRIM__GFX09_0           = 0x000000ec,
    PERF_POS_REQ_STALLED_BY_UTCL1__GFX09_0             = 0x000000ed,
    PERF_POS_REQ_FETCH_TO_PRIMIC_P_FIFO_WRITE__GFX09_0 = 0x000000ee,
    PERF_POS_REQ_FETCH_TO_PRIMIC_P_FIFO_NO_WRITE__GFX09_0 = 0x000000ef,
    PERF_POS_REQ_QUALIFIED_BUSY__GFX09_0               = 0x000000f0,
    PERF_POS_REQ_QUALIFIED_STARVED__GFX09_0            = 0x000000f1,
    PERF_POS_RET_FULL_FETCH_TO_SXIF_FIFO__GFX09_0      = 0x000000f2,
    PERF_POS_RET_FULL_PA_TO_WD_DEALLOC_POSITION_FIFO__GFX09_0 = 0x000000f3,
    PERF_POS_RET_WAITING_ON_RETURNED_CACHELINE__GFX09_0 = 0x000000f4,
    PERF_POS_RET_FETCH_TO_SXIF_FIFO_WRITE__GFX09_0     = 0x000000f5,
    PERF_POS_RET_QUALIFIED_BUSY__GFX09_0               = 0x000000f6,
    PERF_POS_RET_QUALIFIED_STARVED__GFX09_0            = 0x000000f7,
    PERF_TC_LATENCY_BIN0__GFX09_0                      = 0x000000f8,
    PERF_TC_LATENCY_BIN1__GFX09_0                      = 0x000000f9,
    PERF_TC_LATENCY_BIN2__GFX09_0                      = 0x000000fa,
    PERF_TC_LATENCY_BIN3__GFX09_0                      = 0x000000fb,
    PERF_TC_LATENCY_BIN4__GFX09_0                      = 0x000000fc,
    PERF_TC_LATENCY_BIN5__GFX09_0                      = 0x000000fd,
    PERF_TC_LATENCY_BIN6__GFX09_0                      = 0x000000fe,
    PERF_TC_LATENCY_BIN7__GFX09_0                      = 0x000000ff,
    PERF_TC_STREAM0_DATA_AVAILABLE__GFX09_0            = 0x00000100,
    PERF_TC_STREAM1_DATA_AVAILABLE__GFX09_0            = 0x00000101,
    PERF_TC_STREAM2_DATA_AVAILABLE__GFX09_0            = 0x00000102,
    PERF_PAWD_DEALLOC_FIFO_IS_FULL__GFX09_0            = 0x00000103,
    PERF_PAWD_DEALLOC_WAITING_TO_BE_READ__GFX09_0      = 0x00000104,
    PERF_SHOOTDOWN_WAIT_ON_UTCL1__GFX09_0              = 0x00000105,
    PERF_SHOOTDOWN_WAIT_ON_UTC_SIDEBAND__GFX09_0       = 0x00000106,
    PERF_SHOOTDOWN_WAIT_ON_UTC_INDEX__GFX09_0          = 0x00000107,
    PERF_SHOOTDOWN_WAIT_ON_UTC_POSITION__GFX09_0       = 0x00000108,
    PERF_SHOOTDOWN_WAIT_ALL_CLEAN__GFX09_0             = 0x00000109,
    PERF_SHOOTDOWN_WAIT_DEASSERT__GFX09_0              = 0x0000010a,
    PERF_UTCL1_TRANSLATION_MISS_CLIENT0__GFX09_0       = 0x0000010b,
    PERF_UTCL1_TRANSLATION_MISS_CLIENT1__GFX09_0       = 0x0000010c,
    PERF_UTCL1_TRANSLATION_MISS_CLIENT2__GFX09_0       = 0x0000010d,
    PERF_UTCL1_PERMISSION_MISS_CLIENT0__GFX09_0        = 0x0000010e,
    PERF_UTCL1_PERMISSION_MISS_CLIENT1__GFX09_0        = 0x0000010f,
    PERF_UTCL1_PERMISSION_MISS_CLIENT2__GFX09_0        = 0x00000110,
    PERF_UTCL1_TRANSLATION_HIT_CLIENT0__GFX09_0        = 0x00000111,
    PERF_UTCL1_TRANSLATION_HIT_CLIENT1__GFX09_0        = 0x00000112,
    PERF_UTCL1_TRANSLATION_HIT_CLIENT2__GFX09_0        = 0x00000113,
    PERF_UTCL1_REQUEST_CLIENT0__GFX09_0                = 0x00000114,
    PERF_UTCL1_REQUEST_CLIENT1__GFX09_0                = 0x00000115,
    PERF_UTCL1_REQUEST_CLIENT2__GFX09_0                = 0x00000116,
    PERF_UTCL1_STALL_MISSFIFO_FULL__GFX09_0            = 0x00000117,
    PERF_UTCL1_STALL_INFLIGHT_MAX__GFX09_0             = 0x00000118,
    PERF_UTCL1_STALL_LRU_INFLIGHT__GFX09_0             = 0x00000119,
    PERF_UTCL1_STALL_MULTI_MISS__GFX09_0               = 0x0000011a,
    PERF_UTCL1_LFIFO_FULL__GFX09_0                     = 0x0000011b,
    PERF_UTCL1_STALL_LFIFO_NOT_RES_CLIENT0__GFX09_0    = 0x0000011c,
    PERF_UTCL1_STALL_LFIFO_NOT_RES_CLIENT1__GFX09_0    = 0x0000011d,
    PERF_UTCL1_STALL_LFIFO_NOT_RES_CLIENT2__GFX09_0    = 0x0000011e,
    PERF_UTCL1_STALL_UTCL2_REQ_OUT_OF_CREDITS__GFX09_0 = 0x0000011f,
    PERF_UTCL1_UTCL2_REQ__GFX09_0                      = 0x00000120,
    PERF_UTCL1_UTCL2_RET__GFX09_0                      = 0x00000121,
    PERF_UTCL1_UTCL2_INFLIGHT__GFX09_0                 = 0x00000122,
    PERF_CLIENT_UTCL1_INFLIGHT__GFX09_0                = 0x00000123,
    PERF_INDEX_RECEIVE_1_VALID_DWORDS_THIS_CACHELINE__GFX09_1X = 0x000000e3,
    PERF_INDEX_RECEIVE_2_VALID_DWORDS_THIS_CACHELINE__GFX09_1X = 0x000000e4,
    PERF_INDEX_RECEIVE_3_VALID_DWORDS_THIS_CACHELINE__GFX09_1X = 0x000000e5,
    PERF_INDEX_RECEIVE_4_VALID_DWORDS_THIS_CACHELINE__GFX09_1X = 0x000000e6,
    PERF_INDEX_RECEIVE_5_VALID_DWORDS_THIS_CACHELINE__GFX09_1X = 0x000000e7,
    PERF_INDEX_RECEIVE_6_VALID_DWORDS_THIS_CACHELINE__GFX09_1X = 0x000000e8,
    PERF_INDEX_RECEIVE_7_VALID_DWORDS_THIS_CACHELINE__GFX09_1X = 0x000000e9,
    PERF_INDEX_RECEIVE_8_VALID_DWORDS_THIS_CACHELINE__GFX09_1X = 0x000000ea,
    PERF_INDEX_RECEIVE_9_VALID_DWORDS_THIS_CACHELINE__GFX09_1X = 0x000000eb,
    PERF_INDEX_RECEIVE_10_VALID_DWORDS_THIS_CACHELINE__GFX09_1X = 0x000000ec,
    PERF_INDEX_RECEIVE_11_VALID_DWORDS_THIS_CACHELINE__GFX09_1X = 0x000000ed,
    PERF_INDEX_RECEIVE_12_VALID_DWORDS_THIS_CACHELINE__GFX09_1X = 0x000000ee,
    PERF_INDEX_RECEIVE_13_VALID_DWORDS_THIS_CACHELINE__GFX09_1X = 0x000000ef,
    PERF_INDEX_RECEIVE_14_VALID_DWORDS_THIS_CACHELINE__GFX09_1X = 0x000000f0,
    PERF_INDEX_RECEIVE_15_VALID_DWORDS_THIS_CACHELINE__GFX09_1X = 0x000000f1,
    PERF_INDEX_RECEIVE_16_VALID_DWORDS_THIS_CACHELINE__GFX09_1X = 0x000000f2,
    PERF_POS_REQ_STALLED_BY_FULL_FETCH_TO_PRIMIC_P_FIFO__GFX09_1X = 0x000000f3,
    PERF_POS_REQ_STALLED_BY_FULL_FETCH_TO_PRIMIC_S_FIFO__GFX09_1X = 0x000000f4,
    PERF_POS_REQ_STALLED_BY_FULL_POSREQ_TO_POSRTN_V_FIFO__GFX09_1X = 0x000000f5,
    PERF_POS_REQ_STALLED_BY_FULL_POSREQ_TO_POSRTN_S_FIFO__GFX09_1X = 0x000000f6,
    PERF_POS_REQ_STALLED_BY_FULL_PA_TO_WD_DEALLOC_INDEX_FIFO__GFX09_1X = 0x000000f7,
    PERF_POS_REQ_STALLED_BY_NO_TOKENS__GFX09_1X        = 0x000000f8,
    PERF_POS_REQ_STARVED_BY_NO_PRIM__GFX09_1X          = 0x000000f9,
    PERF_POS_REQ_STALLED_BY_UTCL1__GFX09_1X            = 0x000000fa,
    PERF_POS_REQ_FETCH_TO_PRIMIC_P_FIFO_WRITE__GFX09_1X = 0x000000fb,
    PERF_POS_REQ_FETCH_TO_PRIMIC_P_FIFO_NO_WRITE__GFX09_1X = 0x000000fc,
    PERF_POS_REQ_QUALIFIED_BUSY__GFX09_1X              = 0x000000fd,
    PERF_POS_REQ_QUALIFIED_STARVED__GFX09_1X           = 0x000000fe,
    PERF_POS_REQ_REUSE_0_NEW_VERTS_THIS_PRIM__GFX09_1X = 0x000000ff,
    PERF_POS_REQ_REUSE_1_NEW_VERTS_THIS_PRIM__GFX09_1X = 0x00000100,
    PERF_POS_REQ_REUSE_2_NEW_VERTS_THIS_PRIM__GFX09_1X = 0x00000101,
    PERF_POS_REQ_REUSE_3_NEW_VERTS_THIS_PRIM__GFX09_1X = 0x00000102,
    PERF_POS_RET_FULL_FETCH_TO_SXIF_FIFO__GFX09_1X     = 0x00000103,
    PERF_POS_RET_FULL_PA_TO_WD_DEALLOC_POSITION_FIFO__GFX09_1X = 0x00000104,
    PERF_POS_RET_WAITING_ON_RETURNED_CACHELINE__GFX09_1X = 0x00000105,
    PERF_POS_RET_FETCH_TO_SXIF_FIFO_WRITE__GFX09_1X    = 0x00000106,
    PERF_POS_RET_QUALIFIED_BUSY__GFX09_1X              = 0x00000107,
    PERF_POS_RET_QUALIFIED_STARVED__GFX09_1X           = 0x00000108,
    PERF_POS_RET_1_CACHELINE_POSITION_USED__GFX09_1X   = 0x00000109,
    PERF_POS_RET_2_CACHELINE_POSITION_USED__GFX09_1X   = 0x0000010a,
    PERF_POS_RET_3_CACHELINE_POSITION_USED__GFX09_1X   = 0x0000010b,
    PERF_POS_RET_4_CACHELINE_POSITION_USED__GFX09_1X   = 0x0000010c,
    PERF_TC_INDEX_LATENCY_BIN0__GFX09_1X               = 0x0000010d,
    PERF_TC_INDEX_LATENCY_BIN1__GFX09_1X               = 0x0000010e,
    PERF_TC_INDEX_LATENCY_BIN2__GFX09_1X               = 0x0000010f,
    PERF_TC_INDEX_LATENCY_BIN3__GFX09_1X               = 0x00000110,
    PERF_TC_INDEX_LATENCY_BIN4__GFX09_1X               = 0x00000111,
    PERF_TC_INDEX_LATENCY_BIN5__GFX09_1X               = 0x00000112,
    PERF_TC_INDEX_LATENCY_BIN6__GFX09_1X               = 0x00000113,
    PERF_TC_INDEX_LATENCY_BIN7__GFX09_1X               = 0x00000114,
    PERF_TC_INDEX_LATENCY_BIN8__GFX09_1X               = 0x00000115,
    PERF_TC_INDEX_LATENCY_BIN9__GFX09_1X               = 0x00000116,
    PERF_TC_INDEX_LATENCY_BIN10__GFX09_1X              = 0x00000117,
    PERF_TC_INDEX_LATENCY_BIN11__GFX09_1X              = 0x00000118,
    PERF_TC_INDEX_LATENCY_BIN12__GFX09_1X              = 0x00000119,
    PERF_TC_INDEX_LATENCY_BIN13__GFX09_1X              = 0x0000011a,
    PERF_TC_INDEX_LATENCY_BIN14__GFX09_1X              = 0x0000011b,
    PERF_TC_INDEX_LATENCY_BIN15__GFX09_1X              = 0x0000011c,
    PERF_TC_POSITION_LATENCY_BIN0__GFX09_1X            = 0x0000011d,
    PERF_TC_POSITION_LATENCY_BIN1__GFX09_1X            = 0x0000011e,
    PERF_TC_POSITION_LATENCY_BIN2__GFX09_1X            = 0x0000011f,
    PERF_TC_POSITION_LATENCY_BIN3__GFX09_1X            = 0x00000120,
    PERF_TC_POSITION_LATENCY_BIN4__GFX09_1X            = 0x00000121,
    PERF_TC_POSITION_LATENCY_BIN5__GFX09_1X            = 0x00000122,
    PERF_TC_POSITION_LATENCY_BIN6__GFX09_1X            = 0x00000123,
    PERF_TC_POSITION_LATENCY_BIN7__GFX09_1X            = 0x00000124,
    PERF_TC_POSITION_LATENCY_BIN8__GFX09_1X            = 0x00000125,
    PERF_TC_POSITION_LATENCY_BIN9__GFX09_1X            = 0x00000126,
    PERF_TC_POSITION_LATENCY_BIN10__GFX09_1X           = 0x00000127,
    PERF_TC_POSITION_LATENCY_BIN11__GFX09_1X           = 0x00000128,
    PERF_TC_POSITION_LATENCY_BIN12__GFX09_1X           = 0x00000129,
    PERF_TC_POSITION_LATENCY_BIN13__GFX09_1X           = 0x0000012a,
    PERF_TC_POSITION_LATENCY_BIN14__GFX09_1X           = 0x0000012b,
    PERF_TC_POSITION_LATENCY_BIN15__GFX09_1X           = 0x0000012c,
    PERF_TC_STREAM0_DATA_AVAILABLE__GFX09_1X           = 0x0000012d,
    PERF_TC_STREAM1_DATA_AVAILABLE__GFX09_1X           = 0x0000012e,
    PERF_TC_STREAM2_DATA_AVAILABLE__GFX09_1X           = 0x0000012f,
    PERF_PAWD_DEALLOC_FIFO_IS_FULL__GFX09_1X           = 0x00000130,
    PERF_PAWD_DEALLOC_WAITING_TO_BE_READ__GFX09_1X     = 0x00000131,
    PERF_SHOOTDOWN_WAIT_ON_UTCL1__GFX09_1X             = 0x00000132,
    PERF_SHOOTDOWN_WAIT_ON_UTC_SIDEBAND__GFX09_1X      = 0x00000133,
    PERF_SHOOTDOWN_WAIT_ON_UTC_INDEX__GFX09_1X         = 0x00000134,
    PERF_SHOOTDOWN_WAIT_ON_UTC_POSITION__GFX09_1X      = 0x00000135,
    PERF_SHOOTDOWN_WAIT_ALL_CLEAN__GFX09_1X            = 0x00000136,
    PERF_SHOOTDOWN_WAIT_DEASSERT__GFX09_1X             = 0x00000137,
    PERF_UTCL1_TRANSLATION_MISS_CLIENT0__GFX09_1X      = 0x00000138,
    PERF_UTCL1_TRANSLATION_MISS_CLIENT1__GFX09_1X      = 0x00000139,
    PERF_UTCL1_TRANSLATION_MISS_CLIENT2__GFX09_1X      = 0x0000013a,
    PERF_UTCL1_PERMISSION_MISS_CLIENT0__GFX09_1X       = 0x0000013b,
    PERF_UTCL1_PERMISSION_MISS_CLIENT1__GFX09_1X       = 0x0000013c,
    PERF_UTCL1_PERMISSION_MISS_CLIENT2__GFX09_1X       = 0x0000013d,
    PERF_UTCL1_TRANSLATION_HIT_CLIENT0__GFX09_1X       = 0x0000013e,
    PERF_UTCL1_TRANSLATION_HIT_CLIENT1__GFX09_1X       = 0x0000013f,
    PERF_UTCL1_TRANSLATION_HIT_CLIENT2__GFX09_1X       = 0x00000140,
    PERF_UTCL1_REQUEST_CLIENT0__GFX09_1X               = 0x00000141,
    PERF_UTCL1_REQUEST_CLIENT1__GFX09_1X               = 0x00000142,
    PERF_UTCL1_REQUEST_CLIENT2__GFX09_1X               = 0x00000143,
    PERF_UTCL1_STALL_MISSFIFO_FULL__GFX09_1X           = 0x00000144,
    PERF_UTCL1_STALL_INFLIGHT_MAX__GFX09_1X            = 0x00000145,
    PERF_UTCL1_STALL_LRU_INFLIGHT__GFX09_1X            = 0x00000146,
    PERF_UTCL1_STALL_MULTI_MISS__GFX09_1X              = 0x00000147,
    PERF_UTCL1_LFIFO_FULL__GFX09_1X                    = 0x00000148,
    PERF_UTCL1_STALL_LFIFO_NOT_RES_CLIENT0__GFX09_1X   = 0x00000149,
    PERF_UTCL1_STALL_LFIFO_NOT_RES_CLIENT1__GFX09_1X   = 0x0000014a,
    PERF_UTCL1_STALL_LFIFO_NOT_RES_CLIENT2__GFX09_1X   = 0x0000014b,
    PERF_UTCL1_STALL_UTCL2_REQ_OUT_OF_CREDITS__GFX09_1X = 0x0000014c,
    PERF_UTCL1_UTCL2_REQ__GFX09_1X                     = 0x0000014d,
    PERF_UTCL1_UTCL2_RET__GFX09_1X                     = 0x0000014e,
    PERF_UTCL1_UTCL2_INFLIGHT__GFX09_1X                = 0x0000014f,
    PERF_CLIENT_UTCL1_INFLIGHT__GFX09_1X               = 0x00000150,
    PERF_PA_SE0_OUTPUT_QUALIFIED_CLKEN_NOT_ASSERTED__GFX09_1X = 0x00000151,
    PERF_PA_SE0_OUTPUT_QUALIFIED_CLKEN_ASSERTED_NO_SEND__GFX09_1X = 0x00000152,
    PERF_PA_SE0_OUTPUT_QUALIFIED_CLKEN_ASSERTED_WITH_SEND__GFX09_1X = 0x00000153,
    PERF_PA_SE1_OUTPUT_QUALIFIED_CLKEN_NOT_ASSERTED__GFX09_1X = 0x00000154,
    PERF_PA_SE1_OUTPUT_QUALIFIED_CLKEN_ASSERTED_NO_SEND__GFX09_1X = 0x00000155,
    PERF_PA_SE1_OUTPUT_QUALIFIED_CLKEN_ASSERTED_WITH_SEND__GFX09_1X = 0x00000156,
    PERF_PA_SE2_OUTPUT_QUALIFIED_CLKEN_NOT_ASSERTED__GFX09_1X = 0x00000157,
    PERF_PA_SE2_OUTPUT_QUALIFIED_CLKEN_ASSERTED_NO_SEND__GFX09_1X = 0x00000158,
    PERF_PA_SE2_OUTPUT_QUALIFIED_CLKEN_ASSERTED_WITH_SEND__GFX09_1X = 0x00000159,
    PERF_PA_SE3_OUTPUT_QUALIFIED_CLKEN_NOT_ASSERTED__GFX09_1X = 0x0000015a,
    PERF_PA_SE3_OUTPUT_QUALIFIED_CLKEN_ASSERTED_NO_SEND__GFX09_1X = 0x0000015b,
    PERF_PA_SE3_OUTPUT_QUALIFIED_CLKEN_ASSERTED_WITH_SEND__GFX09_1X = 0x0000015c,
    PERF_PA_VERTEX_FIFO_FULL__GFX09_1X                 = 0x0000015d,
    PERF_PA_PRIMIC_TO_CLPRIM_FIFO_FULL__GFX09_1X       = 0x0000015e,
    PERF_PA_VERTEX_FIFO_FULL__GFX10                    = 0x000000b1,
    PERF_PA_PRIMIC_TO_CLPRIM_FIFO_FULL__GFX10          = 0x000000b2,
    PERF_PA_FETCH_TO_PRIMIC_P_FIFO_FULL__GFX10         = 0x000000b3,
    PERF_PA_FETCH_TO_SXIF_FIFO_FULL__GFX10             = 0x000000b4,
    PERF_ENGG_CSB_MACHINE_IS_STARVED__GFX10            = 0x000000b7,
    PERF_ENGG_CSB_MACHINE_STALLED_BY_CSB_MEMORY__GFX10 = 0x000000b8,
    PERF_ENGG_CSB_MACHINE_STALLED_BY_SPI__GFX10        = 0x000000b9,
    PERF_ENGG_CSB_GE_INPUT_FIFO_FULL__GFX10            = 0x000000ba,
    PERF_ENGG_CSB_SPI_INPUT_FIFO_FULL__GFX10           = 0x000000bb,
    PERF_ENGG_CSB_GE_INPUT_FIFO_POP_BIT__GFX10         = 0x000000bd,
    PERF_ENGG_CSB_PRIM_COUNT_EQ0__GFX10                = 0x000000be,
    PERF_ENGG_CSB_NULL_SUBGROUP__GFX10                 = 0x000000bf,
    PERF_ENGG_CSB_GE_SENDING_SUBGROUP__GFX10           = 0x000000c0,
    PERF_ENGG_CSB_GE_MEMORY_FULL__GFX10                = 0x000000c1,
    PERF_ENGG_CSB_GE_MEMORY_EMPTY__GFX10               = 0x000000c2,
    PERF_ENGG_CSB_SPI_MEMORY_FULL__GFX10               = 0x000000c3,
    PERF_ENGG_CSB_SPI_MEMORY_EMPTY__GFX10              = 0x000000c4,
    PERF_ENGG_CSB_DELAY_BIN00__GFX10                   = 0x000000c5,
    PERF_ENGG_CSB_DELAY_BIN01__GFX10                   = 0x000000c6,
    PERF_ENGG_CSB_DELAY_BIN02__GFX10                   = 0x000000c7,
    PERF_ENGG_CSB_DELAY_BIN03__GFX10                   = 0x000000c8,
    PERF_ENGG_CSB_DELAY_BIN04__GFX10                   = 0x000000c9,
    PERF_ENGG_CSB_DELAY_BIN05__GFX10                   = 0x000000ca,
    PERF_ENGG_CSB_DELAY_BIN06__GFX10                   = 0x000000cb,
    PERF_ENGG_CSB_DELAY_BIN07__GFX10                   = 0x000000cc,
    PERF_ENGG_CSB_DELAY_BIN08__GFX10                   = 0x000000cd,
    PERF_ENGG_CSB_DELAY_BIN09__GFX10                   = 0x000000ce,
    PERF_ENGG_CSB_DELAY_BIN10__GFX10                   = 0x000000cf,
    PERF_ENGG_CSB_DELAY_BIN11__GFX10                   = 0x000000d0,
    PERF_ENGG_CSB_DELAY_BIN12__GFX10                   = 0x000000d1,
    PERF_ENGG_CSB_DELAY_BIN13__GFX10                   = 0x000000d2,
    PERF_ENGG_CSB_DELAY_BIN14__GFX10                   = 0x000000d3,
    PERF_ENGG_CSB_DELAY_BIN15__GFX10                   = 0x000000d4,
    PERF_ENGG_CSB_SPI_DELAY_BIN00__GFX10               = 0x000000d5,
    PERF_ENGG_CSB_SPI_DELAY_BIN01__GFX10               = 0x000000d6,
    PERF_ENGG_CSB_SPI_DELAY_BIN02__GFX10               = 0x000000d7,
    PERF_ENGG_CSB_SPI_DELAY_BIN03__GFX10               = 0x000000d8,
    PERF_ENGG_CSB_SPI_DELAY_BIN04__GFX10               = 0x000000d9,
    PERF_ENGG_CSB_SPI_DELAY_BIN05__GFX10               = 0x000000da,
    PERF_ENGG_CSB_SPI_DELAY_BIN06__GFX10               = 0x000000db,
    PERF_ENGG_CSB_SPI_DELAY_BIN07__GFX10               = 0x000000dc,
    PERF_ENGG_CSB_SPI_DELAY_BIN08__GFX10               = 0x000000dd,
    PERF_ENGG_CSB_SPI_DELAY_BIN09__GFX10               = 0x000000de,
    PERF_ENGG_CSB_SPI_DELAY_BIN10__GFX10               = 0x000000df,
    PERF_ENGG_CSB_SPI_DELAY_BIN11__GFX10               = 0x000000e0,
    PERF_ENGG_CSB_SPI_DELAY_BIN12__GFX10               = 0x000000e1,
    PERF_ENGG_CSB_SPI_DELAY_BIN13__GFX10               = 0x000000e2,
    PERF_ENGG_CSB_SPI_DELAY_BIN14__GFX10               = 0x000000e3,
    PERF_ENGG_CSB_SPI_DELAY_BIN15__GFX10               = 0x000000e4,
    PERF_ENGG_INDEX_REQ_STARVED__GFX10                 = 0x000000e5,
    PERF_ENGG_INDEX_REQ_IDLE_AND_STALLED_BY_REQ2RTN_FIFO_FULL__GFX10 = 0x000000e6,
    PERF_ENGG_INDEX_REQ_BUSY_AND_STALLED_BY_REQ2RTN_FIFO_FULL__GFX10 = 0x000000e7,
    PERF_ENGG_INDEX_REQ_STALLED_BY_SX_CREDITS__GFX10   = 0x000000e8,
    PERF_ENGG_INDEX_RET_REQ2RTN_FIFO_FULL__GFX10       = 0x000000e9,
    PERF_ENGG_INDEX_RET_REQ2RTN_FIFO_EMPTY__GFX10      = 0x000000ea,
    PERF_ENGG_INDEX_RET_SX_RECEIVE_FIFO_FULL__GFX10    = 0x000000eb,
    PERF_ENGG_INDEX_RET_SXRX_STARVED_BY_CSB__GFX10     = 0x000000ec,
    PERF_ENGG_INDEX_RET_SXRX_STARVED_BY_PRIMS__GFX10   = 0x000000ed,
    PERF_ENGG_INDEX_RET_SXRX_STALLED_BY_PRIM_INDICES_CSB_FIFO__GFX10 = 0x000000ee,
    PERF_ENGG_INDEX_RET_SXRX_STALLED_BY_PRIM_INDICES_FIFO__GFX10 = 0x000000ef,
    PERF_ENGG_INDEX_RET_SXRX_READING_EVENT__GFX10      = 0x000000f0,
    PERF_ENGG_INDEX_RET_SXRX_READING_NULL_SUBGROUP__GFX10 = 0x000000f1,
    PERF_ENGG_INDEX_RET_SXRX_READING_SUBGROUP_PRIMCOUNT_EQ0__GFX10 = 0x000000f2,
    PERF_ENGG_INDEX_RET_SXRX_READING_QDWORD_0_VALID_PRIMS_NOPL__GFX10 = 0x000000f3,
    PERF_ENGG_INDEX_RET_SXRX_READING_QDWORD_1_VALID_PRIMS_NOPL__GFX10 = 0x000000f4,
    PERF_ENGG_INDEX_RET_SXRX_READING_QDWORD_2_VALID_PRIMS_NOPL__GFX10 = 0x000000f5,
    PERF_ENGG_INDEX_RET_SXRX_READING_QDWORD_3_VALID_PRIMS_NOPL__GFX10 = 0x000000f6,
    PERF_ENGG_INDEX_RET_SXRX_READING_QDWORD_4_VALID_PRIMS_NOPL__GFX10 = 0x000000f7,
    PERF_ENGG_INDEX_RET_SXRX_READING_QDWORD_0_VALID_PRIMS_PL__GFX10 = 0x000000f8,
    PERF_ENGG_INDEX_RET_SXRX_READING_QDWORD_1_VALID_PRIMS_PL__GFX10 = 0x000000f9,
    PERF_ENGG_INDEX_RET_SXRX_READING_QDWORD_2_VALID_PRIMS_PL__GFX10 = 0x000000fa,
    PERF_ENGG_INDEX_RET_SXRX_READING_QDWORD_3_VALID_PRIMS_PL__GFX10 = 0x000000fb,
    PERF_ENGG_INDEX_RET_SXRX_READING_QDWORD_4_VALID_PRIMS_PL__GFX10 = 0x000000fc,
    PERF_ENGG_INDEX_RET_SXRX_READING_QDWORD_0_NULL_PRIMS__GFX10 = 0x000000fd,
    PERF_ENGG_INDEX_RET_SXRX_READING_QDWORD_1_NULL_PRIMS__GFX10 = 0x000000fe,
    PERF_ENGG_INDEX_RET_SXRX_READING_QDWORD_2_NULL_PRIMS__GFX10 = 0x000000ff,
    PERF_ENGG_INDEX_RET_SXRX_READING_QDWORD_3_NULL_PRIMS__GFX10 = 0x00000100,
    PERF_ENGG_INDEX_RET_SXRX_READING_QDWORD_4_NULL_PRIMS__GFX10 = 0x00000101,
    PERF_ENGG_INDEX_PRIM_IF_STALLED_BY_FULL_FETCH_TO_PRIMIC_P_FIFO__GFX10 = 0x00000102,
    PERF_ENGG_INDEX_PRIM_IF_STALLED_BY_FULL_FETCH_TO_PRIMIC_S_FIFO__GFX10 = 0x00000103,
    PERF_ENGG_INDEX_PRIM_IF_STARVED_BY_NO_CSB__GFX10   = 0x00000104,
    PERF_ENGG_INDEX_PRIM_IF_STARVED_BY_NO_PRIM__GFX10  = 0x00000105,
    PERF_ENGG_INDEX_PRIM_IF_FETCH_TO_PRIMIC_P_FIFO_WRITE__GFX10 = 0x00000106,
    PERF_ENGG_INDEX_PRIM_IF_FETCH_TO_PRIMIC_P_FIFO_NO_WRITE__GFX10 = 0x00000107,
    PERF_ENGG_POS_REQ_STARVED__GFX10                   = 0x00000108,
    PERF_ENGG_POS_REQ_STALLED_BY_FULL_CLIPV_FIFO__GFX10 = 0x00000109,
} SU_PERFCNT_SEL;

constexpr unsigned int MaxSuPerfcntSelGfx09_0          = PERF_CLIENT_UTCL1_INFLIGHT__GFX09_0;
constexpr unsigned int MaxSuPerfcntSelGfx09_1x         = PERF_PA_PRIMIC_TO_CLPRIM_FIFO_FULL__GFX09_1X;
constexpr unsigned int MaxSuPerfcntSelGfx10            = PERF_ENGG_POS_REQ_STALLED_BY_FULL_CLIPV_FIFO__GFX10;

typedef enum SWIZZLE_MODE_ENUM {
    SW_LINEAR                                          = 0x00000000,
    SW_256B_S                                          = 0x00000001,
    SW_256B_D                                          = 0x00000002,
    SW_256B_R                                          = 0x00000003,
    SW_4KB_Z                                           = 0x00000004,
    SW_4KB_S                                           = 0x00000005,
    SW_4KB_D                                           = 0x00000006,
    SW_4KB_R                                           = 0x00000007,
    SW_64KB_Z                                          = 0x00000008,
    SW_64KB_S                                          = 0x00000009,
    SW_64KB_D                                          = 0x0000000a,
    SW_64KB_R                                          = 0x0000000b,
    SW_VAR_Z                                           = 0x0000000c,
    SW_VAR_S                                           = 0x0000000d,
    SW_VAR_D                                           = 0x0000000e,
    SW_VAR_R                                           = 0x0000000f,
    SW_64KB_Z_T                                        = 0x00000010,
    SW_64KB_S_T                                        = 0x00000011,
    SW_64KB_D_T                                        = 0x00000012,
    SW_64KB_R_T                                        = 0x00000013,
    SW_4KB_Z_X                                         = 0x00000014,
    SW_4KB_S_X                                         = 0x00000015,
    SW_4KB_D_X                                         = 0x00000016,
    SW_4KB_R_X                                         = 0x00000017,
    SW_64KB_Z_X                                        = 0x00000018,
    SW_64KB_S_X                                        = 0x00000019,
    SW_64KB_D_X                                        = 0x0000001a,
    SW_64KB_R_X                                        = 0x0000001b,
    SW_VAR_Z_X                                         = 0x0000001c,
    SW_VAR_S_X                                         = 0x0000001d,
    SW_VAR_D_X                                         = 0x0000001e,
    SW_VAR_R_X                                         = 0x0000001f,
} SWIZZLE_MODE_ENUM;

typedef enum SWIZZLE_TYPE_ENUM {
    SW_Z                                               = 0x00000000,
    SW_S                                               = 0x00000001,
    SW_D                                               = 0x00000002,
    SW_R                                               = 0x00000003,
    SW_L                                               = 0x00000004,
} SWIZZLE_TYPE_ENUM;

typedef enum SX_BLEND_OPT {
    BLEND_OPT_PRESERVE_NONE_IGNORE_ALL                 = 0x00000000,
    BLEND_OPT_PRESERVE_ALL_IGNORE_NONE                 = 0x00000001,
    BLEND_OPT_PRESERVE_C1_IGNORE_C0                    = 0x00000002,
    BLEND_OPT_PRESERVE_C0_IGNORE_C1                    = 0x00000003,
    BLEND_OPT_PRESERVE_A1_IGNORE_A0                    = 0x00000004,
    BLEND_OPT_PRESERVE_A0_IGNORE_A1                    = 0x00000005,
    BLEND_OPT_PRESERVE_NONE_IGNORE_A0                  = 0x00000006,
    BLEND_OPT_PRESERVE_NONE_IGNORE_NONE                = 0x00000007,
} SX_BLEND_OPT;

typedef enum SX_DOWNCONVERT_FORMAT {
    SX_RT_EXPORT_NO_CONVERSION                         = 0x00000000,
    SX_RT_EXPORT_32_R                                  = 0x00000001,
    SX_RT_EXPORT_32_A                                  = 0x00000002,
    SX_RT_EXPORT_10_11_11                              = 0x00000003,
    SX_RT_EXPORT_2_10_10_10                            = 0x00000004,
    SX_RT_EXPORT_8_8_8_8                               = 0x00000005,
    SX_RT_EXPORT_5_6_5                                 = 0x00000006,
    SX_RT_EXPORT_1_5_5_5                               = 0x00000007,
    SX_RT_EXPORT_4_4_4_4                               = 0x00000008,
    SX_RT_EXPORT_16_16_GR                              = 0x00000009,
    SX_RT_EXPORT_16_16_AR                              = 0x0000000a,
} SX_DOWNCONVERT_FORMAT;

typedef enum SX_OPT_COMB_FCN {
    OPT_COMB_NONE                                      = 0x00000000,
    OPT_COMB_ADD                                       = 0x00000001,
    OPT_COMB_SUBTRACT                                  = 0x00000002,
    OPT_COMB_MIN                                       = 0x00000003,
    OPT_COMB_MAX                                       = 0x00000004,
    OPT_COMB_REVSUBTRACT                               = 0x00000005,
    OPT_COMB_BLEND_DISABLED                            = 0x00000006,
    OPT_COMB_SAFE_ADD                                  = 0x00000007,
} SX_OPT_COMB_FCN;

typedef enum SX_PERFCOUNTER_VALS {
    SX_PERF_SEL_PA_IDLE_CYCLES                         = 0x00000000,
    SX_PERF_SEL_PA_REQ                                 = 0x00000001,
    SX_PERF_SEL_PA_POS                                 = 0x00000002,
    SX_PERF_SEL_CLOCK                                  = 0x00000003,
    SX_PERF_SEL_GATE_EN1                               = 0x00000004,
    SX_PERF_SEL_GATE_EN2                               = 0x00000005,
    SX_PERF_SEL_GATE_EN3                               = 0x00000006,
    SX_PERF_SEL_GATE_EN4                               = 0x00000007,
    SX_PERF_SEL_SH_POS_STARVE                          = 0x00000008,
    SX_PERF_SEL_SH_COLOR_STARVE                        = 0x00000009,
    SX_PERF_SEL_SH_POS_STALL                           = 0x0000000a,
    SX_PERF_SEL_SH_COLOR_STALL                         = 0x0000000b,
    SX_PERF_SEL_DB0_PIXELS                             = 0x0000000c,
    SX_PERF_SEL_DB0_HALF_QUADS                         = 0x0000000d,
    SX_PERF_SEL_DB0_PIXEL_STALL                        = 0x0000000e,
    SX_PERF_SEL_DB0_PIXEL_IDLE                         = 0x0000000f,
    SX_PERF_SEL_DB0_PRED_PIXELS                        = 0x00000010,
    SX_PERF_SEL_DB1_PIXELS                             = 0x00000011,
    SX_PERF_SEL_DB1_HALF_QUADS                         = 0x00000012,
    SX_PERF_SEL_DB1_PIXEL_STALL                        = 0x00000013,
    SX_PERF_SEL_DB1_PIXEL_IDLE                         = 0x00000014,
    SX_PERF_SEL_DB1_PRED_PIXELS                        = 0x00000015,
    SX_PERF_SEL_DB2_PIXELS                             = 0x00000016,
    SX_PERF_SEL_DB2_HALF_QUADS                         = 0x00000017,
    SX_PERF_SEL_DB2_PIXEL_STALL                        = 0x00000018,
    SX_PERF_SEL_DB2_PIXEL_IDLE                         = 0x00000019,
    SX_PERF_SEL_DB2_PRED_PIXELS                        = 0x0000001a,
    SX_PERF_SEL_DB3_PIXELS                             = 0x0000001b,
    SX_PERF_SEL_DB3_HALF_QUADS                         = 0x0000001c,
    SX_PERF_SEL_DB3_PIXEL_STALL                        = 0x0000001d,
    SX_PERF_SEL_DB3_PIXEL_IDLE                         = 0x0000001e,
    SX_PERF_SEL_DB3_PRED_PIXELS                        = 0x0000001f,
    SX_PERF_SEL_COL_BUSY                               = 0x00000020,
    SX_PERF_SEL_POS_BUSY                               = 0x00000021,
    SX_PERF_SEL_DB0_A2M_DISCARD_QUADS                  = 0x00000022,
    SX_PERF_SEL_DB0_MRT0_BLEND_BYPASS                  = 0x00000023,
    SX_PERF_SEL_DB0_MRT0_DONT_RD_DEST                  = 0x00000024,
    SX_PERF_SEL_DB0_MRT0_DISCARD_SRC                   = 0x00000025,
    SX_PERF_SEL_DB0_MRT0_SINGLE_QUADS                  = 0x00000026,
    SX_PERF_SEL_DB0_MRT0_DOUBLE_QUADS                  = 0x00000027,
    SX_PERF_SEL_DB0_MRT1_BLEND_BYPASS                  = 0x00000028,
    SX_PERF_SEL_DB0_MRT1_DONT_RD_DEST                  = 0x00000029,
    SX_PERF_SEL_DB0_MRT1_DISCARD_SRC                   = 0x0000002a,
    SX_PERF_SEL_DB0_MRT1_SINGLE_QUADS                  = 0x0000002b,
    SX_PERF_SEL_DB0_MRT1_DOUBLE_QUADS                  = 0x0000002c,
    SX_PERF_SEL_DB0_MRT2_BLEND_BYPASS                  = 0x0000002d,
    SX_PERF_SEL_DB0_MRT2_DONT_RD_DEST                  = 0x0000002e,
    SX_PERF_SEL_DB0_MRT2_DISCARD_SRC                   = 0x0000002f,
    SX_PERF_SEL_DB0_MRT2_SINGLE_QUADS                  = 0x00000030,
    SX_PERF_SEL_DB0_MRT2_DOUBLE_QUADS                  = 0x00000031,
    SX_PERF_SEL_DB0_MRT3_BLEND_BYPASS                  = 0x00000032,
    SX_PERF_SEL_DB0_MRT3_DONT_RD_DEST                  = 0x00000033,
    SX_PERF_SEL_DB0_MRT3_DISCARD_SRC                   = 0x00000034,
    SX_PERF_SEL_DB0_MRT3_SINGLE_QUADS                  = 0x00000035,
    SX_PERF_SEL_DB0_MRT3_DOUBLE_QUADS                  = 0x00000036,
    SX_PERF_SEL_DB0_MRT4_BLEND_BYPASS                  = 0x00000037,
    SX_PERF_SEL_DB0_MRT4_DONT_RD_DEST                  = 0x00000038,
    SX_PERF_SEL_DB0_MRT4_DISCARD_SRC                   = 0x00000039,
    SX_PERF_SEL_DB0_MRT4_SINGLE_QUADS                  = 0x0000003a,
    SX_PERF_SEL_DB0_MRT4_DOUBLE_QUADS                  = 0x0000003b,
    SX_PERF_SEL_DB0_MRT5_BLEND_BYPASS                  = 0x0000003c,
    SX_PERF_SEL_DB0_MRT5_DONT_RD_DEST                  = 0x0000003d,
    SX_PERF_SEL_DB0_MRT5_DISCARD_SRC                   = 0x0000003e,
    SX_PERF_SEL_DB0_MRT5_SINGLE_QUADS                  = 0x0000003f,
    SX_PERF_SEL_DB0_MRT5_DOUBLE_QUADS                  = 0x00000040,
    SX_PERF_SEL_DB0_MRT6_BLEND_BYPASS                  = 0x00000041,
    SX_PERF_SEL_DB0_MRT6_DONT_RD_DEST                  = 0x00000042,
    SX_PERF_SEL_DB0_MRT6_DISCARD_SRC                   = 0x00000043,
    SX_PERF_SEL_DB0_MRT6_SINGLE_QUADS                  = 0x00000044,
    SX_PERF_SEL_DB0_MRT6_DOUBLE_QUADS                  = 0x00000045,
    SX_PERF_SEL_DB0_MRT7_BLEND_BYPASS                  = 0x00000046,
    SX_PERF_SEL_DB0_MRT7_DONT_RD_DEST                  = 0x00000047,
    SX_PERF_SEL_DB0_MRT7_DISCARD_SRC                   = 0x00000048,
    SX_PERF_SEL_DB0_MRT7_SINGLE_QUADS                  = 0x00000049,
    SX_PERF_SEL_DB0_MRT7_DOUBLE_QUADS                  = 0x0000004a,
    SX_PERF_SEL_DB1_A2M_DISCARD_QUADS                  = 0x0000004b,
    SX_PERF_SEL_DB1_MRT0_BLEND_BYPASS                  = 0x0000004c,
    SX_PERF_SEL_DB1_MRT0_DONT_RD_DEST                  = 0x0000004d,
    SX_PERF_SEL_DB1_MRT0_DISCARD_SRC                   = 0x0000004e,
    SX_PERF_SEL_DB1_MRT0_SINGLE_QUADS                  = 0x0000004f,
    SX_PERF_SEL_DB1_MRT0_DOUBLE_QUADS                  = 0x00000050,
    SX_PERF_SEL_DB1_MRT1_BLEND_BYPASS                  = 0x00000051,
    SX_PERF_SEL_DB1_MRT1_DONT_RD_DEST                  = 0x00000052,
    SX_PERF_SEL_DB1_MRT1_DISCARD_SRC                   = 0x00000053,
    SX_PERF_SEL_DB1_MRT1_SINGLE_QUADS                  = 0x00000054,
    SX_PERF_SEL_DB1_MRT1_DOUBLE_QUADS                  = 0x00000055,
    SX_PERF_SEL_DB1_MRT2_BLEND_BYPASS                  = 0x00000056,
    SX_PERF_SEL_DB1_MRT2_DONT_RD_DEST                  = 0x00000057,
    SX_PERF_SEL_DB1_MRT2_DISCARD_SRC                   = 0x00000058,
    SX_PERF_SEL_DB1_MRT2_SINGLE_QUADS                  = 0x00000059,
    SX_PERF_SEL_DB1_MRT2_DOUBLE_QUADS                  = 0x0000005a,
    SX_PERF_SEL_DB1_MRT3_BLEND_BYPASS                  = 0x0000005b,
    SX_PERF_SEL_DB1_MRT3_DONT_RD_DEST                  = 0x0000005c,
    SX_PERF_SEL_DB1_MRT3_DISCARD_SRC                   = 0x0000005d,
    SX_PERF_SEL_DB1_MRT3_SINGLE_QUADS                  = 0x0000005e,
    SX_PERF_SEL_DB1_MRT3_DOUBLE_QUADS                  = 0x0000005f,
    SX_PERF_SEL_DB1_MRT4_BLEND_BYPASS                  = 0x00000060,
    SX_PERF_SEL_DB1_MRT4_DONT_RD_DEST                  = 0x00000061,
    SX_PERF_SEL_DB1_MRT4_DISCARD_SRC                   = 0x00000062,
    SX_PERF_SEL_DB1_MRT4_SINGLE_QUADS                  = 0x00000063,
    SX_PERF_SEL_DB1_MRT4_DOUBLE_QUADS                  = 0x00000064,
    SX_PERF_SEL_DB1_MRT5_BLEND_BYPASS                  = 0x00000065,
    SX_PERF_SEL_DB1_MRT5_DONT_RD_DEST                  = 0x00000066,
    SX_PERF_SEL_DB1_MRT5_DISCARD_SRC                   = 0x00000067,
    SX_PERF_SEL_DB1_MRT5_SINGLE_QUADS                  = 0x00000068,
    SX_PERF_SEL_DB1_MRT5_DOUBLE_QUADS                  = 0x00000069,
    SX_PERF_SEL_DB1_MRT6_BLEND_BYPASS                  = 0x0000006a,
    SX_PERF_SEL_DB1_MRT6_DONT_RD_DEST                  = 0x0000006b,
    SX_PERF_SEL_DB1_MRT6_DISCARD_SRC                   = 0x0000006c,
    SX_PERF_SEL_DB1_MRT6_SINGLE_QUADS                  = 0x0000006d,
    SX_PERF_SEL_DB1_MRT6_DOUBLE_QUADS                  = 0x0000006e,
    SX_PERF_SEL_DB1_MRT7_BLEND_BYPASS                  = 0x0000006f,
    SX_PERF_SEL_DB1_MRT7_DONT_RD_DEST                  = 0x00000070,
    SX_PERF_SEL_DB1_MRT7_DISCARD_SRC                   = 0x00000071,
    SX_PERF_SEL_DB1_MRT7_SINGLE_QUADS                  = 0x00000072,
    SX_PERF_SEL_DB1_MRT7_DOUBLE_QUADS                  = 0x00000073,
    SX_PERF_SEL_DB2_A2M_DISCARD_QUADS                  = 0x00000074,
    SX_PERF_SEL_DB2_MRT0_BLEND_BYPASS                  = 0x00000075,
    SX_PERF_SEL_DB2_MRT0_DONT_RD_DEST                  = 0x00000076,
    SX_PERF_SEL_DB2_MRT0_DISCARD_SRC                   = 0x00000077,
    SX_PERF_SEL_DB2_MRT0_SINGLE_QUADS                  = 0x00000078,
    SX_PERF_SEL_DB2_MRT0_DOUBLE_QUADS                  = 0x00000079,
    SX_PERF_SEL_DB2_MRT1_BLEND_BYPASS                  = 0x0000007a,
    SX_PERF_SEL_DB2_MRT1_DONT_RD_DEST                  = 0x0000007b,
    SX_PERF_SEL_DB2_MRT1_DISCARD_SRC                   = 0x0000007c,
    SX_PERF_SEL_DB2_MRT1_SINGLE_QUADS                  = 0x0000007d,
    SX_PERF_SEL_DB2_MRT1_DOUBLE_QUADS                  = 0x0000007e,
    SX_PERF_SEL_DB2_MRT2_BLEND_BYPASS                  = 0x0000007f,
    SX_PERF_SEL_DB2_MRT2_DONT_RD_DEST                  = 0x00000080,
    SX_PERF_SEL_DB2_MRT2_DISCARD_SRC                   = 0x00000081,
    SX_PERF_SEL_DB2_MRT2_SINGLE_QUADS                  = 0x00000082,
    SX_PERF_SEL_DB2_MRT2_DOUBLE_QUADS                  = 0x00000083,
    SX_PERF_SEL_DB2_MRT3_BLEND_BYPASS                  = 0x00000084,
    SX_PERF_SEL_DB2_MRT3_DONT_RD_DEST                  = 0x00000085,
    SX_PERF_SEL_DB2_MRT3_DISCARD_SRC                   = 0x00000086,
    SX_PERF_SEL_DB2_MRT3_SINGLE_QUADS                  = 0x00000087,
    SX_PERF_SEL_DB2_MRT3_DOUBLE_QUADS                  = 0x00000088,
    SX_PERF_SEL_DB2_MRT4_BLEND_BYPASS                  = 0x00000089,
    SX_PERF_SEL_DB2_MRT4_DONT_RD_DEST                  = 0x0000008a,
    SX_PERF_SEL_DB2_MRT4_DISCARD_SRC                   = 0x0000008b,
    SX_PERF_SEL_DB2_MRT4_SINGLE_QUADS                  = 0x0000008c,
    SX_PERF_SEL_DB2_MRT4_DOUBLE_QUADS                  = 0x0000008d,
    SX_PERF_SEL_DB2_MRT5_BLEND_BYPASS                  = 0x0000008e,
    SX_PERF_SEL_DB2_MRT5_DONT_RD_DEST                  = 0x0000008f,
    SX_PERF_SEL_DB2_MRT5_DISCARD_SRC                   = 0x00000090,
    SX_PERF_SEL_DB2_MRT5_SINGLE_QUADS                  = 0x00000091,
    SX_PERF_SEL_DB2_MRT5_DOUBLE_QUADS                  = 0x00000092,
    SX_PERF_SEL_DB2_MRT6_BLEND_BYPASS                  = 0x00000093,
    SX_PERF_SEL_DB2_MRT6_DONT_RD_DEST                  = 0x00000094,
    SX_PERF_SEL_DB2_MRT6_DISCARD_SRC                   = 0x00000095,
    SX_PERF_SEL_DB2_MRT6_SINGLE_QUADS                  = 0x00000096,
    SX_PERF_SEL_DB2_MRT6_DOUBLE_QUADS                  = 0x00000097,
    SX_PERF_SEL_DB2_MRT7_BLEND_BYPASS                  = 0x00000098,
    SX_PERF_SEL_DB2_MRT7_DONT_RD_DEST                  = 0x00000099,
    SX_PERF_SEL_DB2_MRT7_DISCARD_SRC                   = 0x0000009a,
    SX_PERF_SEL_DB2_MRT7_SINGLE_QUADS                  = 0x0000009b,
    SX_PERF_SEL_DB2_MRT7_DOUBLE_QUADS                  = 0x0000009c,
    SX_PERF_SEL_DB3_A2M_DISCARD_QUADS                  = 0x0000009d,
    SX_PERF_SEL_DB3_MRT0_BLEND_BYPASS                  = 0x0000009e,
    SX_PERF_SEL_DB3_MRT0_DONT_RD_DEST                  = 0x0000009f,
    SX_PERF_SEL_DB3_MRT0_DISCARD_SRC                   = 0x000000a0,
    SX_PERF_SEL_DB3_MRT0_SINGLE_QUADS                  = 0x000000a1,
    SX_PERF_SEL_DB3_MRT0_DOUBLE_QUADS                  = 0x000000a2,
    SX_PERF_SEL_DB3_MRT1_BLEND_BYPASS                  = 0x000000a3,
    SX_PERF_SEL_DB3_MRT1_DONT_RD_DEST                  = 0x000000a4,
    SX_PERF_SEL_DB3_MRT1_DISCARD_SRC                   = 0x000000a5,
    SX_PERF_SEL_DB3_MRT1_SINGLE_QUADS                  = 0x000000a6,
    SX_PERF_SEL_DB3_MRT1_DOUBLE_QUADS                  = 0x000000a7,
    SX_PERF_SEL_DB3_MRT2_BLEND_BYPASS                  = 0x000000a8,
    SX_PERF_SEL_DB3_MRT2_DONT_RD_DEST                  = 0x000000a9,
    SX_PERF_SEL_DB3_MRT2_DISCARD_SRC                   = 0x000000aa,
    SX_PERF_SEL_DB3_MRT2_SINGLE_QUADS                  = 0x000000ab,
    SX_PERF_SEL_DB3_MRT2_DOUBLE_QUADS                  = 0x000000ac,
    SX_PERF_SEL_DB3_MRT3_BLEND_BYPASS                  = 0x000000ad,
    SX_PERF_SEL_DB3_MRT3_DONT_RD_DEST                  = 0x000000ae,
    SX_PERF_SEL_DB3_MRT3_DISCARD_SRC                   = 0x000000af,
    SX_PERF_SEL_DB3_MRT3_SINGLE_QUADS                  = 0x000000b0,
    SX_PERF_SEL_DB3_MRT3_DOUBLE_QUADS                  = 0x000000b1,
    SX_PERF_SEL_DB3_MRT4_BLEND_BYPASS                  = 0x000000b2,
    SX_PERF_SEL_DB3_MRT4_DONT_RD_DEST                  = 0x000000b3,
    SX_PERF_SEL_DB3_MRT4_DISCARD_SRC                   = 0x000000b4,
    SX_PERF_SEL_DB3_MRT4_SINGLE_QUADS                  = 0x000000b5,
    SX_PERF_SEL_DB3_MRT4_DOUBLE_QUADS                  = 0x000000b6,
    SX_PERF_SEL_DB3_MRT5_BLEND_BYPASS                  = 0x000000b7,
    SX_PERF_SEL_DB3_MRT5_DONT_RD_DEST                  = 0x000000b8,
    SX_PERF_SEL_DB3_MRT5_DISCARD_SRC                   = 0x000000b9,
    SX_PERF_SEL_DB3_MRT5_SINGLE_QUADS                  = 0x000000ba,
    SX_PERF_SEL_DB3_MRT5_DOUBLE_QUADS                  = 0x000000bb,
    SX_PERF_SEL_DB3_MRT6_BLEND_BYPASS                  = 0x000000bc,
    SX_PERF_SEL_DB3_MRT6_DONT_RD_DEST                  = 0x000000bd,
    SX_PERF_SEL_DB3_MRT6_DISCARD_SRC                   = 0x000000be,
    SX_PERF_SEL_DB3_MRT6_SINGLE_QUADS                  = 0x000000bf,
    SX_PERF_SEL_DB3_MRT6_DOUBLE_QUADS                  = 0x000000c0,
    SX_PERF_SEL_DB3_MRT7_BLEND_BYPASS                  = 0x000000c1,
    SX_PERF_SEL_DB3_MRT7_DONT_RD_DEST                  = 0x000000c2,
    SX_PERF_SEL_DB3_MRT7_DISCARD_SRC                   = 0x000000c3,
    SX_PERF_SEL_DB3_MRT7_SINGLE_QUADS                  = 0x000000c4,
    SX_PERF_SEL_DB3_MRT7_DOUBLE_QUADS                  = 0x000000c5,
    SX_PERF_SEL_PA_REQ_LATENCY                         = 0x000000c6,
    SX_PERF_SEL_POS_SCBD_STALL                         = 0x000000c7,
    SX_PERF_SEL_COL_SCBD_STALL                         = 0x000000c8,
    SX_PERF_SEL_CLOCK_DROP_STALL                       = 0x000000c9,
    SX_PERF_SEL_GATE_EN5                               = 0x000000ca,
    SX_PERF_SEL_GATE_EN6                               = 0x000000cb,
    SX_PERF_SEL_DB0_SIZE                               = 0x000000cc,
    SX_PERF_SEL_DB1_SIZE                               = 0x000000cd,
    SX_PERF_SEL_DB2_SIZE                               = 0x000000ce,
    SX_PERF_SEL_DB3_SIZE                               = 0x000000cf,
    SX_PERF_SEL_SPLITMODE__GFX10                       = 0x000000d0,
    SX_PERF_SEL_COL_SCBD0_STALL__GFX10                 = 0x000000d1,
    SX_PERF_SEL_COL_SCBD1_STALL__GFX10                 = 0x000000d2,
    SX_PERF_SEL_IDX_STALL_CYCLES__GFX10                = 0x000000d3,
    SX_PERF_SEL_IDX_IDLE_CYCLES__GFX10                 = 0x000000d4,
    SX_PERF_SEL_IDX_REQ__GFX10                         = 0x000000d5,
    SX_PERF_SEL_IDX_RET__GFX10                         = 0x000000d6,
    SX_PERF_SEL_IDX_REQ_LATENCY__GFX10                 = 0x000000d7,
    SX_PERF_SEL_IDX_SCBD_STALL__GFX10                  = 0x000000d8,
    SX_PERF_SEL_GATE_EN7__GFX10                        = 0x000000d9,
    SX_PERF_SEL_GATE_EN8__GFX10                        = 0x000000da,
    SX_PERF_SEL_SH_IDX_STARVE__GFX10                   = 0x000000db,
    SX_PERF_SEL_IDX_BUSY__GFX10                        = 0x000000dc,
    SX_PERF_SEL_RB0_STALL_DUE_TO_ORDERING__GFX101PLUS  = 0x000000dd,
    SX_PERF_SEL_RB1_STALL_DUE_TO_ORDERING__GFX101PLUS  = 0x000000de,
    SX_PERF_SEL_RB2_STALL_DUE_TO_ORDERING__GFX101PLUS  = 0x000000df,
    SX_PERF_SEL_RB3_STALL_DUE_TO_ORDERING__GFX101PLUS  = 0x000000e0,
} SX_PERFCOUNTER_VALS;

constexpr unsigned int MaxSxPerfcounterValsGfx09       = SX_PERF_SEL_DB3_SIZE;
constexpr unsigned int MaxSxPerfcounterValsGfx101Plus  = SX_PERF_SEL_RB3_STALL_DUE_TO_ORDERING__GFX101PLUS;

typedef enum TA_PERFCOUNT_SEL {
    TA_PERF_SEL_NULL                                   = 0x00000000,
    TA_PERF_SEL_gradient_busy                          = 0x00000007,
    TA_PERF_SEL_gradient_fifo_busy                     = 0x00000008,
    TA_PERF_SEL_lod_busy                               = 0x00000009,
    TA_PERF_SEL_lod_fifo_busy                          = 0x0000000a,
    TA_PERF_SEL_addresser_busy                         = 0x0000000b,
    TA_PERF_SEL_addresser_fifo_busy                    = 0x0000000c,
    TA_PERF_SEL_aligner_busy                           = 0x0000000d,
    TA_PERF_SEL_write_path_busy                        = 0x0000000e,
    TA_PERF_SEL_ta_busy                                = 0x0000000f,
    TA_PERF_SEL_RESERVED_29                            = 0x0000001d,
    TA_PERF_SEL_total_wavefronts                       = 0x00000020,
    TA_PERF_SEL_gradient_cycles                        = 0x00000021,
    TA_PERF_SEL_walker_cycles                          = 0x00000022,
    TA_PERF_SEL_aligner_cycles                         = 0x00000023,
    TA_PERF_SEL_image_wavefronts                       = 0x00000024,
    TA_PERF_SEL_image_read_wavefronts                  = 0x00000025,
    TA_PERF_SEL_image_write_wavefronts                 = 0x00000026,
    TA_PERF_SEL_image_atomic_wavefronts                = 0x00000027,
    TA_PERF_SEL_RESERVED_43                            = 0x0000002b,
    TA_PERF_SEL_buffer_wavefronts                      = 0x0000002c,
    TA_PERF_SEL_buffer_read_wavefronts                 = 0x0000002d,
    TA_PERF_SEL_buffer_write_wavefronts                = 0x0000002e,
    TA_PERF_SEL_buffer_atomic_wavefronts               = 0x0000002f,
    TA_PERF_SEL_buffer_total_cycles                    = 0x00000031,
    TA_PERF_SEL_addr_stalled_by_tc_cycles              = 0x00000036,
    TA_PERF_SEL_addr_stalled_by_td_cycles              = 0x00000037,
    TA_PERF_SEL_addresser_stalled_by_aligner_only_cycles = 0x00000039,
    TA_PERF_SEL_addresser_stalled_cycles               = 0x0000003a,
    TA_PERF_SEL_aniso_stalled_by_addresser_only_cycles = 0x0000003b,
    TA_PERF_SEL_aniso_stalled_cycles                   = 0x0000003c,
    TA_PERF_SEL_deriv_stalled_by_aniso_only_cycles     = 0x0000003d,
    TA_PERF_SEL_deriv_stalled_cycles                   = 0x0000003e,
    TA_PERF_SEL_aniso_gt1_cycle_quads                  = 0x0000003f,
    TA_PERF_SEL_color_1_cycle_pixels                   = 0x00000040,
    TA_PERF_SEL_color_2_cycle_pixels                   = 0x00000041,
    TA_PERF_SEL_color_3_cycle_pixels                   = 0x00000042,
    TA_PERF_SEL_mip_1_cycle_pixels                     = 0x00000044,
    TA_PERF_SEL_mip_2_cycle_pixels                     = 0x00000045,
    TA_PERF_SEL_vol_1_cycle_pixels                     = 0x00000046,
    TA_PERF_SEL_vol_2_cycle_pixels                     = 0x00000047,
    TA_PERF_SEL_bilin_point_1_cycle_pixels             = 0x00000048,
    TA_PERF_SEL_mipmap_lod_0_samples                   = 0x00000049,
    TA_PERF_SEL_mipmap_lod_1_samples                   = 0x0000004a,
    TA_PERF_SEL_mipmap_lod_2_samples                   = 0x0000004b,
    TA_PERF_SEL_mipmap_lod_3_samples                   = 0x0000004c,
    TA_PERF_SEL_mipmap_lod_4_samples                   = 0x0000004d,
    TA_PERF_SEL_mipmap_lod_5_samples                   = 0x0000004e,
    TA_PERF_SEL_mipmap_lod_6_samples                   = 0x0000004f,
    TA_PERF_SEL_mipmap_lod_7_samples                   = 0x00000050,
    TA_PERF_SEL_mipmap_lod_8_samples                   = 0x00000051,
    TA_PERF_SEL_mipmap_lod_9_samples                   = 0x00000052,
    TA_PERF_SEL_mipmap_lod_10_samples                  = 0x00000053,
    TA_PERF_SEL_mipmap_lod_11_samples                  = 0x00000054,
    TA_PERF_SEL_mipmap_lod_12_samples                  = 0x00000055,
    TA_PERF_SEL_mipmap_lod_13_samples                  = 0x00000056,
    TA_PERF_SEL_mipmap_lod_14_samples                  = 0x00000057,
    TA_PERF_SEL_mipmap_invalid_samples                 = 0x00000058,
    TA_PERF_SEL_aniso_1_cycle_quads                    = 0x00000059,
    TA_PERF_SEL_aniso_2_cycle_quads                    = 0x0000005a,
    TA_PERF_SEL_aniso_4_cycle_quads                    = 0x0000005b,
    TA_PERF_SEL_aniso_6_cycle_quads                    = 0x0000005c,
    TA_PERF_SEL_aniso_8_cycle_quads                    = 0x0000005d,
    TA_PERF_SEL_aniso_10_cycle_quads                   = 0x0000005e,
    TA_PERF_SEL_aniso_12_cycle_quads                   = 0x0000005f,
    TA_PERF_SEL_aniso_14_cycle_quads                   = 0x00000060,
    TA_PERF_SEL_aniso_16_cycle_quads                   = 0x00000061,
    TA_PERF_SEL_write_path_input_cycles                = 0x00000062,
    TA_PERF_SEL_write_path_output_cycles               = 0x00000063,
    TA_PERF_SEL_flat_wavefronts                        = 0x00000064,
    TA_PERF_SEL_flat_read_wavefronts                   = 0x00000065,
    TA_PERF_SEL_flat_write_wavefronts                  = 0x00000066,
    TA_PERF_SEL_flat_atomic_wavefronts                 = 0x00000067,
    TA_PERF_SEL_reg_sclk_vld                           = 0x00000069,
    TA_PERF_SEL_local_cg_dyn_sclk_grp0_en              = 0x0000006a,
    TA_PERF_SEL_local_cg_dyn_sclk_grp1_en              = 0x0000006b,
    TA_PERF_SEL_local_cg_dyn_sclk_grp1_mems_en         = 0x0000006c,
    TA_PERF_SEL_local_cg_dyn_sclk_grp4_en              = 0x0000006d,
    TA_PERF_SEL_local_cg_dyn_sclk_grp5_en              = 0x0000006e,
    TA_PERF_SEL_sh_fifo_busy__GFX09                    = 0x00000001,
    TA_PERF_SEL_sh_fifo_cmd_busy__GFX09                = 0x00000002,
    TA_PERF_SEL_sh_fifo_addr_busy__GFX09               = 0x00000003,
    TA_PERF_SEL_sh_fifo_data_busy__GFX09               = 0x00000004,
    TA_PERF_SEL_sh_fifo_data_sfifo_busy__GFX09         = 0x00000005,
    TA_PERF_SEL_sh_fifo_data_tfifo_busy__GFX09         = 0x00000006,
    TA_PERF_SEL_sq_ta_cmd_cycles__GFX09                = 0x00000010,
    TA_PERF_SEL_sp_ta_addr_cycles__GFX09               = 0x00000011,
    TA_PERF_SEL_sp_ta_data_cycles__GFX09               = 0x00000012,
    TA_PERF_SEL_ta_fa_data_state_cycles__GFX09         = 0x00000013,
    TA_PERF_SEL_sh_fifo_addr_waiting_on_cmd_cycles__GFX09 = 0x00000014,
    TA_PERF_SEL_sh_fifo_cmd_waiting_on_addr_cycles__GFX09 = 0x00000015,
    TA_PERF_SEL_sh_fifo_addr_starved_while_busy_cycles__GFX09 = 0x00000016,
    TA_PERF_SEL_sh_fifo_cmd_starved_while_busy_cycles__GFX09 = 0x00000017,
    TA_PERF_SEL_sh_fifo_data_waiting_on_data_state_cycles__GFX09 = 0x00000018,
    TA_PERF_SEL_sh_fifo_data_state_waiting_on_data_cycles__GFX09 = 0x00000019,
    TA_PERF_SEL_sh_fifo_data_starved_while_busy_cycles__GFX09 = 0x0000001a,
    TA_PERF_SEL_sh_fifo_data_state_starved_while_busy_cycles__GFX09 = 0x0000001b,
    TA_PERF_SEL_ta_sh_fifo_starved__GFX09              = 0x0000001c,
    TA_PERF_SEL_sh_fifo_addr_cycles__GFX09             = 0x0000001e,
    TA_PERF_SEL_sh_fifo_data_cycles__GFX09             = 0x0000001f,
    TA_PERF_SEL_image_total_cycles__GFX09              = 0x00000028,
    TA_PERF_SEL_RESERVED_41__GFX09                     = 0x00000029,
    TA_PERF_SEL_RESERVED_42__GFX09                     = 0x0000002a,
    TA_PERF_SEL_buffer_coalescable_wavefronts__GFX09   = 0x00000030,
    TA_PERF_SEL_buffer_coalescable_addr_multicycled_cycles__GFX09 = 0x00000032,
    TA_PERF_SEL_buffer_coalescable_clamp_16kdword_multicycled_cycles__GFX09 = 0x00000033,
    TA_PERF_SEL_buffer_coalesced_read_cycles__GFX09    = 0x00000034,
    TA_PERF_SEL_buffer_coalesced_write_cycles__GFX09   = 0x00000035,
    TA_PERF_SEL_data_stalled_by_tc_cycles__GFX09       = 0x00000038,
    TA_PERF_SEL_color_4_cycle_pixels__GFX09            = 0x00000043,
    TA_PERF_SEL_flat_coalesceable_wavefronts__GFX09    = 0x00000068,
    TA_PERF_SEL_xnack_on_phase0__GFX09                 = 0x0000006f,
    TA_PERF_SEL_xnack_on_phase1__GFX09                 = 0x00000070,
    TA_PERF_SEL_xnack_on_phase2__GFX09                 = 0x00000071,
    TA_PERF_SEL_xnack_on_phase3__GFX09                 = 0x00000072,
    TA_PERF_SEL_first_xnack_on_phase0__GFX09           = 0x00000073,
    TA_PERF_SEL_first_xnack_on_phase1__GFX09           = 0x00000074,
    TA_PERF_SEL_first_xnack_on_phase2__GFX09           = 0x00000075,
    TA_PERF_SEL_first_xnack_on_phase3__GFX09           = 0x00000076,
    TA_PERF_SEL_RESERVED_1__GFX10                      = 0x00000001,
    TA_PERF_SEL_RESERVED_2__GFX10                      = 0x00000002,
    TA_PERF_SEL_RESERVED_3__GFX10                      = 0x00000003,
    TA_PERF_SEL_RESERVED_4__GFX10                      = 0x00000004,
    TA_PERF_SEL_RESERVED_5__GFX10                      = 0x00000005,
    TA_PERF_SEL_RESERVED_6__GFX10                      = 0x00000006,
    TA_PERF_SEL_RESERVED_16__GFX10                     = 0x00000010,
    TA_PERF_SEL_RESERVED_17__GFX10                     = 0x00000011,
    TA_PERF_SEL_RESERVED_18__GFX10                     = 0x00000012,
    TA_PERF_SEL_RESERVED_19__GFX10                     = 0x00000013,
    TA_PERF_SEL_RESERVED_20__GFX10                     = 0x00000014,
    TA_PERF_SEL_RESERVED_21__GFX10                     = 0x00000015,
    TA_PERF_SEL_RESERVED_22__GFX10                     = 0x00000016,
    TA_PERF_SEL_RESERVED_23__GFX10                     = 0x00000017,
    TA_PERF_SEL_RESERVED_24__GFX10                     = 0x00000018,
    TA_PERF_SEL_RESERVED_25__GFX10                     = 0x00000019,
    TA_PERF_SEL_RESERVED_26__GFX10                     = 0x0000001a,
    TA_PERF_SEL_RESERVED_27__GFX10                     = 0x0000001b,
    TA_PERF_SEL_RESERVED_28__GFX10                     = 0x0000001c,
    TA_PERF_SEL_RESERVED_30__GFX10                     = 0x0000001e,
    TA_PERF_SEL_RESERVED_31__GFX10                     = 0x0000001f,
    TA_PERF_SEL_image_sampler_total_cycles__GFX10      = 0x00000028,
    TA_PERF_SEL_image_nosampler_total_cycles__GFX10    = 0x00000029,
    TA_PERF_SEL_flat_total_cycles__GFX10               = 0x0000002a,
    TA_PERF_SEL_RESERVED_48__GFX10                     = 0x00000030,
    TA_PERF_SEL_RESERVED_50__GFX10                     = 0x00000032,
    TA_PERF_SEL_RESERVED_51__GFX10                     = 0x00000033,
    TA_PERF_SEL_RESERVED_52__GFX10                     = 0x00000034,
    TA_PERF_SEL_RESERVED_53__GFX10                     = 0x00000035,
    TA_PERF_SEL_RESERVED_56__GFX10                     = 0x00000038,
    TA_PERF_SEL_RESERVED_67__GFX10                     = 0x00000043,
    TA_PERF_SEL_RESERVED_104__GFX10                    = 0x00000068,
    TA_PERF_SEL_xnack__GFX10                           = 0x0000006f,
    TA_PERF_SEL_RESERVED_112__GFX10                    = 0x00000070,
    TA_PERF_SEL_RESERVED_113__GFX10                    = 0x00000071,
    TA_PERF_SEL_RESERVED_114__GFX10                    = 0x00000072,
    TA_PERF_SEL_first_xnack__GFX10                     = 0x00000073,
    TA_PERF_SEL_RESERVED_116__GFX10                    = 0x00000074,
    TA_PERF_SEL_RESERVED_117__GFX10                    = 0x00000075,
    TA_PERF_SEL_RESERVED_118__GFX10                    = 0x00000076,
    TA_PERF_SEL_RESERVED_119__GFX10                    = 0x00000077,
    TA_PERF_SEL_RESERVED_120__GFX10                    = 0x00000078,
    TA_PERF_SEL_RESERVED_121__GFX10                    = 0x00000079,
    TA_PERF_SEL_RESERVED_122__GFX10                    = 0x0000007a,
    TA_PERF_SEL_RESERVED_123__GFX10                    = 0x0000007b,
    TA_PERF_SEL_RESERVED_124__GFX10                    = 0x0000007c,
    TA_PERF_SEL_RESERVED_125__GFX10                    = 0x0000007d,
    TA_PERF_SEL_RESERVED_126__GFX10                    = 0x0000007e,
    TA_PERF_SEL_RESERVED_127__GFX10                    = 0x0000007f,
    TA_PERF_SEL_in_busy__GFX10                         = 0x00000080,
    TA_PERF_SEL_in_fifos_busy__GFX10                   = 0x00000081,
    TA_PERF_SEL_in_cfifo_busy__GFX10                   = 0x00000082,
    TA_PERF_SEL_in_qfifo_busy__GFX10                   = 0x00000083,
    TA_PERF_SEL_in_wfifo_busy__GFX10                   = 0x00000084,
    TA_PERF_SEL_in_rfifo_busy__GFX10                   = 0x00000085,
    TA_PERF_SEL_bf_busy__GFX10                         = 0x00000086,
    TA_PERF_SEL_ns_busy__GFX10                         = 0x00000087,
    TA_PERF_SEL_smp_busy_ns_idle__GFX10                = 0x00000088,
    TA_PERF_SEL_smp_idle_ns_busy__GFX10                = 0x00000089,
    TA_PERF_SEL_RESERVED_138__GFX10                    = 0x0000008a,
    TA_PERF_SEL_RESERVED_139__GFX10                    = 0x0000008b,
    TA_PERF_SEL_RESERVED_140__GFX10                    = 0x0000008c,
    TA_PERF_SEL_RESERVED_141__GFX10                    = 0x0000008d,
    TA_PERF_SEL_RESERVED_142__GFX10                    = 0x0000008e,
    TA_PERF_SEL_RESERVED_143__GFX10                    = 0x0000008f,
    TA_PERF_SEL_vmemcmd_cycles__GFX10                  = 0x00000090,
    TA_PERF_SEL_vmemreq_cycles__GFX10                  = 0x00000091,
    TA_PERF_SEL_in_waiting_on_req_cycles__GFX10        = 0x00000092,
    TA_PERF_SEL_in_waiting_on_cmd_cycles__GFX10        = 0x00000093,
    TA_PERF_SEL_in_waiting_on_any_cycles__GFX10        = 0x00000094,
    TA_PERF_SEL_RESERVED_149__GFX10                    = 0x00000095,
    TA_PERF_SEL_in_addr_cycles__GFX10                  = 0x00000096,
    TA_PERF_SEL_in_data_cycles__GFX10                  = 0x00000097,
    TA_PERF_SEL_addr_stalled_by_xnack_cycles__GFX10    = 0x00000098,
    TA_PERF_SEL_RESERVED_153__GFX10                    = 0x00000099,
    TA_PERF_SEL_RESERVED_154__GFX10                    = 0x0000009a,
    TA_PERF_SEL_RESERVED_155__GFX10                    = 0x0000009b,
    TA_PERF_SEL_RESERVED_156__GFX10                    = 0x0000009c,
    TA_PERF_SEL_RESERVED_157__GFX10                    = 0x0000009d,
    TA_PERF_SEL_RESERVED_158__GFX10                    = 0x0000009e,
    TA_PERF_SEL_RESERVED_159__GFX10                    = 0x0000009f,
    TA_PERF_SEL_point_sampled_quads__GFX10             = 0x000000a0,
    TA_PERF_SEL_RESERVED_161__GFX10                    = 0x000000a1,
    TA_PERF_SEL_RESERVED_162__GFX10                    = 0x000000a2,
    TA_PERF_SEL_RESERVED_163__GFX10                    = 0x000000a3,
    TA_PERF_SEL_RESERVED_164__GFX10                    = 0x000000a4,
    TA_PERF_SEL_RESERVED_165__GFX10                    = 0x000000a5,
    TA_PERF_SEL_RESERVED_166__GFX10                    = 0x000000a6,
    TA_PERF_SEL_RESERVED_167__GFX10                    = 0x000000a7,
    TA_PERF_SEL_RESERVED_168__GFX10                    = 0x000000a8,
    TA_PERF_SEL_RESERVED_169__GFX10                    = 0x000000a9,
    TA_PERF_SEL_RESERVED_170__GFX10                    = 0x000000aa,
    TA_PERF_SEL_RESERVED_171__GFX10                    = 0x000000ab,
    TA_PERF_SEL_RESERVED_172__GFX10                    = 0x000000ac,
    TA_PERF_SEL_RESERVED_173__GFX10                    = 0x000000ad,
    TA_PERF_SEL_RESERVED_188__GFX10                    = 0x000000bc,
    TA_PERF_SEL_RESERVED_189__GFX10                    = 0x000000bd,
    TA_PERF_SEL_RESERVED_190__GFX10                    = 0x000000be,
    TA_PERF_SEL_RESERVED_191__GFX10                    = 0x000000bf,
    TA_PERF_SEL_RESERVED_192__GFX10                    = 0x000000c0,
    TA_PERF_SEL_RESERVED_193__GFX10                    = 0x000000c1,
    TA_PERF_SEL_RESERVED_194__GFX10                    = 0x000000c2,
    TA_PERF_SEL_RESERVED_195__GFX10                    = 0x000000c3,
    TA_PERF_SEL_RESERVED_196__GFX10                    = 0x000000c4,
    TA_PERF_SEL_RESERVED_197__GFX10                    = 0x000000c5,
    TA_PERF_SEL_RESERVED_198__GFX10                    = 0x000000c6,
    TA_PERF_SEL_RESERVED_199__GFX10                    = 0x000000c7,
    TA_PERF_SEL_RESERVED_200__GFX10                    = 0x000000c8,
    TA_PERF_SEL_RESERVED_201__GFX10                    = 0x000000c9,
    TA_PERF_SEL_RESERVED_202__GFX10                    = 0x000000ca,
    TA_PERF_SEL_RESERVED_203__GFX10                    = 0x000000cb,
    TA_PERF_SEL_RESERVED_204__GFX10                    = 0x000000cc,
    TA_PERF_SEL_RESERVED_205__GFX10                    = 0x000000cd,
    TA_PERF_SEL_RESERVED_206__GFX10                    = 0x000000ce,
    TA_PERF_SEL_RESERVED_207__GFX10                    = 0x000000cf,
    TA_PERF_SEL_RESERVED_208__GFX10                    = 0x000000d0,
    TA_PERF_SEL_RESERVED_209__GFX10                    = 0x000000d1,
    TA_PERF_SEL_RESERVED_210__GFX10                    = 0x000000d2,
    TA_PERF_SEL_RESERVED_211__GFX10                    = 0x000000d3,
    TA_PERF_SEL_RESERVED_212__GFX10                    = 0x000000d4,
    TA_PERF_SEL_RESERVED_213__GFX10                    = 0x000000d5,
    TA_PERF_SEL_RESERVED_214__GFX10                    = 0x000000d6,
    TA_PERF_SEL_RESERVED_215__GFX10                    = 0x000000d7,
    TA_PERF_SEL_RESERVED_216__GFX10                    = 0x000000d8,
    TA_PERF_SEL_RESERVED_217__GFX10                    = 0x000000d9,
    TA_PERF_SEL_RESERVED_218__GFX10                    = 0x000000da,
    TA_PERF_SEL_RESERVED_219__GFX10                    = 0x000000db,
    TA_PERF_SEL_RESERVED_220__GFX10                    = 0x000000dc,
    TA_PERF_SEL_RESERVED_221__GFX10                    = 0x000000dd,
    TA_PERF_SEL_RESERVED_222__GFX10                    = 0x000000de,
    TA_PERF_SEL_RESERVED_223__GFX10                    = 0x000000df,
    TA_PERF_SEL_sample_path_cycles__GFX10              = 0x000000e0,
    TA_PERF_SEL_nosample_path_cycles__GFX10            = 0x000000e1,
    TA_PERF_SEL_RESERVED_174__NV10                     = 0x000000ae,
    TA_PERF_SEL_RESERVED_175__NV10                     = 0x000000af,
    TA_PERF_SEL_RESERVED_176__NV10                     = 0x000000b0,
    TA_PERF_SEL_RESERVED_177__NV10                     = 0x000000b1,
    TA_PERF_SEL_RESERVED_178__NV10                     = 0x000000b2,
    TA_PERF_SEL_RESERVED_179__NV10                     = 0x000000b3,
    TA_PERF_SEL_RESERVED_180__NV10                     = 0x000000b4,
    TA_PERF_SEL_RESERVED_181__NV10                     = 0x000000b5,
    TA_PERF_SEL_RESERVED_182__NV10                     = 0x000000b6,
    TA_PERF_SEL_RESERVED_183__NV10                     = 0x000000b7,
    TA_PERF_SEL_RESERVED_184__NV10                     = 0x000000b8,
    TA_PERF_SEL_RESERVED_185__NV10                     = 0x000000b9,
    TA_PERF_SEL_RESERVED_186__NV10                     = 0x000000ba,
    TA_PERF_SEL_RESERVED_187__NV10                     = 0x000000bb,
} TA_PERFCOUNT_SEL;

constexpr unsigned int MaxTaPerfcountSelGfx09          = TA_PERF_SEL_first_xnack_on_phase3__GFX09;
constexpr unsigned int MaxTaPerfcountSelGfx10          = TA_PERF_SEL_nosample_path_cycles__GFX10;

typedef enum TA_TC_ADDR_MODES {
    TA_TC_ADDR_MODE_DEFAULT                            = 0x00000000,
    TA_TC_ADDR_MODE_COMP0                              = 0x00000001,
    TA_TC_ADDR_MODE_COMP1                              = 0x00000002,
    TA_TC_ADDR_MODE_COMP2                              = 0x00000003,
    TA_TC_ADDR_MODE_COMP3                              = 0x00000004,
    TA_TC_ADDR_MODE_UNALIGNED                          = 0x00000005,
    TA_TC_ADDR_MODE_BORDER_COLOR                       = 0x00000006,
} TA_TC_ADDR_MODES;

typedef enum TA_TC_REQ_MODES {
    TA_TC_REQ_MODE_BORDER                              = 0x00000000,
    TA_TC_REQ_MODE_TEX2                                = 0x00000001,
    TA_TC_REQ_MODE_TEX1                                = 0x00000002,
    TA_TC_REQ_MODE_TEX0                                = 0x00000003,
    TA_TC_REQ_MODE_NORMAL                              = 0x00000004,
    TA_TC_REQ_MODE_DWORD                               = 0x00000005,
    TA_TC_REQ_MODE_BYTE                                = 0x00000006,
    TA_TC_REQ_MODE_BYTE_NV                             = 0x00000007,
} TA_TC_REQ_MODES;

typedef enum TCA_PERF_SEL {
    TCA_PERF_SEL_NONE                                  = 0x00000000,
    TCA_PERF_SEL_CYCLE                                 = 0x00000001,
    TCA_PERF_SEL_BUSY                                  = 0x00000002,
    TCA_PERF_SEL_FORCED_HOLE_TCC0                      = 0x00000003,
    TCA_PERF_SEL_FORCED_HOLE_TCC1                      = 0x00000004,
    TCA_PERF_SEL_FORCED_HOLE_TCC2                      = 0x00000005,
    TCA_PERF_SEL_FORCED_HOLE_TCC3                      = 0x00000006,
    TCA_PERF_SEL_FORCED_HOLE_TCC4                      = 0x00000007,
    TCA_PERF_SEL_FORCED_HOLE_TCC5                      = 0x00000008,
    TCA_PERF_SEL_FORCED_HOLE_TCC6                      = 0x00000009,
    TCA_PERF_SEL_FORCED_HOLE_TCC7                      = 0x0000000a,
    TCA_PERF_SEL_REQ_TCC0                              = 0x0000000b,
    TCA_PERF_SEL_REQ_TCC1                              = 0x0000000c,
    TCA_PERF_SEL_REQ_TCC2                              = 0x0000000d,
    TCA_PERF_SEL_REQ_TCC3                              = 0x0000000e,
    TCA_PERF_SEL_REQ_TCC4                              = 0x0000000f,
    TCA_PERF_SEL_REQ_TCC5                              = 0x00000010,
    TCA_PERF_SEL_REQ_TCC6                              = 0x00000011,
    TCA_PERF_SEL_REQ_TCC7                              = 0x00000012,
    TCA_PERF_SEL_CROSSBAR_DOUBLE_ARB_TCC0              = 0x00000013,
    TCA_PERF_SEL_CROSSBAR_DOUBLE_ARB_TCC1              = 0x00000014,
    TCA_PERF_SEL_CROSSBAR_DOUBLE_ARB_TCC2              = 0x00000015,
    TCA_PERF_SEL_CROSSBAR_DOUBLE_ARB_TCC3              = 0x00000016,
    TCA_PERF_SEL_CROSSBAR_DOUBLE_ARB_TCC4              = 0x00000017,
    TCA_PERF_SEL_CROSSBAR_DOUBLE_ARB_TCC5              = 0x00000018,
    TCA_PERF_SEL_CROSSBAR_DOUBLE_ARB_TCC6              = 0x00000019,
    TCA_PERF_SEL_CROSSBAR_DOUBLE_ARB_TCC7              = 0x0000001a,
    TCA_PERF_SEL_CROSSBAR_STALL_TCC0                   = 0x0000001b,
    TCA_PERF_SEL_CROSSBAR_STALL_TCC1                   = 0x0000001c,
    TCA_PERF_SEL_CROSSBAR_STALL_TCC2                   = 0x0000001d,
    TCA_PERF_SEL_CROSSBAR_STALL_TCC3                   = 0x0000001e,
    TCA_PERF_SEL_CROSSBAR_STALL_TCC4                   = 0x0000001f,
    TCA_PERF_SEL_CROSSBAR_STALL_TCC5                   = 0x00000020,
    TCA_PERF_SEL_CROSSBAR_STALL_TCC6                   = 0x00000021,
    TCA_PERF_SEL_CROSSBAR_STALL_TCC7                   = 0x00000022,
} TCA_PERF_SEL;

constexpr unsigned int MaxTcaPerfSel                   = TCA_PERF_SEL_CROSSBAR_STALL_TCC7;

typedef enum TCC_CACHE_POLICIES {
    TCC_CACHE_POLICY_LRU                               = 0x00000000,
    TCC_CACHE_POLICY_STREAM                            = 0x00000001,
} TCC_CACHE_POLICIES;

typedef enum TCC_MTYPE {
    MTYPE_NC                                           = 0x00000000,
    MTYPE_WC                                           = 0x00000001,
    MTYPE_CC                                           = 0x00000002,
} TCC_MTYPE;

typedef enum TCC_PERF_SEL {
    TCC_PERF_SEL_NONE                                  = 0x00000000,
    TCC_PERF_SEL_CYCLE                                 = 0x00000001,
    TCC_PERF_SEL_BUSY                                  = 0x00000002,
    TCC_PERF_SEL_REQ                                   = 0x00000003,
    TCC_PERF_SEL_STREAMING_REQ                         = 0x00000004,
    TCC_PERF_SEL_COMPRESSED_REQ                        = 0x00000005,
    TCC_PERF_SEL_COMPRESSED_0_REQ                      = 0x00000006,
    TCC_PERF_SEL_COMPRESSED_32_REQ                     = 0x00000007,
    TCC_PERF_SEL_METADATA_REQ                          = 0x00000008,
    TCC_PERF_SEL_NC_REQ                                = 0x00000009,
    TCC_PERF_SEL_UC_REQ                                = 0x0000000a,
    TCC_PERF_SEL_CC_REQ                                = 0x0000000b,
    TCC_PERF_SEL_PROBE                                 = 0x0000000c,
    TCC_PERF_SEL_PROBE_ALL                             = 0x0000000d,
    TCC_PERF_SEL_INTERNAL_PROBE                        = 0x0000000e,
    TCC_PERF_SEL_READ                                  = 0x0000000f,
    TCC_PERF_SEL_WRITE                                 = 0x00000010,
    TCC_PERF_SEL_ATOMIC                                = 0x00000011,
    TCC_PERF_SEL_NOP_ACK                               = 0x00000012,
    TCC_PERF_SEL_NOP_RTN0                              = 0x00000013,
    TCC_PERF_SEL_HIT                                   = 0x00000014,
    TCC_PERF_SEL_SECTOR_HIT                            = 0x00000015,
    TCC_PERF_SEL_MISS                                  = 0x00000016,
    TCC_PERF_SEL_DEWRITE_ALLOCATE_HIT                  = 0x00000017,
    TCC_PERF_SEL_FULLY_WRITTEN_HIT                     = 0x00000018,
    TCC_PERF_SEL_WRITEBACK                             = 0x00000019,
    TCC_PERF_SEL_LATENCY_FIFO_FULL                     = 0x0000001a,
    TCC_PERF_SEL_SRC_FIFO_FULL                         = 0x0000001b,
    TCC_PERF_SEL_HOLE_FIFO_FULL                        = 0x0000001c,
    TCC_PERF_SEL_TOO_MANY_EA_WRREQS_STALL              = 0x00000025,
    TCC_PERF_SEL_TAG_STALL                             = 0x00000032,
    TCC_PERF_SEL_TAG_WRITEBACK_FIFO_FULL_STALL         = 0x00000033,
    TCC_PERF_SEL_TAG_MISS_NOTHING_REPLACEABLE_STALL    = 0x00000034,
    TCC_PERF_SEL_TAG_UNCACHED_WRITE_ATOMIC_FIFO_FULL_STALL = 0x00000035,
    TCC_PERF_SEL_TAG_NO_UNCACHED_WRITE_ATOMIC_ENTRIES_STALL = 0x00000036,
    TCC_PERF_SEL_TAG_PROBE_STALL                       = 0x00000037,
    TCC_PERF_SEL_TAG_PROBE_FILTER_STALL                = 0x00000038,
    TCC_PERF_SEL_TAG_PROBE_FIFO_FULL_STALL             = 0x00000039,
    TCC_PERF_SEL_READ_RETURN_TIMEOUT                   = 0x0000003a,
    TCC_PERF_SEL_WRITEBACK_READ_TIMEOUT                = 0x0000003b,
    TCC_PERF_SEL_READ_RETURN_FULL_BUBBLE               = 0x0000003c,
    TCC_PERF_SEL_BUBBLE                                = 0x0000003d,
    TCC_PERF_SEL_RETURN_ACK                            = 0x0000003e,
    TCC_PERF_SEL_RETURN_DATA                           = 0x0000003f,
    TCC_PERF_SEL_RETURN_HOLE                           = 0x00000040,
    TCC_PERF_SEL_RETURN_ACK_HOLE                       = 0x00000041,
    TCC_PERF_SEL_IB_REQ                                = 0x00000042,
    TCC_PERF_SEL_IB_STALL                              = 0x00000043,
    TCC_PERF_SEL_IB_TAG_STALL                          = 0x00000044,
    TCC_PERF_SEL_CLIENT0_REQ                           = 0x00000080,
    TCC_PERF_SEL_CLIENT1_REQ                           = 0x00000081,
    TCC_PERF_SEL_CLIENT2_REQ                           = 0x00000082,
    TCC_PERF_SEL_CLIENT3_REQ                           = 0x00000083,
    TCC_PERF_SEL_CLIENT4_REQ                           = 0x00000084,
    TCC_PERF_SEL_CLIENT5_REQ                           = 0x00000085,
    TCC_PERF_SEL_CLIENT6_REQ                           = 0x00000086,
    TCC_PERF_SEL_CLIENT7_REQ                           = 0x00000087,
    TCC_PERF_SEL_CLIENT8_REQ                           = 0x00000088,
    TCC_PERF_SEL_CLIENT9_REQ                           = 0x00000089,
    TCC_PERF_SEL_CLIENT10_REQ                          = 0x0000008a,
    TCC_PERF_SEL_CLIENT11_REQ                          = 0x0000008b,
    TCC_PERF_SEL_CLIENT12_REQ                          = 0x0000008c,
    TCC_PERF_SEL_CLIENT13_REQ                          = 0x0000008d,
    TCC_PERF_SEL_CLIENT14_REQ                          = 0x0000008e,
    TCC_PERF_SEL_CLIENT15_REQ                          = 0x0000008f,
    TCC_PERF_SEL_CLIENT16_REQ                          = 0x00000090,
    TCC_PERF_SEL_CLIENT17_REQ                          = 0x00000091,
    TCC_PERF_SEL_CLIENT18_REQ                          = 0x00000092,
    TCC_PERF_SEL_CLIENT19_REQ                          = 0x00000093,
    TCC_PERF_SEL_CLIENT20_REQ                          = 0x00000094,
    TCC_PERF_SEL_CLIENT21_REQ                          = 0x00000095,
    TCC_PERF_SEL_CLIENT22_REQ                          = 0x00000096,
    TCC_PERF_SEL_CLIENT23_REQ                          = 0x00000097,
    TCC_PERF_SEL_CLIENT24_REQ                          = 0x00000098,
    TCC_PERF_SEL_CLIENT25_REQ                          = 0x00000099,
    TCC_PERF_SEL_CLIENT26_REQ                          = 0x0000009a,
    TCC_PERF_SEL_CLIENT27_REQ                          = 0x0000009b,
    TCC_PERF_SEL_CLIENT28_REQ                          = 0x0000009c,
    TCC_PERF_SEL_CLIENT29_REQ                          = 0x0000009d,
    TCC_PERF_SEL_CLIENT30_REQ                          = 0x0000009e,
    TCC_PERF_SEL_CLIENT31_REQ                          = 0x0000009f,
    TCC_PERF_SEL_CLIENT32_REQ                          = 0x000000a0,
    TCC_PERF_SEL_CLIENT33_REQ                          = 0x000000a1,
    TCC_PERF_SEL_CLIENT34_REQ                          = 0x000000a2,
    TCC_PERF_SEL_CLIENT35_REQ                          = 0x000000a3,
    TCC_PERF_SEL_CLIENT36_REQ                          = 0x000000a4,
    TCC_PERF_SEL_CLIENT37_REQ                          = 0x000000a5,
    TCC_PERF_SEL_CLIENT38_REQ                          = 0x000000a6,
    TCC_PERF_SEL_CLIENT39_REQ                          = 0x000000a7,
    TCC_PERF_SEL_CLIENT40_REQ                          = 0x000000a8,
    TCC_PERF_SEL_CLIENT41_REQ                          = 0x000000a9,
    TCC_PERF_SEL_CLIENT42_REQ                          = 0x000000aa,
    TCC_PERF_SEL_CLIENT43_REQ                          = 0x000000ab,
    TCC_PERF_SEL_CLIENT44_REQ                          = 0x000000ac,
    TCC_PERF_SEL_CLIENT45_REQ                          = 0x000000ad,
    TCC_PERF_SEL_CLIENT46_REQ                          = 0x000000ae,
    TCC_PERF_SEL_CLIENT47_REQ                          = 0x000000af,
    TCC_PERF_SEL_CLIENT48_REQ                          = 0x000000b0,
    TCC_PERF_SEL_CLIENT49_REQ                          = 0x000000b1,
    TCC_PERF_SEL_CLIENT50_REQ                          = 0x000000b2,
    TCC_PERF_SEL_CLIENT51_REQ                          = 0x000000b3,
    TCC_PERF_SEL_CLIENT52_REQ                          = 0x000000b4,
    TCC_PERF_SEL_CLIENT53_REQ                          = 0x000000b5,
    TCC_PERF_SEL_CLIENT54_REQ                          = 0x000000b6,
    TCC_PERF_SEL_CLIENT55_REQ                          = 0x000000b7,
    TCC_PERF_SEL_CLIENT56_REQ                          = 0x000000b8,
    TCC_PERF_SEL_CLIENT57_REQ                          = 0x000000b9,
    TCC_PERF_SEL_CLIENT58_REQ                          = 0x000000ba,
    TCC_PERF_SEL_CLIENT59_REQ                          = 0x000000bb,
    TCC_PERF_SEL_CLIENT60_REQ                          = 0x000000bc,
    TCC_PERF_SEL_CLIENT61_REQ                          = 0x000000bd,
    TCC_PERF_SEL_CLIENT62_REQ                          = 0x000000be,
    TCC_PERF_SEL_CLIENT63_REQ                          = 0x000000bf,
    TCC_PERF_SEL_CLIENT64_REQ                          = 0x000000c0,
    TCC_PERF_SEL_CLIENT65_REQ                          = 0x000000c1,
    TCC_PERF_SEL_CLIENT66_REQ                          = 0x000000c2,
    TCC_PERF_SEL_CLIENT67_REQ                          = 0x000000c3,
    TCC_PERF_SEL_CLIENT68_REQ                          = 0x000000c4,
    TCC_PERF_SEL_CLIENT69_REQ                          = 0x000000c5,
    TCC_PERF_SEL_CLIENT70_REQ                          = 0x000000c6,
    TCC_PERF_SEL_CLIENT71_REQ                          = 0x000000c7,
    TCC_PERF_SEL_CLIENT72_REQ                          = 0x000000c8,
    TCC_PERF_SEL_CLIENT73_REQ                          = 0x000000c9,
    TCC_PERF_SEL_CLIENT74_REQ                          = 0x000000ca,
    TCC_PERF_SEL_CLIENT75_REQ                          = 0x000000cb,
    TCC_PERF_SEL_CLIENT76_REQ                          = 0x000000cc,
    TCC_PERF_SEL_CLIENT77_REQ                          = 0x000000cd,
    TCC_PERF_SEL_CLIENT78_REQ                          = 0x000000ce,
    TCC_PERF_SEL_CLIENT79_REQ                          = 0x000000cf,
    TCC_PERF_SEL_CLIENT80_REQ                          = 0x000000d0,
    TCC_PERF_SEL_CLIENT81_REQ                          = 0x000000d1,
    TCC_PERF_SEL_CLIENT82_REQ                          = 0x000000d2,
    TCC_PERF_SEL_CLIENT83_REQ                          = 0x000000d3,
    TCC_PERF_SEL_CLIENT84_REQ                          = 0x000000d4,
    TCC_PERF_SEL_CLIENT85_REQ                          = 0x000000d5,
    TCC_PERF_SEL_CLIENT86_REQ                          = 0x000000d6,
    TCC_PERF_SEL_CLIENT87_REQ                          = 0x000000d7,
    TCC_PERF_SEL_CLIENT88_REQ                          = 0x000000d8,
    TCC_PERF_SEL_CLIENT89_REQ                          = 0x000000d9,
    TCC_PERF_SEL_CLIENT90_REQ                          = 0x000000da,
    TCC_PERF_SEL_CLIENT91_REQ                          = 0x000000db,
    TCC_PERF_SEL_CLIENT92_REQ                          = 0x000000dc,
    TCC_PERF_SEL_CLIENT93_REQ                          = 0x000000dd,
    TCC_PERF_SEL_CLIENT94_REQ                          = 0x000000de,
    TCC_PERF_SEL_CLIENT95_REQ                          = 0x000000df,
    TCC_PERF_SEL_CLIENT96_REQ                          = 0x000000e0,
    TCC_PERF_SEL_CLIENT97_REQ                          = 0x000000e1,
    TCC_PERF_SEL_CLIENT98_REQ                          = 0x000000e2,
    TCC_PERF_SEL_CLIENT99_REQ                          = 0x000000e3,
    TCC_PERF_SEL_CLIENT100_REQ                         = 0x000000e4,
    TCC_PERF_SEL_CLIENT101_REQ                         = 0x000000e5,
    TCC_PERF_SEL_CLIENT102_REQ                         = 0x000000e6,
    TCC_PERF_SEL_CLIENT103_REQ                         = 0x000000e7,
    TCC_PERF_SEL_CLIENT104_REQ                         = 0x000000e8,
    TCC_PERF_SEL_CLIENT105_REQ                         = 0x000000e9,
    TCC_PERF_SEL_CLIENT106_REQ                         = 0x000000ea,
    TCC_PERF_SEL_CLIENT107_REQ                         = 0x000000eb,
    TCC_PERF_SEL_CLIENT108_REQ                         = 0x000000ec,
    TCC_PERF_SEL_CLIENT109_REQ                         = 0x000000ed,
    TCC_PERF_SEL_CLIENT110_REQ                         = 0x000000ee,
    TCC_PERF_SEL_CLIENT111_REQ                         = 0x000000ef,
    TCC_PERF_SEL_CLIENT112_REQ                         = 0x000000f0,
    TCC_PERF_SEL_CLIENT113_REQ                         = 0x000000f1,
    TCC_PERF_SEL_CLIENT114_REQ                         = 0x000000f2,
    TCC_PERF_SEL_CLIENT115_REQ                         = 0x000000f3,
    TCC_PERF_SEL_CLIENT116_REQ                         = 0x000000f4,
    TCC_PERF_SEL_CLIENT117_REQ                         = 0x000000f5,
    TCC_PERF_SEL_CLIENT118_REQ                         = 0x000000f6,
    TCC_PERF_SEL_CLIENT119_REQ                         = 0x000000f7,
    TCC_PERF_SEL_CLIENT120_REQ                         = 0x000000f8,
    TCC_PERF_SEL_CLIENT121_REQ                         = 0x000000f9,
    TCC_PERF_SEL_CLIENT122_REQ                         = 0x000000fa,
    TCC_PERF_SEL_CLIENT123_REQ                         = 0x000000fb,
    TCC_PERF_SEL_CLIENT124_REQ                         = 0x000000fc,
    TCC_PERF_SEL_CLIENT125_REQ                         = 0x000000fd,
    TCC_PERF_SEL_CLIENT126_REQ                         = 0x000000fe,
    TCC_PERF_SEL_CLIENT127_REQ                         = 0x000000ff,
    TCC_PERF_SEL_EA_WRREQ__GFX09_0                     = 0x0000001d,
    TCC_PERF_SEL_EA_WRREQ_64B__GFX09_0                 = 0x0000001e,
    TCC_PERF_SEL_EA_WRREQ_PROBE_COMMAND__GFX09_0       = 0x0000001f,
    TCC_PERF_SEL_EA_WR_UNCACHED_32B__GFX09_0           = 0x00000020,
    TCC_PERF_SEL_EA_WRREQ_STALL__GFX09_0               = 0x00000021,
    TCC_PERF_SEL_EA_WRREQ_IO_CREDIT_STALL__GFX09_0     = 0x00000022,
    TCC_PERF_SEL_EA_WRREQ_GMI_CREDIT_STALL__GFX09_0    = 0x00000023,
    TCC_PERF_SEL_EA_WRREQ_DRAM_CREDIT_STALL__GFX09_0   = 0x00000024,
    TCC_PERF_SEL_EA_WRREQ_LEVEL__GFX09_0               = 0x00000026,
    TCC_PERF_SEL_EA_ATOMIC__GFX09_0                    = 0x00000027,
    TCC_PERF_SEL_EA_ATOMIC_LEVEL__GFX09_0              = 0x00000028,
    TCC_PERF_SEL_EA_RDREQ__GFX09_0                     = 0x00000029,
    TCC_PERF_SEL_EA_RDREQ_32B__GFX09_0                 = 0x0000002a,
    TCC_PERF_SEL_EA_RD_UNCACHED_32B__GFX09_0           = 0x0000002b,
    TCC_PERF_SEL_EA_RD_MDC_32B__GFX09_0                = 0x0000002c,
    TCC_PERF_SEL_EA_RD_COMPRESSED_32B__GFX09_0         = 0x0000002d,
    TCC_PERF_SEL_EA_RDREQ_IO_CREDIT_STALL__GFX09_0     = 0x0000002e,
    TCC_PERF_SEL_EA_RDREQ_GMI_CREDIT_STALL__GFX09_0    = 0x0000002f,
    TCC_PERF_SEL_EA_RDREQ_DRAM_CREDIT_STALL__GFX09_0   = 0x00000030,
    TCC_PERF_SEL_EA_RDREQ_LEVEL__GFX09_0               = 0x00000031,
    TCC_PERF_SEL_EA_RDRET_NACK__GFX09_0                = 0x00000048,
    TCC_PERF_SEL_EA_WRRET_NACK__GFX09_0                = 0x00000049,
    TCC_PERF_SEL_IB_MDC_STALL__RAVEN                   = 0x00000045,
    TCC_PERF_SEL_TCA_LEVEL__RAVEN                      = 0x00000046,
    TCC_PERF_SEL_HOLE_LEVEL__RAVEN                     = 0x00000047,
    TCC_PERF_SEL_NORMAL_WRITEBACK__RAVEN               = 0x0000004a,
    TCC_PERF_SEL_TC_OP_WBL2_NC_WRITEBACK__RAVEN        = 0x0000004b,
    TCC_PERF_SEL_TC_OP_WBINVL2_WRITEBACK__RAVEN        = 0x0000004c,
    TCC_PERF_SEL_TC_OP_WBINVL2_NC_WRITEBACK__RAVEN     = 0x0000004d,
    TCC_PERF_SEL_TC_OP_WBINVL2_SD_WRITEBACK__RAVEN     = 0x0000004e,
    TCC_PERF_SEL_ALL_TC_OP_WB_WRITEBACK__RAVEN         = 0x0000004f,
    TCC_PERF_SEL_NORMAL_EVICT__RAVEN                   = 0x00000050,
    TCC_PERF_SEL_TC_OP_WBL2_NC_EVICT__RAVEN            = 0x00000051,
    TCC_PERF_SEL_TC_OP_INVL2_NC_EVICT__RAVEN           = 0x00000052,
    TCC_PERF_SEL_TC_OP_WBINVL2_EVICT__RAVEN            = 0x00000053,
    TCC_PERF_SEL_TC_OP_WBINVL2_NC_EVICT__RAVEN         = 0x00000054,
    TCC_PERF_SEL_TC_OP_WBINVL2_SD_EVICT__RAVEN         = 0x00000055,
    TCC_PERF_SEL_ALL_TC_OP_INV_EVICT__RAVEN            = 0x00000056,
    TCC_PERF_SEL_PROBE_EVICT__RAVEN                    = 0x00000057,
    TCC_PERF_SEL_TC_OP_WBL2_NC_CYCLE__RAVEN            = 0x00000058,
    TCC_PERF_SEL_TC_OP_INVL2_NC_CYCLE__RAVEN           = 0x00000059,
    TCC_PERF_SEL_TC_OP_WBINVL2_CYCLE__RAVEN            = 0x0000005a,
    TCC_PERF_SEL_TC_OP_WBINVL2_NC_CYCLE__RAVEN         = 0x0000005b,
    TCC_PERF_SEL_TC_OP_WBINVL2_SD_CYCLE__RAVEN         = 0x0000005c,
    TCC_PERF_SEL_ALL_TC_OP_WB_OR_INV_CYCLE__RAVEN      = 0x0000005d,
    TCC_PERF_SEL_TC_OP_WBL2_NC_START__RAVEN            = 0x0000005e,
    TCC_PERF_SEL_TC_OP_INVL2_NC_START__RAVEN           = 0x0000005f,
    TCC_PERF_SEL_TC_OP_WBINVL2_START__RAVEN            = 0x00000060,
    TCC_PERF_SEL_TC_OP_WBINVL2_NC_START__RAVEN         = 0x00000061,
    TCC_PERF_SEL_TC_OP_WBINVL2_SD_START__RAVEN         = 0x00000062,
    TCC_PERF_SEL_ALL_TC_OP_WB_OR_INV_START__RAVEN      = 0x00000063,
    TCC_PERF_SEL_TC_OP_WBL2_NC_FINISH__RAVEN           = 0x00000064,
    TCC_PERF_SEL_TC_OP_INVL2_NC_FINISH__RAVEN          = 0x00000065,
    TCC_PERF_SEL_TC_OP_WBINVL2_FINISH__RAVEN           = 0x00000066,
    TCC_PERF_SEL_TC_OP_WBINVL2_NC_FINISH__RAVEN        = 0x00000067,
    TCC_PERF_SEL_TC_OP_WBINVL2_SD_FINISH__RAVEN        = 0x00000068,
    TCC_PERF_SEL_ALL_TC_OP_WB_OR_INV_FINISH__RAVEN     = 0x00000069,
    TCC_PERF_SEL_TC_OP_INV_METADATA__RAVEN             = 0x0000006a,
    TCC_PERF_SEL_MDC_REQ__RAVEN                        = 0x0000006b,
    TCC_PERF_SEL_MDC_LEVEL__RAVEN                      = 0x0000006c,
    TCC_PERF_SEL_MDC_TAG_HIT__RAVEN                    = 0x0000006d,
    TCC_PERF_SEL_MDC_SECTOR_HIT__RAVEN                 = 0x0000006e,
    TCC_PERF_SEL_MDC_SECTOR_MISS__RAVEN                = 0x0000006f,
    TCC_PERF_SEL_MDC_TAG_STALL__RAVEN                  = 0x00000070,
    TCC_PERF_SEL_MDC_TAG_REPLACEMENT_LINE_IN_USE_STALL__RAVEN = 0x00000071,
    TCC_PERF_SEL_MDC_TAG_DESECTORIZATION_FIFO_FULL_STALL__RAVEN = 0x00000072,
    TCC_PERF_SEL_MDC_TAG_WAITING_FOR_INVALIDATE_COMPLETION_STALL__RAVEN = 0x00000073,
    TCC_PERF_SEL_PROBE_FILTER_DISABLE_TRANSITION__RAVEN = 0x00000074,
    TCC_PERF_SEL_PROBE_FILTER_DISABLED__RAVEN          = 0x00000075,
    TCC_PERF_SEL_EA_WRREQ__RV2X                        = 0x0000001d,
    TCC_PERF_SEL_EA_WRREQ_64B__RV2X                    = 0x0000001e,
    TCC_PERF_SEL_EA_WRREQ_PROBE_COMMAND__RV2X          = 0x0000001f,
    TCC_PERF_SEL_EA_WR_UNCACHED_32B__RV2X              = 0x00000020,
    TCC_PERF_SEL_EA_WRREQ_STALL__RV2X                  = 0x00000021,
    TCC_PERF_SEL_EA_WRREQ_IO_CREDIT_STALL__RV2X        = 0x00000022,
    TCC_PERF_SEL_EA_WRREQ_GMI_CREDIT_STALL__RV2X       = 0x00000023,
    TCC_PERF_SEL_EA_WRREQ_DRAM_CREDIT_STALL__RV2X      = 0x00000024,
    TCC_PERF_SEL_EA_WRREQ_LEVEL__RV2X                  = 0x00000026,
    TCC_PERF_SEL_EA_ATOMIC__RV2X                       = 0x00000027,
    TCC_PERF_SEL_EA_ATOMIC_LEVEL__RV2X                 = 0x00000028,
    TCC_PERF_SEL_EA_RDREQ__RV2X                        = 0x00000029,
    TCC_PERF_SEL_EA_RDREQ_32B__RV2X                    = 0x0000002a,
    TCC_PERF_SEL_EA_RD_UNCACHED_32B__RV2X              = 0x0000002b,
    TCC_PERF_SEL_EA_RD_MDC_32B__RV2X                   = 0x0000002c,
    TCC_PERF_SEL_EA_RD_COMPRESSED_32B__RV2X            = 0x0000002d,
    TCC_PERF_SEL_EA_RDREQ_IO_CREDIT_STALL__RV2X        = 0x0000002e,
    TCC_PERF_SEL_EA_RDREQ_GMI_CREDIT_STALL__RV2X       = 0x0000002f,
    TCC_PERF_SEL_EA_RDREQ_DRAM_CREDIT_STALL__RV2X      = 0x00000030,
    TCC_PERF_SEL_EA_RDREQ_LEVEL__RV2X                  = 0x00000031,
    TCC_PERF_SEL_EA_RDRET_NACK__RV2X                   = 0x00000048,
    TCC_PERF_SEL_EA_WRRET_NACK__RV2X                   = 0x00000049,
    TCC_PERF_SEL_EA_RDREQ_DRAM__RV2X                   = 0x00000076,
    TCC_PERF_SEL_EA_WRREQ_DRAM__RV2X                   = 0x00000077,
    TCC_PERF_SEL_IB_MDC_STALL__VG10_VG12               = 0x00000045,
    TCC_PERF_SEL_TCA_LEVEL__VG10_VG12                  = 0x00000046,
    TCC_PERF_SEL_HOLE_LEVEL__VG10_VG12                 = 0x00000047,
    TCC_PERF_SEL_NORMAL_WRITEBACK__VG10_VG12           = 0x0000004a,
    TCC_PERF_SEL_TC_OP_WBL2_NC_WRITEBACK__VG10_VG12    = 0x0000004b,
    TCC_PERF_SEL_TC_OP_WBINVL2_WRITEBACK__VG10_VG12    = 0x0000004c,
    TCC_PERF_SEL_TC_OP_WBINVL2_NC_WRITEBACK__VG10_VG12 = 0x0000004d,
    TCC_PERF_SEL_TC_OP_WBINVL2_SD_WRITEBACK__VG10_VG12 = 0x0000004e,
    TCC_PERF_SEL_ALL_TC_OP_WB_WRITEBACK__VG10_VG12     = 0x0000004f,
    TCC_PERF_SEL_NORMAL_EVICT__VG10_VG12               = 0x00000050,
    TCC_PERF_SEL_TC_OP_WBL2_NC_EVICT__VG10_VG12        = 0x00000051,
    TCC_PERF_SEL_TC_OP_INVL2_NC_EVICT__VG10_VG12       = 0x00000052,
    TCC_PERF_SEL_TC_OP_WBINVL2_EVICT__VG10_VG12        = 0x00000053,
    TCC_PERF_SEL_TC_OP_WBINVL2_NC_EVICT__VG10_VG12     = 0x00000054,
    TCC_PERF_SEL_TC_OP_WBINVL2_SD_EVICT__VG10_VG12     = 0x00000055,
    TCC_PERF_SEL_ALL_TC_OP_INV_EVICT__VG10_VG12        = 0x00000056,
    TCC_PERF_SEL_PROBE_EVICT__VG10_VG12                = 0x00000057,
    TCC_PERF_SEL_TC_OP_WBL2_NC_CYCLE__VG10_VG12        = 0x00000058,
    TCC_PERF_SEL_TC_OP_INVL2_NC_CYCLE__VG10_VG12       = 0x00000059,
    TCC_PERF_SEL_TC_OP_WBINVL2_CYCLE__VG10_VG12        = 0x0000005a,
    TCC_PERF_SEL_TC_OP_WBINVL2_NC_CYCLE__VG10_VG12     = 0x0000005b,
    TCC_PERF_SEL_TC_OP_WBINVL2_SD_CYCLE__VG10_VG12     = 0x0000005c,
    TCC_PERF_SEL_ALL_TC_OP_WB_OR_INV_CYCLE__VG10_VG12  = 0x0000005d,
    TCC_PERF_SEL_TC_OP_WBL2_NC_START__VG10_VG12        = 0x0000005e,
    TCC_PERF_SEL_TC_OP_INVL2_NC_START__VG10_VG12       = 0x0000005f,
    TCC_PERF_SEL_TC_OP_WBINVL2_START__VG10_VG12        = 0x00000060,
    TCC_PERF_SEL_TC_OP_WBINVL2_NC_START__VG10_VG12     = 0x00000061,
    TCC_PERF_SEL_TC_OP_WBINVL2_SD_START__VG10_VG12     = 0x00000062,
    TCC_PERF_SEL_ALL_TC_OP_WB_OR_INV_START__VG10_VG12  = 0x00000063,
    TCC_PERF_SEL_TC_OP_WBL2_NC_FINISH__VG10_VG12       = 0x00000064,
    TCC_PERF_SEL_TC_OP_INVL2_NC_FINISH__VG10_VG12      = 0x00000065,
    TCC_PERF_SEL_TC_OP_WBINVL2_FINISH__VG10_VG12       = 0x00000066,
    TCC_PERF_SEL_TC_OP_WBINVL2_NC_FINISH__VG10_VG12    = 0x00000067,
    TCC_PERF_SEL_TC_OP_WBINVL2_SD_FINISH__VG10_VG12    = 0x00000068,
    TCC_PERF_SEL_ALL_TC_OP_WB_OR_INV_FINISH__VG10_VG12 = 0x00000069,
    TCC_PERF_SEL_TC_OP_INV_METADATA__VG10_VG12         = 0x0000006a,
    TCC_PERF_SEL_MDC_REQ__VG10_VG12                    = 0x0000006b,
    TCC_PERF_SEL_MDC_LEVEL__VG10_VG12                  = 0x0000006c,
    TCC_PERF_SEL_MDC_TAG_HIT__VG10_VG12                = 0x0000006d,
    TCC_PERF_SEL_MDC_SECTOR_HIT__VG10_VG12             = 0x0000006e,
    TCC_PERF_SEL_MDC_SECTOR_MISS__VG10_VG12            = 0x0000006f,
    TCC_PERF_SEL_MDC_TAG_STALL__VG10_VG12              = 0x00000070,
    TCC_PERF_SEL_MDC_TAG_REPLACEMENT_LINE_IN_USE_STALL__VG10_VG12 = 0x00000071,
    TCC_PERF_SEL_MDC_TAG_DESECTORIZATION_FIFO_FULL_STALL__VG10_VG12 = 0x00000072,
    TCC_PERF_SEL_MDC_TAG_WAITING_FOR_INVALIDATE_COMPLETION_STALL__VG10_VG12 = 0x00000073,
    TCC_PERF_SEL_PROBE_FILTER_DISABLE_TRANSITION__VG10_VG12 = 0x00000074,
    TCC_PERF_SEL_PROBE_FILTER_DISABLED__VG10_VG12      = 0x00000075,
    TCC_PERF_SEL_EA0_WRREQ__VG12                       = 0x0000001d,
    TCC_PERF_SEL_EA0_WRREQ_64B__VG12                   = 0x0000001e,
    TCC_PERF_SEL_EA0_WRREQ_PROBE_COMMAND__VG12         = 0x0000001f,
    TCC_PERF_SEL_EA0_WR_UNCACHED_32B__VG12             = 0x00000020,
    TCC_PERF_SEL_EA0_WRREQ_STALL__VG12                 = 0x00000021,
    TCC_PERF_SEL_EA0_WRREQ_IO_CREDIT_STALL__VG12       = 0x00000022,
    TCC_PERF_SEL_EA0_WRREQ_GMI_CREDIT_STALL__VG12      = 0x00000023,
    TCC_PERF_SEL_EA0_WRREQ_DRAM_CREDIT_STALL__VG12     = 0x00000024,
    TCC_PERF_SEL_EA0_WRREQ_LEVEL__VG12                 = 0x00000026,
    TCC_PERF_SEL_EA0_ATOMIC__VG12                      = 0x00000027,
    TCC_PERF_SEL_EA0_ATOMIC_LEVEL__VG12                = 0x00000028,
    TCC_PERF_SEL_EA0_RDREQ__VG12                       = 0x00000029,
    TCC_PERF_SEL_EA0_RDREQ_32B__VG12                   = 0x0000002a,
    TCC_PERF_SEL_EA0_RD_UNCACHED_32B__VG12             = 0x0000002b,
    TCC_PERF_SEL_EA0_RD_MDC_32B__VG12                  = 0x0000002c,
    TCC_PERF_SEL_EA0_RD_COMPRESSED_32B__VG12           = 0x0000002d,
    TCC_PERF_SEL_EA0_RDREQ_IO_CREDIT_STALL__VG12       = 0x0000002e,
    TCC_PERF_SEL_EA0_RDREQ_GMI_CREDIT_STALL__VG12      = 0x0000002f,
    TCC_PERF_SEL_EA0_RDREQ_DRAM_CREDIT_STALL__VG12     = 0x00000030,
    TCC_PERF_SEL_EA0_RDREQ_LEVEL__VG12                 = 0x00000031,
    TCC_PERF_SEL_EA0_RDRET_NACK__VG12                  = 0x00000048,
    TCC_PERF_SEL_EA0_WRRET_NACK__VG12                  = 0x00000049,
    TCC_PERF_SEL_EA0_RDREQ_DRAM__VG12                  = 0x00000076,
    TCC_PERF_SEL_EA0_WRREQ_DRAM__VG12                  = 0x00000077,
    TCC_PERF_SEL_EA0_WRREQ__VG20                       = 0x0000001d,
    TCC_PERF_SEL_EA0_WRREQ_64B__VG20                   = 0x0000001e,
    TCC_PERF_SEL_EA0_WRREQ_PROBE_COMMAND__VG20         = 0x0000001f,
    TCC_PERF_SEL_EA0_WR_UNCACHED_32B__VG20             = 0x00000020,
    TCC_PERF_SEL_EA0_WRREQ_STALL__VG20                 = 0x00000021,
    TCC_PERF_SEL_EA0_WRREQ_IO_CREDIT_STALL__VG20       = 0x00000022,
    TCC_PERF_SEL_EA0_WRREQ_GMI_CREDIT_STALL__VG20      = 0x00000023,
    TCC_PERF_SEL_EA0_WRREQ_DRAM_CREDIT_STALL__VG20     = 0x00000024,
    TCC_PERF_SEL_EA0_WRREQ_LEVEL__VG20                 = 0x00000026,
    TCC_PERF_SEL_EA0_ATOMIC__VG20                      = 0x00000027,
    TCC_PERF_SEL_EA0_ATOMIC_LEVEL__VG20                = 0x00000028,
    TCC_PERF_SEL_EA0_RDREQ__VG20                       = 0x00000029,
    TCC_PERF_SEL_EA0_RDREQ_32B__VG20                   = 0x0000002a,
    TCC_PERF_SEL_EA0_RD_UNCACHED_32B__VG20             = 0x0000002b,
    TCC_PERF_SEL_EA0_RD_MDC_32B__VG20                  = 0x0000002c,
    TCC_PERF_SEL_EA0_RD_COMPRESSED_32B__VG20           = 0x0000002d,
    TCC_PERF_SEL_EA0_RDREQ_IO_CREDIT_STALL__VG20       = 0x0000002e,
    TCC_PERF_SEL_EA0_RDREQ_GMI_CREDIT_STALL__VG20      = 0x0000002f,
    TCC_PERF_SEL_EA0_RDREQ_DRAM_CREDIT_STALL__VG20     = 0x00000030,
    TCC_PERF_SEL_EA0_RDREQ_LEVEL__VG20                 = 0x00000031,
    TCC_PERF_SEL_IB_NOT_VALID__VG20                    = 0x00000045,
    TCC_PERF_SEL_IB_MDC_STALL__VG20                    = 0x00000046,
    TCC_PERF_SEL_TCA_LEVEL__VG20                       = 0x00000047,
    TCC_PERF_SEL_HOLE_LEVEL__VG20                      = 0x00000048,
    TCC_PERF_SEL_EA0_RDRET_NACK__VG20                  = 0x00000049,
    TCC_PERF_SEL_EA0_WRRET_NACK__VG20                  = 0x0000004a,
    TCC_PERF_SEL_NORMAL_WRITEBACK__VG20                = 0x0000004b,
    TCC_PERF_SEL_TC_OP_WBL2_NC_WRITEBACK__VG20         = 0x0000004c,
    TCC_PERF_SEL_TC_OP_WBINVL2_WRITEBACK__VG20         = 0x0000004d,
    TCC_PERF_SEL_TC_OP_WBINVL2_NC_WRITEBACK__VG20      = 0x0000004e,
    TCC_PERF_SEL_TC_OP_WBINVL2_SD_WRITEBACK__VG20      = 0x0000004f,
    TCC_PERF_SEL_ALL_TC_OP_WB_WRITEBACK__VG20          = 0x00000050,
    TCC_PERF_SEL_NORMAL_EVICT__VG20                    = 0x00000051,
    TCC_PERF_SEL_TC_OP_WBL2_NC_EVICT__VG20             = 0x00000052,
    TCC_PERF_SEL_TC_OP_INVL2_NC_EVICT__VG20            = 0x00000053,
    TCC_PERF_SEL_TC_OP_WBINVL2_EVICT__VG20             = 0x00000054,
    TCC_PERF_SEL_TC_OP_WBINVL2_NC_EVICT__VG20          = 0x00000055,
    TCC_PERF_SEL_TC_OP_WBINVL2_SD_EVICT__VG20          = 0x00000056,
    TCC_PERF_SEL_ALL_TC_OP_INV_EVICT__VG20             = 0x00000057,
    TCC_PERF_SEL_PROBE_EVICT__VG20                     = 0x00000058,
    TCC_PERF_SEL_TC_OP_WBL2_NC_CYCLE__VG20             = 0x00000059,
    TCC_PERF_SEL_TC_OP_INVL2_NC_CYCLE__VG20            = 0x0000005a,
    TCC_PERF_SEL_TC_OP_WBINVL2_CYCLE__VG20             = 0x0000005b,
    TCC_PERF_SEL_TC_OP_WBINVL2_NC_CYCLE__VG20          = 0x0000005c,
    TCC_PERF_SEL_TC_OP_WBINVL2_SD_CYCLE__VG20          = 0x0000005d,
    TCC_PERF_SEL_ALL_TC_OP_WB_OR_INV_CYCLE__VG20       = 0x0000005e,
    TCC_PERF_SEL_TC_OP_WBL2_NC_START__VG20             = 0x0000005f,
    TCC_PERF_SEL_TC_OP_INVL2_NC_START__VG20            = 0x00000060,
    TCC_PERF_SEL_TC_OP_WBINVL2_START__VG20             = 0x00000061,
    TCC_PERF_SEL_TC_OP_WBINVL2_NC_START__VG20          = 0x00000062,
    TCC_PERF_SEL_TC_OP_WBINVL2_SD_START__VG20          = 0x00000063,
    TCC_PERF_SEL_ALL_TC_OP_WB_OR_INV_START__VG20       = 0x00000064,
    TCC_PERF_SEL_TC_OP_WBL2_NC_FINISH__VG20            = 0x00000065,
    TCC_PERF_SEL_TC_OP_INVL2_NC_FINISH__VG20           = 0x00000066,
    TCC_PERF_SEL_TC_OP_WBINVL2_FINISH__VG20            = 0x00000067,
    TCC_PERF_SEL_TC_OP_WBINVL2_NC_FINISH__VG20         = 0x00000068,
    TCC_PERF_SEL_TC_OP_WBINVL2_SD_FINISH__VG20         = 0x00000069,
    TCC_PERF_SEL_ALL_TC_OP_WB_OR_INV_FINISH__VG20      = 0x0000006a,
    TCC_PERF_SEL_TC_OP_INV_METADATA__VG20              = 0x0000006b,
    TCC_PERF_SEL_MDC_REQ__VG20                         = 0x0000006c,
    TCC_PERF_SEL_MDC_LEVEL__VG20                       = 0x0000006d,
    TCC_PERF_SEL_MDC_TAG_HIT__VG20                     = 0x0000006e,
    TCC_PERF_SEL_MDC_SECTOR_HIT__VG20                  = 0x0000006f,
    TCC_PERF_SEL_MDC_SECTOR_MISS__VG20                 = 0x00000070,
    TCC_PERF_SEL_MDC_TAG_STALL__VG20                   = 0x00000071,
    TCC_PERF_SEL_MDC_TAG_REPLACEMENT_LINE_IN_USE_STALL__VG20 = 0x00000072,
    TCC_PERF_SEL_MDC_TAG_DESECTORIZATION_FIFO_FULL_STALL__VG20 = 0x00000073,
    TCC_PERF_SEL_MDC_TAG_WAITING_FOR_INVALIDATE_COMPLETION_STALL__VG20 = 0x00000074,
    TCC_PERF_SEL_PROBE_FILTER_DISABLE_TRANSITION__VG20 = 0x00000075,
    TCC_PERF_SEL_PROBE_FILTER_DISABLED__VG20           = 0x00000076,
    TCC_PERF_SEL_EA0_RDREQ_DRAM__VG20                  = 0x00000077,
    TCC_PERF_SEL_EA0_WRREQ_DRAM__VG20                  = 0x00000078,
    TCC_PERF_SEL_EA1_WRREQ__VG20                       = 0x00000100,
    TCC_PERF_SEL_EA1_WRREQ_64B__VG20                   = 0x00000101,
    TCC_PERF_SEL_EA1_WRREQ_PROBE_COMMAND__VG20         = 0x00000102,
    TCC_PERF_SEL_EA1_WR_UNCACHED_32B__VG20             = 0x00000103,
    TCC_PERF_SEL_EA1_WRREQ_STALL__VG20                 = 0x00000104,
    TCC_PERF_SEL_EA1_WRREQ_IO_CREDIT_STALL__VG20       = 0x00000105,
    TCC_PERF_SEL_EA1_WRREQ_GMI_CREDIT_STALL__VG20      = 0x00000106,
    TCC_PERF_SEL_EA1_WRREQ_DRAM_CREDIT_STALL__VG20     = 0x00000107,
    TCC_PERF_SEL_EA1_WRREQ_LEVEL__VG20                 = 0x00000108,
    TCC_PERF_SEL_EA1_ATOMIC__VG20                      = 0x00000109,
    TCC_PERF_SEL_EA1_ATOMIC_LEVEL__VG20                = 0x0000010a,
    TCC_PERF_SEL_EA1_RDREQ__VG20                       = 0x0000010b,
    TCC_PERF_SEL_EA1_RDREQ_32B__VG20                   = 0x0000010c,
    TCC_PERF_SEL_EA1_RD_UNCACHED_32B__VG20             = 0x0000010d,
    TCC_PERF_SEL_EA1_RD_MDC_32B__VG20                  = 0x0000010e,
    TCC_PERF_SEL_EA1_RD_COMPRESSED_32B__VG20           = 0x0000010f,
    TCC_PERF_SEL_EA1_RDREQ_IO_CREDIT_STALL__VG20       = 0x00000110,
    TCC_PERF_SEL_EA1_RDREQ_GMI_CREDIT_STALL__VG20      = 0x00000111,
    TCC_PERF_SEL_EA1_RDREQ_DRAM_CREDIT_STALL__VG20     = 0x00000112,
    TCC_PERF_SEL_EA1_RDREQ_LEVEL__VG20                 = 0x00000113,
    TCC_PERF_SEL_EA1_RDRET_NACK__VG20                  = 0x00000114,
    TCC_PERF_SEL_EA1_WRRET_NACK__VG20                  = 0x00000115,
    TCC_PERF_SEL_EA1_RDREQ_DRAM__VG20                  = 0x00000116,
    TCC_PERF_SEL_EA1_WRREQ_DRAM__VG20                  = 0x00000117,
    TCC_PERF_SEL_CLIENTX_LEVEL__VG20                   = 0x00000118,
    TCC_PERF_CLIENT_RETURN_BUBBLE__VG20                = 0x00000119,
} TCC_PERF_SEL;

constexpr unsigned int MaxTccPerfSelRaven              = TCC_PERF_SEL_CLIENT127_REQ;
constexpr unsigned int MaxTccPerfSelVg10_Vg12          = TCC_PERF_SEL_CLIENT127_REQ;
constexpr unsigned int MaxTccPerfSelVg20               = TCC_PERF_CLIENT_RETURN_BUBBLE__VG20;

typedef enum TCP_CACHE_POLICIES {
    TCP_CACHE_POLICY_MISS_LRU                          = 0x00000000,
    TCP_CACHE_POLICY_MISS_EVICT                        = 0x00000001,
    TCP_CACHE_POLICY_HIT_LRU                           = 0x00000002,
    TCP_CACHE_POLICY_HIT_EVICT                         = 0x00000003,
} TCP_CACHE_POLICIES;

typedef enum TCP_CACHE_STORE_POLICIES {
    TCP_CACHE_STORE_POLICY_WT_LRU                      = 0x00000000,
    TCP_CACHE_STORE_POLICY_WT_EVICT                    = 0x00000001,
} TCP_CACHE_STORE_POLICIES;

typedef enum TCP_DSM_DATA_SEL {
    TCP_DSM_DISABLE                                    = 0x00000000,
    TCP_DSM_SEL0                                       = 0x00000001,
    TCP_DSM_SEL1                                       = 0x00000002,
    TCP_DSM_SEL_BOTH                                   = 0x00000003,
} TCP_DSM_DATA_SEL;

typedef enum TCP_DSM_INJECT_SEL {
    TCP_DSM_INJECT_SEL0                                = 0x00000000,
    TCP_DSM_INJECT_SEL1                                = 0x00000001,
    TCP_DSM_INJECT_SEL2                                = 0x00000002,
    TCP_DSM_INJECT_SEL3                                = 0x00000003,
} TCP_DSM_INJECT_SEL;

typedef enum TCP_DSM_SINGLE_WRITE {
    TCP_DSM_SINGLE_WRITE_DIS                           = 0x00000000,
    TCP_DSM_SINGLE_WRITE_EN                            = 0x00000001,
} TCP_DSM_SINGLE_WRITE;

typedef enum TCP_OPCODE_TYPE {
    TCP_OPCODE_READ                                    = 0x00000000,
    TCP_OPCODE_WRITE                                   = 0x00000001,
    TCP_OPCODE_ATOMIC                                  = 0x00000002,
    TCP_OPCODE_ATOMIC_CMPSWAP                          = 0x00000004,
    TCP_OPCODE_WBINVL1__GFX09                          = 0x00000003,
    TCP_OPCODE_GATHERH__GFX09                          = 0x00000005,
    TCP_OPCODE_INV__GFX10                              = 0x00000003,
    TCP_OPCODE_SAMPLER__GFX10                          = 0x00000005,
    TCP_OPCODE_LOAD__GFX10                             = 0x00000006,
    TCP_OPCODE_GATHERH__GFX10                          = 0x00000007,
} TCP_OPCODE_TYPE;

typedef enum TCP_PERFCOUNT_SELECT {
    TCP_PERF_SEL_GATE_EN1                              = 0x00000000,
    TCP_PERF_SEL_GATE_EN2                              = 0x00000001,
    TCP_PERF_SEL_CORE_REG_SCLK_VLD__GFX09              = 0x00000002,
    TCP_PERF_SEL_TA_TCP_ADDR_STARVE_CYCLES__GFX09      = 0x00000003,
    TCP_PERF_SEL_TA_TCP_DATA_STARVE_CYCLES__GFX09      = 0x00000004,
    TCP_PERF_SEL_TCP_TA_ADDR_STALL_CYCLES__GFX09       = 0x00000005,
    TCP_PERF_SEL_TCP_TA_DATA_STALL_CYCLES__GFX09       = 0x00000006,
    TCP_PERF_SEL_TD_TCP_STALL_CYCLES__GFX09            = 0x00000007,
    TCP_PERF_SEL_TCR_TCP_STALL_CYCLES__GFX09           = 0x00000008,
    TCP_PERF_SEL_TCP_TCR_STARVE_CYCLES__GFX09          = 0x00000009,
    TCP_PERF_SEL_LOD_STALL_CYCLES__GFX09               = 0x0000000a,
    TCP_PERF_SEL_READ_TAGCONFLICT_STALL_CYCLES__GFX09  = 0x0000000b,
    TCP_PERF_SEL_WRITE_TAGCONFLICT_STALL_CYCLES__GFX09 = 0x0000000c,
    TCP_PERF_SEL_ATOMIC_TAGCONFLICT_STALL_CYCLES__GFX09 = 0x0000000d,
    TCP_PERF_SEL_ALLOC_STALL_CYCLES__GFX09             = 0x0000000e,
    TCP_PERF_SEL_UNORDERED_MTYPE_STALL__GFX09          = 0x0000000f,
    TCP_PERF_SEL_LFIFO_STALL_CYCLES__GFX09             = 0x00000010,
    TCP_PERF_SEL_RFIFO_STALL_CYCLES__GFX09             = 0x00000011,
    TCP_PERF_SEL_TCR_RDRET_STALL__GFX09                = 0x00000012,
    TCP_PERF_SEL_WRITE_CONFLICT_STALL__GFX09           = 0x00000013,
    TCP_PERF_SEL_HOLE_READ_STALL__GFX09                = 0x00000014,
    TCP_PERF_SEL_READCONFLICT_STALL_CYCLES__GFX09      = 0x00000015,
    TCP_PERF_SEL_PENDING_STALL_CYCLES__GFX09           = 0x00000016,
    TCP_PERF_SEL_READFIFO_STALL_CYCLES__GFX09          = 0x00000017,
    TCP_PERF_SEL_POWER_STALL__GFX09                    = 0x00000018,
    TCP_PERF_SEL_UTCL1_SERIALIZATION_STALL__GFX09      = 0x00000019,
    TCP_PERF_SEL_TC_TA_XNACK_STALL__GFX09              = 0x0000001a,
    TCP_PERF_SEL_TA_TCP_STATE_READ__GFX09              = 0x0000001b,
    TCP_PERF_SEL_VOLATILE__GFX09                       = 0x0000001c,
    TCP_PERF_SEL_TOTAL_ACCESSES__GFX09                 = 0x0000001d,
    TCP_PERF_SEL_TOTAL_READ__GFX09                     = 0x0000001e,
    TCP_PERF_SEL_TOTAL_NON_READ__GFX09                 = 0x0000001f,
    TCP_PERF_SEL_TOTAL_WRITE__GFX09                    = 0x00000020,
    TCP_PERF_SEL_TOTAL_HIT_LRU_READ__GFX09             = 0x00000021,
    TCP_PERF_SEL_TOTAL_MISS_LRU_READ__GFX09            = 0x00000022,
    TCP_PERF_SEL_TOTAL_MISS_EVICT_READ__GFX09          = 0x00000023,
    TCP_PERF_SEL_TOTAL_MISS_LRU_WRITE__GFX09           = 0x00000024,
    TCP_PERF_SEL_TOTAL_MISS_EVICT_WRITE__GFX09         = 0x00000025,
    TCP_PERF_SEL_TOTAL_ATOMIC_WITH_RET__GFX09          = 0x00000026,
    TCP_PERF_SEL_TOTAL_ATOMIC_WITHOUT_RET__GFX09       = 0x00000027,
    TCP_PERF_SEL_TOTAL_WBINVL1__GFX09                  = 0x00000028,
    TCP_PERF_SEL_TOTAL_WBINVL1_VOL__GFX09              = 0x00000029,
    TCP_PERF_SEL_SQ_TCP_INVALIDATE_VOL__GFX09          = 0x0000002a,
    TCP_PERF_SEL_CP_TCP_INVALIDATE__GFX09              = 0x0000002b,
    TCP_PERF_SEL_CP_TCP_INVALIDATE_VOL__GFX09          = 0x0000002c,
    TCP_PERF_SEL_TOTAL_WRITEBACK_INVALIDATES__GFX09    = 0x0000002d,
    TCP_PERF_SEL_SHOOTDOWN__GFX09                      = 0x0000002e,
    TCP_PERF_SEL_UTCL1_REQUEST__GFX09                  = 0x0000002f,
    TCP_PERF_SEL_UTCL1_TRANSLATION_MISS__GFX09         = 0x00000030,
    TCP_PERF_SEL_UTCL1_TRANSLATION_HIT__GFX09          = 0x00000031,
    TCP_PERF_SEL_UTCL1_PERMISSION_MISS__GFX09          = 0x00000032,
    TCP_PERF_SEL_UTCL1_STALL_INFLIGHT_MAX__GFX09       = 0x00000033,
    TCP_PERF_SEL_UTCL1_STALL_LRU_INFLIGHT__GFX09       = 0x00000034,
    TCP_PERF_SEL_UTCL1_STALL_MULTI_MISS__GFX09         = 0x00000035,
    TCP_PERF_SEL_UTCL1_LFIFO_FULL__GFX09               = 0x00000036,
    TCP_PERF_SEL_UTCL1_STALL_LFIFO_NOT_RES__GFX09      = 0x00000037,
    TCP_PERF_SEL_UTCL1_STALL_UTCL2_REQ_OUT_OF_CREDITS__GFX09 = 0x00000038,
    TCP_PERF_SEL_CLIENT_UTCL1_INFLIGHT__GFX09          = 0x00000039,
    TCP_PERF_SEL_UTCL1_UTCL2_INFLIGHT__GFX09           = 0x0000003a,
    TCP_PERF_SEL_UTCL1_STALL_MISSFIFO_FULL__GFX09      = 0x0000003b,
    TCP_PERF_SEL_TOTAL_CACHE_ACCESSES__GFX09           = 0x0000003c,
    TCP_PERF_SEL_TAGRAM0_REQ__GFX09                    = 0x0000003d,
    TCP_PERF_SEL_TAGRAM1_REQ__GFX09                    = 0x0000003e,
    TCP_PERF_SEL_TAGRAM2_REQ__GFX09                    = 0x0000003f,
    TCP_PERF_SEL_TAGRAM3_REQ__GFX09                    = 0x00000040,
    TCP_PERF_SEL_TCP_LATENCY__GFX09                    = 0x00000041,
    TCP_PERF_SEL_TCC_READ_REQ_LATENCY__GFX09           = 0x00000042,
    TCP_PERF_SEL_TCC_WRITE_REQ_LATENCY__GFX09          = 0x00000043,
    TCP_PERF_SEL_TCC_WRITE_REQ_HOLE_LATENCY__GFX09     = 0x00000044,
    TCP_PERF_SEL_TCC_READ_REQ__GFX09                   = 0x00000045,
    TCP_PERF_SEL_TCC_WRITE_REQ__GFX09                  = 0x00000046,
    TCP_PERF_SEL_TCC_ATOMIC_WITH_RET_REQ__GFX09        = 0x00000047,
    TCP_PERF_SEL_TCC_ATOMIC_WITHOUT_RET_REQ__GFX09     = 0x00000048,
    TCP_PERF_SEL_TCC_LRU_REQ__GFX09                    = 0x00000049,
    TCP_PERF_SEL_TCC_STREAM_REQ__GFX09                 = 0x0000004a,
    TCP_PERF_SEL_TCC_NC_READ_REQ__GFX09                = 0x0000004b,
    TCP_PERF_SEL_TCC_NC_WRITE_REQ__GFX09               = 0x0000004c,
    TCP_PERF_SEL_TCC_NC_ATOMIC_REQ__GFX09              = 0x0000004d,
    TCP_PERF_SEL_TCC_UC_READ_REQ__GFX09                = 0x0000004e,
    TCP_PERF_SEL_TCC_UC_WRITE_REQ__GFX09               = 0x0000004f,
    TCP_PERF_SEL_TCC_UC_ATOMIC_REQ__GFX09              = 0x00000050,
    TCP_PERF_SEL_TCC_CC_READ_REQ__GFX09                = 0x00000051,
    TCP_PERF_SEL_TCC_CC_WRITE_REQ__GFX09               = 0x00000052,
    TCP_PERF_SEL_TCC_CC_ATOMIC_REQ__GFX09              = 0x00000053,
    TCP_PERF_SEL_TCC_DCC_REQ__GFX09                    = 0x00000054,
    TCP_PERF_SEL_TA_REQ__GFX10                         = 0x00000002,
    TCP_PERF_SEL_TA_REQ_STATE_READ__GFX10              = 0x00000003,
    TCP_PERF_SEL_TA_REQ_READ__GFX10                    = 0x00000004,
    TCP_PERF_SEL_TA_REQ_WRITE__GFX10                   = 0x00000005,
    TCP_PERF_SEL_TA_REQ_ATOMIC_WITH_RET__GFX10         = 0x00000006,
    TCP_PERF_SEL_TA_REQ_ATOMIC_WITHOUT_RET__GFX10      = 0x00000007,
    TCP_PERF_SEL_TA_REQ_GL0_INV__GFX10                 = 0x00000008,
    TCP_PERF_SEL_REQ__GFX10                            = 0x00000009,
    TCP_PERF_SEL_REQ_READ__GFX10                       = 0x0000000a,
    TCP_PERF_SEL_REQ_READ_HIT_EVICT__GFX10             = 0x0000000b,
    TCP_PERF_SEL_REQ_READ_HIT_LRU__GFX10               = 0x0000000c,
    TCP_PERF_SEL_REQ_READ_MISS_EVICT__GFX10            = 0x0000000d,
    TCP_PERF_SEL_REQ_WRITE__GFX10                      = 0x0000000e,
    TCP_PERF_SEL_REQ_WRITE_MISS_EVICT__GFX10           = 0x0000000f,
    TCP_PERF_SEL_REQ_WRITE_MISS_LRU__GFX10             = 0x00000010,
    TCP_PERF_SEL_REQ_NON_READ__GFX10                   = 0x00000011,
    TCP_PERF_SEL_REQ_MISS__GFX10                       = 0x00000012,
    TCP_PERF_SEL_REQ_TAGBANK0__GFX10                   = 0x00000013,
    TCP_PERF_SEL_REQ_TAGBANK1__GFX10                   = 0x00000014,
    TCP_PERF_SEL_REQ_TAGBANK2__GFX10                   = 0x00000015,
    TCP_PERF_SEL_REQ_TAGBANK3__GFX10                   = 0x00000016,
    TCP_PERF_SEL_REQ_MISS_TAGBANK0__GFX10              = 0x00000017,
    TCP_PERF_SEL_REQ_MISS_TAGBANK1__GFX10              = 0x00000018,
    TCP_PERF_SEL_REQ_MISS_TAGBANK2__GFX10              = 0x00000019,
    TCP_PERF_SEL_REQ_MISS_TAGBANK3__GFX10              = 0x0000001a,
    TCP_PERF_SEL_GL1_REQ_READ__GFX10                   = 0x0000001b,
    TCP_PERF_SEL_GL1_REQ_READ_128B__GFX10              = 0x0000001c,
    TCP_PERF_SEL_GL1_REQ_READ_64B__GFX10               = 0x0000001d,
    TCP_PERF_SEL_GL1_REQ_WRITE__GFX10                  = 0x0000001e,
    TCP_PERF_SEL_GL1_REQ_ATOMIC_WITH_RET__GFX10        = 0x0000001f,
    TCP_PERF_SEL_GL1_REQ_ATOMIC_WITHOUT_RET__GFX10     = 0x00000020,
    TCP_PERF_SEL_GL1_READ_LATENCY__GFX10               = 0x00000021,
    TCP_PERF_SEL_GL1_WRITE_LATENCY__GFX10              = 0x00000022,
    TCP_PERF_SEL_TCP_LATENCY__GFX10                    = 0x00000023,
    TCP_PERF_SEL_TCP_TA_REQ_STALL__GFX10               = 0x00000024,
    TCP_PERF_SEL_TA_TCP_REQ_STARVE__GFX10              = 0x00000025,
    TCP_PERF_SEL_TA_TCP_XNACK_STALL__GFX10             = 0x00000026,
    TCP_PERF_SEL_DATA_FIFO_STALL__GFX10                = 0x00000027,
    TCP_PERF_SEL_LOD_STALL__GFX10                      = 0x00000028,
    TCP_PERF_SEL_POWER_STALL__GFX10                    = 0x00000029,
    TCP_PERF_SEL_ALLOC_STALL__GFX10                    = 0x0000002a,
    TCP_PERF_SEL_UNORDERED_MTYPE_STALL__GFX10          = 0x0000002b,
    TCP_PERF_SEL_READ_TAGCONFLICT_STALL__GFX10         = 0x0000002c,
    TCP_PERF_SEL_WRITE_TAGCONFLICT_STALL__GFX10        = 0x0000002d,
    TCP_PERF_SEL_ATOMIC_TAGCONFLICT_STALL__GFX10       = 0x0000002e,
    TCP_PERF_SEL_LFIFO_STALL__GFX10                    = 0x0000002f,
    TCP_PERF_SEL_MEM_REQ_FIFO_STALL__GFX10             = 0x00000030,
    TCP_PERF_SEL_GL1_TCP_STALL__GFX10                  = 0x00000031,
    TCP_PERF_SEL_TCP_GL1_STARVE__GFX10                 = 0x00000032,
    TCP_PERF_SEL_GL1_TCP_RDRET_STALL__GFX10            = 0x00000033,
    TCP_PERF_SEL_GL1_GRANT_READ_STALL__GFX10           = 0x00000034,
    TCP_PERF_SEL_GL1_PENDING_STALL__GFX10              = 0x00000035,
    TCP_PERF_SEL_OFIFO_INCOMPLETE_STALL__GFX10         = 0x00000036,
    TCP_PERF_SEL_OFIFO_AGE_ORDER_STALL__GFX10          = 0x00000037,
    TCP_PERF_SEL_TD_DATA_CYCLE_STALL__GFX10            = 0x00000038,
    TCP_PERF_SEL_COMP_TEX_LOAD_STALL__GFX10            = 0x00000039,
    TCP_PERF_SEL_READ_DATACONFLICT_STALL__GFX10        = 0x0000003a,
    TCP_PERF_SEL_WRITE_DATACONFLICT_STALL__GFX10       = 0x0000003b,
    TCP_PERF_SEL_TD_TCP_STALL__GFX10                   = 0x0000003c,
    TCP_PERF_SEL_UTCL0_REQUEST__GFX10                  = 0x0000003d,
    TCP_PERF_SEL_UTCL0_TRANSLATION_MISS__GFX10         = 0x0000003e,
    TCP_PERF_SEL_UTCL0_TRANSLATION_HIT__GFX10          = 0x0000003f,
    TCP_PERF_SEL_UTCL0_PERMISSION_MISS__GFX10          = 0x00000040,
    TCP_PERF_SEL_UTCL0_SERIALIZATION_STALL__GFX10      = 0x00000041,
    TCP_PERF_SEL_UTCL0_STALL_INFLIGHT_MAX__GFX10       = 0x00000042,
    TCP_PERF_SEL_UTCL0_STALL_LRU_INFLIGHT__GFX10       = 0x00000043,
    TCP_PERF_SEL_UTCL0_STALL_MULTI_MISS__GFX10         = 0x00000044,
    TCP_PERF_SEL_UTCL0_STALL_LFIFO_FULL__GFX10         = 0x00000045,
    TCP_PERF_SEL_UTCL0_STALL_MISSFIFO_FULL__GFX10      = 0x00000046,
    TCP_PERF_SEL_UTCL0_STALL_LFIFO_NOT_RES__GFX10      = 0x00000047,
    TCP_PERF_SEL_UTCL0_STALL_UTCL1_REQ_OUT_OF_CREDITS__GFX10 = 0x00000048,
    TCP_PERF_SEL_CLIENT_UTCL0_INFLIGHT__GFX10          = 0x00000049,
    TCP_PERF_SEL_UTCL0_UTCL1_INFLIGHT__GFX10           = 0x0000004a,
    TCP_PERF_SEL_UTCL0_UTCL1_PERM_FAULT__GFX10         = 0x0000004b,
    TCP_PERF_SEL_BACK_COMPAT_SWITCH__GFX10             = 0x0000004c,
} TCP_PERFCOUNT_SELECT;

constexpr unsigned int MaxTcpPerfcountSelectGfx09      = TCP_PERF_SEL_TCC_DCC_REQ__GFX09;
constexpr unsigned int MaxTcpPerfcountSelectGfx10      = TCP_PERF_SEL_BACK_COMPAT_SWITCH__GFX10;

typedef enum TCP_WATCH_MODES {
    TCP_WATCH_MODE_READ                                = 0x00000000,
    TCP_WATCH_MODE_NONREAD                             = 0x00000001,
    TCP_WATCH_MODE_ATOMIC                              = 0x00000002,
    TCP_WATCH_MODE_ALL                                 = 0x00000003,
} TCP_WATCH_MODES;

typedef enum TC_EA_CID {
    TC_EA_CID_RT                                       = 0x00000000,
    TC_EA_CID_FMASK                                    = 0x00000001,
    TC_EA_CID_DCC                                      = 0x00000002,
    TC_EA_CID_TCPMETA                                  = 0x00000003,
    TC_EA_CID_Z                                        = 0x00000004,
    TC_EA_CID_STENCIL                                  = 0x00000005,
    TC_EA_CID_HTILE                                    = 0x00000006,
    TC_EA_CID_MISC                                     = 0x00000007,
    TC_EA_CID_TCP                                      = 0x00000008,
    TC_EA_CID_SQC                                      = 0x00000009,
    TC_EA_CID_CPF                                      = 0x0000000a,
    TC_EA_CID_CPG                                      = 0x0000000b,
    TC_EA_CID_IA                                       = 0x0000000c,
    TC_EA_CID_WD                                       = 0x0000000d,
    TC_EA_CID_PA                                       = 0x0000000e,
    TC_EA_CID_UTCL2_TPI                                = 0x0000000f,
} TC_EA_CID;

typedef enum TC_MICRO_TILE_MODE {
    MICRO_TILE_MODE_LINEAR                             = 0x00000000,
    MICRO_TILE_MODE_STD_2D                             = 0x00000002,
    MICRO_TILE_MODE_STD_3D                             = 0x00000003,
    MICRO_TILE_MODE_DISPLAY_2D                         = 0x00000004,
    MICRO_TILE_MODE_DISPLAY_3D                         = 0x00000005,
    MICRO_TILE_MODE_ROTATED__GFX09                     = 0x00000001,
    MICRO_TILE_MODE_Z_2D__GFX09                        = 0x00000006,
    MICRO_TILE_MODE_Z_3D__GFX09                        = 0x00000007,
    MICRO_TILE_MODE_RENDER_TARGET__GFX10               = 0x00000001,
    MICRO_TILE_MODE_Z__GFX10                           = 0x00000006,
} TC_MICRO_TILE_MODE;

typedef enum TC_NACKS {
    TC_NACK_NO_FAULT                                   = 0x00000000,
    TC_NACK_PAGE_FAULT                                 = 0x00000001,
    TC_NACK_PROTECTION_FAULT                           = 0x00000002,
    TC_NACK_DATA_ERROR                                 = 0x00000003,
} TC_NACKS;

typedef enum TC_OP {
    TC_OP_READ                                         = 0x00000000,
    TC_OP_ATOMIC_FCMPSWAP_RTN_32                       = 0x00000001,
    TC_OP_ATOMIC_FMIN_RTN_32                           = 0x00000002,
    TC_OP_ATOMIC_FMAX_RTN_32                           = 0x00000003,
    TC_OP_RESERVED_FOP_RTN_32_0                        = 0x00000004,
    TC_OP_RESERVED_FOP_RTN_32_1                        = 0x00000005,
    TC_OP_RESERVED_FOP_RTN_32_2                        = 0x00000006,
    TC_OP_ATOMIC_SWAP_RTN_32                           = 0x00000007,
    TC_OP_ATOMIC_CMPSWAP_RTN_32                        = 0x00000008,
    TC_OP_ATOMIC_FCMPSWAP_FLUSH_DENORM_RTN_32          = 0x00000009,
    TC_OP_ATOMIC_FMIN_FLUSH_DENORM_RTN_32              = 0x0000000a,
    TC_OP_ATOMIC_FMAX_FLUSH_DENORM_RTN_32              = 0x0000000b,
    TC_OP_PROBE_FILTER                                 = 0x0000000c,
    TC_OP_RESERVED_FOP_FLUSH_DENORM_RTN_32_1           = 0x0000000d,
    TC_OP_RESERVED_FOP_FLUSH_DENORM_RTN_32_2           = 0x0000000e,
    TC_OP_ATOMIC_ADD_RTN_32                            = 0x0000000f,
    TC_OP_ATOMIC_SUB_RTN_32                            = 0x00000010,
    TC_OP_ATOMIC_SMIN_RTN_32                           = 0x00000011,
    TC_OP_ATOMIC_UMIN_RTN_32                           = 0x00000012,
    TC_OP_ATOMIC_SMAX_RTN_32                           = 0x00000013,
    TC_OP_ATOMIC_UMAX_RTN_32                           = 0x00000014,
    TC_OP_ATOMIC_AND_RTN_32                            = 0x00000015,
    TC_OP_ATOMIC_OR_RTN_32                             = 0x00000016,
    TC_OP_ATOMIC_XOR_RTN_32                            = 0x00000017,
    TC_OP_ATOMIC_INC_RTN_32                            = 0x00000018,
    TC_OP_ATOMIC_DEC_RTN_32                            = 0x00000019,
    TC_OP_WBINVL1_VOL                                  = 0x0000001a,
    TC_OP_WBINVL1_SD                                   = 0x0000001b,
    TC_OP_RESERVED_NON_FLOAT_RTN_32_0                  = 0x0000001c,
    TC_OP_RESERVED_NON_FLOAT_RTN_32_1                  = 0x0000001d,
    TC_OP_RESERVED_NON_FLOAT_RTN_32_2                  = 0x0000001e,
    TC_OP_RESERVED_NON_FLOAT_RTN_32_3                  = 0x0000001f,
    TC_OP_WRITE                                        = 0x00000020,
    TC_OP_ATOMIC_FCMPSWAP_RTN_64                       = 0x00000021,
    TC_OP_ATOMIC_FMIN_RTN_64                           = 0x00000022,
    TC_OP_ATOMIC_FMAX_RTN_64                           = 0x00000023,
    TC_OP_RESERVED_FOP_RTN_64_0                        = 0x00000024,
    TC_OP_RESERVED_FOP_RTN_64_1                        = 0x00000025,
    TC_OP_RESERVED_FOP_RTN_64_2                        = 0x00000026,
    TC_OP_ATOMIC_SWAP_RTN_64                           = 0x00000027,
    TC_OP_ATOMIC_CMPSWAP_RTN_64                        = 0x00000028,
    TC_OP_ATOMIC_FCMPSWAP_FLUSH_DENORM_RTN_64          = 0x00000029,
    TC_OP_ATOMIC_FMIN_FLUSH_DENORM_RTN_64              = 0x0000002a,
    TC_OP_ATOMIC_FMAX_FLUSH_DENORM_RTN_64              = 0x0000002b,
    TC_OP_WBINVL2_SD                                   = 0x0000002c,
    TC_OP_RESERVED_FOP_FLUSH_DENORM_RTN_64_0           = 0x0000002d,
    TC_OP_RESERVED_FOP_FLUSH_DENORM_RTN_64_1           = 0x0000002e,
    TC_OP_ATOMIC_ADD_RTN_64                            = 0x0000002f,
    TC_OP_ATOMIC_SUB_RTN_64                            = 0x00000030,
    TC_OP_ATOMIC_SMIN_RTN_64                           = 0x00000031,
    TC_OP_ATOMIC_UMIN_RTN_64                           = 0x00000032,
    TC_OP_ATOMIC_SMAX_RTN_64                           = 0x00000033,
    TC_OP_ATOMIC_UMAX_RTN_64                           = 0x00000034,
    TC_OP_ATOMIC_AND_RTN_64                            = 0x00000035,
    TC_OP_ATOMIC_OR_RTN_64                             = 0x00000036,
    TC_OP_ATOMIC_XOR_RTN_64                            = 0x00000037,
    TC_OP_ATOMIC_INC_RTN_64                            = 0x00000038,
    TC_OP_ATOMIC_DEC_RTN_64                            = 0x00000039,
    TC_OP_WBL2_NC                                      = 0x0000003a,
    TC_OP_WBL2_WC                                      = 0x0000003b,
    TC_OP_RESERVED_NON_FLOAT_RTN_64_1                  = 0x0000003c,
    TC_OP_RESERVED_NON_FLOAT_RTN_64_2                  = 0x0000003d,
    TC_OP_RESERVED_NON_FLOAT_RTN_64_3                  = 0x0000003e,
    TC_OP_RESERVED_NON_FLOAT_RTN_64_4                  = 0x0000003f,
    TC_OP_WBINVL1                                      = 0x00000040,
    TC_OP_ATOMIC_FCMPSWAP_32                           = 0x00000041,
    TC_OP_ATOMIC_FMIN_32                               = 0x00000042,
    TC_OP_ATOMIC_FMAX_32                               = 0x00000043,
    TC_OP_RESERVED_FOP_32_0                            = 0x00000044,
    TC_OP_RESERVED_FOP_32_1                            = 0x00000045,
    TC_OP_RESERVED_FOP_32_2                            = 0x00000046,
    TC_OP_ATOMIC_SWAP_32                               = 0x00000047,
    TC_OP_ATOMIC_CMPSWAP_32                            = 0x00000048,
    TC_OP_ATOMIC_FCMPSWAP_FLUSH_DENORM_32              = 0x00000049,
    TC_OP_ATOMIC_FMIN_FLUSH_DENORM_32                  = 0x0000004a,
    TC_OP_ATOMIC_FMAX_FLUSH_DENORM_32                  = 0x0000004b,
    TC_OP_INV_METADATA                                 = 0x0000004c,
    TC_OP_RESERVED_FOP_FLUSH_DENORM_32_1               = 0x0000004d,
    TC_OP_RESERVED_FOP_FLUSH_DENORM_32_2               = 0x0000004e,
    TC_OP_ATOMIC_ADD_32                                = 0x0000004f,
    TC_OP_ATOMIC_SUB_32                                = 0x00000050,
    TC_OP_ATOMIC_SMIN_32                               = 0x00000051,
    TC_OP_ATOMIC_UMIN_32                               = 0x00000052,
    TC_OP_ATOMIC_SMAX_32                               = 0x00000053,
    TC_OP_ATOMIC_UMAX_32                               = 0x00000054,
    TC_OP_ATOMIC_AND_32                                = 0x00000055,
    TC_OP_ATOMIC_OR_32                                 = 0x00000056,
    TC_OP_ATOMIC_XOR_32                                = 0x00000057,
    TC_OP_ATOMIC_INC_32                                = 0x00000058,
    TC_OP_ATOMIC_DEC_32                                = 0x00000059,
    TC_OP_INVL2_NC                                     = 0x0000005a,
    TC_OP_NOP_RTN0                                     = 0x0000005b,
    TC_OP_RESERVED_NON_FLOAT_32_1                      = 0x0000005c,
    TC_OP_RESERVED_NON_FLOAT_32_2                      = 0x0000005d,
    TC_OP_RESERVED_NON_FLOAT_32_3                      = 0x0000005e,
    TC_OP_RESERVED_NON_FLOAT_32_4                      = 0x0000005f,
    TC_OP_WBINVL2                                      = 0x00000060,
    TC_OP_ATOMIC_FCMPSWAP_64                           = 0x00000061,
    TC_OP_ATOMIC_FMIN_64                               = 0x00000062,
    TC_OP_ATOMIC_FMAX_64                               = 0x00000063,
    TC_OP_RESERVED_FOP_64_0                            = 0x00000064,
    TC_OP_RESERVED_FOP_64_1                            = 0x00000065,
    TC_OP_RESERVED_FOP_64_2                            = 0x00000066,
    TC_OP_ATOMIC_SWAP_64                               = 0x00000067,
    TC_OP_ATOMIC_CMPSWAP_64                            = 0x00000068,
    TC_OP_ATOMIC_FCMPSWAP_FLUSH_DENORM_64              = 0x00000069,
    TC_OP_ATOMIC_FMIN_FLUSH_DENORM_64                  = 0x0000006a,
    TC_OP_ATOMIC_FMAX_FLUSH_DENORM_64                  = 0x0000006b,
    TC_OP_RESERVED_FOP_FLUSH_DENORM_64_0               = 0x0000006c,
    TC_OP_RESERVED_FOP_FLUSH_DENORM_64_1               = 0x0000006d,
    TC_OP_RESERVED_FOP_FLUSH_DENORM_64_2               = 0x0000006e,
    TC_OP_ATOMIC_ADD_64                                = 0x0000006f,
    TC_OP_ATOMIC_SUB_64                                = 0x00000070,
    TC_OP_ATOMIC_SMIN_64                               = 0x00000071,
    TC_OP_ATOMIC_UMIN_64                               = 0x00000072,
    TC_OP_ATOMIC_SMAX_64                               = 0x00000073,
    TC_OP_ATOMIC_UMAX_64                               = 0x00000074,
    TC_OP_ATOMIC_AND_64                                = 0x00000075,
    TC_OP_ATOMIC_OR_64                                 = 0x00000076,
    TC_OP_ATOMIC_XOR_64                                = 0x00000077,
    TC_OP_ATOMIC_INC_64                                = 0x00000078,
    TC_OP_ATOMIC_DEC_64                                = 0x00000079,
    TC_OP_WBINVL2_NC                                   = 0x0000007a,
    TC_OP_NOP_ACK                                      = 0x0000007b,
    TC_OP_RESERVED_NON_FLOAT_64_1                      = 0x0000007c,
    TC_OP_RESERVED_NON_FLOAT_64_2                      = 0x0000007d,
    TC_OP_RESERVED_NON_FLOAT_64_3                      = 0x0000007e,
    TC_OP_RESERVED_NON_FLOAT_64_4                      = 0x0000007f,
} TC_OP;

typedef enum TC_OP_MASKS {
    TC_OP_MASK_FLUSH_DENROM                            = 0x00000008,
    TC_OP_MASK_64                                      = 0x00000020,
    TC_OP_MASK_NO_RTN                                  = 0x00000040,
} TC_OP_MASKS;

typedef enum TD_PERFCOUNT_SEL {
    TD_PERF_SEL_none                                   = 0x00000000,
    TD_PERF_SEL_td_busy                                = 0x00000001,
    TD_PERF_SEL_input_busy                             = 0x00000002,
    TD_PERF_SEL_ldfptr_wavefront                       = 0x0000001c,
    TD_PERF_SEL_output_busy__GFX09                     = 0x00000003,
    TD_PERF_SEL_lerp_busy__GFX09                       = 0x00000004,
    TD_PERF_SEL_reg_sclk_vld__GFX09                    = 0x00000005,
    TD_PERF_SEL_local_cg_dyn_sclk_grp0_en__GFX09       = 0x00000006,
    TD_PERF_SEL_local_cg_dyn_sclk_grp1_en__GFX09       = 0x00000007,
    TD_PERF_SEL_local_cg_dyn_sclk_grp4_en__GFX09       = 0x00000008,
    TD_PERF_SEL_local_cg_dyn_sclk_grp5_en__GFX09       = 0x00000009,
    TD_PERF_SEL_tc_td_fifo_full__GFX09                 = 0x0000000a,
    TD_PERF_SEL_output_fifo_full__GFX09                = 0x0000000b,
    TD_PERF_SEL_RESERVED_12__GFX09                     = 0x0000000c,
    TD_PERF_SEL_RESERVED_13__GFX09                     = 0x0000000d,
    TD_PERF_SEL_RESERVED_14__GFX09                     = 0x0000000e,
    TD_PERF_SEL_tc_stall__GFX09                        = 0x0000000f,
    TD_PERF_SEL_pc_stall__GFX09                        = 0x00000010,
    TD_PERF_SEL_gds_stall__GFX09                       = 0x00000011,
    TD_PERF_SEL_RESERVED_18__GFX09                     = 0x00000012,
    TD_PERF_SEL_RESERVED_19__GFX09                     = 0x00000013,
    TD_PERF_SEL_gather4_wavefront__GFX09               = 0x00000014,
    TD_PERF_SEL_gather4h_wavefront__GFX09              = 0x00000015,
    TD_PERF_SEL_gather4h_packed_wavefront__GFX09       = 0x00000016,
    TD_PERF_SEL_gather8h_packed_wavefront__GFX09       = 0x00000017,
    TD_PERF_SEL_sample_c_wavefront__GFX09              = 0x00000018,
    TD_PERF_SEL_load_wavefront__GFX09                  = 0x00000019,
    TD_PERF_SEL_atomic_wavefront__GFX09                = 0x0000001a,
    TD_PERF_SEL_store_wavefront__GFX09                 = 0x0000001b,
    TD_PERF_SEL_d16_en_wavefront__GFX09                = 0x0000001d,
    TD_PERF_SEL_bypass_filter_wavefront__GFX09         = 0x0000001e,
    TD_PERF_SEL_min_max_filter_wavefront__GFX09        = 0x0000001f,
    TD_PERF_SEL_coalescable_wavefront__GFX09           = 0x00000020,
    TD_PERF_SEL_coalesced_phase__GFX09                 = 0x00000021,
    TD_PERF_SEL_four_phase_wavefront__GFX09            = 0x00000022,
    TD_PERF_SEL_eight_phase_wavefront__GFX09           = 0x00000023,
    TD_PERF_SEL_sixteen_phase_wavefront__GFX09         = 0x00000024,
    TD_PERF_SEL_four_phase_forward_wavefront__GFX09    = 0x00000025,
    TD_PERF_SEL_write_ack_wavefront__GFX09             = 0x00000026,
    TD_PERF_SEL_RESERVED_39__GFX09                     = 0x00000027,
    TD_PERF_SEL_user_defined_border__GFX09             = 0x00000028,
    TD_PERF_SEL_white_border__GFX09                    = 0x00000029,
    TD_PERF_SEL_opaque_black_border__GFX09             = 0x0000002a,
    TD_PERF_SEL_RESERVED_43__GFX09                     = 0x0000002b,
    TD_PERF_SEL_RESERVED_44__GFX09                     = 0x0000002c,
    TD_PERF_SEL_nack__GFX09                            = 0x0000002d,
    TD_PERF_SEL_td_sp_traffic__GFX09                   = 0x0000002e,
    TD_PERF_SEL_consume_gds_traffic__GFX09             = 0x0000002f,
    TD_PERF_SEL_addresscmd_poison__GFX09               = 0x00000030,
    TD_PERF_SEL_data_poison__GFX09                     = 0x00000031,
    TD_PERF_SEL_start_cycle_0__GFX09                   = 0x00000032,
    TD_PERF_SEL_start_cycle_1__GFX09                   = 0x00000033,
    TD_PERF_SEL_start_cycle_2__GFX09                   = 0x00000034,
    TD_PERF_SEL_start_cycle_3__GFX09                   = 0x00000035,
    TD_PERF_SEL_null_cycle_output__GFX09               = 0x00000036,
    TD_PERF_SEL_d16_data_packed__GFX09                 = 0x00000037,
    TD_PERF_SEL_texels_zeroed_out_by_blend_zero_prt__GFX09 = 0x00000038,
    TD_PERF_SEL_sampler_lerp_busy__GFX10               = 0x00000003,
    TD_PERF_SEL_sampler_out_busy__GFX10                = 0x00000004,
    TD_PERF_SEL_nofilter_busy__GFX10                   = 0x00000005,
    TD_PERF_SEL_sampler_sclk_on_nofilter_sclk_off__GFX10 = 0x00000006,
    TD_PERF_SEL_nofilter_sclk_on_sampler_sclk_off__GFX10 = 0x00000007,
    TD_PERF_SEL_core_state_ram_max_cnt__GFX10          = 0x00000008,
    TD_PERF_SEL_core_state_rams_read__GFX10            = 0x00000009,
    TD_PERF_SEL_weight_data_rams_read__GFX10           = 0x0000000a,
    TD_PERF_SEL_reference_data_rams_read__GFX10        = 0x0000000b,
    TD_PERF_SEL_tc_td_ram_fifo_full__GFX10             = 0x0000000c,
    TD_PERF_SEL_tc_td_ram_fifo_max_cnt__GFX10          = 0x0000000d,
    TD_PERF_SEL_tc_td_data_fifo_full__GFX10            = 0x0000000e,
    TD_PERF_SEL_input_state_fifo_full__GFX10           = 0x0000000f,
    TD_PERF_SEL_ta_data_stall__GFX10                   = 0x00000010,
    TD_PERF_SEL_tc_data_stall__GFX10                   = 0x00000011,
    TD_PERF_SEL_tc_ram_stall__GFX10                    = 0x00000012,
    TD_PERF_SEL_lds_stall__GFX10                       = 0x00000013,
    TD_PERF_SEL_sampler_pkr_full__GFX10                = 0x00000014,
    TD_PERF_SEL_nofilter_pkr_full__GFX10               = 0x00000015,
    TD_PERF_SEL_gather4_wavefront__GFX10               = 0x00000016,
    TD_PERF_SEL_gather4h_wavefront__GFX10              = 0x00000017,
    TD_PERF_SEL_gather4h_packed_wavefront__GFX10       = 0x00000018,
    TD_PERF_SEL_gather8h_packed_wavefront__GFX10       = 0x00000019,
    TD_PERF_SEL_sample_c_wavefront__GFX10              = 0x0000001a,
    TD_PERF_SEL_load_wavefront__GFX10                  = 0x0000001b,
    TD_PERF_SEL_RESERVED_29__GFX10                     = 0x0000001d,
    TD_PERF_SEL_write_ack_wavefront__GFX10             = 0x0000001e,
    TD_PERF_SEL_d16_en_wavefront__GFX10                = 0x0000001f,
    TD_PERF_SEL_bypassLerp_wavefront__GFX10            = 0x00000020,
    TD_PERF_SEL_min_max_filter_wavefront__GFX10        = 0x00000021,
    TD_PERF_SEL_one_comp_wavefront__GFX10              = 0x00000022,
    TD_PERF_SEL_two_comp_wavefront__GFX10              = 0x00000023,
    TD_PERF_SEL_three_comp_wavefront__GFX10            = 0x00000024,
    TD_PERF_SEL_four_comp_wavefront__GFX10             = 0x00000025,
    TD_PERF_SEL_user_defined_border__GFX10             = 0x00000026,
    TD_PERF_SEL_white_border__GFX10                    = 0x00000027,
    TD_PERF_SEL_opaque_black_border__GFX10             = 0x00000028,
    TD_PERF_SEL_lod_warn_from_ta__GFX10                = 0x00000029,
    TD_PERF_SEL_wavefront_dest_is_lds__GFX10           = 0x0000002a,
    TD_PERF_SEL_td_cycling_of_nofilter_instr__GFX10    = 0x0000002b,
    TD_PERF_SEL_tc_cycling_of_nofilter_instr__GFX10    = 0x0000002c,
    TD_PERF_SEL_out_of_order_instr__GFX10              = 0x0000002d,
    TD_PERF_SEL_total_num_instr__GFX10                 = 0x0000002e,
    TD_PERF_SEL_mixmode_instruction__GFX10             = 0x0000002f,
    TD_PERF_SEL_mixmode_resource__GFX10                = 0x00000030,
    TD_PERF_SEL_status_packet__GFX10                   = 0x00000031,
    TD_PERF_SEL_address_cmd_poison__GFX10              = 0x00000032,
    TD_PERF_SEL_data_poison__GFX10                     = 0x00000033,
    TD_PERF_SEL_done_scoreboard_max_stored_cnt__GFX10  = 0x00000034,
    TD_PERF_SEL_done_scoreboard_max_waiting_cnt__GFX10 = 0x00000035,
    TD_PERF_SEL_done_scoreboard_not_empty__GFX10       = 0x00000036,
    TD_PERF_SEL_done_scoreboard_is_full__GFX10         = 0x00000037,
    TD_PERF_SEL_done_scoreboard_bp_due_to_ooo__GFX10   = 0x00000038,
    TD_PERF_SEL_done_scoreboard_bp_due_to_lds__GFX10   = 0x00000039,
    TD_PERF_SEL_nofilter_formatters_turned_on__GFX10   = 0x0000003a,
    TD_PERF_SEL_nofilter_popcount_dmask_gt_num_comp_of_fmt__GFX10 = 0x0000003b,
    TD_PERF_SEL_nofilter_popcount_dmask_lt_num_comp_of_fmt__GFX10 = 0x0000003c,
} TD_PERFCOUNT_SEL;

constexpr unsigned int MaxTdPerfcountSelGfx09          = TD_PERF_SEL_texels_zeroed_out_by_blend_zero_prt__GFX09;
constexpr unsigned int MaxTdPerfcountSelNv10           = TD_PERF_SEL_nofilter_popcount_dmask_lt_num_comp_of_fmt__GFX10;

typedef enum TEX_BC_SWIZZLE {
    TEX_BC_Swizzle_XYZW                                = 0x00000000,
    TEX_BC_Swizzle_XWYZ                                = 0x00000001,
    TEX_BC_Swizzle_WZYX                                = 0x00000002,
    TEX_BC_Swizzle_WXYZ                                = 0x00000003,
    TEX_BC_Swizzle_ZYXW                                = 0x00000004,
    TEX_BC_Swizzle_YXWZ                                = 0x00000005,
} TEX_BC_SWIZZLE;

typedef enum TEX_BORDER_COLOR_TYPE {
    TEX_BorderColor_TransparentBlack                   = 0x00000000,
    TEX_BorderColor_OpaqueBlack                        = 0x00000001,
    TEX_BorderColor_OpaqueWhite                        = 0x00000002,
    TEX_BorderColor_Register                           = 0x00000003,
} TEX_BORDER_COLOR_TYPE;

typedef enum TEX_CHROMA_KEY {
    TEX_ChromaKey_Disabled                             = 0x00000000,
    TEX_ChromaKey_Kill                                 = 0x00000001,
    TEX_ChromaKey_Blend                                = 0x00000002,
    TEX_ChromaKey_RESERVED_3                           = 0x00000003,
} TEX_CHROMA_KEY;

typedef enum TEX_CLAMP {
    TEX_Clamp_Repeat                                   = 0x00000000,
    TEX_Clamp_Mirror                                   = 0x00000001,
    TEX_Clamp_ClampToLast                              = 0x00000002,
    TEX_Clamp_MirrorOnceToLast                         = 0x00000003,
    TEX_Clamp_ClampHalfToBorder                        = 0x00000004,
    TEX_Clamp_MirrorOnceHalfToBorder                   = 0x00000005,
    TEX_Clamp_ClampToBorder                            = 0x00000006,
    TEX_Clamp_MirrorOnceToBorder                       = 0x00000007,
} TEX_CLAMP;

typedef enum TEX_COORD_TYPE {
    TEX_CoordType_Unnormalized                         = 0x00000000,
    TEX_CoordType_Normalized                           = 0x00000001,
} TEX_COORD_TYPE;

typedef enum TEX_DEPTH_COMPARE_FUNCTION {
    TEX_DepthCompareFunction_Never                     = 0x00000000,
    TEX_DepthCompareFunction_Less                      = 0x00000001,
    TEX_DepthCompareFunction_Equal                     = 0x00000002,
    TEX_DepthCompareFunction_LessEqual                 = 0x00000003,
    TEX_DepthCompareFunction_Greater                   = 0x00000004,
    TEX_DepthCompareFunction_NotEqual                  = 0x00000005,
    TEX_DepthCompareFunction_GreaterEqual              = 0x00000006,
    TEX_DepthCompareFunction_Always                    = 0x00000007,
} TEX_DEPTH_COMPARE_FUNCTION;

typedef enum TEX_DIM {
    TEX_Dim_1D                                         = 0x00000000,
    TEX_Dim_2D                                         = 0x00000001,
    TEX_Dim_3D                                         = 0x00000002,
    TEX_Dim_CubeMap                                    = 0x00000003,
    TEX_Dim_1DArray                                    = 0x00000004,
    TEX_Dim_2DArray                                    = 0x00000005,
    TEX_Dim_2D_MSAA                                    = 0x00000006,
    TEX_Dim_2DArray_MSAA                               = 0x00000007,
} TEX_DIM;

typedef enum TEX_FORMAT_COMP {
    TEX_FormatComp_Unsigned                            = 0x00000000,
    TEX_FormatComp_Signed                              = 0x00000001,
    TEX_FormatComp_UnsignedBiased                      = 0x00000002,
    TEX_FormatComp_RESERVED_3                          = 0x00000003,
} TEX_FORMAT_COMP;

typedef enum TEX_MAX_ANISO_RATIO {
    TEX_MaxAnisoRatio_1to1                             = 0x00000000,
    TEX_MaxAnisoRatio_2to1                             = 0x00000001,
    TEX_MaxAnisoRatio_4to1                             = 0x00000002,
    TEX_MaxAnisoRatio_8to1                             = 0x00000003,
    TEX_MaxAnisoRatio_16to1                            = 0x00000004,
    TEX_MaxAnisoRatio_RESERVED_5                       = 0x00000005,
    TEX_MaxAnisoRatio_RESERVED_6                       = 0x00000006,
    TEX_MaxAnisoRatio_RESERVED_7                       = 0x00000007,
} TEX_MAX_ANISO_RATIO;

typedef enum TEX_MIP_FILTER {
    TEX_MipFilter_None                                 = 0x00000000,
    TEX_MipFilter_Point                                = 0x00000001,
    TEX_MipFilter_Linear                               = 0x00000002,
    TEX_MipFilter_Point_Aniso_Adj                      = 0x00000003,
} TEX_MIP_FILTER;

typedef enum TEX_REQUEST_SIZE {
    TEX_RequestSize_32B                                = 0x00000000,
    TEX_RequestSize_64B                                = 0x00000001,
    TEX_RequestSize_128B                               = 0x00000002,
    TEX_RequestSize_2X64B                              = 0x00000003,
} TEX_REQUEST_SIZE;

typedef enum TEX_SAMPLER_TYPE {
    TEX_SamplerType_Invalid                            = 0x00000000,
    TEX_SamplerType_Valid                              = 0x00000001,
} TEX_SAMPLER_TYPE;

typedef enum TEX_XY_FILTER {
    TEX_XYFilter_Point                                 = 0x00000000,
    TEX_XYFilter_Linear                                = 0x00000001,
    TEX_XYFilter_AnisoPoint                            = 0x00000002,
    TEX_XYFilter_AnisoLinear                           = 0x00000003,
} TEX_XY_FILTER;

typedef enum TEX_Z_FILTER {
    TEX_ZFilter_None                                   = 0x00000000,
    TEX_ZFilter_Point                                  = 0x00000001,
    TEX_ZFilter_Linear                                 = 0x00000002,
    TEX_ZFilter_RESERVED_3                             = 0x00000003,
} TEX_Z_FILTER;

typedef enum TileSplit {
    ADDR_SURF_TILE_SPLIT_64B                           = 0x00000000,
    ADDR_SURF_TILE_SPLIT_128B                          = 0x00000001,
    ADDR_SURF_TILE_SPLIT_256B                          = 0x00000002,
    ADDR_SURF_TILE_SPLIT_512B                          = 0x00000003,
    ADDR_SURF_TILE_SPLIT_1KB                           = 0x00000004,
    ADDR_SURF_TILE_SPLIT_2KB                           = 0x00000005,
    ADDR_SURF_TILE_SPLIT_4KB                           = 0x00000006,
} TileSplit;

typedef enum TileType {
    ARRAY_COLOR_TILE                                   = 0x00000000,
    ARRAY_DEPTH_TILE                                   = 0x00000001,
} TileType;

typedef enum TVX_DATA_FORMAT {
    TVX_FMT_INVALID                                    = 0x00000000,
    TVX_FMT_8                                          = 0x00000001,
    TVX_FMT_4_4                                        = 0x00000002,
    TVX_FMT_3_3_2                                      = 0x00000003,
    TVX_FMT_RESERVED_4                                 = 0x00000004,
    TVX_FMT_16                                         = 0x00000005,
    TVX_FMT_16_FLOAT                                   = 0x00000006,
    TVX_FMT_8_8                                        = 0x00000007,
    TVX_FMT_5_6_5                                      = 0x00000008,
    TVX_FMT_6_5_5                                      = 0x00000009,
    TVX_FMT_1_5_5_5                                    = 0x0000000a,
    TVX_FMT_4_4_4_4                                    = 0x0000000b,
    TVX_FMT_5_5_5_1                                    = 0x0000000c,
    TVX_FMT_32                                         = 0x0000000d,
    TVX_FMT_32_FLOAT                                   = 0x0000000e,
    TVX_FMT_16_16                                      = 0x0000000f,
    TVX_FMT_16_16_FLOAT                                = 0x00000010,
    TVX_FMT_8_24                                       = 0x00000011,
    TVX_FMT_8_24_FLOAT                                 = 0x00000012,
    TVX_FMT_24_8                                       = 0x00000013,
    TVX_FMT_24_8_FLOAT                                 = 0x00000014,
    TVX_FMT_10_11_11                                   = 0x00000015,
    TVX_FMT_10_11_11_FLOAT                             = 0x00000016,
    TVX_FMT_11_11_10                                   = 0x00000017,
    TVX_FMT_11_11_10_FLOAT                             = 0x00000018,
    TVX_FMT_2_10_10_10                                 = 0x00000019,
    TVX_FMT_8_8_8_8                                    = 0x0000001a,
    TVX_FMT_10_10_10_2                                 = 0x0000001b,
    TVX_FMT_X24_8_32_FLOAT                             = 0x0000001c,
    TVX_FMT_32_32                                      = 0x0000001d,
    TVX_FMT_32_32_FLOAT                                = 0x0000001e,
    TVX_FMT_16_16_16_16                                = 0x0000001f,
    TVX_FMT_16_16_16_16_FLOAT                          = 0x00000020,
    TVX_FMT_RESERVED_33                                = 0x00000021,
    TVX_FMT_32_32_32_32                                = 0x00000022,
    TVX_FMT_32_32_32_32_FLOAT                          = 0x00000023,
    TVX_FMT_RESERVED_36                                = 0x00000024,
    TVX_FMT_1                                          = 0x00000025,
    TVX_FMT_1_REVERSED                                 = 0x00000026,
    TVX_FMT_GB_GR                                      = 0x00000027,
    TVX_FMT_BG_RG                                      = 0x00000028,
    TVX_FMT_32_AS_8                                    = 0x00000029,
    TVX_FMT_32_AS_8_8                                  = 0x0000002a,
    TVX_FMT_5_9_9_9_SHAREDEXP                          = 0x0000002b,
    TVX_FMT_8_8_8                                      = 0x0000002c,
    TVX_FMT_16_16_16                                   = 0x0000002d,
    TVX_FMT_16_16_16_FLOAT                             = 0x0000002e,
    TVX_FMT_32_32_32                                   = 0x0000002f,
    TVX_FMT_32_32_32_FLOAT                             = 0x00000030,
    TVX_FMT_BC1                                        = 0x00000031,
    TVX_FMT_BC2                                        = 0x00000032,
    TVX_FMT_BC3                                        = 0x00000033,
    TVX_FMT_BC4                                        = 0x00000034,
    TVX_FMT_BC5                                        = 0x00000035,
    TVX_FMT_APC0                                       = 0x00000036,
    TVX_FMT_APC1                                       = 0x00000037,
    TVX_FMT_APC2                                       = 0x00000038,
    TVX_FMT_APC3                                       = 0x00000039,
    TVX_FMT_APC4                                       = 0x0000003a,
    TVX_FMT_APC5                                       = 0x0000003b,
    TVX_FMT_APC6                                       = 0x0000003c,
    TVX_FMT_APC7                                       = 0x0000003d,
    TVX_FMT_CTX1                                       = 0x0000003e,
    TVX_FMT_RESERVED_63                                = 0x0000003f,
} TVX_DATA_FORMAT;

typedef enum TVX_DST_SEL {
    TVX_DstSel_X                                       = 0x00000000,
    TVX_DstSel_Y                                       = 0x00000001,
    TVX_DstSel_Z                                       = 0x00000002,
    TVX_DstSel_W                                       = 0x00000003,
    TVX_DstSel_0f                                      = 0x00000004,
    TVX_DstSel_1f                                      = 0x00000005,
    TVX_DstSel_RESERVED_6                              = 0x00000006,
    TVX_DstSel_Mask                                    = 0x00000007,
} TVX_DST_SEL;

typedef enum TVX_ENDIAN_SWAP {
    TVX_EndianSwap_None                                = 0x00000000,
    TVX_EndianSwap_8in16                               = 0x00000001,
    TVX_EndianSwap_8in32                               = 0x00000002,
    TVX_EndianSwap_8in64                               = 0x00000003,
} TVX_ENDIAN_SWAP;

typedef enum TVX_INST {
    TVX_Inst_NormalVertexFetch                         = 0x00000000,
    TVX_Inst_SemanticVertexFetch                       = 0x00000001,
    TVX_Inst_RESERVED_2                                = 0x00000002,
    TVX_Inst_LD                                        = 0x00000003,
    TVX_Inst_GetTextureResInfo                         = 0x00000004,
    TVX_Inst_GetNumberOfSamples                        = 0x00000005,
    TVX_Inst_GetLOD                                    = 0x00000006,
    TVX_Inst_GetGradientsH                             = 0x00000007,
    TVX_Inst_GetGradientsV                             = 0x00000008,
    TVX_Inst_SetTextureOffsets                         = 0x00000009,
    TVX_Inst_KeepGradients                             = 0x0000000a,
    TVX_Inst_SetGradientsH                             = 0x0000000b,
    TVX_Inst_SetGradientsV                             = 0x0000000c,
    TVX_Inst_Pass                                      = 0x0000000d,
    TVX_Inst_GetBufferResInfo                          = 0x0000000e,
    TVX_Inst_RESERVED_15                               = 0x0000000f,
    TVX_Inst_Sample                                    = 0x00000010,
    TVX_Inst_Sample_L                                  = 0x00000011,
    TVX_Inst_Sample_LB                                 = 0x00000012,
    TVX_Inst_Sample_LZ                                 = 0x00000013,
    TVX_Inst_Sample_G                                  = 0x00000014,
    TVX_Inst_Gather4                                   = 0x00000015,
    TVX_Inst_Sample_G_LB                               = 0x00000016,
    TVX_Inst_Gather4_O                                 = 0x00000017,
    TVX_Inst_Sample_C                                  = 0x00000018,
    TVX_Inst_Sample_C_L                                = 0x00000019,
    TVX_Inst_Sample_C_LB                               = 0x0000001a,
    TVX_Inst_Sample_C_LZ                               = 0x0000001b,
    TVX_Inst_Sample_C_G                                = 0x0000001c,
    TVX_Inst_Gather4_C                                 = 0x0000001d,
    TVX_Inst_Sample_C_G_LB                             = 0x0000001e,
    TVX_Inst_Gather4_C_O                               = 0x0000001f,
} TVX_INST;

typedef enum TVX_NUM_FORMAT_ALL {
    TVX_NumFormatAll_Norm                              = 0x00000000,
    TVX_NumFormatAll_Int                               = 0x00000001,
    TVX_NumFormatAll_Scaled                            = 0x00000002,
    TVX_NumFormatAll_RESERVED_3                        = 0x00000003,
} TVX_NUM_FORMAT_ALL;

typedef enum TVX_SRC_SEL {
    TVX_SrcSel_X                                       = 0x00000000,
    TVX_SrcSel_Y                                       = 0x00000001,
    TVX_SrcSel_Z                                       = 0x00000002,
    TVX_SrcSel_W                                       = 0x00000003,
    TVX_SrcSel_0f                                      = 0x00000004,
    TVX_SrcSel_1f                                      = 0x00000005,
} TVX_SRC_SEL;

typedef enum TVX_SRF_MODE_ALL {
    TVX_SRFModeAll_ZCMO                                = 0x00000000,
    TVX_SRFModeAll_NZ                                  = 0x00000001,
} TVX_SRF_MODE_ALL;

typedef enum TVX_TYPE {
    TVX_Type_InvalidTextureResource                    = 0x00000000,
    TVX_Type_InvalidVertexBuffer                       = 0x00000001,
    TVX_Type_ValidTextureResource                      = 0x00000002,
    TVX_Type_ValidVertexBuffer                         = 0x00000003,
} TVX_TYPE;

typedef enum UNP_BUFFER_MODE {
    UNP_BUFFER_MODE_LUMA                               = 0x00000000,
    UNP_BUFFER_MODE_LUMA_CHROMA                        = 0x00000001,
} UNP_BUFFER_MODE;

typedef enum UNP_GRPH_ADDRESS_TRANSLATION_ENABLE {
    UNP_GRPH_ADDRESS_TRANSLATION_ENABLE0               = 0x00000000,
    UNP_GRPH_ADDRESS_TRANSLATION_ENABLE1               = 0x00000001,
} UNP_GRPH_ADDRESS_TRANSLATION_ENABLE;

typedef enum UNP_GRPH_BANK_HEIGHT {
    UNP_GRPH_ADDR_SURF_BANK_HEIGHT_1                   = 0x00000000,
    UNP_GRPH_ADDR_SURF_BANK_HEIGHT_2                   = 0x00000001,
    UNP_GRPH_ADDR_SURF_BANK_HEIGHT_4                   = 0x00000002,
    UNP_GRPH_ADDR_SURF_BANK_HEIGHT_8                   = 0x00000003,
} UNP_GRPH_BANK_HEIGHT;

typedef enum UNP_GRPH_BANK_WIDTH {
    UNP_GRPH_ADDR_SURF_BANK_WIDTH_1                    = 0x00000000,
    UNP_GRPH_ADDR_SURF_BANK_WIDTH_2                    = 0x00000001,
    UNP_GRPH_ADDR_SURF_BANK_WIDTH_4                    = 0x00000002,
    UNP_GRPH_ADDR_SURF_BANK_WIDTH_8                    = 0x00000003,
} UNP_GRPH_BANK_WIDTH;

typedef enum UNP_GRPH_BLUE_CROSSBAR {
    UNP_GRPH_BLUE_CROSSBAR_B_Cb_AND_C                  = 0x00000000,
    UNP_GRPH_BLUE_CROSSBAR_A                           = 0x00000001,
    UNP_GRPH_BLUE_CROSSBAR_R_Cr                        = 0x00000002,
    UNP_GRPH_BLUE_CROSSBAR_GY_AND_Y                    = 0x00000003,
} UNP_GRPH_BLUE_CROSSBAR;

typedef enum UNP_GRPH_COLOR_EXPANSION_MODE {
    UNP_GRPH_DYNAMIC_EXPANSION                         = 0x00000000,
    UNP_GRPH_ZERO_EXPANSION                            = 0x00000001,
} UNP_GRPH_COLOR_EXPANSION_MODE;

typedef enum UNP_GRPH_DEPTH {
    UNP_GRPH_8BPP                                      = 0x00000000,
    UNP_GRPH_16BPP                                     = 0x00000001,
    UNP_GRPH_32BPP                                     = 0x00000002,
} UNP_GRPH_DEPTH;

typedef enum UNP_GRPH_EN {
    UNP_GRPH_DISABLED                                  = 0x00000000,
    UNP_GRPH_ENABLED                                   = 0x00000001,
} UNP_GRPH_EN;

typedef enum UNP_GRPH_ENDIAN_SWAP {
    UNP_GRPH_ENDIAN_SWAP_NONE                          = 0x00000000,
    UNP_GRPH_ENDIAN_SWAP_8IN16                         = 0x00000001,
    UNP_GRPH_ENDIAN_SWAP_8IN32                         = 0x00000002,
    UNP_GRPH_ENDIAN_SWAP_8IN43                         = 0x00000003,
} UNP_GRPH_ENDIAN_SWAP;

typedef enum UNP_GRPH_GREEN_CROSSBAR {
    UNP_UNP_GRPH_GREEN_CROSSBAR_GY_AND_Y               = 0x00000000,
    UNP_UNP_GRPH_GREEN_CROSSBAR_B_Cb_AND_C             = 0x00000001,
    UNP_UNP_GRPH_GREEN_CROSSBAR_A                      = 0x00000002,
    UNP_UNP_GRPH_GREEN_CROSSBAR_R_Cr                   = 0x00000003,
} UNP_GRPH_GREEN_CROSSBAR;

typedef enum UNP_GRPH_MACRO_TILE_ASPECT {
    UNP_ADDR_SURF_MACRO_ASPECT_1                       = 0x00000000,
    UNP_ADDR_SURF_MACRO_ASPECT_2                       = 0x00000001,
    UNP_ADDR_SURF_MACRO_ASPECT_4                       = 0x00000002,
    UNP_ADDR_SURF_MACRO_ASPECT_8                       = 0x00000003,
} UNP_GRPH_MACRO_TILE_ASPECT;

typedef enum UNP_GRPH_MODE_DISABLE_MULTIPLE_UPDATE {
    UNP_GRPH_MODE_DISABLE_MULTIPLE_UPDATE_0            = 0x00000000,
    UNP_GRPH_MODE_DISABLE_MULTIPLE_UPDATE_1            = 0x00000001,
} UNP_GRPH_MODE_DISABLE_MULTIPLE_UPDATE;

typedef enum UNP_GRPH_MODE_UPDATE_LOCKG {
    UNP_GRPH_UPDATE_LOCK_0                             = 0x00000000,
    UNP_GRPH_UPDATE_LOCK_1                             = 0x00000001,
} UNP_GRPH_MODE_UPDATE_LOCKG;

typedef enum UNP_GRPH_NUM_BANKS {
    UNP_GRPH_ADDR_SURF_2_BANK                          = 0x00000000,
    UNP_GRPH_ADDR_SURF_4_BANK                          = 0x00000001,
    UNP_GRPH_ADDR_SURF_8_BANK                          = 0x00000002,
    UNP_GRPH_ADDR_SURF_16_BANK                         = 0x00000003,
} UNP_GRPH_NUM_BANKS;

typedef enum UNP_GRPH_PRIVILEGED_ACCESS_ENABLE {
    UNP_GRPH_PRIVILEGED_ACCESS_DIS                     = 0x00000000,
    UNP_GRPH_PRIVILEGED_ACCESS_EN                      = 0x00000001,
} UNP_GRPH_PRIVILEGED_ACCESS_ENABLE;

typedef enum UNP_GRPH_RED_CROSSBAR {
    UNP_GRPH_RED_CROSSBAR_R_Cr                         = 0x00000000,
    UNP_GRPH_RED_CROSSBAR_G_Y                          = 0x00000001,
    UNP_GRPH_RED_CROSSBAR_B_Cb                         = 0x00000002,
    UNP_GRPH_RED_CROSSBAR_A                            = 0x00000003,
} UNP_GRPH_RED_CROSSBAR;

typedef enum UNP_GRPH_STACK_INTERLACE_FLIP_EN {
    UNP_GRPH_STACK_INTERLACE_FLIP_DISABLE              = 0x00000000,
    UNP_GRPH_STACK_INTERLACE_FLIP_ENABLE               = 0x00000001,
} UNP_GRPH_STACK_INTERLACE_FLIP_EN;

typedef enum UNP_GRPH_STACK_INTERLACE_FLIP_MODE {
    UNP_GRPH_STACK_INTERLACE_FLIP_MODE_0               = 0x00000000,
    UNP_GRPH_STACK_INTERLACE_FLIP_MODE_1               = 0x00000001,
    UNP_GRPH_STACK_INTERLACE_FLIP_MODE_2               = 0x00000002,
    UNP_GRPH_STACK_INTERLACE_FLIP_MODE_3               = 0x00000003,
} UNP_GRPH_STACK_INTERLACE_FLIP_MODE;

typedef enum UNP_GRPH_STEREOSYNC_FLIP_EN {
    UNP_GRPH_STEREOSYNC_FLIP_DISABLE                   = 0x00000000,
    UNP_GRPH_STEREOSYNC_FLIP_ENABLE                    = 0x00000001,
} UNP_GRPH_STEREOSYNC_FLIP_EN;

typedef enum UNP_GRPH_STEREOSYNC_FLIP_MODE {
    UNP_GRPH_STEREOSYNC_FLIP_MODE_0                    = 0x00000000,
    UNP_GRPH_STEREOSYNC_FLIP_MODE_1                    = 0x00000001,
    UNP_GRPH_STEREOSYNC_FLIP_MODE_2                    = 0x00000002,
    UNP_GRPH_STEREOSYNC_FLIP_MODE_3                    = 0x00000003,
} UNP_GRPH_STEREOSYNC_FLIP_MODE;

typedef enum UNP_GRPH_STEREOSYNC_SELECT_DISABLE {
    UNP_GRPH_STEREOSYNC_SELECT_EN                      = 0x00000000,
    UNP_GRPH_STEREOSYNC_SELECT_DIS                     = 0x00000001,
} UNP_GRPH_STEREOSYNC_SELECT_DISABLE;

typedef enum UNP_GRPH_SURFACE_DISABLE_MULTIPLE_UPDATE {
    UNP_GRPH_SURFACE_DISABLE_MULTIPLE_UPDATE_0         = 0x00000000,
    UNP_GRPH_SURFACE_DISABLE_MULTIPLE_UPDATE_1         = 0x00000001,
} UNP_GRPH_SURFACE_DISABLE_MULTIPLE_UPDATE;

typedef enum UNP_GRPH_SURFACE_IGNORE_UPDATE_LOCK {
    UNP_GRPH_SURFACE_IGNORE_UPDATE_LOCK_0              = 0x00000000,
    UNP_GRPH_SURFACE_IGNORE_UPDATE_LOCK_1              = 0x00000001,
} UNP_GRPH_SURFACE_IGNORE_UPDATE_LOCK;

typedef enum UNP_GRPH_TILE_SPLIT {
    UNP_ADDR_SURF_TILE_SPLIT_64B                       = 0x00000000,
    UNP_ADDR_SURF_TILE_SPLIT_128B                      = 0x00000001,
    UNP_ADDR_SURF_TILE_SPLIT_256B                      = 0x00000002,
    UNP_ADDR_SURF_TILE_SPLIT_512B                      = 0x00000003,
    UNP_ADDR_SURF_TILE_SPLIT_1KB                       = 0x00000004,
    UNP_ADDR_SURF_TILE_SPLIT_2KB                       = 0x00000005,
    UNP_ADDR_SURF_TILE_SPLIT_4KB                       = 0x00000006,
} UNP_GRPH_TILE_SPLIT;

typedef enum UNP_PIXEL_DROP {
    UNP_PIXEL_NO_DROP                                  = 0x00000000,
    UNP_PIXEL_DROPPING                                 = 0x00000001,
} UNP_PIXEL_DROP;

typedef enum UNP_ROTATION_ANGLE {
    UNP_ROTATION_ANGLE_0                               = 0x00000000,
    UNP_ROTATION_ANGLE_90                              = 0x00000001,
    UNP_ROTATION_ANGLE_180                             = 0x00000002,
    UNP_ROTATION_ANGLE_270                             = 0x00000003,
    UNP_ROTATION_ANGLE_0m                              = 0x00000004,
    UNP_ROTATION_ANGLE_90m                             = 0x00000005,
    UNP_ROTATION_ANGLE_180m                            = 0x00000006,
    UNP_ROTATION_ANGLE_270m                            = 0x00000007,
} UNP_ROTATION_ANGLE;

typedef enum UNP_VIDEO_FORMAT {
    UNP_VIDEO_FORMAT0                                  = 0x00000000,
    UNP_VIDEO_FORMAT1                                  = 0x00000001,
    UNP_VIDEO_FORMAT_YUV420_YCbCr                      = 0x00000002,
    UNP_VIDEO_FORMAT_YUV420_YCrCb                      = 0x00000003,
    UNP_VIDEO_FORMAT_YUV422_YCb                        = 0x00000004,
    UNP_VIDEO_FORMAT_YUV422_YCr                        = 0x00000005,
    UNP_VIDEO_FORMAT_YUV422_CbY                        = 0x00000006,
    UNP_VIDEO_FORMAT_YUV422_CrY                        = 0x00000007,
} UNP_VIDEO_FORMAT;

typedef enum UTCL0FaultType {
    UTCL0_XNACK_SUCCESS                                = 0x00000000,
    UTCL0_XNACK_RETRY                                  = 0x00000001,
    UTCL0_XNACK_PRT                                    = 0x00000002,
    UTCL0_XNACK_NO_RETRY                               = 0x00000003,
} UTCL0FaultType;

typedef enum UTCL0RequestType {
    UTCL0_TYPE_NORMAL                                  = 0x00000000,
    UTCL0_TYPE_SHOOTDOWN                               = 0x00000001,
    UTCL0_TYPE_BYPASS                                  = 0x00000002,
} UTCL0RequestType;

typedef enum UTCL1FaultType {
    UTCL1_XNACK_SUCCESS                                = 0x00000000,
    UTCL1_XNACK_RETRY                                  = 0x00000001,
    UTCL1_XNACK_PRT                                    = 0x00000002,
    UTCL1_XNACK_NO_RETRY                               = 0x00000003,
} UTCL1FaultType;

typedef enum UTCL1PerfSel {
    UTCL1_PERF_SEL_NONE                                = 0x00000000,
    UTCL1_PERF_SEL_REQS                                = 0x00000001,
    UTCL1_PERF_SEL_HITS                                = 0x00000002,
    UTCL1_PERF_SEL_MISSES                              = 0x00000003,
    UTCL1_PERF_SEL_BYPASS_REQS                         = 0x00000004,
    UTCL1_PERF_SEL_HIT_INV_FILTER_REQS                 = 0x00000005,
    UTCL1_PERF_SEL_NUM_SMALLK_PAGES                    = 0x00000006,
    UTCL1_PERF_SEL_NUM_BIGK_PAGES                      = 0x00000007,
    UTCL1_PERF_SEL_TOTAL_UTCL2_REQS                    = 0x00000008,
    UTCL1_PERF_SEL_OUTSTANDING_UTCL2_REQS_ACCUM        = 0x00000009,
    UTCL1_PERF_SEL_STALL_ON_UTCL2_CREDITS              = 0x0000000a,
    UTCL1_PERF_SEL_STALL_MH_OFIFO_FULL                 = 0x0000000b,
    UTCL1_PERF_SEL_STALL_MH_CAM_FULL                   = 0x0000000c,
    UTCL1_PERF_SEL_NONRANGE_INV_REQS                   = 0x0000000d,
    UTCL1_PERF_SEL_RANGE_INV_REQS                      = 0x0000000e,
} UTCL1PerfSel;

constexpr unsigned int MaxUTCL1PerfSel                 = UTCL1_PERF_SEL_RANGE_INV_REQS;

typedef enum UTCL1RequestType {
    UTCL1_TYPE_NORMAL                                  = 0x00000000,
    UTCL1_TYPE_SHOOTDOWN                               = 0x00000001,
    UTCL1_TYPE_BYPASS                                  = 0x00000002,
} UTCL1RequestType;

typedef enum UVDFirmwareCommand {
    UVDFC_FENCE__NV10                                  = 0x00000000,
    UVDFC_TRAP__NV10                                   = 0x00000001,
    UVDFC_DECODED_ADDR__NV10                           = 0x00000002,
    UVDFC_MBLOCK_ADDR__NV10                            = 0x00000003,
    UVDFC_ITBUF_ADDR__NV10                             = 0x00000004,
    UVDFC_DISPLAY_ADDR__NV10                           = 0x00000005,
    UVDFC_EOD__NV10                                    = 0x00000006,
    UVDFC_DISPLAY_PITCH__NV10                          = 0x00000007,
    UVDFC_DISPLAY_TILING__NV10                         = 0x00000008,
    UVDFC_BITSTREAM_ADDR__NV10                         = 0x00000009,
    UVDFC_BITSTREAM_SIZE__NV10                         = 0x0000000a,
    UVDFC_FENCE__VG12                                  = 0x00000000,
    UVDFC_TRAP__VG12                                   = 0x00000001,
    UVDFC_DECODED_ADDR__VG12                           = 0x00000002,
    UVDFC_MBLOCK_ADDR__VG12                            = 0x00000003,
    UVDFC_ITBUF_ADDR__VG12                             = 0x00000004,
    UVDFC_DISPLAY_ADDR__VG12                           = 0x00000005,
    UVDFC_EOD__VG12                                    = 0x00000006,
    UVDFC_DISPLAY_PITCH__VG12                          = 0x00000007,
    UVDFC_DISPLAY_TILING__VG12                         = 0x00000008,
    UVDFC_BITSTREAM_ADDR__VG12                         = 0x00000009,
    UVDFC_BITSTREAM_SIZE__VG12                         = 0x0000000a,
} UVDFirmwareCommand;

typedef enum VGT_CACHE_INVALID_MODE {
    VC_ONLY                                            = 0x00000000,
    TC_ONLY                                            = 0x00000001,
    VC_AND_TC                                          = 0x00000002,
} VGT_CACHE_INVALID_MODE;

typedef enum VGT_DETECT_ONE {
    ENABLE_TF1_OPT                                     = 0x00000000,
    DISABLE_TF1_OPT                                    = 0x00000001,
} VGT_DETECT_ONE;

typedef enum VGT_DETECT_ZERO {
    ENABLE_TF0_OPT                                     = 0x00000000,
    DISABLE_TF0_OPT                                    = 0x00000001,
} VGT_DETECT_ZERO;

typedef enum VGT_DIST_MODE {
    NO_DIST                                            = 0x00000000,
    PATCHES                                            = 0x00000001,
    DONUTS                                             = 0x00000002,
    TRAPEZOIDS                                         = 0x00000003,
} VGT_DIST_MODE;

typedef enum VGT_DI_INDEX_SIZE {
    DI_INDEX_SIZE_16_BIT                               = 0x00000000,
    DI_INDEX_SIZE_32_BIT                               = 0x00000001,
    DI_INDEX_SIZE_8_BIT                                = 0x00000002,
} VGT_DI_INDEX_SIZE;

typedef enum VGT_DI_MAJOR_MODE_SELECT {
    DI_MAJOR_MODE_0                                    = 0x00000000,
    DI_MAJOR_MODE_1                                    = 0x00000001,
} VGT_DI_MAJOR_MODE_SELECT;

typedef enum VGT_DI_PRIM_TYPE {
    DI_PT_NONE                                         = 0x00000000,
    DI_PT_POINTLIST                                    = 0x00000001,
    DI_PT_LINELIST                                     = 0x00000002,
    DI_PT_LINESTRIP                                    = 0x00000003,
    DI_PT_TRILIST                                      = 0x00000004,
    DI_PT_TRIFAN                                       = 0x00000005,
    DI_PT_TRISTRIP                                     = 0x00000006,
    DI_PT_2D_RECTANGLE                                 = 0x00000007,
    DI_PT_UNUSED_1                                     = 0x00000008,
    DI_PT_PATCH                                        = 0x00000009,
    DI_PT_LINELIST_ADJ                                 = 0x0000000a,
    DI_PT_LINESTRIP_ADJ                                = 0x0000000b,
    DI_PT_TRILIST_ADJ                                  = 0x0000000c,
    DI_PT_TRISTRIP_ADJ                                 = 0x0000000d,
    DI_PT_UNUSED_3                                     = 0x0000000e,
    DI_PT_UNUSED_4                                     = 0x0000000f,
    DI_PT_RECTLIST                                     = 0x00000011,
    DI_PT_LINELOOP                                     = 0x00000012,
    DI_PT_QUADLIST                                     = 0x00000013,
    DI_PT_QUADSTRIP                                    = 0x00000014,
    DI_PT_POLYGON                                      = 0x00000015,
    DI_PT_TRI_WITH_WFLAGS__GFX09                       = 0x00000010,
    DI_PT_UNUSED_5__GFX10                              = 0x00000010,
} VGT_DI_PRIM_TYPE;

typedef enum VGT_DI_SOURCE_SELECT {
    DI_SRC_SEL_DMA                                     = 0x00000000,
    DI_SRC_SEL_IMMEDIATE                               = 0x00000001,
    DI_SRC_SEL_AUTO_INDEX                              = 0x00000002,
    DI_SRC_SEL_RESERVED                                = 0x00000003,
} VGT_DI_SOURCE_SELECT;

typedef enum VGT_DMA_BUF_TYPE {
    VGT_DMA_BUF_MEM                                    = 0x00000000,
    VGT_DMA_BUF_RING                                   = 0x00000001,
    VGT_DMA_BUF_SETUP                                  = 0x00000002,
    VGT_DMA_PTR_UPDATE                                 = 0x00000003,
} VGT_DMA_BUF_TYPE;

typedef enum VGT_DMA_SWAP_MODE {
    VGT_DMA_SWAP_NONE                                  = 0x00000000,
    VGT_DMA_SWAP_16_BIT                                = 0x00000001,
    VGT_DMA_SWAP_32_BIT                                = 0x00000002,
    VGT_DMA_SWAP_WORD                                  = 0x00000003,
} VGT_DMA_SWAP_MODE;

typedef enum VGT_EVENT_TYPE {
    Reserved_0x00                                      = 0x00000000,
    SAMPLE_STREAMOUTSTATS1                             = 0x00000001,
    SAMPLE_STREAMOUTSTATS2                             = 0x00000002,
    SAMPLE_STREAMOUTSTATS3                             = 0x00000003,
    CACHE_FLUSH_TS                                     = 0x00000004,
    CONTEXT_DONE                                       = 0x00000005,
    CACHE_FLUSH                                        = 0x00000006,
    CS_PARTIAL_FLUSH                                   = 0x00000007,
    VGT_STREAMOUT_SYNC                                 = 0x00000008,
    VGT_STREAMOUT_RESET                                = 0x0000000a,
    END_OF_PIPE_INCR_DE                                = 0x0000000b,
    END_OF_PIPE_IB_END                                 = 0x0000000c,
    RST_PIX_CNT                                        = 0x0000000d,
    BREAK_BATCH                                        = 0x0000000e,
    VS_PARTIAL_FLUSH                                   = 0x0000000f,
    PS_PARTIAL_FLUSH                                   = 0x00000010,
    FLUSH_HS_OUTPUT                                    = 0x00000011,
    FLUSH_DFSM                                         = 0x00000012,
    RESET_TO_LOWEST_VGT                                = 0x00000013,
    CACHE_FLUSH_AND_INV_TS_EVENT                       = 0x00000014,
    ZPASS_DONE                                         = 0x00000015,
    CACHE_FLUSH_AND_INV_EVENT                          = 0x00000016,
    PERFCOUNTER_START                                  = 0x00000017,
    PERFCOUNTER_STOP                                   = 0x00000018,
    PIPELINESTAT_START                                 = 0x00000019,
    PIPELINESTAT_STOP                                  = 0x0000001a,
    PERFCOUNTER_SAMPLE                                 = 0x0000001b,
    SAMPLE_PIPELINESTAT                                = 0x0000001e,
    SO_VGTSTREAMOUT_FLUSH                              = 0x0000001f,
    SAMPLE_STREAMOUTSTATS                              = 0x00000020,
    RESET_VTX_CNT                                      = 0x00000021,
    BLOCK_CONTEXT_DONE                                 = 0x00000022,
    CS_CONTEXT_DONE                                    = 0x00000023,
    VGT_FLUSH                                          = 0x00000024,
    TGID_ROLLOVER                                      = 0x00000025,
    SQ_NON_EVENT                                       = 0x00000026,
    SC_SEND_DB_VPZ                                     = 0x00000027,
    BOTTOM_OF_PIPE_TS                                  = 0x00000028,
    FLUSH_SX_TS                                        = 0x00000029,
    DB_CACHE_FLUSH_AND_INV                             = 0x0000002a,
    FLUSH_AND_INV_DB_DATA_TS                           = 0x0000002b,
    FLUSH_AND_INV_DB_META                              = 0x0000002c,
    FLUSH_AND_INV_CB_DATA_TS                           = 0x0000002d,
    FLUSH_AND_INV_CB_META                              = 0x0000002e,
    CS_DONE                                            = 0x0000002f,
    PS_DONE                                            = 0x00000030,
    FLUSH_AND_INV_CB_PIXEL_DATA                        = 0x00000031,
    SX_CB_RAT_ACK_REQUEST                              = 0x00000032,
    THREAD_TRACE_START                                 = 0x00000033,
    THREAD_TRACE_STOP                                  = 0x00000034,
    THREAD_TRACE_MARKER                                = 0x00000035,
    THREAD_TRACE_FINISH                                = 0x00000037,
    PIXEL_PIPE_STAT_CONTROL                            = 0x00000038,
    PIXEL_PIPE_STAT_DUMP                               = 0x00000039,
    PIXEL_PIPE_STAT_RESET                              = 0x0000003a,
    CONTEXT_SUSPEND                                    = 0x0000003b,
    OFFCHIP_HS_DEALLOC                                 = 0x0000003c,
    ENABLE_NGG_PIPELINE                                = 0x0000003d,
    ENABLE_LEGACY_PIPELINE                             = 0x0000003e,
    SET_FE_ID__GFX09                                   = 0x00000009,
    Available_0x1c__GFX09                              = 0x0000001c,
    Available_0x1d__GFX09                              = 0x0000001d,
    THREAD_TRACE_FLUSH__GFX09                          = 0x00000036,
    Reserved_0x3f__GFX09                               = 0x0000003f,
    Reserved_0x09__GFX10                               = 0x00000009,
    FLUSH_ES_OUTPUT__GFX10                             = 0x0000001c,
    BIN_CONF_OVERRIDE_CHECK__GFX10                     = 0x0000001d,
    THREAD_TRACE_DRAW__GFX10                           = 0x00000036,
    DRAW_DONE__GFX10                                   = 0x0000003f,
} VGT_EVENT_TYPE;

typedef enum VGT_GROUP_CONV_SEL {
    VGT_GRP_INDEX_16                                   = 0x00000000,
    VGT_GRP_INDEX_32                                   = 0x00000001,
    VGT_GRP_UINT_16                                    = 0x00000002,
    VGT_GRP_UINT_32                                    = 0x00000003,
    VGT_GRP_SINT_16                                    = 0x00000004,
    VGT_GRP_SINT_32                                    = 0x00000005,
    VGT_GRP_FLOAT_32                                   = 0x00000006,
    VGT_GRP_AUTO_PRIM                                  = 0x00000007,
    VGT_GRP_FIX_1_23_TO_FLOAT                          = 0x00000008,
} VGT_GROUP_CONV_SEL;

typedef enum VGT_GRP_PRIM_ORDER {
    VGT_GRP_LIST                                       = 0x00000000,
    VGT_GRP_STRIP                                      = 0x00000001,
    VGT_GRP_FAN                                        = 0x00000002,
    VGT_GRP_LOOP                                       = 0x00000003,
    VGT_GRP_POLYGON                                    = 0x00000004,
} VGT_GRP_PRIM_ORDER;

typedef enum VGT_GRP_PRIM_TYPE {
    VGT_GRP_3D_POINT                                   = 0x00000000,
    VGT_GRP_3D_LINE                                    = 0x00000001,
    VGT_GRP_3D_TRI                                     = 0x00000002,
    VGT_GRP_3D_RECT                                    = 0x00000003,
    VGT_GRP_3D_QUAD                                    = 0x00000004,
    VGT_GRP_2D_COPY_RECT_V0                            = 0x00000005,
    VGT_GRP_2D_COPY_RECT_V1                            = 0x00000006,
    VGT_GRP_2D_COPY_RECT_V2                            = 0x00000007,
    VGT_GRP_2D_COPY_RECT_V3                            = 0x00000008,
    VGT_GRP_2D_FILL_RECT                               = 0x00000009,
    VGT_GRP_2D_LINE                                    = 0x0000000a,
    VGT_GRP_2D_TRI                                     = 0x0000000b,
    VGT_GRP_PRIM_INDEX_LINE                            = 0x0000000c,
    VGT_GRP_PRIM_INDEX_TRI                             = 0x0000000d,
    VGT_GRP_PRIM_INDEX_QUAD                            = 0x0000000e,
    VGT_GRP_3D_LINE_ADJ                                = 0x0000000f,
    VGT_GRP_3D_TRI_ADJ                                 = 0x00000010,
    VGT_GRP_3D_PATCH                                   = 0x00000011,
    VGT_GRP_2D_RECT                                    = 0x00000012,
} VGT_GRP_PRIM_TYPE;

typedef enum VGT_GS_CUT_MODE {
    GS_CUT_1024                                        = 0x00000000,
    GS_CUT_512                                         = 0x00000001,
    GS_CUT_256                                         = 0x00000002,
    GS_CUT_128                                         = 0x00000003,
} VGT_GS_CUT_MODE;

typedef enum VGT_GS_MODE_TYPE {
    GS_OFF                                             = 0x00000000,
    GS_SCENARIO_A                                      = 0x00000001,
    GS_SCENARIO_B                                      = 0x00000002,
    GS_SCENARIO_G                                      = 0x00000003,
    GS_SCENARIO_C                                      = 0x00000004,
    SPRITE_EN                                          = 0x00000005,
} VGT_GS_MODE_TYPE;

typedef enum VGT_GS_OUTPRIM_TYPE {
    POINTLIST                                          = 0x00000000,
    LINESTRIP                                          = 0x00000001,
    TRISTRIP                                           = 0x00000002,
    RECTLIST__GFX09                                    = 0x00000003,
    RECT_2D__GFX10                                     = 0x00000003,
    RECTLIST__GFX10                                    = 0x00000004,
} VGT_GS_OUTPRIM_TYPE;

typedef enum VGT_INDEX_TYPE_MODE {
    VGT_INDEX_16                                       = 0x00000000,
    VGT_INDEX_32                                       = 0x00000001,
    VGT_INDEX_8                                        = 0x00000002,
} VGT_INDEX_TYPE_MODE;

typedef enum VGT_OUTPATH_SELECT {
    VGT_OUTPATH_VTX_REUSE                              = 0x00000000,
    VGT_OUTPATH_TESS_EN__GFX09                         = 0x00000001,
    VGT_OUTPATH_PASSTHRU__GFX09                        = 0x00000002,
    VGT_OUTPATH_GS_BLOCK__GFX09                        = 0x00000003,
    VGT_OUTPATH_HS_BLOCK__GFX09                        = 0x00000004,
    VGT_OUTPATH_PRIM_GEN__GFX09                        = 0x00000005,
    VGT_OUTPATH_GS_BLOCK__GFX10                        = 0x00000001,
    VGT_OUTPATH_HS_BLOCK__GFX10                        = 0x00000002,
    VGT_OUTPATH_PRIM_GEN__GFX10                        = 0x00000003,
    VGT_OUTPATH_TE_PRIM_GEN__GFX10                     = 0x00000004,
    VGT_OUTPATH_TE_GS_BLOCK__GFX10                     = 0x00000005,
    VGT_OUTPATH_TE_OUTPUT__GFX10                       = 0x00000006,
} VGT_OUTPATH_SELECT;

typedef enum VGT_OUT_PRIM_TYPE {
    VGT_OUT_POINT                                      = 0x00000000,
    VGT_OUT_LINE                                       = 0x00000001,
    VGT_OUT_TRI                                        = 0x00000002,
    VGT_OUT_RECT_V0                                    = 0x00000003,
    VGT_OUT_RECT_V1                                    = 0x00000004,
    VGT_OUT_RECT_V2                                    = 0x00000005,
    VGT_OUT_RECT_V3                                    = 0x00000006,
    VGT_OUT_2D_RECT                                    = 0x00000007,
    VGT_TE_QUAD                                        = 0x00000008,
    VGT_TE_PRIM_INDEX_LINE                             = 0x00000009,
    VGT_TE_PRIM_INDEX_TRI                              = 0x0000000a,
    VGT_TE_PRIM_INDEX_QUAD                             = 0x0000000b,
    VGT_OUT_LINE_ADJ                                   = 0x0000000c,
    VGT_OUT_TRI_ADJ                                    = 0x0000000d,
    VGT_OUT_PATCH                                      = 0x0000000e,
} VGT_OUT_PRIM_TYPE;

typedef enum VGT_PERFCOUNT_SELECT {
    vgt_perf_UNUSED0                                   = 0x00000000,
    vgt_perf_VGT_SPI_ESVERT_VALID                      = 0x00000001,
    vgt_perf_VGT_SPI_ESVERT_EOV                        = 0x00000002,
    vgt_perf_VGT_SPI_ESVERT_STALLED                    = 0x00000003,
    vgt_perf_VGT_SPI_ESVERT_STARVED_BUSY               = 0x00000004,
    vgt_perf_VGT_SPI_ESVERT_STARVED_IDLE               = 0x00000005,
    vgt_perf_VGT_SPI_ESVERT_STATIC                     = 0x00000006,
    vgt_perf_VGT_SPI_PRIMGEN_GS_PRIM_FIFO_STALL        = 0x00000007,
    vgt_perf_VGT_SPI_PRIMGEN_ES_VERT_FIFO_STALL        = 0x00000008,
    vgt_perf_VGT_SPI_GSPRIM_VALID                      = 0x00000009,
    vgt_perf_VGT_SPI_GSPRIM_EOV                        = 0x0000000a,
    vgt_perf_VGT_SPI_GSPRIM_CONT                       = 0x0000000b,
    vgt_perf_VGT_SPI_PRIMGEN_SUBGRP_FIFO_STALL         = 0x0000000c,
    vgt_perf_VGT_SPI_GSPRIM_STARVED_BUSY               = 0x0000000d,
    vgt_perf_VGT_SPI_GSPRIM_STARVED_IDLE               = 0x0000000e,
    vgt_perf_VGT_SPI_GSPRIM_STATIC                     = 0x0000000f,
    vgt_perf_VGT_SPI_GSSUBGRP_EVENT_WINDOW_ACTIVE      = 0x00000010,
    vgt_perf_VGT_SPI_GSSUBGRP_IS_EVENT                 = 0x00000011,
    vgt_perf_VGT_SPI_GSSUBGRP_SEND                     = 0x00000012,
    vgt_perf_VGT_SPI_VSWAVE_EVENT_WINDOW_ACTIVE        = 0x00000013,
    vgt_perf_VGT_SPI_VSVERT_SEND                       = 0x00000014,
    vgt_perf_VGT_SPI_VSVERT_EOV                        = 0x00000015,
    vgt_perf_VGT_SPI_VSVERT_STALLED                    = 0x00000016,
    vgt_perf_VGT_SPI_VSVERT_STARVED_BUSY               = 0x00000017,
    vgt_perf_VGT_SPI_VSVERT_STARVED_IDLE               = 0x00000018,
    vgt_perf_VGT_SPI_VSVERT_STATIC                     = 0x00000019,
    vgt_perf_VGT_SPI_VSWAVE_IS_EVENT                   = 0x0000001a,
    vgt_perf_VGT_SPI_VSWAVE_SEND                       = 0x0000001b,
    vgt_perf_VGT_PA_EVENT_WINDOW_ACTIVE                = 0x0000001c,
    vgt_perf_VGT_PA_CLIPV_SEND                         = 0x0000001d,
    vgt_perf_VGT_PA_CLIPV_FIRSTVERT                    = 0x0000001e,
    vgt_perf_VGT_PA_CLIPV_STALLED                      = 0x0000001f,
    vgt_perf_VGT_PA_CLIPV_STARVED_BUSY                 = 0x00000020,
    vgt_perf_VGT_PA_CLIPV_STARVED_IDLE                 = 0x00000021,
    vgt_perf_VGT_PA_CLIPV_STATIC                       = 0x00000022,
    vgt_perf_VGT_PA_CLIPP_SEND                         = 0x00000023,
    vgt_perf_VGT_PA_CLIPP_EOP                          = 0x00000024,
    vgt_perf_VGT_PA_CLIPP_IS_EVENT                     = 0x00000025,
    vgt_perf_VGT_PA_CLIPP_NULL_PRIM                    = 0x00000026,
    vgt_perf_VGT_PA_CLIPP_NEW_VTX_VECT                 = 0x00000027,
    vgt_perf_VGT_PA_CLIPP_STALLED                      = 0x00000028,
    vgt_perf_VGT_PA_CLIPP_STARVED_BUSY                 = 0x00000029,
    vgt_perf_VGT_PA_CLIPP_STARVED_IDLE                 = 0x0000002a,
    vgt_perf_VGT_PA_CLIPP_STATIC                       = 0x0000002b,
    vgt_perf_VGT_PA_CLIPS_SEND                         = 0x0000002c,
    vgt_perf_VGT_PA_CLIPS_STALLED                      = 0x0000002d,
    vgt_perf_VGT_PA_CLIPS_STARVED_BUSY                 = 0x0000002e,
    vgt_perf_VGT_PA_CLIPS_STARVED_IDLE                 = 0x0000002f,
    vgt_perf_VGT_PA_CLIPS_STATIC                       = 0x00000030,
    vgt_perf_VSVERT_DS_SEND                            = 0x00000031,
    vgt_perf_VSVERT_API_SEND                           = 0x00000032,
    vgt_perf_hs_tif_stall                              = 0x00000033,
    vgt_perf_hs_input_stall                            = 0x00000034,
    vgt_perf_hs_interface_stall                        = 0x00000035,
    vgt_perf_hs_tfm_stall                              = 0x00000036,
    vgt_perf_te11_starved_after_work                   = 0x00000037,
    vgt_perf_gs_event_stall                            = 0x00000038,
    vgt_perf_vgt_pa_clipp_send_not_event               = 0x00000039,
    vgt_perf_vgt_pa_clipp_valid_prim                   = 0x0000003a,
    vgt_perf_REUSED_ES_INDICES                         = 0x0000003b,
    vgt_perf_VS_CACHE_HITS                             = 0x0000003c,
    vgt_perf_GS_CACHE_HITS                             = 0x0000003d,
    vgt_perf_DS_CACHE_HITS                             = 0x0000003e,
    vgt_perf_TOTAL_CACHE_HITS                          = 0x0000003f,
    vgt_perf_vgt_busy                                  = 0x00000040,
    vgt_perf_vgt_gs_busy                               = 0x00000041,
    vgt_perf_gsprim_stalled                            = 0x00000042,
    vgt_perf_esvert_stalled_gs_tbl                     = 0x00000043,
    vgt_perf_esvert_stalled_gs_event                   = 0x00000044,
    vgt_perf_vgt_spi_primgen_wd_interface_stall        = 0x00000045,
    vgt_perf_UNUSED70                                  = 0x00000046,
    vgt_perf_gsprim_stalled_gs_tbl                     = 0x00000047,
    vgt_perf_gsprim_stalled_gs_event                   = 0x00000048,
    vgt_perf_gsprim_stalled_esvert                     = 0x00000049,
    vgt_perf_UNUSED74                                  = 0x0000004a,
    vgt_perf_UNUSED75                                  = 0x0000004b,
    vgt_perf_counters_avail_stalled                    = 0x0000004c,
    vgt_perf_gs_rb_space_avail_stalled                 = 0x0000004d,
    vgt_perf_gs_issue_rtr_stalled                      = 0x0000004e,
    vgt_perf_gssubgrp_stalled                          = 0x0000004f,
    vgt_perf_strmout_stalled                           = 0x00000050,
    vgt_perf_UNUSED81                                  = 0x00000051,
    vgt_perf_cm_stalled_by_gog                         = 0x00000052,
    vgt_perf_cm_reading_stalled                        = 0x00000053,
    vgt_perf_cm_stalled_by_gsfetch_done                = 0x00000054,
    vgt_perf_gog_vs_tbl_stalled                        = 0x00000055,
    vgt_perf_gog_out_indx_stalled                      = 0x00000056,
    vgt_perf_gog_out_prim_stalled                      = 0x00000057,
    vgt_perf_waveid_stalled                            = 0x00000058,
    vgt_perf_gog_busy                                  = 0x00000059,
    vgt_perf_REUSED_VS_INDICES                         = 0x0000005a,
    vgt_perf_sclk_reg_vld_event                        = 0x0000005b,
    vgt_perf_vs_conflicting_indices                    = 0x0000005c,
    vgt_perf_sclk_core_vld_event                       = 0x0000005d,
    vgt_perf_hsthdgrp_stalled                          = 0x0000005e,
    vgt_perf_sclk_gs_vld_event                         = 0x0000005f,
    vgt_perf_vgt_spi_lsvert_valid                      = 0x00000060,
    vgt_perf_vgt_spi_lsvert_eov                        = 0x00000061,
    vgt_perf_vgt_spi_lsvert_stalled                    = 0x00000062,
    vgt_perf_vgt_spi_lsvert_starved_busy               = 0x00000063,
    vgt_perf_vgt_spi_lsvert_starved_idle               = 0x00000064,
    vgt_perf_vgt_spi_lsvert_static                     = 0x00000065,
    vgt_perf_UNUSED102                                 = 0x00000066,
    vgt_perf_UNUSED103                                 = 0x00000067,
    vgt_perf_UNUSED104                                 = 0x00000068,
    vgt_perf_vgt_spi_hsvert_valid                      = 0x00000069,
    vgt_perf_vgt_spi_hsvert_eov                        = 0x0000006a,
    vgt_perf_vgt_spi_hsvert_stalled                    = 0x0000006b,
    vgt_perf_vgt_spi_hsvert_starved_busy               = 0x0000006c,
    vgt_perf_vgt_spi_hsvert_starved_idle               = 0x0000006d,
    vgt_perf_vgt_spi_hsvert_static                     = 0x0000006e,
    vgt_perf_vgt_spi_hsthdgrp_event_window_active      = 0x0000006f,
    vgt_perf_vgt_spi_hsthdgrp_is_event                 = 0x00000070,
    vgt_perf_vgt_spi_hsthdgrp_send                     = 0x00000071,
    vgt_perf_ds_prims                                  = 0x00000072,
    vgt_perf_UNUSED115                                 = 0x00000073,
    vgt_perf_UNUSED116                                 = 0x00000074,
    vgt_perf_hs_thread_groups                          = 0x00000075,
    vgt_perf_UNUSED118                                 = 0x00000076,
    vgt_perf_vs_thread_groups                          = 0x00000077,
    vgt_perf_UNUSED120                                 = 0x00000078,
    vgt_perf_UNUSED121                                 = 0x00000079,
    vgt_perf_UNUSED122                                 = 0x0000007a,
    vgt_perf_gs_done_latency                           = 0x0000007b,
    vgt_perf_vgt_hs_busy                               = 0x0000007c,
    vgt_perf_vgt_te11_busy                             = 0x0000007d,
    vgt_perf_UNUSED126                                 = 0x0000007e,
    vgt_perf_hs_flush                                  = 0x0000007f,
    vgt_perf_UNUSED128                                 = 0x00000080,
    vgt_perf_vgt_pa_clipp_eopg                         = 0x00000081,
    vgt_perf_UNUSED130                                 = 0x00000082,
    vgt_perf_UNUSED131                                 = 0x00000083,
    vgt_perf_UNUSED132                                 = 0x00000084,
    vgt_perf_gs_done                                   = 0x00000085,
    vgt_perf_vs_done                                   = 0x00000086,
    vgt_perf_gs_done_received                          = 0x00000087,
    vgt_perf_UNUSED136                                 = 0x00000088,
    vgt_perf_gs_ring_high_water_mark                   = 0x00000089,
    vgt_perf_vs_table_high_water_mark                  = 0x0000008a,
    vgt_perf_hs_tgs_active_high_water_mark             = 0x0000008b,
    vgt_perf_pa_clipp_dealloc                          = 0x0000008c,
    vgt_perf_cut_mem_flush_stalled                     = 0x0000008d,
    vgt_perf_vsvert_work_received                      = 0x0000008e,
    vgt_perf_vgt_pa_clipp_starved_after_work           = 0x0000008f,
    vgt_perf_te11_con_starved_after_work               = 0x00000090,
    vgt_perf_te11_con_stalled                          = 0x00000091,
    vgt_perf_vgt_spi_vsvert_valid                      = 0x00000092,
    vgt_perf_sclk_te11_vld                             = 0x00000093,
} VGT_PERFCOUNT_SELECT;

constexpr unsigned int MaxVgtPerfcountSelect           = vgt_perf_sclk_te11_vld;

typedef enum VGT_RDREQ_POLICY {
    VGT_POLICY_LRU                                     = 0x00000000,
    VGT_POLICY_STREAM                                  = 0x00000001,
    VGT_POLICY_BYPASS__GFX10                           = 0x00000002,
} VGT_RDREQ_POLICY;

typedef enum VGT_STAGES_ES_EN {
    ES_STAGE_OFF                                       = 0x00000000,
    ES_STAGE_DS                                        = 0x00000001,
    ES_STAGE_REAL                                      = 0x00000002,
    RESERVED_ES                                        = 0x00000003,
} VGT_STAGES_ES_EN;

typedef enum VGT_STAGES_GS_EN {
    GS_STAGE_OFF                                       = 0x00000000,
    GS_STAGE_ON                                        = 0x00000001,
} VGT_STAGES_GS_EN;

typedef enum VGT_STAGES_HS_EN {
    HS_STAGE_OFF                                       = 0x00000000,
    HS_STAGE_ON                                        = 0x00000001,
} VGT_STAGES_HS_EN;

typedef enum VGT_STAGES_LS_EN {
    LS_STAGE_OFF                                       = 0x00000000,
    LS_STAGE_ON                                        = 0x00000001,
    CS_STAGE_ON                                        = 0x00000002,
    RESERVED_LS                                        = 0x00000003,
} VGT_STAGES_LS_EN;

typedef enum VGT_STAGES_VS_EN {
    VS_STAGE_REAL                                      = 0x00000000,
    VS_STAGE_DS                                        = 0x00000001,
    VS_STAGE_COPY_SHADER                               = 0x00000002,
    RESERVED_VS                                        = 0x00000003,
} VGT_STAGES_VS_EN;

typedef enum VGT_TESS_PARTITION {
    PART_INTEGER                                       = 0x00000000,
    PART_POW2                                          = 0x00000001,
    PART_FRAC_ODD                                      = 0x00000002,
    PART_FRAC_EVEN                                     = 0x00000003,
} VGT_TESS_PARTITION;

typedef enum VGT_TESS_TOPOLOGY {
    OUTPUT_POINT                                       = 0x00000000,
    OUTPUT_LINE                                        = 0x00000001,
    OUTPUT_TRIANGLE_CW                                 = 0x00000002,
    OUTPUT_TRIANGLE_CCW                                = 0x00000003,
} VGT_TESS_TOPOLOGY;

typedef enum VGT_TESS_TYPE {
    TESS_ISOLINE                                       = 0x00000000,
    TESS_TRIANGLE                                      = 0x00000001,
    TESS_QUAD                                          = 0x00000002,
} VGT_TESS_TYPE;

typedef enum VTX_CLAMP {
    VTX_Clamp_ClampToZero                              = 0x00000000,
    VTX_Clamp_ClampToNAN                               = 0x00000001,
} VTX_CLAMP;

typedef enum VTX_FETCH_TYPE {
    VTX_FetchType_VertexData                           = 0x00000000,
    VTX_FetchType_InstanceData                         = 0x00000001,
    VTX_FetchType_NoIndexOffset                        = 0x00000002,
    VTX_FetchType_RESERVED_3                           = 0x00000003,
} VTX_FETCH_TYPE;

typedef enum VTX_FORMAT_COMP_ALL {
    VTX_FormatCompAll_Unsigned                         = 0x00000000,
    VTX_FormatCompAll_Signed                           = 0x00000001,
} VTX_FORMAT_COMP_ALL;

typedef enum VTX_MEM_REQUEST_SIZE {
    VTX_MemRequestSize_32B                             = 0x00000000,
    VTX_MemRequestSize_64B                             = 0x00000001,
} VTX_MEM_REQUEST_SIZE;

typedef enum WATERMARK_MASK_CONTROL {
    WM_MASK_CONTROL_SET_A                              = 0x00000000,
    WM_MASK_CONTROL_SET_B                              = 0x00000001,
    WM_MASK_CONTROL_SET_C                              = 0x00000002,
    WM_MASK_CONTROL_SET_D                              = 0x00000003,
    WM_MASK_CONTROL_RESERVED                           = 0x00000006,
    WM_MASK_CONTROL_ACTIVE_SET                         = 0x00000007,
} WATERMARK_MASK_CONTROL;

typedef enum WD_IA_DRAW_REG_XFER {
    WD_IA_DRAW_REG_XFER_IA_MULTI_VGT_PARAM             = 0x00000000,
    WD_IA_DRAW_REG_XFER_VGT_MULTI_PRIM_IB_RESET_EN     = 0x00000001,
    WD_IA_DRAW_REG_XFER_VGT_INSTANCE_BASE_ID           = 0x00000002,
    WD_IA_DRAW_REG_XFER_GE_CNTL__GFX10                 = 0x00000003,
    WD_IA_DRAW_REG_XFER_GE_USER_VGPR_EN__GFX101PLUS    = 0x00000004,
} WD_IA_DRAW_REG_XFER;

typedef enum WD_IA_DRAW_SOURCE {
    WD_IA_DRAW_SOURCE_DMA                              = 0x00000000,
    WD_IA_DRAW_SOURCE_IMMD                             = 0x00000001,
    WD_IA_DRAW_SOURCE_AUTO                             = 0x00000002,
    WD_IA_DRAW_SOURCE_OPAQ                             = 0x00000003,
} WD_IA_DRAW_SOURCE;

typedef enum WD_IA_DRAW_TYPE {
    WD_IA_DRAW_TYPE_DI_MM0                             = 0x00000000,
    WD_IA_DRAW_TYPE_REG_XFER                           = 0x00000001,
    WD_IA_DRAW_TYPE_EVENT_INIT                         = 0x00000002,
    WD_IA_DRAW_TYPE_EVENT_ADDR                         = 0x00000003,
    WD_IA_DRAW_TYPE_MIN_INDX                           = 0x00000004,
    WD_IA_DRAW_TYPE_MAX_INDX                           = 0x00000005,
    WD_IA_DRAW_TYPE_INDX_OFF                           = 0x00000006,
    WD_IA_DRAW_TYPE_IMM_DATA                           = 0x00000007,
} WD_IA_DRAW_TYPE;

typedef enum WD_PERFCOUNT_SELECT {
    wd_perf_rbiu_fifos_event_window_active             = 0x00000000,
    wd_perf_rbiu_dr_fifo_starved                       = 0x00000001,
    wd_perf_rbiu_dr_fifo_stalled                       = 0x00000002,
    wd_perf_rbiu_di_fifo_starved                       = 0x00000003,
    wd_perf_rbiu_di_fifo_stalled                       = 0x00000004,
    wd_perf_wd_busy                                    = 0x00000005,
    wd_perf_wd_sclk_reg_vld_event                      = 0x00000006,
    wd_perf_wd_sclk_input_vld_event                    = 0x00000007,
    wd_perf_wd_sclk_core_vld_event                     = 0x00000008,
    wd_perf_WD_STALLED                                 = 0x00000009,
    wd_perf_inside_tf_bin_0                            = 0x0000000a,
    wd_perf_inside_tf_bin_1                            = 0x0000000b,
    wd_perf_inside_tf_bin_2                            = 0x0000000c,
    wd_perf_inside_tf_bin_3                            = 0x0000000d,
    wd_perf_inside_tf_bin_4                            = 0x0000000e,
    wd_perf_inside_tf_bin_5                            = 0x0000000f,
    wd_perf_inside_tf_bin_6                            = 0x00000010,
    wd_perf_inside_tf_bin_7                            = 0x00000011,
    wd_perf_inside_tf_bin_8                            = 0x00000012,
    wd_perf_tfreq_lat_bin_0                            = 0x00000013,
    wd_perf_tfreq_lat_bin_1                            = 0x00000014,
    wd_perf_tfreq_lat_bin_2                            = 0x00000015,
    wd_perf_tfreq_lat_bin_3                            = 0x00000016,
    wd_perf_tfreq_lat_bin_4                            = 0x00000017,
    wd_perf_tfreq_lat_bin_5                            = 0x00000018,
    wd_perf_tfreq_lat_bin_6                            = 0x00000019,
    wd_perf_tfreq_lat_bin_7                            = 0x0000001a,
    wd_starved_on_hs_done                              = 0x0000001b,
    wd_perf_se0_hs_done_latency                        = 0x0000001c,
    wd_perf_se1_hs_done_latency                        = 0x0000001d,
    wd_perf_se2_hs_done_latency                        = 0x0000001e,
    wd_perf_se3_hs_done_latency                        = 0x0000001f,
    wd_perf_hs_done_se0                                = 0x00000020,
    wd_perf_hs_done_se1                                = 0x00000021,
    wd_perf_hs_done_se2                                = 0x00000022,
    wd_perf_hs_done_se3                                = 0x00000023,
    wd_perf_null_patches                               = 0x00000024,
    wd_perf_sclk_te11_cld                              = 0x00000025,
    wd_perf_csb_lat_bin_0                              = 0x00000026,
    wd_perf_csb_lat_bin_1                              = 0x00000027,
    wd_perf_csb_lat_bin_2                              = 0x00000028,
    wd_perf_csb_lat_bin_3                              = 0x00000029,
    wd_perf_csb_lat_bin_4                              = 0x0000002a,
    wd_perf_csb_lat_bin_5                              = 0x0000002b,
    wd_perf_csb_lat_bin_6                              = 0x0000002c,
    wd_perf_csb_lat_bin_7                              = 0x0000002d,
    wd_perf_rm_stalled_pos_buf                         = 0x0000002e,
    wd_perf_rm_stalled_param_buf                       = 0x0000002f,
    wd_perf_rm_stalled_index_buf                       = 0x00000030,
    wd_perf_rm_stalled_csb_buf                         = 0x00000031,
    wd_perf_utcl1_translation_miss_event               = 0x00000032,
    wd_perf_utcl1_translation_hit_event                = 0x00000033,
    wd_perf_utcl1_stall_event                          = 0x00000034,
    wd_perf_utcl1_retry_event                          = 0x00000035,
    wd_perf_utcl1_consecutive_retry_event              = 0x00000036,
    wd_perf_utcl1_request_event_1                      = 0x00000037,
    wd_perf_utcl1_request_event_0                      = 0x00000038,
    wd_perf_utcl1_stall_utcl2_event                    = 0x00000039,
} WD_PERFCOUNT_SELECT;

constexpr unsigned int MaxWdPerfcountSelect            = wd_perf_utcl1_stall_utcl2_event;

typedef enum WritePolicy {
    CACHE_LRU_WR                                       = 0x00000000,
    CACHE_STREAM                                       = 0x00000001,
    CACHE_NOA_WR                                       = 0x00000002,
    CACHE_BYPASS                                       = 0x00000003,
} WritePolicy;

typedef enum ZFormat {
    Z_INVALID                                          = 0x00000000,
    Z_16                                               = 0x00000001,
    Z_24                                               = 0x00000002,
    Z_32_FLOAT                                         = 0x00000003,
} ZFormat;

typedef enum ZLimitSumm {
    FORCE_SUMM_OFF                                     = 0x00000000,
    FORCE_SUMM_MINZ                                    = 0x00000001,
    FORCE_SUMM_MAXZ                                    = 0x00000002,
    FORCE_SUMM_BOTH                                    = 0x00000003,
} ZLimitSumm;

typedef enum ZModeForce {
    NO_FORCE                                           = 0x00000000,
    FORCE_EARLY_Z                                      = 0x00000001,
    FORCE_LATE_Z                                       = 0x00000002,
    FORCE_RE_Z                                         = 0x00000003,
} ZModeForce;

typedef enum ZOrder {
    LATE_Z                                             = 0x00000000,
    EARLY_Z_THEN_LATE_Z                                = 0x00000001,
    RE_Z                                               = 0x00000002,
    EARLY_Z_THEN_RE_Z                                  = 0x00000003,
} ZOrder;

typedef enum ZpassControl {
    ZPASS_DISABLE                                      = 0x00000000,
    ZPASS_SAMPLES                                      = 0x00000001,
    ZPASS_PIXELS                                       = 0x00000002,
} ZpassControl;

typedef enum ZSamplePosition {
    Z_SAMPLE_CENTER                                    = 0x00000000,
    Z_SAMPLE_CENTROID                                  = 0x00000001,
} ZSamplePosition;

constexpr unsigned int CONFIG_SPACE1_END                        = 0x00002bff;
constexpr unsigned int CONFIG_SPACE1_START                      = 0x00002000;
constexpr unsigned int CONFIG_SPACE2_END                        = 0x00009fff;
constexpr unsigned int CONFIG_SPACE2_START                      = 0x00003000;
constexpr unsigned int CONFIG_SPACE_END                         = 0x00009fff;
constexpr unsigned int CONFIG_SPACE_START                       = 0x00002000;
constexpr unsigned int CONTEXT_SPACE_END                        = 0x0000bfff;
constexpr unsigned int CONTEXT_SPACE_START                      = 0x0000a000;
constexpr unsigned int CSDATA_ADDR_WIDTH                        = 0x00000007;
constexpr unsigned int CSDATA_DATA_WIDTH                        = 0x00000020;
constexpr unsigned int CSDATA_TYPE_WIDTH                        = 0x00000002;
constexpr unsigned int GB_TILING_CONFIG_MACROTABLE_SIZE         = 0x00000010;
constexpr unsigned int GB_TILING_CONFIG_TABLE_SIZE              = 0x00000020;
constexpr unsigned int GL__CONSTANT_ALPHA                       = BLEND_CONSTANT_ALPHA;
constexpr unsigned int GL__CONSTANT_COLOR                       = BLEND_CONSTANT_COLOR;
constexpr unsigned int GL__DST_ALPHA                            = BLEND_DST_ALPHA;
constexpr unsigned int GL__DST_COLOR                            = BLEND_DST_COLOR;
constexpr unsigned int GL__ONE                                  = BLEND_ONE;
constexpr unsigned int GL__ONE_MINUS_CONSTANT_ALPHA             = BLEND_ONE_MINUS_CONSTANT_ALPHA;
constexpr unsigned int GL__ONE_MINUS_CONSTANT_COLOR             = BLEND_ONE_MINUS_CONSTANT_COLOR;
constexpr unsigned int GL__ONE_MINUS_DST_ALPHA                  = BLEND_ONE_MINUS_DST_ALPHA;
constexpr unsigned int GL__ONE_MINUS_DST_COLOR                  = BLEND_ONE_MINUS_DST_COLOR;
constexpr unsigned int GL__ONE_MINUS_SRC_ALPHA                  = BLEND_ONE_MINUS_SRC_ALPHA;
constexpr unsigned int GL__ONE_MINUS_SRC_COLOR                  = BLEND_ONE_MINUS_SRC_COLOR;
constexpr unsigned int GL__SRC_ALPHA                            = BLEND_SRC_ALPHA;
constexpr unsigned int GL__SRC_ALPHA_SATURATE                   = BLEND_SRC_ALPHA_SATURATE;
constexpr unsigned int GL__SRC_COLOR                            = BLEND_SRC_COLOR;
constexpr unsigned int GL__ZERO                                 = BLEND_ZERO;
constexpr unsigned int GSTHREADID_SIZE                          = 0x00000002;
constexpr unsigned int INST_ID_ECC_INTERRUPT_MSG                = 0xfffffff0;
constexpr unsigned int INST_ID_HOST_REG_TRAP_MSG                = 0xfffffffe;
constexpr unsigned int INST_ID_HW_TRAP                          = 0xfffffff2;
constexpr unsigned int INST_ID_KILL_SEQ                         = 0xfffffff3;
constexpr unsigned int INST_ID_PRIV_START                       = 0x80000000;
constexpr unsigned int INST_ID_SPI_WREXEC                       = 0xfffffff4;
constexpr unsigned int INST_ID_TTRACE_NEW_PC_MSG                = 0xfffffff1;
constexpr unsigned int IQ_DEQUEUE_RETRY                         = 0x00000004;
constexpr unsigned int IQ_INTR_TYPE_IB                          = 0x00000001;
constexpr unsigned int IQ_INTR_TYPE_MQD                         = 0x00000002;
constexpr unsigned int IQ_INTR_TYPE_PQ                          = 0x00000000;
constexpr unsigned int IQ_OFFLOAD_RETRY                         = 0x00000001;
constexpr unsigned int IQ_QUEUE_SLEEP                           = 0x00000000;
constexpr unsigned int IQ_SCH_WAVE_MSG                          = 0x00000002;
constexpr unsigned int IQ_SEM_REARM                             = 0x00000003;
constexpr unsigned int PERSISTENT_SPACE_END                     = 0x00002fff;
constexpr unsigned int PERSISTENT_SPACE_START                   = 0x00002c00;
constexpr unsigned int SEM_ECC_ERROR                            = 0x00000000;
constexpr unsigned int SEM_TRANS_ERROR                          = 0x00000001;
constexpr unsigned int SIMM16_WAITCNT_EXP_CNT_SIZE              = 0x00000003;
constexpr unsigned int SIMM16_WAITCNT_EXP_CNT_START             = 0x00000004;
constexpr unsigned int SIMM16_WAITCNT_LGKM_CNT_START            = 0x00000008;
constexpr unsigned int SIMM16_WAITCNT_VM_CNT_HI_SIZE            = 0x00000002;
constexpr unsigned int SIMM16_WAITCNT_VM_CNT_HI_START           = 0x0000000e;
constexpr unsigned int SIMM16_WAITCNT_VM_CNT_SIZE               = 0x00000004;
constexpr unsigned int SIMM16_WAITCNT_VM_CNT_START              = 0x00000000;
constexpr unsigned int SQDEC_BEGIN                              = 0x00002300;
constexpr unsigned int SQDEC_END                                = 0x000023ff;
constexpr unsigned int SQGFXUDEC_BEGIN                          = 0x0000c330;
constexpr unsigned int SQGFXUDEC_END                            = 0x0000c380;
constexpr unsigned int SQIND_GLOBAL_REGS_OFFSET                 = 0x00000000;
constexpr unsigned int SQIND_GLOBAL_REGS_SIZE                   = 0x00000008;
constexpr unsigned int SQIND_LOCAL_REGS_OFFSET                  = 0x00000008;
constexpr unsigned int SQIND_LOCAL_REGS_SIZE                    = 0x00000008;
constexpr unsigned int SQIND_WAVE_SGPRS_OFFSET                  = 0x00000200;
constexpr unsigned int SQIND_WAVE_SGPRS_SIZE                    = 0x00000200;
constexpr unsigned int SQIND_WAVE_VGPRS_OFFSET                  = 0x00000400;
constexpr unsigned int SQPERFDDEC_BEGIN                         = 0x0000d1c0;
constexpr unsigned int SQPERFDDEC_END                           = 0x0000d240;
constexpr unsigned int SQPERFSDEC_BEGIN                         = 0x0000d9c0;
constexpr unsigned int SQPERFSDEC_END                           = 0x0000da40;
constexpr unsigned int SQPWRDEC_BEGIN                           = 0x0000f08c;
constexpr unsigned int SQPWRDEC_END                             = 0x0000f094;
constexpr unsigned int SQ_DISPATCHER_GFX_CNT_PER_RING           = 0x00000008;
constexpr unsigned int SQ_DISPATCHER_GFX_MIN                    = 0x00000010;
constexpr unsigned int SQ_EDC_FUE_CNTL_LDS                      = 0x00000005;
constexpr unsigned int SQ_EDC_FUE_CNTL_SIMD0                    = 0x00000000;
constexpr unsigned int SQ_EDC_FUE_CNTL_SIMD1                    = 0x00000001;
constexpr unsigned int SQ_EDC_FUE_CNTL_SIMD2                    = 0x00000002;
constexpr unsigned int SQ_EDC_FUE_CNTL_SIMD3                    = 0x00000003;
constexpr unsigned int SQ_EDC_FUE_CNTL_SQ                       = 0x00000004;
constexpr unsigned int SQ_EDC_FUE_CNTL_TA                       = 0x00000007;
constexpr unsigned int SQ_EDC_FUE_CNTL_TCP                      = 0x00000008;
constexpr unsigned int SQ_EDC_FUE_CNTL_TD                       = 0x00000006;
constexpr unsigned int SQ_EX_MODE_EXCP_ADDR_WATCH0              = 0x00000007;
constexpr unsigned int SQ_EX_MODE_EXCP_DIV0                     = 0x00000002;
constexpr unsigned int SQ_EX_MODE_EXCP_HI_ADDR_WATCH1           = 0x00000000;
constexpr unsigned int SQ_EX_MODE_EXCP_HI_ADDR_WATCH2           = 0x00000001;
constexpr unsigned int SQ_EX_MODE_EXCP_HI_ADDR_WATCH3           = 0x00000002;
constexpr unsigned int SQ_EX_MODE_EXCP_INEXACT                  = 0x00000005;
constexpr unsigned int SQ_EX_MODE_EXCP_INPUT_DENORM             = 0x00000001;
constexpr unsigned int SQ_EX_MODE_EXCP_INT_DIV0                 = 0x00000006;
constexpr unsigned int SQ_EX_MODE_EXCP_INVALID                  = 0x00000000;
constexpr unsigned int SQ_EX_MODE_EXCP_MEM_VIOL                 = 0x00000008;
constexpr unsigned int SQ_EX_MODE_EXCP_OVERFLOW                 = 0x00000003;
constexpr unsigned int SQ_EX_MODE_EXCP_UNDERFLOW                = 0x00000004;
constexpr unsigned int SQ_EX_MODE_EXCP_VALU_BASE                = 0x00000000;
constexpr unsigned int SQ_EX_MODE_EXCP_VALU_SIZE                = 0x00000007;
constexpr unsigned int SQ_GFXDEC_BEGIN                          = 0x0000a000;
constexpr unsigned int SQ_GFXDEC_END                            = 0x0000c000;
constexpr unsigned int SQ_GFXDEC_STATE_ID_SHIFT                 = 0x0000000a;
constexpr unsigned int SQ_MAX_PGM_SGPRS                         = 0x00000068;
constexpr unsigned int SQ_MAX_PGM_VGPRS                         = 0x00000100;
constexpr unsigned int SQ_WAVE_TYPE_PS0                         = 0x00000000;
constexpr unsigned int SRCID_NONSECURE_CP                       = 0x00000001;
constexpr unsigned int SRCID_NONSECURE_CP_RCIU                  = 0x00000001;
constexpr unsigned int SRCID_RLC                                = 0x00000000;
constexpr unsigned int SRCID_RLCV                               = 0x00000006;
constexpr unsigned int SRCID_SECURE_CP                          = 0x00000007;
constexpr unsigned int SRCID_SECURE_CP_RCIU                     = 0x00000007;
constexpr unsigned int UCONFIG_SPACE_END                        = 0x0000ffff;
constexpr unsigned int UCONFIG_SPACE_START                      = 0x0000c000;
constexpr unsigned int VMID_SZ                                  = 0x00000004;

namespace Gfx09
{
    constexpr unsigned int SIMM16_WAITCNT_LGKM_CNT_SIZE             = 0x00000004;
    constexpr unsigned int SQIND_WAVE_HWREGS_OFFSET                 = 0x00000010;
    constexpr unsigned int SQIND_WAVE_HWREGS_SIZE                   = 0x000001f0;
    constexpr unsigned int SQIND_WAVE_VGPRS_SIZE                    = 0x00000100;
    constexpr unsigned int SQ_ATTR0                                 = 0x00000000;
    constexpr unsigned int SQ_BUFFER_ATOMIC_ADD                     = 0x00000042;
    constexpr unsigned int SQ_BUFFER_ATOMIC_ADD_X2                  = 0x00000062;
    constexpr unsigned int SQ_BUFFER_ATOMIC_AND                     = 0x00000048;
    constexpr unsigned int SQ_BUFFER_ATOMIC_AND_X2                  = 0x00000068;
    constexpr unsigned int SQ_BUFFER_ATOMIC_CMPSWAP                 = 0x00000041;
    constexpr unsigned int SQ_BUFFER_ATOMIC_CMPSWAP_X2              = 0x00000061;
    constexpr unsigned int SQ_BUFFER_ATOMIC_DEC                     = 0x0000004c;
    constexpr unsigned int SQ_BUFFER_ATOMIC_DEC_X2                  = 0x0000006c;
    constexpr unsigned int SQ_BUFFER_ATOMIC_INC                     = 0x0000004b;
    constexpr unsigned int SQ_BUFFER_ATOMIC_INC_X2                  = 0x0000006b;
    constexpr unsigned int SQ_BUFFER_ATOMIC_OR                      = 0x00000049;
    constexpr unsigned int SQ_BUFFER_ATOMIC_OR_X2                   = 0x00000069;
    constexpr unsigned int SQ_BUFFER_ATOMIC_SMAX                    = 0x00000046;
    constexpr unsigned int SQ_BUFFER_ATOMIC_SMAX_X2                 = 0x00000066;
    constexpr unsigned int SQ_BUFFER_ATOMIC_SMIN                    = 0x00000044;
    constexpr unsigned int SQ_BUFFER_ATOMIC_SMIN_X2                 = 0x00000064;
    constexpr unsigned int SQ_BUFFER_ATOMIC_SUB                     = 0x00000043;
    constexpr unsigned int SQ_BUFFER_ATOMIC_SUB_X2                  = 0x00000063;
    constexpr unsigned int SQ_BUFFER_ATOMIC_SWAP                    = 0x00000040;
    constexpr unsigned int SQ_BUFFER_ATOMIC_SWAP_X2                 = 0x00000060;
    constexpr unsigned int SQ_BUFFER_ATOMIC_UMAX                    = 0x00000047;
    constexpr unsigned int SQ_BUFFER_ATOMIC_UMAX_X2                 = 0x00000067;
    constexpr unsigned int SQ_BUFFER_ATOMIC_UMIN                    = 0x00000045;
    constexpr unsigned int SQ_BUFFER_ATOMIC_UMIN_X2                 = 0x00000065;
    constexpr unsigned int SQ_BUFFER_ATOMIC_XOR                     = 0x0000004a;
    constexpr unsigned int SQ_BUFFER_ATOMIC_XOR_X2                  = 0x0000006a;
    constexpr unsigned int SQ_BUFFER_LOAD_DWORD                     = 0x00000014;
    constexpr unsigned int SQ_BUFFER_LOAD_DWORDX2                   = 0x00000015;
    constexpr unsigned int SQ_BUFFER_LOAD_DWORDX3                   = 0x00000016;
    constexpr unsigned int SQ_BUFFER_LOAD_DWORDX4                   = 0x00000017;
    constexpr unsigned int SQ_BUFFER_LOAD_FORMAT_D16_HI_X           = 0x00000026;
    constexpr unsigned int SQ_BUFFER_LOAD_FORMAT_D16_X              = 0x00000008;
    constexpr unsigned int SQ_BUFFER_LOAD_FORMAT_D16_XY             = 0x00000009;
    constexpr unsigned int SQ_BUFFER_LOAD_FORMAT_D16_XYZ            = 0x0000000a;
    constexpr unsigned int SQ_BUFFER_LOAD_FORMAT_D16_XYZW           = 0x0000000b;
    constexpr unsigned int SQ_BUFFER_LOAD_FORMAT_X                  = 0x00000000;
    constexpr unsigned int SQ_BUFFER_LOAD_FORMAT_XY                 = 0x00000001;
    constexpr unsigned int SQ_BUFFER_LOAD_FORMAT_XYZ                = 0x00000002;
    constexpr unsigned int SQ_BUFFER_LOAD_FORMAT_XYZW               = 0x00000003;
    constexpr unsigned int SQ_BUFFER_LOAD_SBYTE                     = 0x00000011;
    constexpr unsigned int SQ_BUFFER_LOAD_SBYTE_D16                 = 0x00000022;
    constexpr unsigned int SQ_BUFFER_LOAD_SBYTE_D16_HI              = 0x00000023;
    constexpr unsigned int SQ_BUFFER_LOAD_SHORT_D16                 = 0x00000024;
    constexpr unsigned int SQ_BUFFER_LOAD_SHORT_D16_HI              = 0x00000025;
    constexpr unsigned int SQ_BUFFER_LOAD_SSHORT                    = 0x00000013;
    constexpr unsigned int SQ_BUFFER_LOAD_UBYTE                     = 0x00000010;
    constexpr unsigned int SQ_BUFFER_LOAD_UBYTE_D16                 = 0x00000020;
    constexpr unsigned int SQ_BUFFER_LOAD_UBYTE_D16_HI              = 0x00000021;
    constexpr unsigned int SQ_BUFFER_LOAD_USHORT                    = 0x00000012;
    constexpr unsigned int SQ_BUFFER_STORE_BYTE                     = 0x00000018;
    constexpr unsigned int SQ_BUFFER_STORE_BYTE_D16_HI              = 0x00000019;
    constexpr unsigned int SQ_BUFFER_STORE_DWORD                    = 0x0000001c;
    constexpr unsigned int SQ_BUFFER_STORE_DWORDX2                  = 0x0000001d;
    constexpr unsigned int SQ_BUFFER_STORE_DWORDX3                  = 0x0000001e;
    constexpr unsigned int SQ_BUFFER_STORE_DWORDX4                  = 0x0000001f;
    constexpr unsigned int SQ_BUFFER_STORE_FORMAT_D16_HI_X          = 0x00000027;
    constexpr unsigned int SQ_BUFFER_STORE_FORMAT_D16_X             = 0x0000000c;
    constexpr unsigned int SQ_BUFFER_STORE_FORMAT_D16_XY            = 0x0000000d;
    constexpr unsigned int SQ_BUFFER_STORE_FORMAT_D16_XYZ           = 0x0000000e;
    constexpr unsigned int SQ_BUFFER_STORE_FORMAT_D16_XYZW          = 0x0000000f;
    constexpr unsigned int SQ_BUFFER_STORE_FORMAT_X                 = 0x00000004;
    constexpr unsigned int SQ_BUFFER_STORE_FORMAT_XY                = 0x00000005;
    constexpr unsigned int SQ_BUFFER_STORE_FORMAT_XYZ               = 0x00000006;
    constexpr unsigned int SQ_BUFFER_STORE_FORMAT_XYZW              = 0x00000007;
    constexpr unsigned int SQ_BUFFER_STORE_LDS_DWORD                = 0x0000003d;
    constexpr unsigned int SQ_BUFFER_STORE_SHORT                    = 0x0000001a;
    constexpr unsigned int SQ_BUFFER_STORE_SHORT_D16_HI             = 0x0000001b;
    constexpr unsigned int SQ_BUFFER_WBINVL1                        = 0x0000003e;
    constexpr unsigned int SQ_BUFFER_WBINVL1_VOL                    = 0x0000003f;
    constexpr unsigned int SQ_CHAN_W                                = 0x00000003;
    constexpr unsigned int SQ_CHAN_X                                = 0x00000000;
    constexpr unsigned int SQ_CHAN_Y                                = 0x00000001;
    constexpr unsigned int SQ_CHAN_Z                                = 0x00000002;
    constexpr unsigned int SQ_CNT1                                  = 0x00000000;
    constexpr unsigned int SQ_CNT2                                  = 0x00000001;
    constexpr unsigned int SQ_CNT3                                  = 0x00000002;
    constexpr unsigned int SQ_CNT4                                  = 0x00000003;
    constexpr unsigned int SQ_DPP_BOUND_OFF                         = 0x00000000;
    constexpr unsigned int SQ_DPP_BOUND_ZERO                        = 0x00000001;
    constexpr unsigned int SQ_DPP_QUAD_PERM                         = 0x00000000;
    constexpr unsigned int SQ_DPP_ROW_BCAST15                       = 0x00000142;
    constexpr unsigned int SQ_DPP_ROW_BCAST31                       = 0x00000143;
    constexpr unsigned int SQ_DPP_ROW_HALF_MIRROR                   = 0x00000141;
    constexpr unsigned int SQ_DPP_ROW_MIRROR                        = 0x00000140;
    constexpr unsigned int SQ_DPP_ROW_RR1                           = 0x00000121;
    constexpr unsigned int SQ_DPP_ROW_RR2                           = 0x00000122;
    constexpr unsigned int SQ_DPP_ROW_RR3                           = 0x00000123;
    constexpr unsigned int SQ_DPP_ROW_RR4                           = 0x00000124;
    constexpr unsigned int SQ_DPP_ROW_RR5                           = 0x00000125;
    constexpr unsigned int SQ_DPP_ROW_RR6                           = 0x00000126;
    constexpr unsigned int SQ_DPP_ROW_RR7                           = 0x00000127;
    constexpr unsigned int SQ_DPP_ROW_RR8                           = 0x00000128;
    constexpr unsigned int SQ_DPP_ROW_RR9                           = 0x00000129;
    constexpr unsigned int SQ_DPP_ROW_RR10                          = 0x0000012a;
    constexpr unsigned int SQ_DPP_ROW_RR11                          = 0x0000012b;
    constexpr unsigned int SQ_DPP_ROW_RR12                          = 0x0000012c;
    constexpr unsigned int SQ_DPP_ROW_RR13                          = 0x0000012d;
    constexpr unsigned int SQ_DPP_ROW_RR14                          = 0x0000012e;
    constexpr unsigned int SQ_DPP_ROW_RR15                          = 0x0000012f;
    constexpr unsigned int SQ_DPP_ROW_SL1                           = 0x00000101;
    constexpr unsigned int SQ_DPP_ROW_SL2                           = 0x00000102;
    constexpr unsigned int SQ_DPP_ROW_SL3                           = 0x00000103;
    constexpr unsigned int SQ_DPP_ROW_SL4                           = 0x00000104;
    constexpr unsigned int SQ_DPP_ROW_SL5                           = 0x00000105;
    constexpr unsigned int SQ_DPP_ROW_SL6                           = 0x00000106;
    constexpr unsigned int SQ_DPP_ROW_SL7                           = 0x00000107;
    constexpr unsigned int SQ_DPP_ROW_SL8                           = 0x00000108;
    constexpr unsigned int SQ_DPP_ROW_SL9                           = 0x00000109;
    constexpr unsigned int SQ_DPP_ROW_SL10                          = 0x0000010a;
    constexpr unsigned int SQ_DPP_ROW_SL11                          = 0x0000010b;
    constexpr unsigned int SQ_DPP_ROW_SL12                          = 0x0000010c;
    constexpr unsigned int SQ_DPP_ROW_SL13                          = 0x0000010d;
    constexpr unsigned int SQ_DPP_ROW_SL14                          = 0x0000010e;
    constexpr unsigned int SQ_DPP_ROW_SL15                          = 0x0000010f;
    constexpr unsigned int SQ_DPP_ROW_SR1                           = 0x00000111;
    constexpr unsigned int SQ_DPP_ROW_SR2                           = 0x00000112;
    constexpr unsigned int SQ_DPP_ROW_SR3                           = 0x00000113;
    constexpr unsigned int SQ_DPP_ROW_SR4                           = 0x00000114;
    constexpr unsigned int SQ_DPP_ROW_SR5                           = 0x00000115;
    constexpr unsigned int SQ_DPP_ROW_SR6                           = 0x00000116;
    constexpr unsigned int SQ_DPP_ROW_SR7                           = 0x00000117;
    constexpr unsigned int SQ_DPP_ROW_SR8                           = 0x00000118;
    constexpr unsigned int SQ_DPP_ROW_SR9                           = 0x00000119;
    constexpr unsigned int SQ_DPP_ROW_SR10                          = 0x0000011a;
    constexpr unsigned int SQ_DPP_ROW_SR11                          = 0x0000011b;
    constexpr unsigned int SQ_DPP_ROW_SR12                          = 0x0000011c;
    constexpr unsigned int SQ_DPP_ROW_SR13                          = 0x0000011d;
    constexpr unsigned int SQ_DPP_ROW_SR14                          = 0x0000011e;
    constexpr unsigned int SQ_DPP_ROW_SR15                          = 0x0000011f;
    constexpr unsigned int SQ_DPP_WF_RL1                            = 0x00000134;
    constexpr unsigned int SQ_DPP_WF_RR1                            = 0x0000013c;
    constexpr unsigned int SQ_DPP_WF_SL1                            = 0x00000130;
    constexpr unsigned int SQ_DPP_WF_SR1                            = 0x00000138;
    constexpr unsigned int SQ_DS_ADD_F32                            = 0x00000015;
    constexpr unsigned int SQ_DS_ADD_RTN_F32                        = 0x00000035;
    constexpr unsigned int SQ_DS_ADD_RTN_U32                        = 0x00000020;
    constexpr unsigned int SQ_DS_ADD_RTN_U64                        = 0x00000060;
    constexpr unsigned int SQ_DS_ADD_SRC2_F32                       = 0x00000095;
    constexpr unsigned int SQ_DS_ADD_SRC2_U32                       = 0x00000080;
    constexpr unsigned int SQ_DS_ADD_SRC2_U64                       = 0x000000c0;
    constexpr unsigned int SQ_DS_ADD_U32                            = 0x00000000;
    constexpr unsigned int SQ_DS_ADD_U64                            = 0x00000040;
    constexpr unsigned int SQ_DS_AND_B32                            = 0x00000009;
    constexpr unsigned int SQ_DS_AND_B64                            = 0x00000049;
    constexpr unsigned int SQ_DS_AND_RTN_B32                        = 0x00000029;
    constexpr unsigned int SQ_DS_AND_RTN_B64                        = 0x00000069;
    constexpr unsigned int SQ_DS_AND_SRC2_B32                       = 0x00000089;
    constexpr unsigned int SQ_DS_AND_SRC2_B64                       = 0x000000c9;
    constexpr unsigned int SQ_DS_APPEND                             = 0x000000be;
    constexpr unsigned int SQ_DS_BPERMUTE_B32                       = 0x0000003f;
    constexpr unsigned int SQ_DS_CMPST_B32                          = 0x00000010;
    constexpr unsigned int SQ_DS_CMPST_B64                          = 0x00000050;
    constexpr unsigned int SQ_DS_CMPST_F32                          = 0x00000011;
    constexpr unsigned int SQ_DS_CMPST_F64                          = 0x00000051;
    constexpr unsigned int SQ_DS_CMPST_RTN_B32                      = 0x00000030;
    constexpr unsigned int SQ_DS_CMPST_RTN_B64                      = 0x00000070;
    constexpr unsigned int SQ_DS_CMPST_RTN_F32                      = 0x00000031;
    constexpr unsigned int SQ_DS_CMPST_RTN_F64                      = 0x00000071;
    constexpr unsigned int SQ_DS_CONDXCHG32_RTN_B64                 = 0x0000007e;
    constexpr unsigned int SQ_DS_CONDXCHG32_RTN_B128                = 0x000000fd;
    constexpr unsigned int SQ_DS_CONSUME                            = 0x000000bd;
    constexpr unsigned int SQ_DS_DEC_RTN_U32                        = 0x00000024;
    constexpr unsigned int SQ_DS_DEC_RTN_U64                        = 0x00000064;
    constexpr unsigned int SQ_DS_DEC_SRC2_U32                       = 0x00000084;
    constexpr unsigned int SQ_DS_DEC_SRC2_U64                       = 0x000000c4;
    constexpr unsigned int SQ_DS_DEC_U32                            = 0x00000004;
    constexpr unsigned int SQ_DS_DEC_U64                            = 0x00000044;
    constexpr unsigned int SQ_DS_GWS_BARRIER                        = 0x0000009d;
    constexpr unsigned int SQ_DS_GWS_INIT                           = 0x00000099;
    constexpr unsigned int SQ_DS_GWS_SEMA_BR                        = 0x0000009b;
    constexpr unsigned int SQ_DS_GWS_SEMA_P                         = 0x0000009c;
    constexpr unsigned int SQ_DS_GWS_SEMA_RELEASE_ALL               = 0x00000098;
    constexpr unsigned int SQ_DS_GWS_SEMA_V                         = 0x0000009a;
    constexpr unsigned int SQ_DS_INC_RTN_U32                        = 0x00000023;
    constexpr unsigned int SQ_DS_INC_RTN_U64                        = 0x00000063;
    constexpr unsigned int SQ_DS_INC_SRC2_U32                       = 0x00000083;
    constexpr unsigned int SQ_DS_INC_SRC2_U64                       = 0x000000c3;
    constexpr unsigned int SQ_DS_INC_U32                            = 0x00000003;
    constexpr unsigned int SQ_DS_INC_U64                            = 0x00000043;
    constexpr unsigned int SQ_DS_MAX_F32                            = 0x00000013;
    constexpr unsigned int SQ_DS_MAX_F64                            = 0x00000053;
    constexpr unsigned int SQ_DS_MAX_I32                            = 0x00000006;
    constexpr unsigned int SQ_DS_MAX_I64                            = 0x00000046;
    constexpr unsigned int SQ_DS_MAX_RTN_F32                        = 0x00000033;
    constexpr unsigned int SQ_DS_MAX_RTN_F64                        = 0x00000073;
    constexpr unsigned int SQ_DS_MAX_RTN_I32                        = 0x00000026;
    constexpr unsigned int SQ_DS_MAX_RTN_I64                        = 0x00000066;
    constexpr unsigned int SQ_DS_MAX_RTN_U32                        = 0x00000028;
    constexpr unsigned int SQ_DS_MAX_RTN_U64                        = 0x00000068;
    constexpr unsigned int SQ_DS_MAX_SRC2_F32                       = 0x00000093;
    constexpr unsigned int SQ_DS_MAX_SRC2_F64                       = 0x000000d3;
    constexpr unsigned int SQ_DS_MAX_SRC2_I32                       = 0x00000086;
    constexpr unsigned int SQ_DS_MAX_SRC2_I64                       = 0x000000c6;
    constexpr unsigned int SQ_DS_MAX_SRC2_U32                       = 0x00000088;
    constexpr unsigned int SQ_DS_MAX_SRC2_U64                       = 0x000000c8;
    constexpr unsigned int SQ_DS_MAX_U32                            = 0x00000008;
    constexpr unsigned int SQ_DS_MAX_U64                            = 0x00000048;
    constexpr unsigned int SQ_DS_MIN_F32                            = 0x00000012;
    constexpr unsigned int SQ_DS_MIN_F64                            = 0x00000052;
    constexpr unsigned int SQ_DS_MIN_I32                            = 0x00000005;
    constexpr unsigned int SQ_DS_MIN_I64                            = 0x00000045;
    constexpr unsigned int SQ_DS_MIN_RTN_F32                        = 0x00000032;
    constexpr unsigned int SQ_DS_MIN_RTN_F64                        = 0x00000072;
    constexpr unsigned int SQ_DS_MIN_RTN_I32                        = 0x00000025;
    constexpr unsigned int SQ_DS_MIN_RTN_I64                        = 0x00000065;
    constexpr unsigned int SQ_DS_MIN_RTN_U32                        = 0x00000027;
    constexpr unsigned int SQ_DS_MIN_RTN_U64                        = 0x00000067;
    constexpr unsigned int SQ_DS_MIN_SRC2_F32                       = 0x00000092;
    constexpr unsigned int SQ_DS_MIN_SRC2_F64                       = 0x000000d2;
    constexpr unsigned int SQ_DS_MIN_SRC2_I32                       = 0x00000085;
    constexpr unsigned int SQ_DS_MIN_SRC2_I64                       = 0x000000c5;
    constexpr unsigned int SQ_DS_MIN_SRC2_U32                       = 0x00000087;
    constexpr unsigned int SQ_DS_MIN_SRC2_U64                       = 0x000000c7;
    constexpr unsigned int SQ_DS_MIN_U32                            = 0x00000007;
    constexpr unsigned int SQ_DS_MIN_U64                            = 0x00000047;
    constexpr unsigned int SQ_DS_MSKOR_B32                          = 0x0000000c;
    constexpr unsigned int SQ_DS_MSKOR_B64                          = 0x0000004c;
    constexpr unsigned int SQ_DS_MSKOR_RTN_B32                      = 0x0000002c;
    constexpr unsigned int SQ_DS_MSKOR_RTN_B64                      = 0x0000006c;
    constexpr unsigned int SQ_DS_NOP                                = 0x00000014;
    constexpr unsigned int SQ_DS_ORDERED_COUNT                      = 0x000000bf;
    constexpr unsigned int SQ_DS_OR_B32                             = 0x0000000a;
    constexpr unsigned int SQ_DS_OR_B64                             = 0x0000004a;
    constexpr unsigned int SQ_DS_OR_RTN_B32                         = 0x0000002a;
    constexpr unsigned int SQ_DS_OR_RTN_B64                         = 0x0000006a;
    constexpr unsigned int SQ_DS_OR_SRC2_B32                        = 0x0000008a;
    constexpr unsigned int SQ_DS_OR_SRC2_B64                        = 0x000000ca;
    constexpr unsigned int SQ_DS_PERMUTE_B32                        = 0x0000003e;
    constexpr unsigned int SQ_DS_READ2ST64_B32                      = 0x00000038;
    constexpr unsigned int SQ_DS_READ2ST64_B64                      = 0x00000078;
    constexpr unsigned int SQ_DS_READ2_B32                          = 0x00000037;
    constexpr unsigned int SQ_DS_READ2_B64                          = 0x00000077;
    constexpr unsigned int SQ_DS_READ_ADDTID_B32                    = 0x000000b6;
    constexpr unsigned int SQ_DS_READ_B32                           = 0x00000036;
    constexpr unsigned int SQ_DS_READ_B64                           = 0x00000076;
    constexpr unsigned int SQ_DS_READ_B96                           = 0x000000fe;
    constexpr unsigned int SQ_DS_READ_B128                          = 0x000000ff;
    constexpr unsigned int SQ_DS_READ_I8                            = 0x00000039;
    constexpr unsigned int SQ_DS_READ_I8_D16                        = 0x00000058;
    constexpr unsigned int SQ_DS_READ_I8_D16_HI                     = 0x00000059;
    constexpr unsigned int SQ_DS_READ_I16                           = 0x0000003b;
    constexpr unsigned int SQ_DS_READ_U8                            = 0x0000003a;
    constexpr unsigned int SQ_DS_READ_U8_D16                        = 0x00000056;
    constexpr unsigned int SQ_DS_READ_U8_D16_HI                     = 0x00000057;
    constexpr unsigned int SQ_DS_READ_U16                           = 0x0000003c;
    constexpr unsigned int SQ_DS_READ_U16_D16                       = 0x0000005a;
    constexpr unsigned int SQ_DS_READ_U16_D16_HI                    = 0x0000005b;
    constexpr unsigned int SQ_DS_RSUB_RTN_U32                       = 0x00000022;
    constexpr unsigned int SQ_DS_RSUB_RTN_U64                       = 0x00000062;
    constexpr unsigned int SQ_DS_RSUB_SRC2_U32                      = 0x00000082;
    constexpr unsigned int SQ_DS_RSUB_SRC2_U64                      = 0x000000c2;
    constexpr unsigned int SQ_DS_RSUB_U32                           = 0x00000002;
    constexpr unsigned int SQ_DS_RSUB_U64                           = 0x00000042;
    constexpr unsigned int SQ_DS_SUB_RTN_U32                        = 0x00000021;
    constexpr unsigned int SQ_DS_SUB_RTN_U64                        = 0x00000061;
    constexpr unsigned int SQ_DS_SUB_SRC2_U32                       = 0x00000081;
    constexpr unsigned int SQ_DS_SUB_SRC2_U64                       = 0x000000c1;
    constexpr unsigned int SQ_DS_SUB_U32                            = 0x00000001;
    constexpr unsigned int SQ_DS_SUB_U64                            = 0x00000041;
    constexpr unsigned int SQ_DS_SWIZZLE_B32                        = 0x0000003d;
    constexpr unsigned int SQ_DS_WRAP_RTN_B32                       = 0x00000034;
    constexpr unsigned int SQ_DS_WRITE2ST64_B32                     = 0x0000000f;
    constexpr unsigned int SQ_DS_WRITE2ST64_B64                     = 0x0000004f;
    constexpr unsigned int SQ_DS_WRITE2_B32                         = 0x0000000e;
    constexpr unsigned int SQ_DS_WRITE2_B64                         = 0x0000004e;
    constexpr unsigned int SQ_DS_WRITE_ADDTID_B32                   = 0x0000001d;
    constexpr unsigned int SQ_DS_WRITE_B8                           = 0x0000001e;
    constexpr unsigned int SQ_DS_WRITE_B8_D16_HI                    = 0x00000054;
    constexpr unsigned int SQ_DS_WRITE_B16                          = 0x0000001f;
    constexpr unsigned int SQ_DS_WRITE_B16_D16_HI                   = 0x00000055;
    constexpr unsigned int SQ_DS_WRITE_B32                          = 0x0000000d;
    constexpr unsigned int SQ_DS_WRITE_B64                          = 0x0000004d;
    constexpr unsigned int SQ_DS_WRITE_B96                          = 0x000000de;
    constexpr unsigned int SQ_DS_WRITE_B128                         = 0x000000df;
    constexpr unsigned int SQ_DS_WRITE_SRC2_B32                     = 0x0000008d;
    constexpr unsigned int SQ_DS_WRITE_SRC2_B64                     = 0x000000cd;
    constexpr unsigned int SQ_DS_WRXCHG2ST64_RTN_B32                = 0x0000002f;
    constexpr unsigned int SQ_DS_WRXCHG2ST64_RTN_B64                = 0x0000006f;
    constexpr unsigned int SQ_DS_WRXCHG2_RTN_B32                    = 0x0000002e;
    constexpr unsigned int SQ_DS_WRXCHG2_RTN_B64                    = 0x0000006e;
    constexpr unsigned int SQ_DS_WRXCHG_RTN_B32                     = 0x0000002d;
    constexpr unsigned int SQ_DS_WRXCHG_RTN_B64                     = 0x0000006d;
    constexpr unsigned int SQ_DS_XOR_B32                            = 0x0000000b;
    constexpr unsigned int SQ_DS_XOR_B64                            = 0x0000004b;
    constexpr unsigned int SQ_DS_XOR_RTN_B32                        = 0x0000002b;
    constexpr unsigned int SQ_DS_XOR_RTN_B64                        = 0x0000006b;
    constexpr unsigned int SQ_DS_XOR_SRC2_B32                       = 0x0000008b;
    constexpr unsigned int SQ_DS_XOR_SRC2_B64                       = 0x000000cb;
    constexpr unsigned int SQ_ENC_DS_BITS                           = 0xd8000000;
    constexpr unsigned int SQ_ENC_DS_FIELD                          = 0x00000036;
    constexpr unsigned int SQ_ENC_DS_MASK                           = 0xfc000000;
    constexpr unsigned int SQ_ENC_EXP_BITS                          = 0xc4000000;
    constexpr unsigned int SQ_ENC_EXP_FIELD                         = 0x00000031;
    constexpr unsigned int SQ_ENC_EXP_MASK                          = 0xfc000000;
    constexpr unsigned int SQ_ENC_FLAT_BITS                         = 0xdc000000;
    constexpr unsigned int SQ_ENC_FLAT_FIELD                        = 0x00000037;
    constexpr unsigned int SQ_ENC_FLAT_MASK                         = 0xfc000000;
    constexpr unsigned int SQ_ENC_MIMG_BITS                         = 0xf0000000;
    constexpr unsigned int SQ_ENC_MIMG_FIELD                        = 0x0000003c;
    constexpr unsigned int SQ_ENC_MIMG_MASK                         = 0xfc000000;
    constexpr unsigned int SQ_ENC_MTBUF_BITS                        = 0xe8000000;
    constexpr unsigned int SQ_ENC_MTBUF_FIELD                       = 0x0000003a;
    constexpr unsigned int SQ_ENC_MTBUF_MASK                        = 0xfc000000;
    constexpr unsigned int SQ_ENC_MUBUF_BITS                        = 0xe0000000;
    constexpr unsigned int SQ_ENC_MUBUF_FIELD                       = 0x00000038;
    constexpr unsigned int SQ_ENC_MUBUF_MASK                        = 0xfc000000;
    constexpr unsigned int SQ_ENC_SMEM_BITS                         = 0xc0000000;
    constexpr unsigned int SQ_ENC_SMEM_FIELD                        = 0x00000030;
    constexpr unsigned int SQ_ENC_SMEM_MASK                         = 0xfc000000;
    constexpr unsigned int SQ_ENC_SOP1_BITS                         = 0xbe800000;
    constexpr unsigned int SQ_ENC_SOP1_FIELD                        = 0x0000017d;
    constexpr unsigned int SQ_ENC_SOP1_MASK                         = 0xff800000;
    constexpr unsigned int SQ_ENC_SOP2_BITS                         = 0x80000000;
    constexpr unsigned int SQ_ENC_SOP2_FIELD                        = 0x00000002;
    constexpr unsigned int SQ_ENC_SOP2_MASK                         = 0xc0000000;
    constexpr unsigned int SQ_ENC_SOPC_BITS                         = 0xbf000000;
    constexpr unsigned int SQ_ENC_SOPC_FIELD                        = 0x0000017e;
    constexpr unsigned int SQ_ENC_SOPC_MASK                         = 0xff800000;
    constexpr unsigned int SQ_ENC_SOPK_BITS                         = 0xb0000000;
    constexpr unsigned int SQ_ENC_SOPK_FIELD                        = 0x0000000b;
    constexpr unsigned int SQ_ENC_SOPK_MASK                         = 0xf0000000;
    constexpr unsigned int SQ_ENC_SOPP_BITS                         = 0xbf800000;
    constexpr unsigned int SQ_ENC_SOPP_FIELD                        = 0x0000017f;
    constexpr unsigned int SQ_ENC_SOPP_MASK                         = 0xff800000;
    constexpr unsigned int SQ_ENC_VINTRP_BITS                       = 0xd4000000;
    constexpr unsigned int SQ_ENC_VINTRP_FIELD                      = 0x00000035;
    constexpr unsigned int SQ_ENC_VINTRP_MASK                       = 0xfc000000;
    constexpr unsigned int SQ_ENC_VOP1_BITS                         = 0x7e000000;
    constexpr unsigned int SQ_ENC_VOP1_FIELD                        = 0x0000003f;
    constexpr unsigned int SQ_ENC_VOP1_MASK                         = 0xfe000000;
    constexpr unsigned int SQ_ENC_VOP2_BITS                         = 0x00000000;
    constexpr unsigned int SQ_ENC_VOP2_FIELD                        = 0x00000000;
    constexpr unsigned int SQ_ENC_VOP2_MASK                         = 0x80000000;
    constexpr unsigned int SQ_ENC_VOP3P_BITS                        = 0xd3800000;
    constexpr unsigned int SQ_ENC_VOP3P_FIELD                       = 0x000001a7;
    constexpr unsigned int SQ_ENC_VOP3P_MASK                        = 0xff800000;
    constexpr unsigned int SQ_ENC_VOP3_BITS                         = 0xd0000000;
    constexpr unsigned int SQ_ENC_VOP3_FIELD                        = 0x00000034;
    constexpr unsigned int SQ_ENC_VOP3_MASK                         = 0xfc000000;
    constexpr unsigned int SQ_ENC_VOPC_BITS                         = 0x7c000000;
    constexpr unsigned int SQ_ENC_VOPC_FIELD                        = 0x0000003e;
    constexpr unsigned int SQ_ENC_VOPC_MASK                         = 0xfe000000;
    constexpr unsigned int SQ_EQ                                    = 0x00000002;
    constexpr unsigned int SQ_EXEC_HI                               = 0x0000007f;
    constexpr unsigned int SQ_EXEC_LO                               = 0x0000007e;
    constexpr unsigned int SQ_EXP                                   = 0x00000000;
    constexpr unsigned int SQ_EXP_GDS0                              = 0x00000018;
    constexpr unsigned int SQ_EXP_MRT0                              = 0x00000000;
    constexpr unsigned int SQ_EXP_MRTZ                              = 0x00000008;
    constexpr unsigned int SQ_EXP_NULL                              = 0x00000009;
    constexpr unsigned int SQ_EXP_NUM_GDS                           = 0x00000005;
    constexpr unsigned int SQ_EXP_NUM_MRT                           = 0x00000008;
    constexpr unsigned int SQ_EXP_NUM_PARAM                         = 0x00000020;
    constexpr unsigned int SQ_EXP_NUM_POS                           = 0x00000004;
    constexpr unsigned int SQ_EXP_PARAM0                            = 0x00000020;
    constexpr unsigned int SQ_EXP_POS0                              = 0x0000000c;
    constexpr unsigned int SQ_F                                     = 0x00000000;
    constexpr unsigned int SQ_FLAT                                  = 0x00000000;
    constexpr unsigned int SQ_FLAT_ATOMIC_ADD                       = 0x00000042;
    constexpr unsigned int SQ_FLAT_ATOMIC_ADD_X2                    = 0x00000062;
    constexpr unsigned int SQ_FLAT_ATOMIC_AND                       = 0x00000048;
    constexpr unsigned int SQ_FLAT_ATOMIC_AND_X2                    = 0x00000068;
    constexpr unsigned int SQ_FLAT_ATOMIC_CMPSWAP                   = 0x00000041;
    constexpr unsigned int SQ_FLAT_ATOMIC_CMPSWAP_X2                = 0x00000061;
    constexpr unsigned int SQ_FLAT_ATOMIC_DEC                       = 0x0000004c;
    constexpr unsigned int SQ_FLAT_ATOMIC_DEC_X2                    = 0x0000006c;
    constexpr unsigned int SQ_FLAT_ATOMIC_INC                       = 0x0000004b;
    constexpr unsigned int SQ_FLAT_ATOMIC_INC_X2                    = 0x0000006b;
    constexpr unsigned int SQ_FLAT_ATOMIC_OR                        = 0x00000049;
    constexpr unsigned int SQ_FLAT_ATOMIC_OR_X2                     = 0x00000069;
    constexpr unsigned int SQ_FLAT_ATOMIC_SMAX                      = 0x00000046;
    constexpr unsigned int SQ_FLAT_ATOMIC_SMAX_X2                   = 0x00000066;
    constexpr unsigned int SQ_FLAT_ATOMIC_SMIN                      = 0x00000044;
    constexpr unsigned int SQ_FLAT_ATOMIC_SMIN_X2                   = 0x00000064;
    constexpr unsigned int SQ_FLAT_ATOMIC_SUB                       = 0x00000043;
    constexpr unsigned int SQ_FLAT_ATOMIC_SUB_X2                    = 0x00000063;
    constexpr unsigned int SQ_FLAT_ATOMIC_SWAP                      = 0x00000040;
    constexpr unsigned int SQ_FLAT_ATOMIC_SWAP_X2                   = 0x00000060;
    constexpr unsigned int SQ_FLAT_ATOMIC_UMAX                      = 0x00000047;
    constexpr unsigned int SQ_FLAT_ATOMIC_UMAX_X2                   = 0x00000067;
    constexpr unsigned int SQ_FLAT_ATOMIC_UMIN                      = 0x00000045;
    constexpr unsigned int SQ_FLAT_ATOMIC_UMIN_X2                   = 0x00000065;
    constexpr unsigned int SQ_FLAT_ATOMIC_XOR                       = 0x0000004a;
    constexpr unsigned int SQ_FLAT_ATOMIC_XOR_X2                    = 0x0000006a;
    constexpr unsigned int SQ_FLAT_LOAD_DWORD                       = 0x00000014;
    constexpr unsigned int SQ_FLAT_LOAD_DWORDX2                     = 0x00000015;
    constexpr unsigned int SQ_FLAT_LOAD_DWORDX3                     = 0x00000016;
    constexpr unsigned int SQ_FLAT_LOAD_DWORDX4                     = 0x00000017;
    constexpr unsigned int SQ_FLAT_LOAD_SBYTE                       = 0x00000011;
    constexpr unsigned int SQ_FLAT_LOAD_SBYTE_D16                   = 0x00000022;
    constexpr unsigned int SQ_FLAT_LOAD_SBYTE_D16_HI                = 0x00000023;
    constexpr unsigned int SQ_FLAT_LOAD_SHORT_D16                   = 0x00000024;
    constexpr unsigned int SQ_FLAT_LOAD_SHORT_D16_HI                = 0x00000025;
    constexpr unsigned int SQ_FLAT_LOAD_SSHORT                      = 0x00000013;
    constexpr unsigned int SQ_FLAT_LOAD_UBYTE                       = 0x00000010;
    constexpr unsigned int SQ_FLAT_LOAD_UBYTE_D16                   = 0x00000020;
    constexpr unsigned int SQ_FLAT_LOAD_UBYTE_D16_HI                = 0x00000021;
    constexpr unsigned int SQ_FLAT_LOAD_USHORT                      = 0x00000012;
    constexpr unsigned int SQ_FLAT_SCRATCH_HI                       = 0x00000067;
    constexpr unsigned int SQ_FLAT_SCRATCH_LO                       = 0x00000066;
    constexpr unsigned int SQ_FLAT_STORE_BYTE                       = 0x00000018;
    constexpr unsigned int SQ_FLAT_STORE_BYTE_D16_HI                = 0x00000019;
    constexpr unsigned int SQ_FLAT_STORE_DWORD                      = 0x0000001c;
    constexpr unsigned int SQ_FLAT_STORE_DWORDX2                    = 0x0000001d;
    constexpr unsigned int SQ_FLAT_STORE_DWORDX3                    = 0x0000001e;
    constexpr unsigned int SQ_FLAT_STORE_DWORDX4                    = 0x0000001f;
    constexpr unsigned int SQ_FLAT_STORE_SHORT                      = 0x0000001a;
    constexpr unsigned int SQ_FLAT_STORE_SHORT_D16_HI               = 0x0000001b;
    constexpr unsigned int SQ_GE                                    = 0x00000006;
    constexpr unsigned int SQ_GLOBAL                                = 0x00000002;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_ADD                     = 0x00000042;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_ADD_X2                  = 0x00000062;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_AND                     = 0x00000048;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_AND_X2                  = 0x00000068;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_CMPSWAP                 = 0x00000041;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_CMPSWAP_X2              = 0x00000061;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_DEC                     = 0x0000004c;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_DEC_X2                  = 0x0000006c;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_INC                     = 0x0000004b;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_INC_X2                  = 0x0000006b;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_OR                      = 0x00000049;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_OR_X2                   = 0x00000069;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_SMAX                    = 0x00000046;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_SMAX_X2                 = 0x00000066;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_SMIN                    = 0x00000044;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_SMIN_X2                 = 0x00000064;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_SUB                     = 0x00000043;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_SUB_X2                  = 0x00000063;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_SWAP                    = 0x00000040;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_SWAP_X2                 = 0x00000060;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_UMAX                    = 0x00000047;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_UMAX_X2                 = 0x00000067;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_UMIN                    = 0x00000045;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_UMIN_X2                 = 0x00000065;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_XOR                     = 0x0000004a;
    constexpr unsigned int SQ_GLOBAL_ATOMIC_XOR_X2                  = 0x0000006a;
    constexpr unsigned int SQ_GLOBAL_LOAD_DWORD                     = 0x00000014;
    constexpr unsigned int SQ_GLOBAL_LOAD_DWORDX2                   = 0x00000015;
    constexpr unsigned int SQ_GLOBAL_LOAD_DWORDX3                   = 0x00000016;
    constexpr unsigned int SQ_GLOBAL_LOAD_DWORDX4                   = 0x00000017;
    constexpr unsigned int SQ_GLOBAL_LOAD_SBYTE                     = 0x00000011;
    constexpr unsigned int SQ_GLOBAL_LOAD_SBYTE_D16                 = 0x00000022;
    constexpr unsigned int SQ_GLOBAL_LOAD_SBYTE_D16_HI              = 0x00000023;
    constexpr unsigned int SQ_GLOBAL_LOAD_SHORT_D16                 = 0x00000024;
    constexpr unsigned int SQ_GLOBAL_LOAD_SHORT_D16_HI              = 0x00000025;
    constexpr unsigned int SQ_GLOBAL_LOAD_SSHORT                    = 0x00000013;
    constexpr unsigned int SQ_GLOBAL_LOAD_UBYTE                     = 0x00000010;
    constexpr unsigned int SQ_GLOBAL_LOAD_UBYTE_D16                 = 0x00000020;
    constexpr unsigned int SQ_GLOBAL_LOAD_UBYTE_D16_HI              = 0x00000021;
    constexpr unsigned int SQ_GLOBAL_LOAD_USHORT                    = 0x00000012;
    constexpr unsigned int SQ_GLOBAL_STORE_BYTE                     = 0x00000018;
    constexpr unsigned int SQ_GLOBAL_STORE_BYTE_D16_HI              = 0x00000019;
    constexpr unsigned int SQ_GLOBAL_STORE_DWORD                    = 0x0000001c;
    constexpr unsigned int SQ_GLOBAL_STORE_DWORDX2                  = 0x0000001d;
    constexpr unsigned int SQ_GLOBAL_STORE_DWORDX3                  = 0x0000001e;
    constexpr unsigned int SQ_GLOBAL_STORE_DWORDX4                  = 0x0000001f;
    constexpr unsigned int SQ_GLOBAL_STORE_SHORT                    = 0x0000001a;
    constexpr unsigned int SQ_GLOBAL_STORE_SHORT_D16_HI             = 0x0000001b;
    constexpr unsigned int SQ_GS_OP_CUT                             = 0x00000001;
    constexpr unsigned int SQ_GS_OP_EMIT                            = 0x00000002;
    constexpr unsigned int SQ_GS_OP_EMIT_CUT                        = 0x00000003;
    constexpr unsigned int SQ_GS_OP_NOP                             = 0x00000000;
    constexpr unsigned int SQ_GT                                    = 0x00000004;
    constexpr unsigned int SQ_HWREG_ID_SHIFT                        = 0x00000000;
    constexpr unsigned int SQ_HWREG_ID_SIZE                         = 0x00000006;
    constexpr unsigned int SQ_HWREG_OFFSET_SHIFT                    = 0x00000006;
    constexpr unsigned int SQ_HWREG_OFFSET_SIZE                     = 0x00000005;
    constexpr unsigned int SQ_HWREG_SIZE_SHIFT                      = 0x0000000b;
    constexpr unsigned int SQ_HWREG_SIZE_SIZE                       = 0x00000005;
    constexpr unsigned int SQ_HW_REG_FLUSH_IB                       = 0x0000000e;
    constexpr unsigned int SQ_HW_REG_GPR_ALLOC                      = 0x00000005;
    constexpr unsigned int SQ_HW_REG_HW_ID                          = 0x00000004;
    constexpr unsigned int SQ_HW_REG_IB_DBG0                        = 0x0000000c;
    constexpr unsigned int SQ_HW_REG_IB_DBG1                        = 0x0000000d;
    constexpr unsigned int SQ_HW_REG_IB_STS                         = 0x00000007;
    constexpr unsigned int SQ_HW_REG_INST_DW0                       = 0x0000000a;
    constexpr unsigned int SQ_HW_REG_INST_DW1                       = 0x0000000b;
    constexpr unsigned int SQ_HW_REG_LDS_ALLOC                      = 0x00000006;
    constexpr unsigned int SQ_HW_REG_MODE                           = 0x00000001;
    constexpr unsigned int SQ_HW_REG_PC_HI                          = 0x00000009;
    constexpr unsigned int SQ_HW_REG_PC_LO                          = 0x00000008;
    constexpr unsigned int SQ_HW_REG_SH_MEM_BASES                   = 0x0000000f;
    constexpr unsigned int SQ_HW_REG_SQ_SHADER_TBA_HI               = 0x00000011;
    constexpr unsigned int SQ_HW_REG_SQ_SHADER_TBA_LO               = 0x00000010;
    constexpr unsigned int SQ_HW_REG_SQ_SHADER_TMA_HI               = 0x00000013;
    constexpr unsigned int SQ_HW_REG_SQ_SHADER_TMA_LO               = 0x00000012;
    constexpr unsigned int SQ_HW_REG_STATUS                         = 0x00000002;
    constexpr unsigned int SQ_HW_REG_TRAPSTS                        = 0x00000003;
    constexpr unsigned int SQ_IMAGE_ATOMIC_ADD                      = 0x00000012;
    constexpr unsigned int SQ_IMAGE_ATOMIC_AND                      = 0x00000018;
    constexpr unsigned int SQ_IMAGE_ATOMIC_CMPSWAP                  = 0x00000011;
    constexpr unsigned int SQ_IMAGE_ATOMIC_DEC                      = 0x0000001c;
    constexpr unsigned int SQ_IMAGE_ATOMIC_INC                      = 0x0000001b;
    constexpr unsigned int SQ_IMAGE_ATOMIC_OR                       = 0x00000019;
    constexpr unsigned int SQ_IMAGE_ATOMIC_SMAX                     = 0x00000016;
    constexpr unsigned int SQ_IMAGE_ATOMIC_SMIN                     = 0x00000014;
    constexpr unsigned int SQ_IMAGE_ATOMIC_SUB                      = 0x00000013;
    constexpr unsigned int SQ_IMAGE_ATOMIC_SWAP                     = 0x00000010;
    constexpr unsigned int SQ_IMAGE_ATOMIC_UMAX                     = 0x00000017;
    constexpr unsigned int SQ_IMAGE_ATOMIC_UMIN                     = 0x00000015;
    constexpr unsigned int SQ_IMAGE_ATOMIC_XOR                      = 0x0000001a;
    constexpr unsigned int SQ_IMAGE_GATHER4                         = 0x00000040;
    constexpr unsigned int SQ_IMAGE_GATHER4H                        = 0x00000042;
    constexpr unsigned int SQ_IMAGE_GATHER4H_PCK                    = 0x0000004a;
    constexpr unsigned int SQ_IMAGE_GATHER4_A                       = 0x000000c0;
    constexpr unsigned int SQ_IMAGE_GATHER4_B                       = 0x00000045;
    constexpr unsigned int SQ_IMAGE_GATHER4_B_A                     = 0x000000c5;
    constexpr unsigned int SQ_IMAGE_GATHER4_B_CL                    = 0x00000046;
    constexpr unsigned int SQ_IMAGE_GATHER4_B_CL_A                  = 0x000000c6;
    constexpr unsigned int SQ_IMAGE_GATHER4_B_CL_O                  = 0x00000056;
    constexpr unsigned int SQ_IMAGE_GATHER4_B_CL_O_A                = 0x000000d6;
    constexpr unsigned int SQ_IMAGE_GATHER4_B_O                     = 0x00000055;
    constexpr unsigned int SQ_IMAGE_GATHER4_B_O_A                   = 0x000000d5;
    constexpr unsigned int SQ_IMAGE_GATHER4_C                       = 0x00000048;
    constexpr unsigned int SQ_IMAGE_GATHER4_CL                      = 0x00000041;
    constexpr unsigned int SQ_IMAGE_GATHER4_CL_A                    = 0x000000c1;
    constexpr unsigned int SQ_IMAGE_GATHER4_CL_O                    = 0x00000051;
    constexpr unsigned int SQ_IMAGE_GATHER4_CL_O_A                  = 0x000000d1;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_A                     = 0x000000c8;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_B                     = 0x0000004d;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_B_A                   = 0x000000cd;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_B_CL                  = 0x0000004e;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_B_CL_A                = 0x000000ce;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_B_CL_O                = 0x0000005e;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_B_CL_O_A              = 0x000000de;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_B_O                   = 0x0000005d;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_B_O_A                 = 0x000000dd;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_CL                    = 0x00000049;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_CL_A                  = 0x000000c9;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_CL_O                  = 0x00000059;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_CL_O_A                = 0x000000d9;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_L                     = 0x0000004c;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_LZ                    = 0x0000004f;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_LZ_O                  = 0x0000005f;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_L_O                   = 0x0000005c;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_O                     = 0x00000058;
    constexpr unsigned int SQ_IMAGE_GATHER4_C_O_A                   = 0x000000d8;
    constexpr unsigned int SQ_IMAGE_GATHER4_L                       = 0x00000044;
    constexpr unsigned int SQ_IMAGE_GATHER4_LZ                      = 0x00000047;
    constexpr unsigned int SQ_IMAGE_GATHER4_LZ_O                    = 0x00000057;
    constexpr unsigned int SQ_IMAGE_GATHER4_L_O                     = 0x00000054;
    constexpr unsigned int SQ_IMAGE_GATHER4_O                       = 0x00000050;
    constexpr unsigned int SQ_IMAGE_GATHER4_O_A                     = 0x000000d0;
    constexpr unsigned int SQ_IMAGE_GATHER8H_PCK                    = 0x0000004b;
    constexpr unsigned int SQ_IMAGE_GET_LOD                         = 0x00000060;
    constexpr unsigned int SQ_IMAGE_GET_RESINFO                     = 0x0000000e;
    constexpr unsigned int SQ_IMAGE_LOAD                            = 0x00000000;
    constexpr unsigned int SQ_IMAGE_LOAD_MIP                        = 0x00000001;
    constexpr unsigned int SQ_IMAGE_LOAD_MIP_PCK                    = 0x00000004;
    constexpr unsigned int SQ_IMAGE_LOAD_MIP_PCK_SGN                = 0x00000005;
    constexpr unsigned int SQ_IMAGE_LOAD_PCK                        = 0x00000002;
    constexpr unsigned int SQ_IMAGE_LOAD_PCK_SGN                    = 0x00000003;
    constexpr unsigned int SQ_IMAGE_RSRC256                         = 0x0000007e;
    constexpr unsigned int SQ_IMAGE_SAMPLE                          = 0x00000020;
    constexpr unsigned int SQ_IMAGE_SAMPLER                         = 0x0000007f;
    constexpr unsigned int SQ_IMAGE_SAMPLE_A                        = 0x000000a0;
    constexpr unsigned int SQ_IMAGE_SAMPLE_B                        = 0x00000025;
    constexpr unsigned int SQ_IMAGE_SAMPLE_B_A                      = 0x000000a5;
    constexpr unsigned int SQ_IMAGE_SAMPLE_B_CL                     = 0x00000026;
    constexpr unsigned int SQ_IMAGE_SAMPLE_B_CL_A                   = 0x000000a6;
    constexpr unsigned int SQ_IMAGE_SAMPLE_B_CL_O                   = 0x00000036;
    constexpr unsigned int SQ_IMAGE_SAMPLE_B_CL_O_A                 = 0x000000b6;
    constexpr unsigned int SQ_IMAGE_SAMPLE_B_O                      = 0x00000035;
    constexpr unsigned int SQ_IMAGE_SAMPLE_B_O_A                    = 0x000000b5;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C                        = 0x00000028;
    constexpr unsigned int SQ_IMAGE_SAMPLE_CD                       = 0x00000068;
    constexpr unsigned int SQ_IMAGE_SAMPLE_CD_CL                    = 0x00000069;
    constexpr unsigned int SQ_IMAGE_SAMPLE_CD_CL_O                  = 0x0000006d;
    constexpr unsigned int SQ_IMAGE_SAMPLE_CD_O                     = 0x0000006c;
    constexpr unsigned int SQ_IMAGE_SAMPLE_CL                       = 0x00000021;
    constexpr unsigned int SQ_IMAGE_SAMPLE_CL_A                     = 0x000000a1;
    constexpr unsigned int SQ_IMAGE_SAMPLE_CL_O                     = 0x00000031;
    constexpr unsigned int SQ_IMAGE_SAMPLE_CL_O_A                   = 0x000000b1;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_A                      = 0x000000a8;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_B                      = 0x0000002d;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_B_A                    = 0x000000ad;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_B_CL                   = 0x0000002e;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_B_CL_A                 = 0x000000ae;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_B_CL_O                 = 0x0000003e;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_B_CL_O_A               = 0x000000be;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_B_O                    = 0x0000003d;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_B_O_A                  = 0x000000bd;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_CD                     = 0x0000006a;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_CD_CL                  = 0x0000006b;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_CD_CL_O                = 0x0000006f;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_CD_O                   = 0x0000006e;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_CL                     = 0x00000029;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_CL_A                   = 0x000000a9;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_CL_O                   = 0x00000039;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_CL_O_A                 = 0x000000b9;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_D                      = 0x0000002a;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_D_CL                   = 0x0000002b;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_D_CL_O                 = 0x0000003b;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_D_O                    = 0x0000003a;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_L                      = 0x0000002c;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_LZ                     = 0x0000002f;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_LZ_O                   = 0x0000003f;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_L_O                    = 0x0000003c;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_O                      = 0x00000038;
    constexpr unsigned int SQ_IMAGE_SAMPLE_C_O_A                    = 0x000000b8;
    constexpr unsigned int SQ_IMAGE_SAMPLE_D                        = 0x00000022;
    constexpr unsigned int SQ_IMAGE_SAMPLE_D_CL                     = 0x00000023;
    constexpr unsigned int SQ_IMAGE_SAMPLE_D_CL_O                   = 0x00000033;
    constexpr unsigned int SQ_IMAGE_SAMPLE_D_O                      = 0x00000032;
    constexpr unsigned int SQ_IMAGE_SAMPLE_L                        = 0x00000024;
    constexpr unsigned int SQ_IMAGE_SAMPLE_LZ                       = 0x00000027;
    constexpr unsigned int SQ_IMAGE_SAMPLE_LZ_O                     = 0x00000037;
    constexpr unsigned int SQ_IMAGE_SAMPLE_L_O                      = 0x00000034;
    constexpr unsigned int SQ_IMAGE_SAMPLE_O                        = 0x00000030;
    constexpr unsigned int SQ_IMAGE_SAMPLE_O_A                      = 0x000000b0;
    constexpr unsigned int SQ_IMAGE_STORE                           = 0x00000008;
    constexpr unsigned int SQ_IMAGE_STORE_MIP                       = 0x00000009;
    constexpr unsigned int SQ_IMAGE_STORE_MIP_PCK                   = 0x0000000b;
    constexpr unsigned int SQ_IMAGE_STORE_PCK                       = 0x0000000a;
    constexpr unsigned int SQ_L1                                    = 0x00000001;
    constexpr unsigned int SQ_L2                                    = 0x00000002;
    constexpr unsigned int SQ_L3                                    = 0x00000003;
    constexpr unsigned int SQ_L4                                    = 0x00000004;
    constexpr unsigned int SQ_L5                                    = 0x00000005;
    constexpr unsigned int SQ_L6                                    = 0x00000006;
    constexpr unsigned int SQ_L7                                    = 0x00000007;
    constexpr unsigned int SQ_L8                                    = 0x00000008;
    constexpr unsigned int SQ_L9                                    = 0x00000009;
    constexpr unsigned int SQ_L10                                   = 0x0000000a;
    constexpr unsigned int SQ_L11                                   = 0x0000000b;
    constexpr unsigned int SQ_L12                                   = 0x0000000c;
    constexpr unsigned int SQ_L13                                   = 0x0000000d;
    constexpr unsigned int SQ_L14                                   = 0x0000000e;
    constexpr unsigned int SQ_L15                                   = 0x0000000f;
    constexpr unsigned int SQ_LE                                    = 0x00000003;
    constexpr unsigned int SQ_LG                                    = 0x00000005;
    constexpr unsigned int SQ_LT                                    = 0x00000001;
    constexpr unsigned int SQ_M0                                    = 0x0000007c;
    constexpr unsigned int SQ_MSG_EARLY_PRIM_DEALLOC                = 0x00000008;
    constexpr unsigned int SQ_MSG_GET_DOORBELL                      = 0x0000000a;
    constexpr unsigned int SQ_MSG_GS                                = 0x00000002;
    constexpr unsigned int SQ_MSG_GS_ALLOC_REQ                      = 0x00000009;
    constexpr unsigned int SQ_MSG_GS_DONE                           = 0x00000003;
    constexpr unsigned int SQ_MSG_HALT_WAVES                        = 0x00000006;
    constexpr unsigned int SQ_MSG_INTERRUPT                         = 0x00000001;
    constexpr unsigned int SQ_MSG_ORDERED_PS_DONE                   = 0x00000007;
    constexpr unsigned int SQ_MSG_SAVEWAVE                          = 0x00000004;
    constexpr unsigned int SQ_MSG_STALL_WAVE_GEN                    = 0x00000005;
    constexpr unsigned int SQ_MSG_SYSMSG                            = 0x0000000f;
    constexpr unsigned int SQ_NE                                    = 0x00000005;
    constexpr unsigned int SQ_NEQ                                   = 0x0000000d;
    constexpr unsigned int SQ_NGE                                   = 0x00000009;
    constexpr unsigned int SQ_NGT                                   = 0x0000000b;
    constexpr unsigned int SQ_NLE                                   = 0x0000000c;
    constexpr unsigned int SQ_NLG                                   = 0x0000000a;
    constexpr unsigned int SQ_NLT                                   = 0x0000000e;
    constexpr unsigned int SQ_NUM_ATTR                              = 0x00000021;
    constexpr unsigned int SQ_NUM_SGPR                              = 0x00000066;
    constexpr unsigned int SQ_NUM_TTMP                              = 0x00000010;
    constexpr unsigned int SQ_NUM_VGPR                              = 0x00000100;
    constexpr unsigned int SQ_O                                     = 0x00000007;
    constexpr unsigned int SQ_OMOD_D2                               = 0x00000003;
    constexpr unsigned int SQ_OMOD_M2                               = 0x00000001;
    constexpr unsigned int SQ_OMOD_M4                               = 0x00000002;
    constexpr unsigned int SQ_OMOD_OFF                              = 0x00000000;
    constexpr unsigned int SQ_PARAM_P0                              = 0x00000002;
    constexpr unsigned int SQ_PARAM_P10                             = 0x00000000;
    constexpr unsigned int SQ_PARAM_P20                             = 0x00000001;
    constexpr unsigned int SQ_R1                                    = 0x00000001;
    constexpr unsigned int SQ_R2                                    = 0x00000002;
    constexpr unsigned int SQ_R3                                    = 0x00000003;
    constexpr unsigned int SQ_R4                                    = 0x00000004;
    constexpr unsigned int SQ_R5                                    = 0x00000005;
    constexpr unsigned int SQ_R6                                    = 0x00000006;
    constexpr unsigned int SQ_R7                                    = 0x00000007;
    constexpr unsigned int SQ_R8                                    = 0x00000008;
    constexpr unsigned int SQ_R9                                    = 0x00000009;
    constexpr unsigned int SQ_R10                                   = 0x0000000a;
    constexpr unsigned int SQ_R11                                   = 0x0000000b;
    constexpr unsigned int SQ_R12                                   = 0x0000000c;
    constexpr unsigned int SQ_R13                                   = 0x0000000d;
    constexpr unsigned int SQ_R14                                   = 0x0000000e;
    constexpr unsigned int SQ_R15                                   = 0x0000000f;
    constexpr unsigned int SQ_SCRATCH                               = 0x00000001;
    constexpr unsigned int SQ_SCRATCH_LOAD_DWORD                    = 0x00000014;
    constexpr unsigned int SQ_SCRATCH_LOAD_DWORDX2                  = 0x00000015;
    constexpr unsigned int SQ_SCRATCH_LOAD_DWORDX3                  = 0x00000016;
    constexpr unsigned int SQ_SCRATCH_LOAD_DWORDX4                  = 0x00000017;
    constexpr unsigned int SQ_SCRATCH_LOAD_SBYTE                    = 0x00000011;
    constexpr unsigned int SQ_SCRATCH_LOAD_SBYTE_D16                = 0x00000022;
    constexpr unsigned int SQ_SCRATCH_LOAD_SBYTE_D16_HI             = 0x00000023;
    constexpr unsigned int SQ_SCRATCH_LOAD_SHORT_D16                = 0x00000024;
    constexpr unsigned int SQ_SCRATCH_LOAD_SHORT_D16_HI             = 0x00000025;
    constexpr unsigned int SQ_SCRATCH_LOAD_SSHORT                   = 0x00000013;
    constexpr unsigned int SQ_SCRATCH_LOAD_UBYTE                    = 0x00000010;
    constexpr unsigned int SQ_SCRATCH_LOAD_UBYTE_D16                = 0x00000020;
    constexpr unsigned int SQ_SCRATCH_LOAD_UBYTE_D16_HI             = 0x00000021;
    constexpr unsigned int SQ_SCRATCH_LOAD_USHORT                   = 0x00000012;
    constexpr unsigned int SQ_SCRATCH_STORE_BYTE                    = 0x00000018;
    constexpr unsigned int SQ_SCRATCH_STORE_BYTE_D16_HI             = 0x00000019;
    constexpr unsigned int SQ_SCRATCH_STORE_DWORD                   = 0x0000001c;
    constexpr unsigned int SQ_SCRATCH_STORE_DWORDX2                 = 0x0000001d;
    constexpr unsigned int SQ_SCRATCH_STORE_DWORDX3                 = 0x0000001e;
    constexpr unsigned int SQ_SCRATCH_STORE_DWORDX4                 = 0x0000001f;
    constexpr unsigned int SQ_SCRATCH_STORE_SHORT                   = 0x0000001a;
    constexpr unsigned int SQ_SCRATCH_STORE_SHORT_D16_HI            = 0x0000001b;
    constexpr unsigned int SQ_SDWA_BYTE_0                           = 0x00000000;
    constexpr unsigned int SQ_SDWA_BYTE_1                           = 0x00000001;
    constexpr unsigned int SQ_SDWA_BYTE_2                           = 0x00000002;
    constexpr unsigned int SQ_SDWA_BYTE_3                           = 0x00000003;
    constexpr unsigned int SQ_SDWA_DWORD                            = 0x00000006;
    constexpr unsigned int SQ_SDWA_UNUSED_PAD                       = 0x00000000;
    constexpr unsigned int SQ_SDWA_UNUSED_PRESERVE                  = 0x00000002;
    constexpr unsigned int SQ_SDWA_UNUSED_SEXT                      = 0x00000001;
    constexpr unsigned int SQ_SDWA_WORD_0                           = 0x00000004;
    constexpr unsigned int SQ_SDWA_WORD_1                           = 0x00000005;
    constexpr unsigned int SQ_SENDMSG_GSOP_SHIFT                    = 0x00000004;
    constexpr unsigned int SQ_SENDMSG_GSOP_SIZE                     = 0x00000002;
    constexpr unsigned int SQ_SENDMSG_MSG_SHIFT                     = 0x00000000;
    constexpr unsigned int SQ_SENDMSG_MSG_SIZE                      = 0x00000004;
    constexpr unsigned int SQ_SENDMSG_STREAMID_SHIFT                = 0x00000008;
    constexpr unsigned int SQ_SENDMSG_STREAMID_SIZE                 = 0x00000002;
    constexpr unsigned int SQ_SENDMSG_SYSTEM_SHIFT                  = 0x00000004;
    constexpr unsigned int SQ_SENDMSG_SYSTEM_SIZE                   = 0x00000003;
    constexpr unsigned int SQ_SGPR0                                 = 0x00000000;
    constexpr unsigned int SQ_SRC_0                                 = 0x00000080;
    constexpr unsigned int SQ_SRC_0_5                               = 0x000000f0;
    constexpr unsigned int SQ_SRC_1                                 = 0x000000f2;
    constexpr unsigned int SQ_SRC_1_INT                             = 0x00000081;
    constexpr unsigned int SQ_SRC_2                                 = 0x000000f4;
    constexpr unsigned int SQ_SRC_2_INT                             = 0x00000082;
    constexpr unsigned int SQ_SRC_3_INT                             = 0x00000083;
    constexpr unsigned int SQ_SRC_4                                 = 0x000000f6;
    constexpr unsigned int SQ_SRC_4_INT                             = 0x00000084;
    constexpr unsigned int SQ_SRC_5_INT                             = 0x00000085;
    constexpr unsigned int SQ_SRC_6_INT                             = 0x00000086;
    constexpr unsigned int SQ_SRC_7_INT                             = 0x00000087;
    constexpr unsigned int SQ_SRC_8_INT                             = 0x00000088;
    constexpr unsigned int SQ_SRC_9_INT                             = 0x00000089;
    constexpr unsigned int SQ_SRC_10_INT                            = 0x0000008a;
    constexpr unsigned int SQ_SRC_11_INT                            = 0x0000008b;
    constexpr unsigned int SQ_SRC_12_INT                            = 0x0000008c;
    constexpr unsigned int SQ_SRC_13_INT                            = 0x0000008d;
    constexpr unsigned int SQ_SRC_14_INT                            = 0x0000008e;
    constexpr unsigned int SQ_SRC_15_INT                            = 0x0000008f;
    constexpr unsigned int SQ_SRC_16_INT                            = 0x00000090;
    constexpr unsigned int SQ_SRC_17_INT                            = 0x00000091;
    constexpr unsigned int SQ_SRC_18_INT                            = 0x00000092;
    constexpr unsigned int SQ_SRC_19_INT                            = 0x00000093;
    constexpr unsigned int SQ_SRC_20_INT                            = 0x00000094;
    constexpr unsigned int SQ_SRC_21_INT                            = 0x00000095;
    constexpr unsigned int SQ_SRC_22_INT                            = 0x00000096;
    constexpr unsigned int SQ_SRC_23_INT                            = 0x00000097;
    constexpr unsigned int SQ_SRC_24_INT                            = 0x00000098;
    constexpr unsigned int SQ_SRC_25_INT                            = 0x00000099;
    constexpr unsigned int SQ_SRC_26_INT                            = 0x0000009a;
    constexpr unsigned int SQ_SRC_27_INT                            = 0x0000009b;
    constexpr unsigned int SQ_SRC_28_INT                            = 0x0000009c;
    constexpr unsigned int SQ_SRC_29_INT                            = 0x0000009d;
    constexpr unsigned int SQ_SRC_30_INT                            = 0x0000009e;
    constexpr unsigned int SQ_SRC_31_INT                            = 0x0000009f;
    constexpr unsigned int SQ_SRC_32_INT                            = 0x000000a0;
    constexpr unsigned int SQ_SRC_33_INT                            = 0x000000a1;
    constexpr unsigned int SQ_SRC_34_INT                            = 0x000000a2;
    constexpr unsigned int SQ_SRC_35_INT                            = 0x000000a3;
    constexpr unsigned int SQ_SRC_36_INT                            = 0x000000a4;
    constexpr unsigned int SQ_SRC_37_INT                            = 0x000000a5;
    constexpr unsigned int SQ_SRC_38_INT                            = 0x000000a6;
    constexpr unsigned int SQ_SRC_39_INT                            = 0x000000a7;
    constexpr unsigned int SQ_SRC_40_INT                            = 0x000000a8;
    constexpr unsigned int SQ_SRC_41_INT                            = 0x000000a9;
    constexpr unsigned int SQ_SRC_42_INT                            = 0x000000aa;
    constexpr unsigned int SQ_SRC_43_INT                            = 0x000000ab;
    constexpr unsigned int SQ_SRC_44_INT                            = 0x000000ac;
    constexpr unsigned int SQ_SRC_45_INT                            = 0x000000ad;
    constexpr unsigned int SQ_SRC_46_INT                            = 0x000000ae;
    constexpr unsigned int SQ_SRC_47_INT                            = 0x000000af;
    constexpr unsigned int SQ_SRC_48_INT                            = 0x000000b0;
    constexpr unsigned int SQ_SRC_49_INT                            = 0x000000b1;
    constexpr unsigned int SQ_SRC_50_INT                            = 0x000000b2;
    constexpr unsigned int SQ_SRC_51_INT                            = 0x000000b3;
    constexpr unsigned int SQ_SRC_52_INT                            = 0x000000b4;
    constexpr unsigned int SQ_SRC_53_INT                            = 0x000000b5;
    constexpr unsigned int SQ_SRC_54_INT                            = 0x000000b6;
    constexpr unsigned int SQ_SRC_55_INT                            = 0x000000b7;
    constexpr unsigned int SQ_SRC_56_INT                            = 0x000000b8;
    constexpr unsigned int SQ_SRC_57_INT                            = 0x000000b9;
    constexpr unsigned int SQ_SRC_58_INT                            = 0x000000ba;
    constexpr unsigned int SQ_SRC_59_INT                            = 0x000000bb;
    constexpr unsigned int SQ_SRC_60_INT                            = 0x000000bc;
    constexpr unsigned int SQ_SRC_61_INT                            = 0x000000bd;
    constexpr unsigned int SQ_SRC_62_INT                            = 0x000000be;
    constexpr unsigned int SQ_SRC_63_INT                            = 0x000000bf;
    constexpr unsigned int SQ_SRC_64_INT                            = 0x000000c0;
    constexpr unsigned int SQ_SRC_DPP                               = 0x000000fa;
    constexpr unsigned int SQ_SRC_EXECZ                             = 0x000000fc;
    constexpr unsigned int SQ_SRC_INV_2PI                           = 0x000000f8;
    constexpr unsigned int SQ_SRC_LDS_DIRECT                        = 0x000000fe;
    constexpr unsigned int SQ_SRC_LITERAL                           = 0x000000ff;
    constexpr unsigned int SQ_SRC_M_0_5                             = 0x000000f1;
    constexpr unsigned int SQ_SRC_M_1                               = 0x000000f3;
    constexpr unsigned int SQ_SRC_M_1_INT                           = 0x000000c1;
    constexpr unsigned int SQ_SRC_M_2                               = 0x000000f5;
    constexpr unsigned int SQ_SRC_M_2_INT                           = 0x000000c2;
    constexpr unsigned int SQ_SRC_M_3_INT                           = 0x000000c3;
    constexpr unsigned int SQ_SRC_M_4                               = 0x000000f7;
    constexpr unsigned int SQ_SRC_M_4_INT                           = 0x000000c4;
    constexpr unsigned int SQ_SRC_M_5_INT                           = 0x000000c5;
    constexpr unsigned int SQ_SRC_M_6_INT                           = 0x000000c6;
    constexpr unsigned int SQ_SRC_M_7_INT                           = 0x000000c7;
    constexpr unsigned int SQ_SRC_M_8_INT                           = 0x000000c8;
    constexpr unsigned int SQ_SRC_M_9_INT                           = 0x000000c9;
    constexpr unsigned int SQ_SRC_M_10_INT                          = 0x000000ca;
    constexpr unsigned int SQ_SRC_M_11_INT                          = 0x000000cb;
    constexpr unsigned int SQ_SRC_M_12_INT                          = 0x000000cc;
    constexpr unsigned int SQ_SRC_M_13_INT                          = 0x000000cd;
    constexpr unsigned int SQ_SRC_M_14_INT                          = 0x000000ce;
    constexpr unsigned int SQ_SRC_M_15_INT                          = 0x000000cf;
    constexpr unsigned int SQ_SRC_M_16_INT                          = 0x000000d0;
    constexpr unsigned int SQ_SRC_POPS_EXITING_WAVE_ID              = 0x000000ef;
    constexpr unsigned int SQ_SRC_PRIVATE_BASE                      = 0x000000ed;
    constexpr unsigned int SQ_SRC_PRIVATE_LIMIT                     = 0x000000ee;
    constexpr unsigned int SQ_SRC_SCC                               = 0x000000fd;
    constexpr unsigned int SQ_SRC_SDWA                              = 0x000000f9;
    constexpr unsigned int SQ_SRC_SHARED_BASE                       = 0x000000eb;
    constexpr unsigned int SQ_SRC_SHARED_LIMIT                      = 0x000000ec;
    constexpr unsigned int SQ_SRC_VCCZ                              = 0x000000fb;
    constexpr unsigned int SQ_SRC_VGPR0                             = 0x00000100;
    constexpr unsigned int SQ_SRC_VGPR_BIT                          = 0x00000100;
    constexpr unsigned int SQ_SYSMSG_OP_ECC_ERR_INTERRUPT           = 0x00000001;
    constexpr unsigned int SQ_SYSMSG_OP_HOST_TRAP_ACK               = 0x00000003;
    constexpr unsigned int SQ_SYSMSG_OP_ILLEGAL_INST_INTERRUPT      = 0x00000005;
    constexpr unsigned int SQ_SYSMSG_OP_MEMVIOL_INTERRUPT           = 0x00000006;
    constexpr unsigned int SQ_SYSMSG_OP_REG_RD                      = 0x00000002;
    constexpr unsigned int SQ_SYSMSG_OP_TTRACE_PC                   = 0x00000004;
    constexpr unsigned int SQ_S_ABSDIFF_I32                         = 0x0000002a;
    constexpr unsigned int SQ_S_ABS_I32                             = 0x00000030;
    constexpr unsigned int SQ_S_ADDC_U32                            = 0x00000004;
    constexpr unsigned int SQ_S_ADDK_I32                            = 0x0000000e;
    constexpr unsigned int SQ_S_ADD_I32                             = 0x00000002;
    constexpr unsigned int SQ_S_ADD_U32                             = 0x00000000;
    constexpr unsigned int SQ_S_ANDN1_SAVEEXEC_B64                  = 0x00000033;
    constexpr unsigned int SQ_S_ANDN1_WREXEC_B64                    = 0x00000035;
    constexpr unsigned int SQ_S_ANDN2_B32                           = 0x00000012;
    constexpr unsigned int SQ_S_ANDN2_B64                           = 0x00000013;
    constexpr unsigned int SQ_S_ANDN2_SAVEEXEC_B64                  = 0x00000023;
    constexpr unsigned int SQ_S_ANDN2_WREXEC_B64                    = 0x00000036;
    constexpr unsigned int SQ_S_AND_B32                             = 0x0000000c;
    constexpr unsigned int SQ_S_AND_B64                             = 0x0000000d;
    constexpr unsigned int SQ_S_AND_SAVEEXEC_B64                    = 0x00000020;
    constexpr unsigned int SQ_S_ASHR_I32                            = 0x00000020;
    constexpr unsigned int SQ_S_ASHR_I64                            = 0x00000021;
    constexpr unsigned int SQ_S_ATC_PROBE                           = 0x00000026;
    constexpr unsigned int SQ_S_ATC_PROBE_BUFFER                    = 0x00000027;
    constexpr unsigned int SQ_S_ATOMIC_ADD                          = 0x00000082;
    constexpr unsigned int SQ_S_ATOMIC_ADD_X2                       = 0x000000a2;
    constexpr unsigned int SQ_S_ATOMIC_AND                          = 0x00000088;
    constexpr unsigned int SQ_S_ATOMIC_AND_X2                       = 0x000000a8;
    constexpr unsigned int SQ_S_ATOMIC_CMPSWAP                      = 0x00000081;
    constexpr unsigned int SQ_S_ATOMIC_CMPSWAP_X2                   = 0x000000a1;
    constexpr unsigned int SQ_S_ATOMIC_DEC                          = 0x0000008c;
    constexpr unsigned int SQ_S_ATOMIC_DEC_X2                       = 0x000000ac;
    constexpr unsigned int SQ_S_ATOMIC_INC                          = 0x0000008b;
    constexpr unsigned int SQ_S_ATOMIC_INC_X2                       = 0x000000ab;
    constexpr unsigned int SQ_S_ATOMIC_OR                           = 0x00000089;
    constexpr unsigned int SQ_S_ATOMIC_OR_X2                        = 0x000000a9;
    constexpr unsigned int SQ_S_ATOMIC_SMAX                         = 0x00000086;
    constexpr unsigned int SQ_S_ATOMIC_SMAX_X2                      = 0x000000a6;
    constexpr unsigned int SQ_S_ATOMIC_SMIN                         = 0x00000084;
    constexpr unsigned int SQ_S_ATOMIC_SMIN_X2                      = 0x000000a4;
    constexpr unsigned int SQ_S_ATOMIC_SUB                          = 0x00000083;
    constexpr unsigned int SQ_S_ATOMIC_SUB_X2                       = 0x000000a3;
    constexpr unsigned int SQ_S_ATOMIC_SWAP                         = 0x00000080;
    constexpr unsigned int SQ_S_ATOMIC_SWAP_X2                      = 0x000000a0;
    constexpr unsigned int SQ_S_ATOMIC_UMAX                         = 0x00000087;
    constexpr unsigned int SQ_S_ATOMIC_UMAX_X2                      = 0x000000a7;
    constexpr unsigned int SQ_S_ATOMIC_UMIN                         = 0x00000085;
    constexpr unsigned int SQ_S_ATOMIC_UMIN_X2                      = 0x000000a5;
    constexpr unsigned int SQ_S_ATOMIC_XOR                          = 0x0000008a;
    constexpr unsigned int SQ_S_ATOMIC_XOR_X2                       = 0x000000aa;
    constexpr unsigned int SQ_S_BARRIER                             = 0x0000000a;
    constexpr unsigned int SQ_S_BCNT0_I32_B32                       = 0x0000000a;
    constexpr unsigned int SQ_S_BCNT0_I32_B64                       = 0x0000000b;
    constexpr unsigned int SQ_S_BCNT1_I32_B32                       = 0x0000000c;
    constexpr unsigned int SQ_S_BCNT1_I32_B64                       = 0x0000000d;
    constexpr unsigned int SQ_S_BFE_I32                             = 0x00000026;
    constexpr unsigned int SQ_S_BFE_I64                             = 0x00000028;
    constexpr unsigned int SQ_S_BFE_U32                             = 0x00000025;
    constexpr unsigned int SQ_S_BFE_U64                             = 0x00000027;
    constexpr unsigned int SQ_S_BFM_B32                             = 0x00000022;
    constexpr unsigned int SQ_S_BFM_B64                             = 0x00000023;
    constexpr unsigned int SQ_S_BITCMP0_B32                         = 0x0000000c;
    constexpr unsigned int SQ_S_BITCMP0_B64                         = 0x0000000e;
    constexpr unsigned int SQ_S_BITCMP1_B32                         = 0x0000000d;
    constexpr unsigned int SQ_S_BITCMP1_B64                         = 0x0000000f;
    constexpr unsigned int SQ_S_BITREPLICATE_B64_B32                = 0x00000037;
    constexpr unsigned int SQ_S_BITSET0_B32                         = 0x00000018;
    constexpr unsigned int SQ_S_BITSET0_B64                         = 0x00000019;
    constexpr unsigned int SQ_S_BITSET1_B32                         = 0x0000001a;
    constexpr unsigned int SQ_S_BITSET1_B64                         = 0x0000001b;
    constexpr unsigned int SQ_S_BRANCH                              = 0x00000002;
    constexpr unsigned int SQ_S_BREV_B32                            = 0x00000008;
    constexpr unsigned int SQ_S_BREV_B64                            = 0x00000009;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_ADD                   = 0x00000042;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_ADD_X2                = 0x00000062;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_AND                   = 0x00000048;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_AND_X2                = 0x00000068;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_CMPSWAP               = 0x00000041;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_CMPSWAP_X2            = 0x00000061;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_DEC                   = 0x0000004c;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_DEC_X2                = 0x0000006c;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_INC                   = 0x0000004b;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_INC_X2                = 0x0000006b;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_OR                    = 0x00000049;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_OR_X2                 = 0x00000069;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_SMAX                  = 0x00000046;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_SMAX_X2               = 0x00000066;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_SMIN                  = 0x00000044;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_SMIN_X2               = 0x00000064;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_SUB                   = 0x00000043;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_SUB_X2                = 0x00000063;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_SWAP                  = 0x00000040;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_SWAP_X2               = 0x00000060;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_UMAX                  = 0x00000047;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_UMAX_X2               = 0x00000067;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_UMIN                  = 0x00000045;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_UMIN_X2               = 0x00000065;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_XOR                   = 0x0000004a;
    constexpr unsigned int SQ_S_BUFFER_ATOMIC_XOR_X2                = 0x0000006a;
    constexpr unsigned int SQ_S_BUFFER_LOAD_DWORD                   = 0x00000008;
    constexpr unsigned int SQ_S_BUFFER_LOAD_DWORDX2                 = 0x00000009;
    constexpr unsigned int SQ_S_BUFFER_LOAD_DWORDX4                 = 0x0000000a;
    constexpr unsigned int SQ_S_BUFFER_LOAD_DWORDX8                 = 0x0000000b;
    constexpr unsigned int SQ_S_BUFFER_LOAD_DWORDX16                = 0x0000000c;
    constexpr unsigned int SQ_S_BUFFER_STORE_DWORD                  = 0x00000018;
    constexpr unsigned int SQ_S_BUFFER_STORE_DWORDX2                = 0x00000019;
    constexpr unsigned int SQ_S_BUFFER_STORE_DWORDX4                = 0x0000001a;
    constexpr unsigned int SQ_S_CALL_B64                            = 0x00000015;
    constexpr unsigned int SQ_S_CBRANCH_CDBGSYS                     = 0x00000017;
    constexpr unsigned int SQ_S_CBRANCH_CDBGSYS_AND_USER            = 0x0000001a;
    constexpr unsigned int SQ_S_CBRANCH_CDBGSYS_OR_USER             = 0x00000019;
    constexpr unsigned int SQ_S_CBRANCH_CDBGUSER                    = 0x00000018;
    constexpr unsigned int SQ_S_CBRANCH_EXECNZ                      = 0x00000009;
    constexpr unsigned int SQ_S_CBRANCH_EXECZ                       = 0x00000008;
    constexpr unsigned int SQ_S_CBRANCH_G_FORK                      = 0x00000029;
    constexpr unsigned int SQ_S_CBRANCH_I_FORK                      = 0x00000010;
    constexpr unsigned int SQ_S_CBRANCH_JOIN                        = 0x0000002e;
    constexpr unsigned int SQ_S_CBRANCH_SCC0                        = 0x00000004;
    constexpr unsigned int SQ_S_CBRANCH_SCC1                        = 0x00000005;
    constexpr unsigned int SQ_S_CBRANCH_VCCNZ                       = 0x00000007;
    constexpr unsigned int SQ_S_CBRANCH_VCCZ                        = 0x00000006;
    constexpr unsigned int SQ_S_CMOVK_I32                           = 0x00000001;
    constexpr unsigned int SQ_S_CMOV_B32                            = 0x00000002;
    constexpr unsigned int SQ_S_CMOV_B64                            = 0x00000003;
    constexpr unsigned int SQ_S_CMPK_EQ_I32                         = 0x00000002;
    constexpr unsigned int SQ_S_CMPK_EQ_U32                         = 0x00000008;
    constexpr unsigned int SQ_S_CMPK_GE_I32                         = 0x00000005;
    constexpr unsigned int SQ_S_CMPK_GE_U32                         = 0x0000000b;
    constexpr unsigned int SQ_S_CMPK_GT_I32                         = 0x00000004;
    constexpr unsigned int SQ_S_CMPK_GT_U32                         = 0x0000000a;
    constexpr unsigned int SQ_S_CMPK_LE_I32                         = 0x00000007;
    constexpr unsigned int SQ_S_CMPK_LE_U32                         = 0x0000000d;
    constexpr unsigned int SQ_S_CMPK_LG_I32                         = 0x00000003;
    constexpr unsigned int SQ_S_CMPK_LG_U32                         = 0x00000009;
    constexpr unsigned int SQ_S_CMPK_LT_I32                         = 0x00000006;
    constexpr unsigned int SQ_S_CMPK_LT_U32                         = 0x0000000c;
    constexpr unsigned int SQ_S_CMP_EQ_I32                          = 0x00000000;
    constexpr unsigned int SQ_S_CMP_EQ_U32                          = 0x00000006;
    constexpr unsigned int SQ_S_CMP_EQ_U64                          = 0x00000012;
    constexpr unsigned int SQ_S_CMP_GE_I32                          = 0x00000003;
    constexpr unsigned int SQ_S_CMP_GE_U32                          = 0x00000009;
    constexpr unsigned int SQ_S_CMP_GT_I32                          = 0x00000002;
    constexpr unsigned int SQ_S_CMP_GT_U32                          = 0x00000008;
    constexpr unsigned int SQ_S_CMP_LE_I32                          = 0x00000005;
    constexpr unsigned int SQ_S_CMP_LE_U32                          = 0x0000000b;
    constexpr unsigned int SQ_S_CMP_LG_I32                          = 0x00000001;
    constexpr unsigned int SQ_S_CMP_LG_U32                          = 0x00000007;
    constexpr unsigned int SQ_S_CMP_LG_U64                          = 0x00000013;
    constexpr unsigned int SQ_S_CMP_LT_I32                          = 0x00000004;
    constexpr unsigned int SQ_S_CMP_LT_U32                          = 0x0000000a;
    constexpr unsigned int SQ_S_CSELECT_B32                         = 0x0000000a;
    constexpr unsigned int SQ_S_CSELECT_B64                         = 0x0000000b;
    constexpr unsigned int SQ_S_DCACHE_DISCARD                      = 0x00000028;
    constexpr unsigned int SQ_S_DCACHE_DISCARD_X2                   = 0x00000029;
    constexpr unsigned int SQ_S_DCACHE_INV                          = 0x00000020;
    constexpr unsigned int SQ_S_DCACHE_INV_VOL                      = 0x00000022;
    constexpr unsigned int SQ_S_DCACHE_WB                           = 0x00000021;
    constexpr unsigned int SQ_S_DCACHE_WB_VOL                       = 0x00000023;
    constexpr unsigned int SQ_S_DECPERFLEVEL                        = 0x00000015;
    constexpr unsigned int SQ_S_ENDPGM                              = 0x00000001;
    constexpr unsigned int SQ_S_ENDPGM_ORDERED_PS_DONE              = 0x0000001e;
    constexpr unsigned int SQ_S_ENDPGM_SAVED                        = 0x0000001b;
    constexpr unsigned int SQ_S_FF0_I32_B32                         = 0x0000000e;
    constexpr unsigned int SQ_S_FF0_I32_B64                         = 0x0000000f;
    constexpr unsigned int SQ_S_FF1_I32_B32                         = 0x00000010;
    constexpr unsigned int SQ_S_FF1_I32_B64                         = 0x00000011;
    constexpr unsigned int SQ_S_FLBIT_I32                           = 0x00000014;
    constexpr unsigned int SQ_S_FLBIT_I32_B32                       = 0x00000012;
    constexpr unsigned int SQ_S_FLBIT_I32_B64                       = 0x00000013;
    constexpr unsigned int SQ_S_FLBIT_I32_I64                       = 0x00000015;
    constexpr unsigned int SQ_S_GETPC_B64                           = 0x0000001c;
    constexpr unsigned int SQ_S_GETREG_B32                          = 0x00000011;
    constexpr unsigned int SQ_S_GETREG_REGRD_B32                    = 0x00000013;
    constexpr unsigned int SQ_S_ICACHE_INV                          = 0x00000013;
    constexpr unsigned int SQ_S_INCPERFLEVEL                        = 0x00000014;
    constexpr unsigned int SQ_S_LOAD_DWORD                          = 0x00000000;
    constexpr unsigned int SQ_S_LOAD_DWORDX2                        = 0x00000001;
    constexpr unsigned int SQ_S_LOAD_DWORDX4                        = 0x00000002;
    constexpr unsigned int SQ_S_LOAD_DWORDX8                        = 0x00000003;
    constexpr unsigned int SQ_S_LOAD_DWORDX16                       = 0x00000004;
    constexpr unsigned int SQ_S_LSHL1_ADD_U32                       = 0x0000002e;
    constexpr unsigned int SQ_S_LSHL2_ADD_U32                       = 0x0000002f;
    constexpr unsigned int SQ_S_LSHL3_ADD_U32                       = 0x00000030;
    constexpr unsigned int SQ_S_LSHL4_ADD_U32                       = 0x00000031;
    constexpr unsigned int SQ_S_LSHL_B32                            = 0x0000001c;
    constexpr unsigned int SQ_S_LSHL_B64                            = 0x0000001d;
    constexpr unsigned int SQ_S_LSHR_B32                            = 0x0000001e;
    constexpr unsigned int SQ_S_LSHR_B64                            = 0x0000001f;
    constexpr unsigned int SQ_S_MAX_I32                             = 0x00000008;
    constexpr unsigned int SQ_S_MAX_U32                             = 0x00000009;
    constexpr unsigned int SQ_S_MEMREALTIME                         = 0x00000025;
    constexpr unsigned int SQ_S_MEMTIME                             = 0x00000024;
    constexpr unsigned int SQ_S_MIN_I32                             = 0x00000006;
    constexpr unsigned int SQ_S_MIN_U32                             = 0x00000007;
    constexpr unsigned int SQ_S_MOVK_I32                            = 0x00000000;
    constexpr unsigned int SQ_S_MOVRELD_B32                         = 0x0000002c;
    constexpr unsigned int SQ_S_MOVRELD_B64                         = 0x0000002d;
    constexpr unsigned int SQ_S_MOVRELS_B32                         = 0x0000002a;
    constexpr unsigned int SQ_S_MOVRELS_B64                         = 0x0000002b;
    constexpr unsigned int SQ_S_MOV_B32                             = 0x00000000;
    constexpr unsigned int SQ_S_MOV_B64                             = 0x00000001;
    constexpr unsigned int SQ_S_MOV_FED_B32                         = 0x00000031;
    constexpr unsigned int SQ_S_MOV_REGRD_B32                       = 0x0000002f;
    constexpr unsigned int SQ_S_MULK_I32                            = 0x0000000f;
    constexpr unsigned int SQ_S_MUL_HI_I32                          = 0x0000002d;
    constexpr unsigned int SQ_S_MUL_HI_U32                          = 0x0000002c;
    constexpr unsigned int SQ_S_MUL_I32                             = 0x00000024;
    constexpr unsigned int SQ_S_NAND_B32                            = 0x00000016;
    constexpr unsigned int SQ_S_NAND_B64                            = 0x00000017;
    constexpr unsigned int SQ_S_NAND_SAVEEXEC_B64                   = 0x00000025;
    constexpr unsigned int SQ_S_NOP                                 = 0x00000000;
    constexpr unsigned int SQ_S_NOR_B32                             = 0x00000018;
    constexpr unsigned int SQ_S_NOR_B64                             = 0x00000019;
    constexpr unsigned int SQ_S_NOR_SAVEEXEC_B64                    = 0x00000026;
    constexpr unsigned int SQ_S_NOT_B32                             = 0x00000004;
    constexpr unsigned int SQ_S_NOT_B64                             = 0x00000005;
    constexpr unsigned int SQ_S_ORN1_SAVEEXEC_B64                   = 0x00000034;
    constexpr unsigned int SQ_S_ORN2_B32                            = 0x00000014;
    constexpr unsigned int SQ_S_ORN2_B64                            = 0x00000015;
    constexpr unsigned int SQ_S_ORN2_SAVEEXEC_B64                   = 0x00000024;
    constexpr unsigned int SQ_S_OR_B32                              = 0x0000000e;
    constexpr unsigned int SQ_S_OR_B64                              = 0x0000000f;
    constexpr unsigned int SQ_S_OR_SAVEEXEC_B64                     = 0x00000021;
    constexpr unsigned int SQ_S_PACK_HH_B32_B16                     = 0x00000034;
    constexpr unsigned int SQ_S_PACK_LH_B32_B16                     = 0x00000033;
    constexpr unsigned int SQ_S_PACK_LL_B32_B16                     = 0x00000032;
    constexpr unsigned int SQ_S_QUADMASK_B32                        = 0x00000028;
    constexpr unsigned int SQ_S_QUADMASK_B64                        = 0x00000029;
    constexpr unsigned int SQ_S_RFE_B64                             = 0x0000001f;
    constexpr unsigned int SQ_S_RFE_RESTORE_B64                     = 0x0000002b;
    constexpr unsigned int SQ_S_SCRATCH_LOAD_DWORD                  = 0x00000005;
    constexpr unsigned int SQ_S_SCRATCH_LOAD_DWORDX2                = 0x00000006;
    constexpr unsigned int SQ_S_SCRATCH_LOAD_DWORDX4                = 0x00000007;
    constexpr unsigned int SQ_S_SCRATCH_STORE_DWORD                 = 0x00000015;
    constexpr unsigned int SQ_S_SCRATCH_STORE_DWORDX2               = 0x00000016;
    constexpr unsigned int SQ_S_SCRATCH_STORE_DWORDX4               = 0x00000017;
    constexpr unsigned int SQ_S_SENDMSG                             = 0x00000010;
    constexpr unsigned int SQ_S_SENDMSGHALT                         = 0x00000011;
    constexpr unsigned int SQ_S_SETHALT                             = 0x0000000d;
    constexpr unsigned int SQ_S_SETKILL                             = 0x0000000b;
    constexpr unsigned int SQ_S_SETPC_B64                           = 0x0000001d;
    constexpr unsigned int SQ_S_SETPRIO                             = 0x0000000f;
    constexpr unsigned int SQ_S_SETREG_B32                          = 0x00000012;
    constexpr unsigned int SQ_S_SETREG_IMM32_B32                    = 0x00000014;
    constexpr unsigned int SQ_S_SETVSKIP                            = 0x00000010;
    constexpr unsigned int SQ_S_SET_GPR_IDX_IDX                     = 0x00000032;
    constexpr unsigned int SQ_S_SET_GPR_IDX_MODE                    = 0x0000001d;
    constexpr unsigned int SQ_S_SET_GPR_IDX_OFF                     = 0x0000001c;
    constexpr unsigned int SQ_S_SET_GPR_IDX_ON                      = 0x00000011;
    constexpr unsigned int SQ_S_SEXT_I32_I8                         = 0x00000016;
    constexpr unsigned int SQ_S_SEXT_I32_I16                        = 0x00000017;
    constexpr unsigned int SQ_S_SLEEP                               = 0x0000000e;
    constexpr unsigned int SQ_S_STORE_DWORD                         = 0x00000010;
    constexpr unsigned int SQ_S_STORE_DWORDX2                       = 0x00000011;
    constexpr unsigned int SQ_S_STORE_DWORDX4                       = 0x00000012;
    constexpr unsigned int SQ_S_SUBB_U32                            = 0x00000005;
    constexpr unsigned int SQ_S_SUB_I32                             = 0x00000003;
    constexpr unsigned int SQ_S_SUB_U32                             = 0x00000001;
    constexpr unsigned int SQ_S_SWAPPC_B64                          = 0x0000001e;
    constexpr unsigned int SQ_S_TRAP                                = 0x00000012;
    constexpr unsigned int SQ_S_TTRACEDATA                          = 0x00000016;
    constexpr unsigned int SQ_S_WAITCNT                             = 0x0000000c;
    constexpr unsigned int SQ_S_WAKEUP                              = 0x00000003;
    constexpr unsigned int SQ_S_WQM_B32                             = 0x00000006;
    constexpr unsigned int SQ_S_WQM_B64                             = 0x00000007;
    constexpr unsigned int SQ_S_XNOR_B32                            = 0x0000001a;
    constexpr unsigned int SQ_S_XNOR_B64                            = 0x0000001b;
    constexpr unsigned int SQ_S_XNOR_SAVEEXEC_B64                   = 0x00000027;
    constexpr unsigned int SQ_S_XOR_B32                             = 0x00000010;
    constexpr unsigned int SQ_S_XOR_B64                             = 0x00000011;
    constexpr unsigned int SQ_S_XOR_SAVEEXEC_B64                    = 0x00000022;
    constexpr unsigned int SQ_T                                     = 0x00000007;
    constexpr unsigned int SQ_TBUFFER_LOAD_FORMAT_D16_X             = 0x00000008;
    constexpr unsigned int SQ_TBUFFER_LOAD_FORMAT_D16_XY            = 0x00000009;
    constexpr unsigned int SQ_TBUFFER_LOAD_FORMAT_D16_XYZ           = 0x0000000a;
    constexpr unsigned int SQ_TBUFFER_LOAD_FORMAT_D16_XYZW          = 0x0000000b;
    constexpr unsigned int SQ_TBUFFER_LOAD_FORMAT_X                 = 0x00000000;
    constexpr unsigned int SQ_TBUFFER_LOAD_FORMAT_XY                = 0x00000001;
    constexpr unsigned int SQ_TBUFFER_LOAD_FORMAT_XYZ               = 0x00000002;
    constexpr unsigned int SQ_TBUFFER_LOAD_FORMAT_XYZW              = 0x00000003;
    constexpr unsigned int SQ_TBUFFER_STORE_FORMAT_D16_X            = 0x0000000c;
    constexpr unsigned int SQ_TBUFFER_STORE_FORMAT_D16_XY           = 0x0000000d;
    constexpr unsigned int SQ_TBUFFER_STORE_FORMAT_D16_XYZ          = 0x0000000e;
    constexpr unsigned int SQ_TBUFFER_STORE_FORMAT_D16_XYZW         = 0x0000000f;
    constexpr unsigned int SQ_TBUFFER_STORE_FORMAT_X                = 0x00000004;
    constexpr unsigned int SQ_TBUFFER_STORE_FORMAT_XY               = 0x00000005;
    constexpr unsigned int SQ_TBUFFER_STORE_FORMAT_XYZ              = 0x00000006;
    constexpr unsigned int SQ_TBUFFER_STORE_FORMAT_XYZW             = 0x00000007;
    constexpr unsigned int SQ_THREAD_TRACE_TIME_UNIT                = 0x00000004;
    constexpr unsigned int SQ_TRU                                   = 0x0000000f;
    constexpr unsigned int SQ_TTMP0                                 = 0x0000006c;
    constexpr unsigned int SQ_TTMP1                                 = 0x0000006d;
    constexpr unsigned int SQ_TTMP2                                 = 0x0000006e;
    constexpr unsigned int SQ_TTMP3                                 = 0x0000006f;
    constexpr unsigned int SQ_TTMP4                                 = 0x00000070;
    constexpr unsigned int SQ_TTMP5                                 = 0x00000071;
    constexpr unsigned int SQ_TTMP6                                 = 0x00000072;
    constexpr unsigned int SQ_TTMP7                                 = 0x00000073;
    constexpr unsigned int SQ_TTMP8                                 = 0x00000074;
    constexpr unsigned int SQ_TTMP9                                 = 0x00000075;
    constexpr unsigned int SQ_TTMP10                                = 0x00000076;
    constexpr unsigned int SQ_TTMP11                                = 0x00000077;
    constexpr unsigned int SQ_TTMP12                                = 0x00000078;
    constexpr unsigned int SQ_TTMP13                                = 0x00000079;
    constexpr unsigned int SQ_TTMP14                                = 0x0000007a;
    constexpr unsigned int SQ_TTMP15                                = 0x0000007b;
    constexpr unsigned int SQ_U                                     = 0x00000008;
    constexpr unsigned int SQ_VCC_ALL                               = 0x00000000;
    constexpr unsigned int SQ_VCC_HI                                = 0x0000006b;
    constexpr unsigned int SQ_VCC_LO                                = 0x0000006a;
    constexpr unsigned int SQ_VGPR0                                 = 0x00000000;
    constexpr unsigned int SQ_V_ADD3_U32                            = 0x000001ff;
    constexpr unsigned int SQ_V_ADDC_CO_U32                         = 0x0000001c;
    constexpr unsigned int SQ_V_ADD_CO_U32                          = 0x00000019;
    constexpr unsigned int SQ_V_ADD_F16                             = 0x0000001f;
    constexpr unsigned int SQ_V_ADD_F32                             = 0x00000001;
    constexpr unsigned int SQ_V_ADD_F64                             = 0x00000280;
    constexpr unsigned int SQ_V_ADD_I16                             = 0x0000029e;
    constexpr unsigned int SQ_V_ADD_I32                             = 0x0000029c;
    constexpr unsigned int SQ_V_ADD_LSHL_U32                        = 0x000001fe;
    constexpr unsigned int SQ_V_ADD_U16                             = 0x00000026;
    constexpr unsigned int SQ_V_ADD_U32                             = 0x00000034;
    constexpr unsigned int SQ_V_ALIGNBIT_B32                        = 0x000001ce;
    constexpr unsigned int SQ_V_ALIGNBYTE_B32                       = 0x000001cf;
    constexpr unsigned int SQ_V_AND_B32                             = 0x00000013;
    constexpr unsigned int SQ_V_AND_OR_B32                          = 0x00000201;
    constexpr unsigned int SQ_V_ASHRREV_I16                         = 0x0000002c;
    constexpr unsigned int SQ_V_ASHRREV_I32                         = 0x00000011;
    constexpr unsigned int SQ_V_ASHRREV_I64                         = 0x00000291;
    constexpr unsigned int SQ_V_BCNT_U32_B32                        = 0x0000028b;
    constexpr unsigned int SQ_V_BFE_I32                             = 0x000001c9;
    constexpr unsigned int SQ_V_BFE_U32                             = 0x000001c8;
    constexpr unsigned int SQ_V_BFI_B32                             = 0x000001ca;
    constexpr unsigned int SQ_V_BFM_B32                             = 0x00000293;
    constexpr unsigned int SQ_V_BFREV_B32                           = 0x0000002c;
    constexpr unsigned int SQ_V_CEIL_F16                            = 0x00000045;
    constexpr unsigned int SQ_V_CEIL_F32                            = 0x0000001d;
    constexpr unsigned int SQ_V_CEIL_F64                            = 0x00000018;
    constexpr unsigned int SQ_V_CLREXCP                             = 0x00000035;
    constexpr unsigned int SQ_V_CMPX_CLASS_F16                      = 0x00000015;
    constexpr unsigned int SQ_V_CMPX_CLASS_F32                      = 0x00000011;
    constexpr unsigned int SQ_V_CMPX_CLASS_F64                      = 0x00000013;
    constexpr unsigned int SQ_V_CMPX_EQ_F16                         = 0x00000032;
    constexpr unsigned int SQ_V_CMPX_EQ_F32                         = 0x00000052;
    constexpr unsigned int SQ_V_CMPX_EQ_F64                         = 0x00000072;
    constexpr unsigned int SQ_V_CMPX_EQ_I16                         = 0x000000b2;
    constexpr unsigned int SQ_V_CMPX_EQ_I32                         = 0x000000d2;
    constexpr unsigned int SQ_V_CMPX_EQ_I64                         = 0x000000f2;
    constexpr unsigned int SQ_V_CMPX_EQ_U16                         = 0x000000ba;
    constexpr unsigned int SQ_V_CMPX_EQ_U32                         = 0x000000da;
    constexpr unsigned int SQ_V_CMPX_EQ_U64                         = 0x000000fa;
    constexpr unsigned int SQ_V_CMPX_F_F16                          = 0x00000030;
    constexpr unsigned int SQ_V_CMPX_F_F32                          = 0x00000050;
    constexpr unsigned int SQ_V_CMPX_F_F64                          = 0x00000070;
    constexpr unsigned int SQ_V_CMPX_F_I16                          = 0x000000b0;
    constexpr unsigned int SQ_V_CMPX_F_I32                          = 0x000000d0;
    constexpr unsigned int SQ_V_CMPX_F_I64                          = 0x000000f0;
    constexpr unsigned int SQ_V_CMPX_F_U16                          = 0x000000b8;
    constexpr unsigned int SQ_V_CMPX_F_U32                          = 0x000000d8;
    constexpr unsigned int SQ_V_CMPX_F_U64                          = 0x000000f8;
    constexpr unsigned int SQ_V_CMPX_GE_F16                         = 0x00000036;
    constexpr unsigned int SQ_V_CMPX_GE_F32                         = 0x00000056;
    constexpr unsigned int SQ_V_CMPX_GE_F64                         = 0x00000076;
    constexpr unsigned int SQ_V_CMPX_GE_I16                         = 0x000000b6;
    constexpr unsigned int SQ_V_CMPX_GE_I32                         = 0x000000d6;
    constexpr unsigned int SQ_V_CMPX_GE_I64                         = 0x000000f6;
    constexpr unsigned int SQ_V_CMPX_GE_U16                         = 0x000000be;
    constexpr unsigned int SQ_V_CMPX_GE_U32                         = 0x000000de;
    constexpr unsigned int SQ_V_CMPX_GE_U64                         = 0x000000fe;
    constexpr unsigned int SQ_V_CMPX_GT_F16                         = 0x00000034;
    constexpr unsigned int SQ_V_CMPX_GT_F32                         = 0x00000054;
    constexpr unsigned int SQ_V_CMPX_GT_F64                         = 0x00000074;
    constexpr unsigned int SQ_V_CMPX_GT_I16                         = 0x000000b4;
    constexpr unsigned int SQ_V_CMPX_GT_I32                         = 0x000000d4;
    constexpr unsigned int SQ_V_CMPX_GT_I64                         = 0x000000f4;
    constexpr unsigned int SQ_V_CMPX_GT_U16                         = 0x000000bc;
    constexpr unsigned int SQ_V_CMPX_GT_U32                         = 0x000000dc;
    constexpr unsigned int SQ_V_CMPX_GT_U64                         = 0x000000fc;
    constexpr unsigned int SQ_V_CMPX_LE_F16                         = 0x00000033;
    constexpr unsigned int SQ_V_CMPX_LE_F32                         = 0x00000053;
    constexpr unsigned int SQ_V_CMPX_LE_F64                         = 0x00000073;
    constexpr unsigned int SQ_V_CMPX_LE_I16                         = 0x000000b3;
    constexpr unsigned int SQ_V_CMPX_LE_I32                         = 0x000000d3;
    constexpr unsigned int SQ_V_CMPX_LE_I64                         = 0x000000f3;
    constexpr unsigned int SQ_V_CMPX_LE_U16                         = 0x000000bb;
    constexpr unsigned int SQ_V_CMPX_LE_U32                         = 0x000000db;
    constexpr unsigned int SQ_V_CMPX_LE_U64                         = 0x000000fb;
    constexpr unsigned int SQ_V_CMPX_LG_F16                         = 0x00000035;
    constexpr unsigned int SQ_V_CMPX_LG_F32                         = 0x00000055;
    constexpr unsigned int SQ_V_CMPX_LG_F64                         = 0x00000075;
    constexpr unsigned int SQ_V_CMPX_LT_F16                         = 0x00000031;
    constexpr unsigned int SQ_V_CMPX_LT_F32                         = 0x00000051;
    constexpr unsigned int SQ_V_CMPX_LT_F64                         = 0x00000071;
    constexpr unsigned int SQ_V_CMPX_LT_I16                         = 0x000000b1;
    constexpr unsigned int SQ_V_CMPX_LT_I32                         = 0x000000d1;
    constexpr unsigned int SQ_V_CMPX_LT_I64                         = 0x000000f1;
    constexpr unsigned int SQ_V_CMPX_LT_U16                         = 0x000000b9;
    constexpr unsigned int SQ_V_CMPX_LT_U32                         = 0x000000d9;
    constexpr unsigned int SQ_V_CMPX_LT_U64                         = 0x000000f9;
    constexpr unsigned int SQ_V_CMPX_NEQ_F16                        = 0x0000003d;
    constexpr unsigned int SQ_V_CMPX_NEQ_F32                        = 0x0000005d;
    constexpr unsigned int SQ_V_CMPX_NEQ_F64                        = 0x0000007d;
    constexpr unsigned int SQ_V_CMPX_NE_I16                         = 0x000000b5;
    constexpr unsigned int SQ_V_CMPX_NE_I32                         = 0x000000d5;
    constexpr unsigned int SQ_V_CMPX_NE_I64                         = 0x000000f5;
    constexpr unsigned int SQ_V_CMPX_NE_U16                         = 0x000000bd;
    constexpr unsigned int SQ_V_CMPX_NE_U32                         = 0x000000dd;
    constexpr unsigned int SQ_V_CMPX_NE_U64                         = 0x000000fd;
    constexpr unsigned int SQ_V_CMPX_NGE_F16                        = 0x00000039;
    constexpr unsigned int SQ_V_CMPX_NGE_F32                        = 0x00000059;
    constexpr unsigned int SQ_V_CMPX_NGE_F64                        = 0x00000079;
    constexpr unsigned int SQ_V_CMPX_NGT_F16                        = 0x0000003b;
    constexpr unsigned int SQ_V_CMPX_NGT_F32                        = 0x0000005b;
    constexpr unsigned int SQ_V_CMPX_NGT_F64                        = 0x0000007b;
    constexpr unsigned int SQ_V_CMPX_NLE_F16                        = 0x0000003c;
    constexpr unsigned int SQ_V_CMPX_NLE_F32                        = 0x0000005c;
    constexpr unsigned int SQ_V_CMPX_NLE_F64                        = 0x0000007c;
    constexpr unsigned int SQ_V_CMPX_NLG_F16                        = 0x0000003a;
    constexpr unsigned int SQ_V_CMPX_NLG_F32                        = 0x0000005a;
    constexpr unsigned int SQ_V_CMPX_NLG_F64                        = 0x0000007a;
    constexpr unsigned int SQ_V_CMPX_NLT_F16                        = 0x0000003e;
    constexpr unsigned int SQ_V_CMPX_NLT_F32                        = 0x0000005e;
    constexpr unsigned int SQ_V_CMPX_NLT_F64                        = 0x0000007e;
    constexpr unsigned int SQ_V_CMPX_O_F16                          = 0x00000037;
    constexpr unsigned int SQ_V_CMPX_O_F32                          = 0x00000057;
    constexpr unsigned int SQ_V_CMPX_O_F64                          = 0x00000077;
    constexpr unsigned int SQ_V_CMPX_TRU_F16                        = 0x0000003f;
    constexpr unsigned int SQ_V_CMPX_TRU_F32                        = 0x0000005f;
    constexpr unsigned int SQ_V_CMPX_TRU_F64                        = 0x0000007f;
    constexpr unsigned int SQ_V_CMPX_T_I16                          = 0x000000b7;
    constexpr unsigned int SQ_V_CMPX_T_I32                          = 0x000000d7;
    constexpr unsigned int SQ_V_CMPX_T_I64                          = 0x000000f7;
    constexpr unsigned int SQ_V_CMPX_T_U16                          = 0x000000bf;
    constexpr unsigned int SQ_V_CMPX_T_U32                          = 0x000000df;
    constexpr unsigned int SQ_V_CMPX_T_U64                          = 0x000000ff;
    constexpr unsigned int SQ_V_CMPX_U_F16                          = 0x00000038;
    constexpr unsigned int SQ_V_CMPX_U_F32                          = 0x00000058;
    constexpr unsigned int SQ_V_CMPX_U_F64                          = 0x00000078;
    constexpr unsigned int SQ_V_CMP_CLASS_F16                       = 0x00000014;
    constexpr unsigned int SQ_V_CMP_CLASS_F32                       = 0x00000010;
    constexpr unsigned int SQ_V_CMP_CLASS_F64                       = 0x00000012;
    constexpr unsigned int SQ_V_CMP_EQ_F16                          = 0x00000022;
    constexpr unsigned int SQ_V_CMP_EQ_F32                          = 0x00000042;
    constexpr unsigned int SQ_V_CMP_EQ_F64                          = 0x00000062;
    constexpr unsigned int SQ_V_CMP_EQ_I16                          = 0x000000a2;
    constexpr unsigned int SQ_V_CMP_EQ_I32                          = 0x000000c2;
    constexpr unsigned int SQ_V_CMP_EQ_I64                          = 0x000000e2;
    constexpr unsigned int SQ_V_CMP_EQ_U16                          = 0x000000aa;
    constexpr unsigned int SQ_V_CMP_EQ_U32                          = 0x000000ca;
    constexpr unsigned int SQ_V_CMP_EQ_U64                          = 0x000000ea;
    constexpr unsigned int SQ_V_CMP_F_F16                           = 0x00000020;
    constexpr unsigned int SQ_V_CMP_F_F32                           = 0x00000040;
    constexpr unsigned int SQ_V_CMP_F_F64                           = 0x00000060;
    constexpr unsigned int SQ_V_CMP_F_I16                           = 0x000000a0;
    constexpr unsigned int SQ_V_CMP_F_I32                           = 0x000000c0;
    constexpr unsigned int SQ_V_CMP_F_I64                           = 0x000000e0;
    constexpr unsigned int SQ_V_CMP_F_U16                           = 0x000000a8;
    constexpr unsigned int SQ_V_CMP_F_U32                           = 0x000000c8;
    constexpr unsigned int SQ_V_CMP_F_U64                           = 0x000000e8;
    constexpr unsigned int SQ_V_CMP_GE_F16                          = 0x00000026;
    constexpr unsigned int SQ_V_CMP_GE_F32                          = 0x00000046;
    constexpr unsigned int SQ_V_CMP_GE_F64                          = 0x00000066;
    constexpr unsigned int SQ_V_CMP_GE_I16                          = 0x000000a6;
    constexpr unsigned int SQ_V_CMP_GE_I32                          = 0x000000c6;
    constexpr unsigned int SQ_V_CMP_GE_I64                          = 0x000000e6;
    constexpr unsigned int SQ_V_CMP_GE_U16                          = 0x000000ae;
    constexpr unsigned int SQ_V_CMP_GE_U32                          = 0x000000ce;
    constexpr unsigned int SQ_V_CMP_GE_U64                          = 0x000000ee;
    constexpr unsigned int SQ_V_CMP_GT_F16                          = 0x00000024;
    constexpr unsigned int SQ_V_CMP_GT_F32                          = 0x00000044;
    constexpr unsigned int SQ_V_CMP_GT_F64                          = 0x00000064;
    constexpr unsigned int SQ_V_CMP_GT_I16                          = 0x000000a4;
    constexpr unsigned int SQ_V_CMP_GT_I32                          = 0x000000c4;
    constexpr unsigned int SQ_V_CMP_GT_I64                          = 0x000000e4;
    constexpr unsigned int SQ_V_CMP_GT_U16                          = 0x000000ac;
    constexpr unsigned int SQ_V_CMP_GT_U32                          = 0x000000cc;
    constexpr unsigned int SQ_V_CMP_GT_U64                          = 0x000000ec;
    constexpr unsigned int SQ_V_CMP_LE_F16                          = 0x00000023;
    constexpr unsigned int SQ_V_CMP_LE_F32                          = 0x00000043;
    constexpr unsigned int SQ_V_CMP_LE_F64                          = 0x00000063;
    constexpr unsigned int SQ_V_CMP_LE_I16                          = 0x000000a3;
    constexpr unsigned int SQ_V_CMP_LE_I32                          = 0x000000c3;
    constexpr unsigned int SQ_V_CMP_LE_I64                          = 0x000000e3;
    constexpr unsigned int SQ_V_CMP_LE_U16                          = 0x000000ab;
    constexpr unsigned int SQ_V_CMP_LE_U32                          = 0x000000cb;
    constexpr unsigned int SQ_V_CMP_LE_U64                          = 0x000000eb;
    constexpr unsigned int SQ_V_CMP_LG_F16                          = 0x00000025;
    constexpr unsigned int SQ_V_CMP_LG_F32                          = 0x00000045;
    constexpr unsigned int SQ_V_CMP_LG_F64                          = 0x00000065;
    constexpr unsigned int SQ_V_CMP_LT_F16                          = 0x00000021;
    constexpr unsigned int SQ_V_CMP_LT_F32                          = 0x00000041;
    constexpr unsigned int SQ_V_CMP_LT_F64                          = 0x00000061;
    constexpr unsigned int SQ_V_CMP_LT_I16                          = 0x000000a1;
    constexpr unsigned int SQ_V_CMP_LT_I32                          = 0x000000c1;
    constexpr unsigned int SQ_V_CMP_LT_I64                          = 0x000000e1;
    constexpr unsigned int SQ_V_CMP_LT_U16                          = 0x000000a9;
    constexpr unsigned int SQ_V_CMP_LT_U32                          = 0x000000c9;
    constexpr unsigned int SQ_V_CMP_LT_U64                          = 0x000000e9;
    constexpr unsigned int SQ_V_CMP_NEQ_F16                         = 0x0000002d;
    constexpr unsigned int SQ_V_CMP_NEQ_F32                         = 0x0000004d;
    constexpr unsigned int SQ_V_CMP_NEQ_F64                         = 0x0000006d;
    constexpr unsigned int SQ_V_CMP_NE_I16                          = 0x000000a5;
    constexpr unsigned int SQ_V_CMP_NE_I32                          = 0x000000c5;
    constexpr unsigned int SQ_V_CMP_NE_I64                          = 0x000000e5;
    constexpr unsigned int SQ_V_CMP_NE_U16                          = 0x000000ad;
    constexpr unsigned int SQ_V_CMP_NE_U32                          = 0x000000cd;
    constexpr unsigned int SQ_V_CMP_NE_U64                          = 0x000000ed;
    constexpr unsigned int SQ_V_CMP_NGE_F16                         = 0x00000029;
    constexpr unsigned int SQ_V_CMP_NGE_F32                         = 0x00000049;
    constexpr unsigned int SQ_V_CMP_NGE_F64                         = 0x00000069;
    constexpr unsigned int SQ_V_CMP_NGT_F16                         = 0x0000002b;
    constexpr unsigned int SQ_V_CMP_NGT_F32                         = 0x0000004b;
    constexpr unsigned int SQ_V_CMP_NGT_F64                         = 0x0000006b;
    constexpr unsigned int SQ_V_CMP_NLE_F16                         = 0x0000002c;
    constexpr unsigned int SQ_V_CMP_NLE_F32                         = 0x0000004c;
    constexpr unsigned int SQ_V_CMP_NLE_F64                         = 0x0000006c;
    constexpr unsigned int SQ_V_CMP_NLG_F16                         = 0x0000002a;
    constexpr unsigned int SQ_V_CMP_NLG_F32                         = 0x0000004a;
    constexpr unsigned int SQ_V_CMP_NLG_F64                         = 0x0000006a;
    constexpr unsigned int SQ_V_CMP_NLT_F16                         = 0x0000002e;
    constexpr unsigned int SQ_V_CMP_NLT_F32                         = 0x0000004e;
    constexpr unsigned int SQ_V_CMP_NLT_F64                         = 0x0000006e;
    constexpr unsigned int SQ_V_CMP_O_F16                           = 0x00000027;
    constexpr unsigned int SQ_V_CMP_O_F32                           = 0x00000047;
    constexpr unsigned int SQ_V_CMP_O_F64                           = 0x00000067;
    constexpr unsigned int SQ_V_CMP_TRU_F16                         = 0x0000002f;
    constexpr unsigned int SQ_V_CMP_TRU_F32                         = 0x0000004f;
    constexpr unsigned int SQ_V_CMP_TRU_F64                         = 0x0000006f;
    constexpr unsigned int SQ_V_CMP_T_I16                           = 0x000000a7;
    constexpr unsigned int SQ_V_CMP_T_I32                           = 0x000000c7;
    constexpr unsigned int SQ_V_CMP_T_I64                           = 0x000000e7;
    constexpr unsigned int SQ_V_CMP_T_U16                           = 0x000000af;
    constexpr unsigned int SQ_V_CMP_T_U32                           = 0x000000cf;
    constexpr unsigned int SQ_V_CMP_T_U64                           = 0x000000ef;
    constexpr unsigned int SQ_V_CMP_U_F16                           = 0x00000028;
    constexpr unsigned int SQ_V_CMP_U_F32                           = 0x00000048;
    constexpr unsigned int SQ_V_CMP_U_F64                           = 0x00000068;
    constexpr unsigned int SQ_V_CNDMASK_B32                         = 0x00000000;
    constexpr unsigned int SQ_V_COS_F16                             = 0x0000004a;
    constexpr unsigned int SQ_V_COS_F32                             = 0x0000002a;
    constexpr unsigned int SQ_V_CUBEID_F32                          = 0x000001c4;
    constexpr unsigned int SQ_V_CUBEMA_F32                          = 0x000001c7;
    constexpr unsigned int SQ_V_CUBESC_F32                          = 0x000001c5;
    constexpr unsigned int SQ_V_CUBETC_F32                          = 0x000001c6;
    constexpr unsigned int SQ_V_CVT_F16_F32                         = 0x0000000a;
    constexpr unsigned int SQ_V_CVT_F16_I16                         = 0x0000003a;
    constexpr unsigned int SQ_V_CVT_F16_U16                         = 0x00000039;
    constexpr unsigned int SQ_V_CVT_F32_F16                         = 0x0000000b;
    constexpr unsigned int SQ_V_CVT_F32_F64                         = 0x0000000f;
    constexpr unsigned int SQ_V_CVT_F32_I32                         = 0x00000005;
    constexpr unsigned int SQ_V_CVT_F32_U32                         = 0x00000006;
    constexpr unsigned int SQ_V_CVT_F32_UBYTE0                      = 0x00000011;
    constexpr unsigned int SQ_V_CVT_F32_UBYTE1                      = 0x00000012;
    constexpr unsigned int SQ_V_CVT_F32_UBYTE2                      = 0x00000013;
    constexpr unsigned int SQ_V_CVT_F32_UBYTE3                      = 0x00000014;
    constexpr unsigned int SQ_V_CVT_F64_F32                         = 0x00000010;
    constexpr unsigned int SQ_V_CVT_F64_I32                         = 0x00000004;
    constexpr unsigned int SQ_V_CVT_F64_U32                         = 0x00000016;
    constexpr unsigned int SQ_V_CVT_FLR_I32_F32                     = 0x0000000d;
    constexpr unsigned int SQ_V_CVT_I16_F16                         = 0x0000003c;
    constexpr unsigned int SQ_V_CVT_I32_F32                         = 0x00000008;
    constexpr unsigned int SQ_V_CVT_I32_F64                         = 0x00000003;
    constexpr unsigned int SQ_V_CVT_NORM_I16_F16                    = 0x0000004d;
    constexpr unsigned int SQ_V_CVT_NORM_U16_F16                    = 0x0000004e;
    constexpr unsigned int SQ_V_CVT_OFF_F32_I4                      = 0x0000000e;
    constexpr unsigned int SQ_V_CVT_PKACCUM_U8_F32                  = 0x000001f0;
    constexpr unsigned int SQ_V_CVT_PKNORM_I16_F16                  = 0x00000299;
    constexpr unsigned int SQ_V_CVT_PKNORM_I16_F32                  = 0x00000294;
    constexpr unsigned int SQ_V_CVT_PKNORM_U16_F16                  = 0x0000029a;
    constexpr unsigned int SQ_V_CVT_PKNORM_U16_F32                  = 0x00000295;
    constexpr unsigned int SQ_V_CVT_PKRTZ_F16_F32                   = 0x00000296;
    constexpr unsigned int SQ_V_CVT_PK_I16_I32                      = 0x00000298;
    constexpr unsigned int SQ_V_CVT_PK_U8_F32                       = 0x000001dd;
    constexpr unsigned int SQ_V_CVT_PK_U16_U32                      = 0x00000297;
    constexpr unsigned int SQ_V_CVT_RPI_I32_F32                     = 0x0000000c;
    constexpr unsigned int SQ_V_CVT_U16_F16                         = 0x0000003b;
    constexpr unsigned int SQ_V_CVT_U32_F32                         = 0x00000007;
    constexpr unsigned int SQ_V_CVT_U32_F64                         = 0x00000015;
    constexpr unsigned int SQ_V_DIV_FIXUP_F16                       = 0x00000207;
    constexpr unsigned int SQ_V_DIV_FIXUP_F32                       = 0x000001de;
    constexpr unsigned int SQ_V_DIV_FIXUP_F64                       = 0x000001df;
    constexpr unsigned int SQ_V_DIV_FIXUP_LEGACY_F16                = 0x000001ef;
    constexpr unsigned int SQ_V_DIV_FMAS_F32                        = 0x000001e2;
    constexpr unsigned int SQ_V_DIV_FMAS_F64                        = 0x000001e3;
    constexpr unsigned int SQ_V_DIV_SCALE_F32                       = 0x000001e0;
    constexpr unsigned int SQ_V_DIV_SCALE_F64                       = 0x000001e1;
    constexpr unsigned int SQ_V_EXP_F16                             = 0x00000041;
    constexpr unsigned int SQ_V_EXP_F32                             = 0x00000020;
    constexpr unsigned int SQ_V_EXP_LEGACY_F32                      = 0x0000004b;
    constexpr unsigned int SQ_V_FFBH_I32                            = 0x0000002f;
    constexpr unsigned int SQ_V_FFBH_U32                            = 0x0000002d;
    constexpr unsigned int SQ_V_FFBL_B32                            = 0x0000002e;
    constexpr unsigned int SQ_V_FLOOR_F16                           = 0x00000044;
    constexpr unsigned int SQ_V_FLOOR_F32                           = 0x0000001f;
    constexpr unsigned int SQ_V_FLOOR_F64                           = 0x0000001a;
    constexpr unsigned int SQ_V_FMA_F16                             = 0x00000206;
    constexpr unsigned int SQ_V_FMA_F32                             = 0x000001cb;
    constexpr unsigned int SQ_V_FMA_F64                             = 0x000001cc;
    constexpr unsigned int SQ_V_FMA_LEGACY_F16                      = 0x000001ee;
    constexpr unsigned int SQ_V_FRACT_F16                           = 0x00000048;
    constexpr unsigned int SQ_V_FRACT_F32                           = 0x0000001b;
    constexpr unsigned int SQ_V_FRACT_F64                           = 0x00000032;
    constexpr unsigned int SQ_V_FREXP_EXP_I16_F16                   = 0x00000043;
    constexpr unsigned int SQ_V_FREXP_EXP_I32_F32                   = 0x00000033;
    constexpr unsigned int SQ_V_FREXP_EXP_I32_F64                   = 0x00000030;
    constexpr unsigned int SQ_V_FREXP_MANT_F16                      = 0x00000042;
    constexpr unsigned int SQ_V_FREXP_MANT_F32                      = 0x00000034;
    constexpr unsigned int SQ_V_FREXP_MANT_F64                      = 0x00000031;
    constexpr unsigned int SQ_V_INTERP_MOV_F32                      = 0x00000002;
    constexpr unsigned int SQ_V_INTERP_P1LL_F16                     = 0x00000274;
    constexpr unsigned int SQ_V_INTERP_P1LV_F16                     = 0x00000275;
    constexpr unsigned int SQ_V_INTERP_P1_F32                       = 0x00000000;
    constexpr unsigned int SQ_V_INTERP_P2_F16                       = 0x00000277;
    constexpr unsigned int SQ_V_INTERP_P2_F32                       = 0x00000001;
    constexpr unsigned int SQ_V_INTERP_P2_LEGACY_F16                = 0x00000276;
    constexpr unsigned int SQ_V_INTRP_COUNT                         = 0x00000004;
    constexpr unsigned int SQ_V_INTRP_OFFSET                        = 0x00000270;
    constexpr unsigned int SQ_V_LDEXP_F16                           = 0x00000033;
    constexpr unsigned int SQ_V_LDEXP_F32                           = 0x00000288;
    constexpr unsigned int SQ_V_LDEXP_F64                           = 0x00000284;
    constexpr unsigned int SQ_V_LERP_U8                             = 0x000001cd;
    constexpr unsigned int SQ_V_LOG_F16                             = 0x00000040;
    constexpr unsigned int SQ_V_LOG_F32                             = 0x00000021;
    constexpr unsigned int SQ_V_LOG_LEGACY_F32                      = 0x0000004c;
    constexpr unsigned int SQ_V_LSHLREV_B16                         = 0x0000002a;
    constexpr unsigned int SQ_V_LSHLREV_B32                         = 0x00000012;
    constexpr unsigned int SQ_V_LSHLREV_B64                         = 0x0000028f;
    constexpr unsigned int SQ_V_LSHL_ADD_U32                        = 0x000001fd;
    constexpr unsigned int SQ_V_LSHL_OR_B32                         = 0x00000200;
    constexpr unsigned int SQ_V_LSHRREV_B16                         = 0x0000002b;
    constexpr unsigned int SQ_V_LSHRREV_B32                         = 0x00000010;
    constexpr unsigned int SQ_V_LSHRREV_B64                         = 0x00000290;
    constexpr unsigned int SQ_V_MAC_F16                             = 0x00000023;
    constexpr unsigned int SQ_V_MAC_F32                             = 0x00000016;
    constexpr unsigned int SQ_V_MAC_LEGACY_F32                      = 0x0000028e;
    constexpr unsigned int SQ_V_MADAK_F16                           = 0x00000025;
    constexpr unsigned int SQ_V_MADAK_F32                           = 0x00000018;
    constexpr unsigned int SQ_V_MADMK_F16                           = 0x00000024;
    constexpr unsigned int SQ_V_MADMK_F32                           = 0x00000017;
    constexpr unsigned int SQ_V_MAD_F16                             = 0x00000203;
    constexpr unsigned int SQ_V_MAD_F32                             = 0x000001c1;
    constexpr unsigned int SQ_V_MAD_I16                             = 0x00000205;
    constexpr unsigned int SQ_V_MAD_I32_I16                         = 0x000001f2;
    constexpr unsigned int SQ_V_MAD_I32_I24                         = 0x000001c2;
    constexpr unsigned int SQ_V_MAD_I64_I32                         = 0x000001e9;
    constexpr unsigned int SQ_V_MAD_LEGACY_F16                      = 0x000001ea;
    constexpr unsigned int SQ_V_MAD_LEGACY_F32                      = 0x000001c0;
    constexpr unsigned int SQ_V_MAD_LEGACY_I16                      = 0x000001ec;
    constexpr unsigned int SQ_V_MAD_LEGACY_U16                      = 0x000001eb;
    constexpr unsigned int SQ_V_MAD_MIXHI_F16                       = 0x00000022;
    constexpr unsigned int SQ_V_MAD_MIXLO_F16                       = 0x00000021;
    constexpr unsigned int SQ_V_MAD_MIX_F32                         = 0x00000020;
    constexpr unsigned int SQ_V_MAD_U16                             = 0x00000204;
    constexpr unsigned int SQ_V_MAD_U32_U16                         = 0x000001f1;
    constexpr unsigned int SQ_V_MAD_U32_U24                         = 0x000001c3;
    constexpr unsigned int SQ_V_MAD_U64_U32                         = 0x000001e8;
    constexpr unsigned int SQ_V_MAX3_F16                            = 0x000001f7;
    constexpr unsigned int SQ_V_MAX3_F32                            = 0x000001d3;
    constexpr unsigned int SQ_V_MAX3_I16                            = 0x000001f8;
    constexpr unsigned int SQ_V_MAX3_I32                            = 0x000001d4;
    constexpr unsigned int SQ_V_MAX3_U16                            = 0x000001f9;
    constexpr unsigned int SQ_V_MAX3_U32                            = 0x000001d5;
    constexpr unsigned int SQ_V_MAX_F16                             = 0x0000002d;
    constexpr unsigned int SQ_V_MAX_F32                             = 0x0000000b;
    constexpr unsigned int SQ_V_MAX_F64                             = 0x00000283;
    constexpr unsigned int SQ_V_MAX_I16                             = 0x00000030;
    constexpr unsigned int SQ_V_MAX_I32                             = 0x0000000d;
    constexpr unsigned int SQ_V_MAX_U16                             = 0x0000002f;
    constexpr unsigned int SQ_V_MAX_U32                             = 0x0000000f;
    constexpr unsigned int SQ_V_MBCNT_HI_U32_B32                    = 0x0000028d;
    constexpr unsigned int SQ_V_MBCNT_LO_U32_B32                    = 0x0000028c;
    constexpr unsigned int SQ_V_MED3_F16                            = 0x000001fa;
    constexpr unsigned int SQ_V_MED3_F32                            = 0x000001d6;
    constexpr unsigned int SQ_V_MED3_I16                            = 0x000001fb;
    constexpr unsigned int SQ_V_MED3_I32                            = 0x000001d7;
    constexpr unsigned int SQ_V_MED3_U16                            = 0x000001fc;
    constexpr unsigned int SQ_V_MED3_U32                            = 0x000001d8;
    constexpr unsigned int SQ_V_MIN3_F16                            = 0x000001f4;
    constexpr unsigned int SQ_V_MIN3_F32                            = 0x000001d0;
    constexpr unsigned int SQ_V_MIN3_I16                            = 0x000001f5;
    constexpr unsigned int SQ_V_MIN3_I32                            = 0x000001d1;
    constexpr unsigned int SQ_V_MIN3_U16                            = 0x000001f6;
    constexpr unsigned int SQ_V_MIN3_U32                            = 0x000001d2;
    constexpr unsigned int SQ_V_MIN_F16                             = 0x0000002e;
    constexpr unsigned int SQ_V_MIN_F32                             = 0x0000000a;
    constexpr unsigned int SQ_V_MIN_F64                             = 0x00000282;
    constexpr unsigned int SQ_V_MIN_I16                             = 0x00000032;
    constexpr unsigned int SQ_V_MIN_I32                             = 0x0000000c;
    constexpr unsigned int SQ_V_MIN_U16                             = 0x00000031;
    constexpr unsigned int SQ_V_MIN_U32                             = 0x0000000e;
    constexpr unsigned int SQ_V_MOV_B32                             = 0x00000001;
    constexpr unsigned int SQ_V_MOV_FED_B32                         = 0x00000009;
    constexpr unsigned int SQ_V_MOV_PRSV_B32                        = 0x00000036;
    constexpr unsigned int SQ_V_MQSAD_PK_U16_U8                     = 0x000001e6;
    constexpr unsigned int SQ_V_MQSAD_U32_U8                        = 0x000001e7;
    constexpr unsigned int SQ_V_MSAD_U8                             = 0x000001e4;
    constexpr unsigned int SQ_V_MUL_F16                             = 0x00000022;
    constexpr unsigned int SQ_V_MUL_F32                             = 0x00000005;
    constexpr unsigned int SQ_V_MUL_F64                             = 0x00000281;
    constexpr unsigned int SQ_V_MUL_HI_I32                          = 0x00000287;
    constexpr unsigned int SQ_V_MUL_HI_I32_I24                      = 0x00000007;
    constexpr unsigned int SQ_V_MUL_HI_U32                          = 0x00000286;
    constexpr unsigned int SQ_V_MUL_HI_U32_U24                      = 0x00000009;
    constexpr unsigned int SQ_V_MUL_I32_I24                         = 0x00000006;
    constexpr unsigned int SQ_V_MUL_LEGACY_F32                      = 0x00000004;
    constexpr unsigned int SQ_V_MUL_LO_U16                          = 0x00000029;
    constexpr unsigned int SQ_V_MUL_LO_U32                          = 0x00000285;
    constexpr unsigned int SQ_V_MUL_U32_U24                         = 0x00000008;
    constexpr unsigned int SQ_V_NOP                                 = 0x00000000;
    constexpr unsigned int SQ_V_NOT_B32                             = 0x0000002b;
    constexpr unsigned int SQ_V_OP1_COUNT                           = 0x00000080;
    constexpr unsigned int SQ_V_OP1_OFFSET                          = 0x00000140;
    constexpr unsigned int SQ_V_OP2_COUNT                           = 0x00000040;
    constexpr unsigned int SQ_V_OP2_OFFSET                          = 0x00000100;
    constexpr unsigned int SQ_V_OP3P_COUNT                          = 0x00000080;
    constexpr unsigned int SQ_V_OP3P_OFFSET                         = 0x00000380;
    constexpr unsigned int SQ_V_OP3_2IN_COUNT                       = 0x00000080;
    constexpr unsigned int SQ_V_OP3_2IN_OFFSET                      = 0x00000280;
    constexpr unsigned int SQ_V_OP3_3IN_COUNT                       = 0x000000b0;
    constexpr unsigned int SQ_V_OP3_3IN_OFFSET                      = 0x000001c0;
    constexpr unsigned int SQ_V_OP3_INTRP_COUNT                     = 0x0000000c;
    constexpr unsigned int SQ_V_OP3_INTRP_OFFSET                    = 0x00000274;
    constexpr unsigned int SQ_V_OPC_COUNT                           = 0x00000100;
    constexpr unsigned int SQ_V_OPC_OFFSET                          = 0x00000000;
    constexpr unsigned int SQ_V_OR3_B32                             = 0x00000202;
    constexpr unsigned int SQ_V_OR_B32                              = 0x00000014;
    constexpr unsigned int SQ_V_PACK_B32_F16                        = 0x000002a0;
    constexpr unsigned int SQ_V_PERM_B32                            = 0x000001ed;
    constexpr unsigned int SQ_V_PK_ADD_F16                          = 0x0000000f;
    constexpr unsigned int SQ_V_PK_ADD_I16                          = 0x00000002;
    constexpr unsigned int SQ_V_PK_ADD_U16                          = 0x0000000a;
    constexpr unsigned int SQ_V_PK_ASHRREV_I16                      = 0x00000006;
    constexpr unsigned int SQ_V_PK_FMA_F16                          = 0x0000000e;
    constexpr unsigned int SQ_V_PK_LSHLREV_B16                      = 0x00000004;
    constexpr unsigned int SQ_V_PK_LSHRREV_B16                      = 0x00000005;
    constexpr unsigned int SQ_V_PK_MAD_I16                          = 0x00000000;
    constexpr unsigned int SQ_V_PK_MAD_U16                          = 0x00000009;
    constexpr unsigned int SQ_V_PK_MAX_F16                          = 0x00000012;
    constexpr unsigned int SQ_V_PK_MAX_I16                          = 0x00000007;
    constexpr unsigned int SQ_V_PK_MAX_U16                          = 0x0000000c;
    constexpr unsigned int SQ_V_PK_MIN_F16                          = 0x00000011;
    constexpr unsigned int SQ_V_PK_MIN_I16                          = 0x00000008;
    constexpr unsigned int SQ_V_PK_MIN_U16                          = 0x0000000d;
    constexpr unsigned int SQ_V_PK_MUL_F16                          = 0x00000010;
    constexpr unsigned int SQ_V_PK_MUL_LO_U16                       = 0x00000001;
    constexpr unsigned int SQ_V_PK_SUB_I16                          = 0x00000003;
    constexpr unsigned int SQ_V_PK_SUB_U16                          = 0x0000000b;
    constexpr unsigned int SQ_V_QSAD_PK_U16_U8                      = 0x000001e5;
    constexpr unsigned int SQ_V_RCP_F16                             = 0x0000003d;
    constexpr unsigned int SQ_V_RCP_F32                             = 0x00000022;
    constexpr unsigned int SQ_V_RCP_F64                             = 0x00000025;
    constexpr unsigned int SQ_V_RCP_IFLAG_F32                       = 0x00000023;
    constexpr unsigned int SQ_V_READFIRSTLANE_B32                   = 0x00000002;
    constexpr unsigned int SQ_V_READLANE_B32                        = 0x00000289;
    constexpr unsigned int SQ_V_READLANE_REGRD_B32                  = 0x0000029b;
    constexpr unsigned int SQ_V_RNDNE_F16                           = 0x00000047;
    constexpr unsigned int SQ_V_RNDNE_F32                           = 0x0000001e;
    constexpr unsigned int SQ_V_RNDNE_F64                           = 0x00000019;
    constexpr unsigned int SQ_V_RSQ_F16                             = 0x0000003f;
    constexpr unsigned int SQ_V_RSQ_F32                             = 0x00000024;
    constexpr unsigned int SQ_V_RSQ_F64                             = 0x00000026;
    constexpr unsigned int SQ_V_SAD_HI_U8                           = 0x000001da;
    constexpr unsigned int SQ_V_SAD_U8                              = 0x000001d9;
    constexpr unsigned int SQ_V_SAD_U16                             = 0x000001db;
    constexpr unsigned int SQ_V_SAD_U32                             = 0x000001dc;
    constexpr unsigned int SQ_V_SAT_PK_U8_I16                       = 0x0000004f;
    constexpr unsigned int SQ_V_SCREEN_PARTITION_4SE_B32            = 0x00000037;
    constexpr unsigned int SQ_V_SIN_F16                             = 0x00000049;
    constexpr unsigned int SQ_V_SIN_F32                             = 0x00000029;
    constexpr unsigned int SQ_V_SQRT_F16                            = 0x0000003e;
    constexpr unsigned int SQ_V_SQRT_F32                            = 0x00000027;
    constexpr unsigned int SQ_V_SQRT_F64                            = 0x00000028;
    constexpr unsigned int SQ_V_SUBBREV_CO_U32                      = 0x0000001e;
    constexpr unsigned int SQ_V_SUBB_CO_U32                         = 0x0000001d;
    constexpr unsigned int SQ_V_SUBREV_CO_U32                       = 0x0000001b;
    constexpr unsigned int SQ_V_SUBREV_F16                          = 0x00000021;
    constexpr unsigned int SQ_V_SUBREV_F32                          = 0x00000003;
    constexpr unsigned int SQ_V_SUBREV_U16                          = 0x00000028;
    constexpr unsigned int SQ_V_SUBREV_U32                          = 0x00000036;
    constexpr unsigned int SQ_V_SUB_CO_U32                          = 0x0000001a;
    constexpr unsigned int SQ_V_SUB_F16                             = 0x00000020;
    constexpr unsigned int SQ_V_SUB_F32                             = 0x00000002;
    constexpr unsigned int SQ_V_SUB_I16                             = 0x0000029f;
    constexpr unsigned int SQ_V_SUB_I32                             = 0x0000029d;
    constexpr unsigned int SQ_V_SUB_U16                             = 0x00000027;
    constexpr unsigned int SQ_V_SUB_U32                             = 0x00000035;
    constexpr unsigned int SQ_V_SWAP_B32                            = 0x00000051;
    constexpr unsigned int SQ_V_TRIG_PREOP_F64                      = 0x00000292;
    constexpr unsigned int SQ_V_TRUNC_F16                           = 0x00000046;
    constexpr unsigned int SQ_V_TRUNC_F32                           = 0x0000001c;
    constexpr unsigned int SQ_V_TRUNC_F64                           = 0x00000017;
    constexpr unsigned int SQ_V_WRITELANE_B32                       = 0x0000028a;
    constexpr unsigned int SQ_V_WRITELANE_REGWR_B32                 = 0x00000050;
    constexpr unsigned int SQ_V_XAD_U32                             = 0x000001f3;
    constexpr unsigned int SQ_V_XOR_B32                             = 0x00000015;
    constexpr unsigned int SQ_WAITCNT_EXP_SHIFT                     = 0x00000004;
    constexpr unsigned int SQ_WAITCNT_EXP_SIZE                      = 0x00000003;
    constexpr unsigned int SQ_WAITCNT_LGKM_SHIFT                    = 0x00000008;
    constexpr unsigned int SQ_WAITCNT_LGKM_SIZE                     = 0x00000004;
    constexpr unsigned int SQ_WAITCNT_VM_HI_SHIFT                   = 0x0000000e;
    constexpr unsigned int SQ_WAITCNT_VM_HI_SIZE                    = 0x00000002;
    constexpr unsigned int SQ_WAITCNT_VM_SHIFT                      = 0x00000000;
    constexpr unsigned int SQ_WAITCNT_VM_SIZE                       = 0x00000004;
    constexpr unsigned int SQ_XLATE_VOP3_TO_VINTRP_COUNT            = 0x00000004;
    constexpr unsigned int SQ_XLATE_VOP3_TO_VINTRP_OFFSET           = 0x00000270;
    constexpr unsigned int SQ_XLATE_VOP3_TO_VOP1_COUNT              = 0x00000080;
    constexpr unsigned int SQ_XLATE_VOP3_TO_VOP1_OFFSET             = 0x00000140;
    constexpr unsigned int SQ_XLATE_VOP3_TO_VOP2_COUNT              = 0x00000040;
    constexpr unsigned int SQ_XLATE_VOP3_TO_VOP2_OFFSET             = 0x00000100;
    constexpr unsigned int SQ_XLATE_VOP3_TO_VOP3P_COUNT             = 0x00000080;
    constexpr unsigned int SQ_XLATE_VOP3_TO_VOP3P_OFFSET            = 0x00000380;
    constexpr unsigned int SQ_XLATE_VOP3_TO_VOPC_COUNT              = 0x00000100;
    constexpr unsigned int SQ_XLATE_VOP3_TO_VOPC_OFFSET             = 0x00000000;
    constexpr unsigned int SQ_XNACK_MASK_HI                         = 0x00000069;
    constexpr unsigned int SQ_XNACK_MASK_LO                         = 0x00000068;
} // namespace Gfx09

namespace Gfx10
{
    constexpr unsigned int CSCNTL_ADDR_WIDTH                        = 0x00000007;
    constexpr unsigned int CSCNTL_DATA_WIDTH                        = 0x00000020;
    constexpr unsigned int CSCNTL_TYPE_WIDTH                        = 0x00000002;
    constexpr unsigned int GB_TILE_MODE0_GEN0                       = 0x90800310;
    constexpr unsigned int GB_TILE_MODE0_GEN1                       = 0x90800310;
    constexpr unsigned int GB_TILE_MODE1_GEN0                       = 0x90800b10;
    constexpr unsigned int GB_TILE_MODE1_GEN1                       = 0x90800b10;
    constexpr unsigned int GB_TILE_MODE2_GEN0                       = 0x90801310;
    constexpr unsigned int GB_TILE_MODE2_GEN1                       = 0x90801310;
    constexpr unsigned int GB_TILE_MODE3_GEN0                       = 0x90801b10;
    constexpr unsigned int GB_TILE_MODE3_GEN1                       = 0x90801b10;
    constexpr unsigned int GB_TILE_MODE4_GEN0                       = 0x90802310;
    constexpr unsigned int GB_TILE_MODE4_GEN1                       = 0x90802310;
    constexpr unsigned int GB_TILE_MODE5_GEN0                       = 0x90800308;
    constexpr unsigned int GB_TILE_MODE5_GEN1                       = 0x90800308;
    constexpr unsigned int GB_TILE_MODE6_GEN0                       = 0x90801318;
    constexpr unsigned int GB_TILE_MODE6_GEN1                       = 0x90801318;
    constexpr unsigned int GB_TILE_MODE7_GEN0                       = 0x90802318;
    constexpr unsigned int GB_TILE_MODE7_GEN1                       = 0x90802318;
    constexpr unsigned int GB_TILE_MODE8_GEN0                       = 0x90000304;
    constexpr unsigned int GB_TILE_MODE8_GEN1                       = 0x90000304;
    constexpr unsigned int GB_TILE_MODE9_GEN0                       = 0x90000308;
    constexpr unsigned int GB_TILE_MODE9_GEN1                       = 0x90000308;
    constexpr unsigned int GB_TILE_MODE10_GEN0                      = 0x92000310;
    constexpr unsigned int GB_TILE_MODE10_GEN1                      = 0x92000310;
    constexpr unsigned int GB_TILE_MODE11_GEN0                      = 0x92000294;
    constexpr unsigned int GB_TILE_MODE11_GEN1                      = 0x92000294;
    constexpr unsigned int GB_TILE_MODE12_GEN0                      = 0x92000318;
    constexpr unsigned int GB_TILE_MODE12_GEN1                      = 0x92000318;
    constexpr unsigned int GB_TILE_MODE13_GEN0                      = 0x90400308;
    constexpr unsigned int GB_TILE_MODE13_GEN1                      = 0x90400308;
    constexpr unsigned int GB_TILE_MODE14_GEN0                      = 0x92400310;
    constexpr unsigned int GB_TILE_MODE14_GEN1                      = 0x92400310;
    constexpr unsigned int GB_TILE_MODE15_GEN0                      = 0x924002b0;
    constexpr unsigned int GB_TILE_MODE15_GEN1                      = 0x924002b0;
    constexpr unsigned int GB_TILE_MODE16_GEN0                      = 0x92400294;
    constexpr unsigned int GB_TILE_MODE16_GEN1                      = 0x92400294;
    constexpr unsigned int GB_TILE_MODE17_GEN0                      = 0x92400318;
    constexpr unsigned int GB_TILE_MODE17_GEN1                      = 0x92400318;
    constexpr unsigned int GB_TILE_MODE18_GEN0                      = 0x9240032c;
    constexpr unsigned int GB_TILE_MODE18_GEN1                      = 0x9240032c;
    constexpr unsigned int GB_TILE_MODE19_GEN0                      = 0x9100030c;
    constexpr unsigned int GB_TILE_MODE19_GEN1                      = 0x9100030c;
    constexpr unsigned int GB_TILE_MODE20_GEN0                      = 0x9100031c;
    constexpr unsigned int GB_TILE_MODE20_GEN1                      = 0x9100031c;
    constexpr unsigned int GB_TILE_MODE21_GEN0                      = 0x910002b4;
    constexpr unsigned int GB_TILE_MODE21_GEN1                      = 0x910002b4;
    constexpr unsigned int GB_TILE_MODE22_GEN0                      = 0x910002a4;
    constexpr unsigned int GB_TILE_MODE22_GEN1                      = 0x910002a4;
    constexpr unsigned int GB_TILE_MODE23_GEN0                      = 0x91000328;
    constexpr unsigned int GB_TILE_MODE23_GEN1                      = 0x91000328;
    constexpr unsigned int GB_TILE_MODE24_GEN0                      = 0x910002bc;
    constexpr unsigned int GB_TILE_MODE24_GEN1                      = 0x910002bc;
    constexpr unsigned int GB_TILE_MODE25_GEN0                      = 0x91000320;
    constexpr unsigned int GB_TILE_MODE25_GEN1                      = 0x91000320;
    constexpr unsigned int GB_TILE_MODE26_GEN0                      = 0x910002b8;
    constexpr unsigned int GB_TILE_MODE26_GEN1                      = 0x910002b8;
    constexpr unsigned int GB_TILE_MODE27_GEN0                      = 0x90c00308;
    constexpr unsigned int GB_TILE_MODE27_GEN1                      = 0x90c00308;
    constexpr unsigned int GB_TILE_MODE28_GEN0                      = 0x92c00310;
    constexpr unsigned int GB_TILE_MODE28_GEN1                      = 0x92c00310;
    constexpr unsigned int GB_TILE_MODE29_GEN0                      = 0x92c00294;
    constexpr unsigned int GB_TILE_MODE29_GEN1                      = 0x92c00294;
    constexpr unsigned int GB_TILE_MODE30_GEN0                      = 0x92c00318;
    constexpr unsigned int GB_TILE_MODE30_GEN1                      = 0x92c00318;
    constexpr unsigned int GB_TILE_MODE31_GEN0                      = 0x00000000;
    constexpr unsigned int GB_TILE_MODE31_GEN1                      = 0x00000000;
    constexpr unsigned int INST_ID_XNACK_OVERRIDE                   = 0xfffffff5;
    constexpr unsigned int ROM_SIGNATURE                            = 0x0000aa55;
    constexpr unsigned int SEM_RESP_FAILED                          = 0x00000002;
    constexpr unsigned int SEM_RESP_PASSED                          = 0x00000003;
    constexpr unsigned int SIMM16_WAITCNT_DEPCTR_SA_SDST_SIZE       = 0x00000001;
    constexpr unsigned int SIMM16_WAITCNT_DEPCTR_SA_SDST_START      = 0x00000000;
    constexpr unsigned int SIMM16_WAITCNT_DEPCTR_VA_SDST_SIZE       = 0x00000003;
    constexpr unsigned int SIMM16_WAITCNT_DEPCTR_VA_SDST_START      = 0x00000009;
    constexpr unsigned int SIMM16_WAITCNT_DEPCTR_VA_SSRC_SIZE       = 0x00000001;
    constexpr unsigned int SIMM16_WAITCNT_DEPCTR_VA_SSRC_START      = 0x00000008;
    constexpr unsigned int SIMM16_WAITCNT_DEPCTR_VA_VCC_SIZE        = 0x00000001;
    constexpr unsigned int SIMM16_WAITCNT_DEPCTR_VA_VCC_START       = 0x00000001;
    constexpr unsigned int SIMM16_WAITCNT_DEPCTR_VA_VDST_SIZE       = 0x00000004;
    constexpr unsigned int SIMM16_WAITCNT_DEPCTR_VA_VDST_START      = 0x0000000c;
    constexpr unsigned int SIMM16_WAITCNT_DEPCTR_VM_VSRC_SIZE       = 0x00000003;
    constexpr unsigned int SIMM16_WAITCNT_DEPCTR_VM_VSRC_START      = 0x00000002;
    constexpr unsigned int SIMM16_WAITCNT_LGKM_CNT_SIZE             = 0x00000006;
    constexpr unsigned int SQIND_WAVE_HWREGS_OFFSET                 = 0x00000100;
    constexpr unsigned int SQIND_WAVE_HWREGS_SIZE                   = 0x00000100;
    constexpr unsigned int SQIND_WAVE_VGPRS_SIZE                    = 0x00000400;
    constexpr unsigned int SQ_WAVE_IB_DEP_LDS_DIR_SIZE              = 0x00000003;
    constexpr unsigned int SQ_WAVE_IB_DEP_SA_EXEC_SIZE              = 0x00000002;
    constexpr unsigned int SQ_WAVE_IB_DEP_SA_M0_SIZE                = 0x00000001;
    constexpr unsigned int SQ_WAVE_IB_DEP_SA_SDST_SIZE              = 0x00000004;
    constexpr unsigned int SQ_WAVE_IB_DEP_VA_EXEC_SIZE              = 0x00000002;
    constexpr unsigned int SQ_WAVE_IB_DEP_VA_SDST_SIZE              = 0x00000004;
    constexpr unsigned int SQ_WAVE_IB_DEP_VA_SSRC_SIZE              = 0x00000003;
    constexpr unsigned int SQ_WAVE_IB_DEP_VA_VCC_SIZE               = 0x00000003;
    constexpr unsigned int SQ_WAVE_IB_DEP_VA_VDST_SIZE              = 0x00000004;
    constexpr unsigned int SQ_WAVE_IB_DEP_VM_VSRC_SIZE              = 0x00000004;
} // namespace Gfx10

namespace Nv10
{
    constexpr unsigned int IP_USB_PD_REVISION_ID                    = 0x00000000;
} // namespace Nv10

namespace Rv1x
{
    constexpr unsigned int ROM_SIGNATURE                            = 0x0000aa55;
    constexpr unsigned int SEM_PASSED                               = 0x00000003;
    constexpr unsigned int SRCID_SECURE_E                           = 0x0000000e;
    constexpr unsigned int _SEM_FAILED                              = 0x00000002;
} // namespace Rv1x

namespace Rv2x
{
    constexpr unsigned int ROM_SIGNATURE                            = 0x0000aa55;
    constexpr unsigned int SEM_PASSED                               = 0x00000003;
    constexpr unsigned int SRCID_SECURE_E                           = 0x0000000e;
    constexpr unsigned int _SEM_FAILED                              = 0x00000002;
} // namespace Rv2x

namespace Vega
{
    constexpr unsigned int ROM_SIGNATURE                            = 0x0000aa55;
    constexpr unsigned int SEM_RESP_FAILED                          = 0x00000002;
    constexpr unsigned int SEM_RESP_PASSED                          = 0x00000003;
    constexpr unsigned int SRCID_SECURE_E                           = 0x0000000e;
} // namespace Vega

namespace Vg12
{
    constexpr unsigned int SQ_V_DOT2C_F32_F16                       = 0x00000037;
    constexpr unsigned int SQ_V_DOT2C_I32_I16                       = 0x00000038;
    constexpr unsigned int SQ_V_DOT2_F32_F16                        = 0x00000023;
    constexpr unsigned int SQ_V_DOT2_I32_I16                        = 0x00000026;
    constexpr unsigned int SQ_V_DOT2_I32_I16_I8                     = 0x00000024;
    constexpr unsigned int SQ_V_DOT2_U32_U16                        = 0x00000027;
    constexpr unsigned int SQ_V_DOT2_U32_U16_U8                     = 0x00000025;
    constexpr unsigned int SQ_V_DOT4C_I32_I8                        = 0x00000039;
    constexpr unsigned int SQ_V_DOT4_I32_I8                         = 0x00000028;
    constexpr unsigned int SQ_V_DOT4_U32_U8                         = 0x00000029;
    constexpr unsigned int SQ_V_DOT8C_I32_I4                        = 0x0000003a;
    constexpr unsigned int SQ_V_DOT8_I32_I4                         = 0x0000002a;
    constexpr unsigned int SQ_V_DOT8_U32_U4                         = 0x0000002b;
    constexpr unsigned int SQ_V_FMAC_F32                            = 0x0000003b;
    constexpr unsigned int SQ_V_PK_FMAC_F16                         = 0x0000003c;
    constexpr unsigned int SQ_V_XNOR_B32                            = 0x0000003d;
} // namespace Vg12

namespace Vg20
{
    constexpr unsigned int SQ_V_DOT2_F32_F16                        = 0x00000023;
    constexpr unsigned int SQ_V_DOT2_I32_I16                        = 0x00000026;
    constexpr unsigned int SQ_V_DOT2_U32_U16                        = 0x00000027;
    constexpr unsigned int SQ_V_DOT4_I32_I8                         = 0x00000028;
    constexpr unsigned int SQ_V_DOT4_U32_U8                         = 0x00000029;
    constexpr unsigned int SQ_V_DOT8_I32_I4                         = 0x0000002a;
    constexpr unsigned int SQ_V_DOT8_U32_U4                         = 0x0000002b;
    constexpr unsigned int SQ_V_FMAC_F32                            = 0x0000003b;
    constexpr unsigned int SQ_V_XNOR_B32                            = 0x0000003d;
} // namespace Vg20

