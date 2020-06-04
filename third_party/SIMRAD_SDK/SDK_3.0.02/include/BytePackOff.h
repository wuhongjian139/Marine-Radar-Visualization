//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file BytePackOff.h
//!
//! Undefines the macro for byte alignment, so we have only one place for
//! setting the packing capabilities off
//---------------------------------------------------------------------------

#ifndef BYTE_PACK_ON
#   error __FILE__ ": Packing wasn't on...."
#endif
#undef BYTE_PACK_ON

#ifdef _MSC_VER
#   pragma warning( disable : 4103 )   // disable warning for alignement changed
#   pragma pack(pop)
#	undef BYTE_ALIGNED
#elif defined __GNUC__
#	undef BYTE_ALIGNED
#elif defined __TI_COMPILER_VERSION__
#	undef BYTE_ALIGNED
#else
#   error __FILE__ ": Need to define a pack method for this compiler"
#endif
