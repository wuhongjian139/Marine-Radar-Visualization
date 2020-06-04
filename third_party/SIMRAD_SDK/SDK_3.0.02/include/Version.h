//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! @mainpage Navico Radar Software-Development-Kit
//!
//! Library for interfacing with one or more Navico Radars, controlling their
//! functionality and converting the real time image data they output into an
//! easily understandable image.
//!
//! \n \n \b Commercial \b Use \b Only: \s
//! Navico assumes no responsibility for use of this software. It is intended
//! for Commercial use only (i.e. not intended for aviation, military or medical
//! applications)
//-----------------------------------------------------------------------------
#ifndef NAVICO_SDK_VERSION_H
#define NAVICO_SDK_VERSION_H

namespace Navico {
namespace Version {

    enum {
        gMajor = 3,
        gMinor = 0,
        gBuild = 2,
    };

}  // namespace Version
}  // namespace Navico

#endif  // inclusion guard
