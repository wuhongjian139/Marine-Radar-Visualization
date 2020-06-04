//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file p2clut.h
//!
//-----------------------------------------------------------------------------
#ifndef NAVICO_P2CLUT_H
#define NAVICO_P2CLUT_H

#include <NavTypes.h>

namespace Navico {

//-----------------------------------------------------------------------------

#define LUT_RES 2048
#define LUT_BBP 32

#if LUT_RES == 4096
    #if LUT_BBP == 24
        #define EXCLUDE_P2CLUT2048X2048X2048_QUAD24BPP
        #define EXCLUDE_P2CLUT2048X2048X2048_QUAD32BPP
    #else
        Error
    #endif
#elif LUT_RES == 2048
    #if LUT_BBP == 24
        #define EXCLUDE_P2CLUT2048X2048X4096_QUAD24BPP
        #define EXCLUDE_P2CLUT2048X2048X2048_QUAD32BPP
    #elif LUT_BBP == 32
        #define EXCLUDE_P2CLUT2048X2048X2048_QUAD24BPP
        #define EXCLUDE_P2CLUT2048X2048X4096_QUAD24BPP
    #else
        Error
    #endif
#else
    Error
#endif

//-----------------------------------------------------------------------------

/** P2C look up table encoding symmetry enumeration **/
typedef enum P2CLUT_SYMMETRY_E
{
    P2C_LUT_NOSYM       = 0,
    P2C_LUT_SEMI        = 1,
    P2C_LUT_QUADRANT    = 2,
    P2C_LUT_OCTANT      = 3
} P2CLUT_SYMMETRY_T;

/** P2C look up table encoding {dx:dy:dr} bits per pixel enumeration **/
typedef enum P2CLUT_ENCODING_E
{
    P2C_LUT_2BPP        = 2,
    P2C_LUT_4BPP        = 4,
    P2C_LUT_8BPP        = 8,
    P2C_LUT_24BPP       = 24
} P2CLUT_ENCODING_T;

/** P2C look up table coordinate system enumeration **/
typedef enum P2C_COORDSYS_E
{
    P2C_LUT_RIGHTHAND   = 0,
    P2C_LUT_LEFTHAND    = 1
} P2C_COORDSYS_T;

/** P2C look up table coordinate system origin enumeration **/
typedef enum P2C_ORIGIN_E
{
    P2C_BOTTOM_LEFT     = 0,
    P2C_TOP_LEFT        = 1,
    P2C_TOP_RIGHT       = 2,
    P2C_BOTTOM_RIGHT    = 3
} P2C_ORIGIN_T;

/** P2C look up table spoke header data structure **/
typedef struct P2CLUT_SPOKE_HEADER_S
{
    int16_t m_x0;
    int16_t m_y0;
    int16_t m_r0;
    int16_t m_len;
    int32_t m_pos;
} P2CLUT_SPOKE_HEADER_T;

/** P2C look up table control block structure **/
typedef struct P2CLUT_TCB_S
{
    int8_t m_symmetry;
    int8_t m_encoding;
    int8_t m_coordsys;
    int8_t m_origin;
    int16_t m_width;
    int16_t m_height;
    int16_t m_spokes_per_360;
    int16_t m_spokes_per_lut;
    int32_t m_total_lut_bytes;

    const P2CLUT_SPOKE_HEADER_T *m_phdr;
    const int8_t *m_ptable;
} P2CLUT_TCB_T;

//-----------------------------------------------------------------------------

#if LUT_RES == 4096
    #if LUT_BBP == 24
        extern const P2CLUT_TCB_T           p2clut2048x2048x4096_quad24bpp_tcb;
        extern const P2CLUT_SPOKE_HEADER_T  p2clut2048x2048x4096_quad24bpp_hdr[];
        extern const int8_t                 p2clut2048x2048x4096_quad24bpp_data[];
    #else
        Error
    #endif
#elif LUT_RES == 2048
    #if LUT_BBP == 24
        extern const P2CLUT_TCB_T           p2clut2048x2048x2048_quad24bpp_tcb;
        extern const P2CLUT_SPOKE_HEADER_T  p2clut2048x2048x2048_quad24bpp_hdr[];
        extern const int8_t                 p2clut2048x2048x2048_quad24bpp_data[];
    #elif LUT_BBP == 32
        extern const P2CLUT_TCB_T           p2clut2048x2048x2048_quad32bpp_tcb;
        extern const P2CLUT_SPOKE_HEADER_T  p2clut2048x2048x2048_quad32bpp_hdr[];
        extern const int8_t                 p2clut2048x2048x2048_quad32bpp_data[];
    #else
        Error
    #endif
#else
    Error
#endif

//---------------------------------------------------------------------------

}  // namespace Navico

#endif  // inclusion guard
