//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file TargetTrackingObserver.h
//! 
//! Observers for tTargetTracking services
//-----------------------------------------------------------------------------
#ifndef NAVICO_NRP_TARGETTRACKINGOBSERVER_H
#define NAVICO_NRP_TARGETTRACKINGOBSERVER_H

#include "NavRadarProtocol.h"

namespace Navico {
namespace Protocol {
namespace NRP {

//-----------------------------------------------------------------------------
//! \ref tTargetTrackingClient callback interface for observing tracked targets
//-----------------------------------------------------------------------------
class iTargetTrackingObserver
{
public:
    virtual ~iTargetTrackingObserver() {}

    virtual void UpdateTarget( const tTrackedTarget* pTarget ) = 0;
};

//-----------------------------------------------------------------------------
//! \ref tTargetTrackingClient callback interface for observing state and 
//! setting changes
//-----------------------------------------------------------------------------
class iTargetTrackingStateObserver
{
public:
    virtual ~iTargetTrackingStateObserver() {}

    virtual void UpdateAlarmSetup( const tTargetTrackingAlarmSetup* pAlarmSetup ) = 0;
    virtual void UpdateProperties( const tTargetTrackingProperties* pProperties ) = 0;
};

//-----------------------------------------------------------------------------

} // NRP
} // Protocol
} // Navico

#endif  // inclusion guard
