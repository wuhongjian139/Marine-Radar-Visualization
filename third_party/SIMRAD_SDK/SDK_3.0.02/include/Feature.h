//-----------------------------------------------------------------------------
// Copyright (C) 2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file Feature.h
//! 
//! With this class we defines feature classes
//-----------------------------------------------------------------------------
#ifndef NAVICO_PROTOCOL_NRP_eFeatureEnum_H
#define NAVICO_PROTOCOL_NRP_eFeatureEnum_H

#include "NavRadarProtocol.h"

namespace Navico {
namespace Protocol {
namespace NRP {

//-----------------------------------------------------------------------------
//! Basic enum and type definition
//-----------------------------------------------------------------------------
typedef uint16_t tFeatureEnum;
enum eFeatureEnum
{
    eFeatureEnum_CombinedNoiseIFReject   = 0x0001,
    eFeatureEnum_SupportedUseModes       = 0x0002,
    eFeatureEnum_IRControl               = 0x0003,
    eFeatureEnum_NoiseRejectControl      = 0x0004,
    eFeatureEnum_RangeStretchControl     = 0x0005,
    eFeatureEnum_STCCurveControl         = 0x0006,
    eFeatureEnum_BeamSharpeningControl   = 0x0007,
    eFeatureEnum_FastScanControl         = 0x0008,
    eFeatureEnum_SidelobeGainControl     = 0x0009,
    eFeatureEnum_SupportedAntennas       = 0x000A,
    eFeatureEnum_InstrRangeLimits        = 0x000B,
    eFeatureEnum_LocalIRControl          = 0x000C,
    eFeatureEnum_LEDControl              = 0x000D,
    eFeatureEnum_TargetStretchControl    = 0x000E,
    eFeatureEnum_SeaUserGainLimits       = 0x000F,
    eFeatureEnum_SectorBlanking          = 0x0010,
    eFeatureEnum_PerformanceMonitor      = 0x0011,
};

struct tAntennaType
{
    uint16_t size;
};

//-----------------------------------------------------------------------------
//! Feature Classes Definition
//-----------------------------------------------------------------------------
struct tFeatureBase
{
    tFeatureEnum featureEnum;     // The type of feature
    bool enabled;                 // Whether the feature is enabled
    bool supported;               // Whether the feature is supported
};

struct tFeatureSectorBlanking : tFeatureBase
{
    uint8_t sectorCount;
};

struct tFeatureLevel : tFeatureBase
{
    uint8_t maxLevel;
    uint32_t mask;
};

struct tFeatureUseModes : tFeatureBase
{
    static const int cUseMode_Total = 10;

    uint8_t useModeCount;
    eUseMode useModes[cUseMode_Total];
};

struct tFeatureRangeLimits : tFeatureBase
{
    uint32_t minimum;
    uint32_t maximum;
};

struct tFeatureGainLimits : tFeatureBase
{
    uint8_t manualLevelMin;
    uint8_t manualLevelMax;
    int8_t autoOffsetMin;
    int8_t autoOffsetMax;
};

struct tFeatureAntennaTypes : tFeatureBase
{
    static const int cAntennaType_Total = 8;

    uint8_t count;
    tAntennaType antennaTypes[cAntennaType_Total];
};

//-----------------------------------------------------------------------------

} // NRP
} // Protocol
} // Navico

#endif  // inclusion guard
