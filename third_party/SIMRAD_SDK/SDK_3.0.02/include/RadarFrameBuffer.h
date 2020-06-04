//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file RadarFramebuffer.h
//! 
//! Class able to manage framebuffer where radar image can be composed
//-----------------------------------------------------------------------------
#ifndef _RADARFRAMEBUFFER_H_
#define _RADARFRAMEBUFFER_H_

#include <NavTypes.h>
#include <ExportSDK.h>

#include <cassert>

#include "RadarColourLookUpTable.h"

#ifndef SAMPLES_PER_SPOKE
#define SAMPLES_PER_SPOKE   2048
#endif

namespace Navico {

//-----------------------------------------------------------------------------
//! Generic frame buffer used internally by spoke drawer objects
//-----------------------------------------------------------------------------
class NAVICO_SDK_EXPORT tRadarFrameBuffer
{
private:
    intptr_t m_pRawBuffer; //!> Pointer to raw buffer memory
    uint32_t m_Stride;     //!> Coloumn stride (expressed in words)
    uint32_t m_Height;     //!> expressed in pixels (4 bytes wide)
    uint32_t m_Width;      //!> expressed in pixels (4 bytes wide)
    uint32_t m_CentreX;    //!> expressed in pixels (4 bytes wide)
    uint32_t m_CentreY;    //!> expressed in pixels (4 bytes wide)

    tRadarColourLookUpTable *m_pColorLookUpTable; // pointer to radar colour look up table
    uint8_t *m_pPeakDetectBuffer; //!> contains the data with the peak detect

    int16_t m_LastRadial;

public:
    
    tRadarFrameBuffer( intptr_t pRawBuffer = 0, uint32_t stride = 0, uint32_t width = 0,uint32_t height = 0, uint32_t centreX = 0, uint32_t centreY = 0, tRadarColourLookUpTable *pColorLookUpTable = nullptr ); 
    virtual ~tRadarFrameBuffer();

    //-------------------------------------------------------------------------
    //! Returns the buffer pointer.
    //! \return The pointer to the memory containing the image
    //-------------------------------------------------------------------------
    inline intptr_t GetBuffer( void )  const { return m_pRawBuffer; }

    //-------------------------------------------------------------------------
    //! Returns the stride (the amount of words to represent a coloumn) of 
    //! the image.
    //! \return The stride value
    //-------------------------------------------------------------------------
    inline uint32_t GetStride( void )  const { return m_Stride; }

    //-------------------------------------------------------------------------
    //! Returns the height of the image (expressed in pixels) 
    //! \return The height of the image.
    //-------------------------------------------------------------------------
    inline uint32_t GetHeight( void )  const { return m_Height; }

    //-------------------------------------------------------------------------
    //! Returns the width of the image (expressed in pixels) 
    //! \return The width of the image.
    //-------------------------------------------------------------------------
    inline uint32_t GetWidth( void )   const { return m_Width; }

    //-------------------------------------------------------------------------
    //! Returns the x-centre coordinate of the image (expressed in pixels) 
    //! \return The x-centre of the image.
    //-------------------------------------------------------------------------
    inline uint32_t GetCentreX( void ) const { return m_CentreX; }

    //-------------------------------------------------------------------------
    //! Returns the y-centre coordinate of the image (expressed in pixels) 
    //! \return The y-centre of the image.
    //-------------------------------------------------------------------------
    inline uint32_t GetCentreY( void ) const { return m_CentreY; }
    
    //-------------------------------------------------------------------------
    //! Returns the colour lookuptable used to draw the image 
    //! \return The pointer to the colour lookuptable.
    //-------------------------------------------------------------------------
    inline tRadarColourLookUpTable *GetColourLookUpTable( void ) const { return m_pColorLookUpTable; }

    //-------------------------------------------------------------------------
    //! Returns the sample buffer containing the peak detection (useful for building
    //! target safe PPIs)
    //! \return The pointer to the peak detect buffer.
    //-------------------------------------------------------------------------
    inline uint8_t GetPeakDetectSample( uint32_t index ) const { /*assert( index < SAMPLES_PER_SPOKE);*/ return m_pPeakDetectBuffer[index]; }

    //-------------------------------------------------------------------------
    //! Returns the last radial was drawn (used in PPI for back filling and
    //! and avoiding gaps).
    //! \return The last radial was drawn.
    //-------------------------------------------------------------------------
    inline int16_t GetLastRadial( void ) const { return m_LastRadial; }

    //-------------------------------------------------------------------------
    //! Set the pointer of the buffer image.
    //! \param pBuffer Pointer to the memory will contain the image
    //-------------------------------------------------------------------------
    inline void SetBuffer( intptr_t pBuffer )  { m_pRawBuffer = pBuffer; }

    //-------------------------------------------------------------------------
    //! Set the stride (the amount of words to represent a coloumn) of 
    //! the image.
    //! \param stride The new stride value
    //-------------------------------------------------------------------------
    inline void SetStride( uint32_t stride )   { m_Stride = stride; }

