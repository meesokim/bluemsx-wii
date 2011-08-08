/*  wcecompat: Windows CE C Runtime Library "compatibility" library.
 *
 *  Copyright (C) 2001-2002 Essemer Pty Ltd.  All rights reserved.
 *  http://www.essemer.com.au/
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */


#include "ts_string.h"
#include <string.h>
#include <windows.h>


void ascii2unicode(const char* ascii, WCHAR* unicode)
{
	if (((unsigned int)unicode & 1) == 0)
	{	// word-aligned
		while (*ascii != '\0')
			*unicode++ = *ascii++;
		*unicode = '\0';
	}
	else
	{	// not word-aligned
		while (*ascii != '\0')
		{
			*(char*)unicode = *ascii++;
			*(((char*)unicode)+1) = 0;
			unicode++;
		}
		*(char*)unicode = 0;
		*(((char*)unicode)+1) = 0;
	}
}

void unicode2ascii(const WCHAR* unicode, char* ascii)
{
	if (((unsigned int)unicode & 1) == 0)
	{	// word-aligned
		while (*unicode != '\0')
			*ascii++ = (char)*unicode++;
		*ascii = '\0';
	}
	else
	{	// not word-aligned
		while (*(char*)unicode != 0 || *(((char*)unicode)+1) != 0)
			*ascii++ = *(char*)unicode++;
		*ascii = '\0';
	}
}

void ascii2unicode(const char* ascii, WCHAR* unicode, int maxChars)
{
	int i;
	if (((unsigned int)unicode & 1) == 0)
	{	// word-aligned
		for (i=0; ascii[i] != 0 && i<maxChars; i++)
			unicode[i] = ascii[i];
		unicode[i] = 0;
	}
	else
	{	// not word-aligned
		for (i=0; ascii[i] != 0 && i<maxChars; i++)
		{
			*(char*)&unicode[i] = ascii[i];
			*(((char*)&unicode[i])+1) = 0;
			unicode++;
		}
		*(char*)&unicode[i] = 0;
		*(((char*)&unicode[i])+1) = 0;
	}
}

void unicode2ascii(const WCHAR* unicode, char* ascii, int maxChars)
{
	int i;
	if (((unsigned int)unicode & 1) == 0)
	{	// word-aligned
		for (i=0; unicode[i] != 0 && i<maxChars; i++)
			ascii[i] = (char)unicode[i];
		ascii[i] = 0;
	}
	else
	{	// not word-aligned
		for (i=0; (*(char*)&unicode[i] != 0 || *(((char*)&unicode[i])+1) != 0) && i<maxChars; i++)
			ascii[i] = *(char*)&unicode[i];
		ascii[i] = 0;
	}
}


//
// ascii/unicode typesafe versions of strcat
//

char* ts_strcat(char* dest, const WCHAR* src)
{
	char* p = dest;
	while (*p != '\0')
		p++;
	unicode2ascii(src, p);
	return dest;
}

WCHAR* ts_strcat(WCHAR* dest, const char* src)
{
	WCHAR* p = dest;
	while (*p != '\0')
		p++;
	ascii2unicode(src, p);
	return dest;
}


//
// ascii/unicode typesafe versions of strdup
//

char* ts_strdup_unicode_to_ascii(const WCHAR* str)
{
	char* result = (char*)malloc(wcslen(str)+1);
	if (result == NULL)
		return NULL;
	unicode2ascii(str, result);
	return result;
}

WCHAR* ts_strdup_ascii_to_unicode(const char* str)
{
	WCHAR* result = (WCHAR*)malloc((strlen(str)+1)*2);
	if (result == NULL)
		return NULL;
	ascii2unicode(str, result);
	return result;
}
