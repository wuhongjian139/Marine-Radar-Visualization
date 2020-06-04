//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file PPIControllerImpl.h
//! 
//! Class capable of performing scan conversion
//-----------------------------------------------------------------------------
#ifndef tPPIControllerImplIMPL_H
#define tPPIControllerImplIMPL_H

#include "NavTypes.h"
#include <ExportSDK.h>
#include <Protocol/NRP/NavRadarSpoke.h>


namespace Navico {

    class tRadarFrameBuffer;
    class tRadarTargetTrailBuffer;
    class tRadarColourLookUpTable;

namespace Image {

//-----------------------------------------------------------------------------
//! Definition of a PPI image controller
//-----------------------------------------------------------------------------
class NAVICO_SDK_EXPORT tPPIControllerImpl
{
public:
    tPPIControllerImpl();
    ~tPPIControllerImpl();

    //-------------------------------------------------------------------------
    //! Function that is used to set information on where image will be drawn
    //! \param pRadarFramebuffer Radar frame buffer where spoke will be drawn
    //! \param width Width of the memory frame buffer
    //! \param height Height of the memory frame buffer
    //! \param pLookUpTable pointer to the colour look up table
    //! \param xCenter X-centre coordinate of where the PPI will be drawn 
    //!                (default Width/2)
    //! \param yCenter Y-centre coordinate of where the PPI will be drawn 
    //!                (default Height/2)
    //-------------------------------------------------------------------------
    void SetFrameBuffer( intptr_t pBuffer, uint32_t width, uint32_t height, tRadarColourLookUpTable *pLookUpTable, uint32_t xCentre, uint32_t yCentre );

    //-------------------------------------------------------------------------
    //! Function that is used to set the new colour map
    //! \param pLookUpTable pointer to the colour look up table
    //-------------------------------------------------------------------------
    void SetColourLookUpTable( tRadarColourLookUpTable *pLookUpTable );

    //-------------------------------------------------------------------------
    //! Function that is used to add a spoke that will be drawn using the PPI
    //! representation
    //! \param pSpoke Spoke will be added to the PPI
    //-------------------------------------------------------------------------
    void Process( const Navico::Protocol::NRP::Spoke::t9174Spoke *pSpoke );

    //-------------------------------------------------------------------------
    //! Enable different kind of azimuth interpolation
    //! \param azimuthInterp It can be eAzimuthInterpolationNone (doesn't perform
    //! any azimuth interpolation and draws holes if huge azimuth are missing) or
    //! eAzimuthInterpolationRepeat (it repeats last spoke to fill the azimuth gap)
    //-------------------------------------------------------------------------
    void SetAzimuthInterpolation( tPPIAzimuthInterpolation azimuthInterp ) { m_AzimuthInterp = azimuthInterp; };

    //-------------------------------------------------------------------------
    //! Return the type of azimuth interpolation used.
    //! \return It can be eAzimuthInterpolationNone (doesn't perform
    //! any azimuth interpolation and draws holes if huge azimuth are missing) or
    //! eAzimuthInterpolationRepeat (it repeats last spoke to fill the azimuth gap)
    //-------------------------------------------------------------------------
    tPPIAzimuthInterpolation GetAzimuthInterpolation( void ) const { return m_AzimuthInterp; };

    //-------------------------------------------------------------------------
    //! Enable different kind of range interpolation used.
    //! \param rangeInterp It can be eRangeInterpolationNone (doesn't perform
    //! any range interpolation and each single spoke sample is mapped as pixel) or
    //! eRangeInterpolationPeak (it uses the range resolution value to express how
    //! many meters represents each single pixel)
    //-------------------------------------------------------------------------
    void SetRangeInterpolation( tPPIRangeInterpolation rangeInterp ) { m_RangeInterp = rangeInterp; };

    //-------------------------------------------------------------------------
    //! Return the type of range interpolation used.
    //! \return It can be eRangeInterpolationNone (doesn't perform
    //! any range interpolation and each pixel is mapped to a single spoke sample)
    //! or eRangeInterpolationPeak (it uses the range resolution value to express
    //! how many meters represents each single pixel)
    //-------------------------------------------------------------------------
    tPPIRangeInterpolation RangeInterpolation(void) { return m_RangeInterp; };

    //-------------------------------------------------------------------------
    //! Sets the range resolution as meters per pixels (how many meters will be
    //! mapped for a pixel)
    //! \param metersPerPixel The new range resolution
    //-------------------------------------------------------------------------
    void SetRangeResolution( float metersPerPixel ) { m_metersPerPixel = (metersPerPixel < 0.001f)? 0.001f:metersPerPixel; }

    //-------------------------------------------------------------------------
    //! Returns the current range resolution
    //! \return It returns the range resolution expressed as meters per pixel
    //-------------------------------------------------------------------------
    float GetRangeResolution( void ) const { return m_metersPerPixel; }

    //-------------------------------------------------------------------------
    //! Returns if target trails are on
    //! \return The state of trails
    //-------------------------------------------------------------------------
    bool GetTrailsOn( void );

    //-------------------------------------------------------------------------
    //! Sets the trails time.
    //! \param time_sec The time expressed in seconds: 0 = off, -1 = infinite,
    //! otherwise the time expressed in seconds
    //-------------------------------------------------------------------------
    void SetTrailsTime( int32_t time_sec );

    //-------------------------------------------------------------------------
    //! Return the trails time.
    //! \return The time expressed in seconds: 0 = off, -1 = infinite,
    //! otherwise the time expressed in seconds
    //-------------------------------------------------------------------------
    int32_t GetTrailsTime( void );

private:
    void DrawSpoke(const int numPixels, const int azimuth );
    void ApplyTrails(const int numPixels, const int azimuth);
    void ScanConvert(const int numPixels, const int azimuth);
    void RangeResize(const Navico::Protocol::NRP::Spoke::t9174Spoke* pSpoke, int &numDrawingPixels);
    void AzInterp(const Navico::Protocol::NRP::Spoke::t9174Spoke* pSpoke, int heading4096);

    int m_LastQuad;
    float m_metersPerPixel;

    tPPIAzimuthInterpolation m_AzimuthInterp;
    tPPIRangeInterpolation m_RangeInterp;

    Navico::tRadarFrameBuffer* m_pRadarFramebuffer;
    Navico::tRadarTargetTrailBuffer* m_pRadarTargetTrailsBuffer;
};

//-----------------------------------------------------------------------------

} // namespace Image
} // namespace Navico

#endif  // inclusion guard



