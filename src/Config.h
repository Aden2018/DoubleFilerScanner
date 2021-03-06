///////////////////////////////////////////////////////////////////////////////
// Double File Scanner
// Copyright (C) 2014-2017 LoRd_MuldeR <MuldeR2@GMX.de>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version, but always including the *additional*
// restrictions defined in the "License.txt" file.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
// http://www.gnu.org/licenses/gpl-2.0.txt
///////////////////////////////////////////////////////////////////////////////

#pragma once

//=============================================================================
// Version
//=============================================================================

//Version info
extern const unsigned int DOUBLESCANNER_VERSION_MAJOR;
extern const unsigned int DOUBLESCANNER_VERSION_MINOR;
extern const unsigned int DOUBLESCANNER_VERSION_PATCH;

//Build date/time
extern const char* DOUBLESCANNER_BUILD_DATE;
extern const char* DOUBLESCANNER_BUILD_TIME;

//Compiler info
extern const char* DOUBLESCANNER_COMPILER;
extern const char* DOUBLESCANNER_ARCH;

//Check for debug build
#if defined(_DEBUG) && defined(QT_DEBUG) && !defined(NDEBUG) && !defined(QT_NO_DEBUG)
	#define DOUBLESCANNER_DEBUG (1)
#elif defined(NDEBUG) && defined(QT_NO_DEBUG) && !defined(_DEBUG) && !defined(QT_DEBUG)
	#define DOUBLESCANNER_DEBUG (0)
#else
	#error Inconsistent debug defines detected!
#endif

//=============================================================================
// Helper Macros
//=============================================================================

#define MY_DELETE(X) do \
{ \
	if((X)) \
	{ \
		delete (X); \
		(X) = NULL; \
	} \
} \
while(0)
