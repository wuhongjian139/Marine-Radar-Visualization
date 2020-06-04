//-----------------------------------------------------------------------------
// Copyright (C) 2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------

#include "OverlayManager.h"

//-----------------------------------------------------------------------------
// tOverlayManager Class
//-----------------------------------------------------------------------------
tOverlayManager::tOverlayManager()
{
	Clear();
}

void tOverlayManager::Clear()
{
	memset(&m_Overlays, 0, sizeof(m_Overlays));
}

void tOverlayManager::SetGuardZone(int index, bool enabled, uint32_t startRange_m, uint32_t endRange_m, uint16_t startBearing_deg, uint16_t width_deg)
{
	if (index < Navico::Protocol::NRP::cMaxGuardZones)
	{
        uint16_t halfWidth_deg = width_deg / 2;
		tOverlay& overlay = m_Overlays[ index ];
		overlay.enabled = enabled;
		overlay.startRange_m = startRange_m;
		overlay.endRange_m = endRange_m;
		overlay.startBearing_deg = (startBearing_deg >= halfWidth_deg) ? (startBearing_deg - halfWidth_deg) : (startBearing_deg + 360u -  halfWidth_deg);
		overlay.endBearing_deg = (startBearing_deg + halfWidth_deg < 360u) ? (startBearing_deg + halfWidth_deg) : (startBearing_deg + halfWidth_deg - 360u);
		overlay.lineColour = Qt::yellow;
		overlay.fillColour = Qt::yellow;
		overlay.fillColour.setAlpha(100);
	}
}

void tOverlayManager::SetBlankingSector(int index, bool enabled, uint16_t bearingStart, uint16_t bearingEnd)
{
	if (index < Navico::Protocol::NRP::cMaxBlankSectors)
	{
		tOverlay& overlay = m_Overlays[ Navico::Protocol::NRP::cMaxGuardZones + index ];
		overlay.enabled = enabled;
		overlay.startRange_m = 0;
		overlay.endRange_m = 100000000;
		overlay.startBearing_deg = bearingStart;
		overlay.endBearing_deg = bearingEnd;
		overlay.lineColour = Qt::gray;
		overlay.fillColour = Qt::gray;
		overlay.fillColour.setAlpha(100);
	}
}

const tOverlay* tOverlayManager::GetGuardZone(int index)
{
	if (index < Navico::Protocol::NRP::cMaxGuardZones)
	{
		return &m_Overlays[ index ];
	}
	else
	{
		return 0;
	}
}

const tOverlay* tOverlayManager::GetBlankingSector(int index)
{
	if (index < Navico::Protocol::NRP::cMaxBlankSectors)
	{
		return &m_Overlays[ Navico::Protocol::NRP::cMaxGuardZones + index ];
	}
	else
	{
		return 0;
	}
}
