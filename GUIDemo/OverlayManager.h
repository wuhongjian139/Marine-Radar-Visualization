//-----------------------------------------------------------------------------
// Copyright (C) 2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file OverlayManager.h
//!
//! Custom frames for BScan & PPI widgets. Providing a common interface for handling
//! the display and acquiring of tracked targets.
//-----------------------------------------------------------------------------

#ifndef GUIDEMO_OVERLAYMANAGER_H
#define GUIDEMO_OVERLAYMANAGER_H

#include <string.h>
#include <QColor>
#include <NavRadarProtocol.h>

//-----------------------------------------------------------------------------
// tOverlay structure
//-----------------------------------------------------------------------------
struct tOverlay
{
    bool enabled;
    uint32_t startRange_m;
    uint32_t endRange_m;
    uint16_t startBearing_deg;
    uint16_t endBearing_deg;
    QColor lineColour;
    QColor fillColour;
};

//-----------------------------------------------------------------------------
// tOverlayManager Class
//-----------------------------------------------------------------------------
class tOverlayManager
{
public:
	tOverlayManager();
	void Clear();
	const tOverlay* GetGuardZone(int index);
	const tOverlay* GetBlankingSector(int index);
	void SetGuardZone(int index, bool enabled, uint32_t startRange_m, uint32_t endRange_m, uint16_t startBearing_deg, uint16_t width_deg);
	void SetBlankingSector(int index, bool enabled, uint16_t startBearing_deg, uint16_t endBearing_deg);

private:
	tOverlay m_Overlays[ Navico::Protocol::NRP::cMaxGuardZones + Navico::Protocol::NRP::cMaxBlankSectors ];
};
//-----------------------------------------------------------------------------

#endif  // inclusion guard
