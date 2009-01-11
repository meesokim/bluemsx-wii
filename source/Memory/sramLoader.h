/*****************************************************************************
** $Source: /cvsroot/bluemsx/blueMSX/Src/Memory/sramLoader.h,v $
**
** $Revision: 1.6 $
**
** $Date: 2008/03/30 18:38:44 $
**
** More info: http://www.bluemsx.com
**
** Copyright (C) 2003-2006 Daniel Vik
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
** 
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
**
******************************************************************************
*/
#ifndef SRAM_LOADER_H
#define SRAM_LOADER_H
 
#include "MsxTypes.h"

char* sramCreateFilename(char* romFilename);
char* sramCreateFilenameWithSuffix(char* romFilename, char* suffix, char* ext);
void sramLoad(char* filename, UInt8* sram, int length, void* header, int headerLength);
void sramSave(char* filename, UInt8* sram, int length, void* header, int headerLength);

#endif
