//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file ScanIntegrationLUT.h
//!
//-----------------------------------------------------------------------------

#ifndef SCANINTEGRATIONLUT_H
#define SCANINTEGRATIONLUT_H

/*
created by Steve Mowbray

SCAN INTEGRATION LOOK UP TABLES (4-BIT RADAR/TRAILS DATA)
=========================================================

Type II Trails - individual trails and radar image 4-bit values.

index construction:

  TRAILS LUT:
    ----------------------------------------------------------------
    |      D     | C  | TR |        old        |        new        |
    ----------------------------------------------------------------
    |  b11 | b10 | b9 | b8 | b7 | b6 | b5 | b4 | b3 | b2 | b1 | b0 |
    ----------------------------------------------------------------

> new  :: incoming new sample value
> old  :: existing sample value in the image buffer
> TR   :: trails on (0:OFF, 1:ON)
> C    :: clear history (0:FALSE, 1:TRUE)
> D    :: decay rate this sweep (0:HOLD, 1:-1, 2:-2, 3:-3)

table data:

    -----------------------------------------
    |   trails image    |    radar image    |
    -----------------------------------------
    | b7 | b6 | b5 | b4 | b3 | b2 | b1 | b0 |
    -----------------------------------------

*/


#define SCAN_INTEGRATION_II_TRAILS_LUT_SIZE (4096)
typedef union SCAN_INTEGRATION_LUTINDEX16_BITFIELD_U
{
	struct SCAN_INTEGRATION_LUTINDEX16_BITFIELD_S
	{
		unsigned int new_sample			: 4;
		unsigned int old_sample			: 4;
		unsigned int trails_on			: 1;
		unsigned int clear_history		: 1;
		unsigned int decay_rate			: 2;
		unsigned int attack_rate		: 2;
	} bits;
	unsigned short word;
} SCAN_INTEGRATION_LUTINDEX16_BITFIELD_T;

extern const unsigned char silutTable[];

//-----------------------------------------------------------------------------

#endif  // inclusion guard
