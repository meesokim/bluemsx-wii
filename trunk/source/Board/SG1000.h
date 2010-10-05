/*****************************************************************************
** $Source: /cvsroot/bluemsx/blueMSX/Src/Board/SG1000.h,v $
**
** $Revision: 1.4 $
**
** $Date: 2008/03/30 18:38:39 $
**
** More info: http://www.bluemsx.com
**
** Author: Ricardo Bittencourt
** Copyright (C) 2003-2006 Daniel Vik, Ricardo Bittencourt
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
#ifndef SG1000_H
#define SG1000_H
 
#include "../Board/Board.h"
#include <stdio.h>

int sg1000Create(Machine* machine, 
                 VdpSyncMode vdpSyncMode,
                 BoardInfo* boardInfo);

#endif /* SG1000_H */