    //-------------------------------------------------------------------------
    //! Set the height of the image (expressed in pixels).
    //! \param height The new height of the image.
    //-------------------------------------------------------------------------
    inline void SetHeight( uint32_t height )   { m_Height = height; }

    //-------------------------------------------------------------------------
    //! Set the width of the image (expressed in pixels).
    //! \param width The new width of the image.
    //-------------------------------------------------------------------------
    inline void SetWidth( uint32_t width )     { m_Width = width; }

    //-------------------------------------------------------------------------
    //! Set the new centre (x-coordinate) of the image (expressed in pixels).
    //! \param centreX The new x-centre coordinate.
    //-------------------------------------------------------------------------
    inline void SetCentreX( uint32_t centreX ) { m_CentreX = centreX; }

    //-------------------------------------------------------------------------
    //! Set the new centre (y-coordinate) of the image (expressed in pixels).
    //! \param centreY The new y-centre coordinate.
    //-------------------------------------------------------------------------
    inline void SetCentreY( uint32_t centreY ) { m_CentreY = centreY; }

    //-------------------------------------------------------------------------
    //! Set the new colour look up table that will be used for the image.
    //! \param pLookUpTable The new colour look up table.
    //-------------------------------------------------------------------------
    inline void SetColourLookUpTable( tRadarColourLookUpTable *pLookUpTable) { m_pColorLookUpTable = pLookUpTable; }

    //-------------------------------------------------------------------------
    //! Set the new value for the peak detection (used to build target safe PPI 
    //! image).
    //! \param index Position of the pixel.
    //! \param value Value of the sample.
    //-------------------------------------------------------------------------
    inline void SetPeakDetectSample( uint32_t index, uint8_t value ) { /*assert( index < SAMPLES_PER_SPOKE);*/ m_pPeakDetectBuffer[index] = value; }

    //-------------------------------------------------------------------------
    //! Set the last radial has been drawn (used in PPI for back filling and
    //! and avoiding gaps).
    //! \param lastRadial The last radial was drawn.
    //-------------------------------------------------------------------------
    inline void SetLastRadial( int16_t lastRadial ) { m_LastRadial = lastRadial; }
};


//-----------------------------------------------------------------------------
//! Frame buffer used for target trails
//-----------------------------------------------------------------------------
class NAVICO_SDK_EXPORT tRadarTargetTrailBuffer
{
private:
    bool m_TrailsOn;
    bool m_TrailsContinuous;

    int32_t m_DecaySweep;
    int32_t m_DecayCounter;
    int32_t m_DecayStep;

    int32_t m_TrailsDecayRate;
    int32_t m_TrailsCounter;
    int32_t m_TrailsCountdown;

    uint16_t silutIndex;

    int32_t m_TrailsTime;

    uint8_t *m_pBuffer; //!> Pointer to raw buffer memory

    uint16_t m_nOfSamples;
    uint16_t m_nOfAzimuths;

public:
    tRadarTargetTrailBuffer( uint16_t nOfSamples, uint16_t nOfAzimuths ); 
    virtual ~tRadarTargetTrailBuffer();

    //-------------------------------------------------------------------------
    //! Returns the buffer address of azimuth spoke (used for target trails)
    //! \return The buffer containing the spoke data
    //-------------------------------------------------------------------------
    inline uint8_t *GetBufferAzimuth( uint16_t azimuth ) { assert( azimuth < m_nOfAzimuths ); return &m_pBuffer[m_nOfSamples * azimuth]; }

    //-------------------------------------------------------------------------
    //! Returns if target trails are on
    //! \return The state of trails
    //-------------------------------------------------------------------------
    inline bool GetTrailsOn( void ) const { return m_TrailsOn; }

    //-------------------------------------------------------------------------
    //! Sets the trails time.
    //! \param time_sec The time expressed in seconds: 0 = off, -1 = infinite,
    //! otherwise the time expressed in seconds
    //-------------------------------------------------------------------------
    void SetTrailsTime( int32_t time_sec ); // time_sec = 0: it means off, time_sec = -1: it means infinite

    //-------------------------------------------------------------------------
    //! Return the trails time.
    //! \return The time expressed in seconds: 0 = off, -1 = infinite,
    //! otherwise the time expressed in seconds
    //-------------------------------------------------------------------------
    int32_t GetTrailsTime( void ) const { return m_TrailsTime; } // time_sec = 0: it means off, time_sec = -1: it means infinite

    //-------------------------------------------------------------------------
    //! Used to update the trails conditions scan after scan (called by PPI image
    //! drawer).
    //-------------------------------------------------------------------------
    void UpdateTrails( void ); // Need to be called every new scan

    //-------------------------------------------------------------------------
    //! Return informations useful for correct target trail management (used by
    //! PPI image drawer).
    //-------------------------------------------------------------------------
    uint16_t *GetScanIntegrationPointer( void ) { return &silutIndex; }

};

//-----------------------------------------------------------------------------

} // namespace Navico 

#endif  // inclusion guard
