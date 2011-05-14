/*
 *  prefix.h
 *  wchar_utf16
 *
 *  Created by Alexey Lysiuk on 08.05.11.
 *  Copyright 2011 Alexey Lysiuk. All rights reserved.
 *
 */

#define _FORTIFY_SOURCE 0

#define __FBSDID( DUMMY )

#define __noinline __attribute__ ((noinline))

#define __weak_reference( DUMMY1, DUMMY2 )

#ifndef __DECONST
#define __DECONST(type, var)    ((type)(uintptr_t)(const void *)(var))
#endif

/* 
 * IMPORTANT!
 * The following #undef/#define pair is required prevent wide character functions poisoning
 */

#undef __WCHAR_MAX__

#include <inttypes.h>
#include <stdlib.h>
#include <wchar.h>

#define __WCHAR_MAX__ 0xFFFF

#include <stdarg.h>

typedef va_list __va_list; 
