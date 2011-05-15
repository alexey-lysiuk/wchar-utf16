/*
 *  unittest.c
 *  wchar_utf16
 *
 *  Created by Alexey Lysiuk on 14.05.11.
 *  Copyright 2011 Alexey Lysiuk. All rights reserved.
 *
 */

#include "test_wcfuncs.c"
#include "test_wctype.c"
#include "tst-btowc.c"
#include "tst-mbrtowc.c"
#include "tst-mbsrtowcs.c"
#include "tst-wchar-h.c"
#include "tst-wcpncpy.c"
#include "tst-wcrtomb.c"
#include "tst-wcsnlen.c"
#include "tst-wcstof.c"
#include "tst_wcsftime.c"

#define RUN_TEST( NAME ) \
if ( main_##NAME () ) \
{ \
puts( "Test " #NAME " failed!" ); \
abort(); \
}

int main()
{
	RUN_TEST( wcfuncs )
	RUN_TEST( wctype )
/*	RUN_TEST( btowc ) */
	RUN_TEST( mbrtowc )
	RUN_TEST( mbsrtowcs )
	RUN_TEST( wcharh )
	RUN_TEST( wcpncpy )
	RUN_TEST( wcrtomb )
	RUN_TEST( wcsnlen )
	RUN_TEST( wcstof )
	RUN_TEST( wcsftime )
}
