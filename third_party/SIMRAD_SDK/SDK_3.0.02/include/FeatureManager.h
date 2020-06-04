//-----------------------------------------------------------------------------
// Copyright (C) 2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file FeatureManager.h
//! 
//! Feature Manager defines an interface to interpret and obtain Radar features
//-----------------------------------------------------------------------------
#ifndef NAVICO_PROTOCOL_NRP_FEATUREMANAGER_H
#define NAVICO_PROTOCOL_NRP_FEATUREMANAGER_H

#include "Feature.h"
#include "ExportSDK.h"

namespace Navico {
namespace Protocol {
namespace NRP {

//-----------------------------------------------------------------------------
//! Forward declaration
//-----------------------------------------------------------------------------
struct tFeatureManagerImpl;

//-----------------------------------------------------------------------------
//! \ref iFeatureObserver callback interface for observing radar features
//-----------------------------------------------------------------------------
class iFeatureObserver
{
public:
    virtual ~iFeatureObserver() {}
    virtual void UpdateFeature(const tFeatureEnum* pFeature) = 0;
};

//-----------------------------------------------------------------------------
//! \ref tFeatureManager
//-----------------------------------------------------------------------------
class NAVICO_SDK_EXPORT tFeatureManager
{
public:
    tFeatureManager();
    ~tFeatureManager();

    void Initialize(tScannerType type, uint32_t maxRange_dm);
    bool AddObserver(iFeatureObserver* pObserver);
    bool RemoveObserver(iFeatureObserver* pObserver);

    //---------------------------------------------------------------------------
    // \brief Parse a byte array of packed feature data chunks
    // \param pData Pointer to the array
    // \param size Size of the array
    void Parse(const uint8_t* pData, uint32_t size);

    //-----------------------------------------------------------------------------
    //! Getter functions
    //-----------------------------------------------------------------------------
    const tFeatureBase& GetFeatureCombinedNoiseIFReject();
    const tFeatureSectorBlanking& GetFeatureSectorBlanking();
    const tFeatureLevel& GetFeatureIR();
    const tFeatureLevel& GetFeatureLocalIR();
    const tFeatureLevel& GetFeatureNoiseReject();
    const tFeatureLevel& GetFeatureRangeStretch();
    const tFeatureLevel& GetFeatureTargetStretch();
    const tFeatureLevel& GetFeatureBeamSharpening();
    const tFeatureLevel& GetFeatureFastScan();
    const tFeatureLevel& GetFeatureLED();
    const tFeatureLevel& GetFeaturePerformanceMonitor();            // Not supported
    const tFeatureLevel& GetFeatureStcCurves();
    const tFeatureUseModes& GetFeatureSupportedUseModes();
    const tFeatureRangeLimits& GetFeatureSidelobeGain();
    const tFeatureRangeLimits& GetFeatureInstrRangeLimits();
    const tFeatureGainLimits& GetFeatureSeaUserGainLimits();
    const tFeatureAntennaTypes& GetFeatureSupportedAntennaTypes();

private:
    tFeatureManagerImpl* m_pImpl;
};

//-----------------------------------------------------------------------------

} // NRP
} // Protocol
} // Navico

#endif  // inclusion guard
