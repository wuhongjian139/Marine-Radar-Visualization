//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file RadarColourLookUpTable.h
//! 
//! Class able to manage colour tables
//-----------------------------------------------------------------------------
#ifndef _RADARCOLOURLOOKUPTABLE_H_
#define _RADARCOLOURLOOKUPTABLE_H_

#include "NavTypes.h"
#include <ExportSDK.h>

#include <cassert>


namespace Navico {

#define ALPHA_VALUE 0xff

//-----------------------------------------------------------------------------
//! Definition of Color
//-----------------------------------------------------------------------------
typedef uint32_t tColor;

inline tColor FromARGB( uint8_t a, uint8_t r, uint8_t g, uint8_t b ) { return ((((uint32_t)a) << 24) | (((uint32_t)r) <<16 ) | (((uint32_t)g) << 8) | ((uint32_t)b)); }
inline tColor FromBGRA( uint8_t b, uint8_t g, uint8_t r, uint8_t a ) { return ((((uint32_t)b) << 24) | (((uint32_t)g) <<16 ) | (((uint32_t)r) << 8) | ((uint32_t)a)); }

//-----------------------------------------------------------------------------
// tRadarColourLookUpTable Class
//-----------------------------------------------------------------------------

// Dummy class for colour look up table
class NAVICO_SDK_EXPORT tRadarColourLookUpTable
{
private:
    tColor *m_pColourLookup;

public:
    tRadarColourLookUpTable() : m_pColourLookup( nullptr ) { }

    //-------------------------------------------------------------------------
    //! Gets a colour at a partcular index.
    //! Note: no check is done on boundaries of the vector, to speed things up!!!
    //!       Normally we have 16 colours.
    //! \return the color value in alpha-red-green-blue value
    //-------------------------------------------------------------------------
    inline tColor GetColour( uint32_t index ) { assert( index < 256 ); return m_pColourLookup[index]; }

protected:
    inline void SetLookUpTablePointer( tColor *pLookUpTable ) { m_pColourLookup = pLookUpTable; }
};

//-----------------------------------------------------------------------------
// Green colour look up table
//-----------------------------------------------------------------------------

class NAVICO_SDK_EXPORT tRadarColourLookUpTableGreen : public tRadarColourLookUpTable
{
public:
    tRadarColourLookUpTableGreen();
};

//-----------------------------------------------------------------------------
// Green colour look up table
//-----------------------------------------------------------------------------

class NAVICO_SDK_EXPORT tRadarColourLookUpTableNavico : public tRadarColourLookUpTable
{
public:
    tRadarColourLookUpTableNavico();
};

//-----------------------------------------------------------------------------

} // namespace Navico 

#endif // _RADARCOLOURLOOKUPTABLE_H_
