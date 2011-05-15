#define _GNU_SOURCE 1
#include <wchar.h>
#include <stdio.h>
#include <string.h>
#include <wctype.h>

int
main_wcstof (void)
{
  int result = 0;
  char buf[100];
  wchar_t tmp[3];
  tmp[0] = '8';
  tmp[1] = '1';
  tmp[2] = 0;

	const char* current_locale = setlocale( LC_ALL, NULL );
	if ( !setlocale( LC_ALL, "en_US" ) )
	{
		return 1;
	}
	
  snprintf (buf, 100, "%S = %f", tmp, wcstof (tmp, NULL));
  printf ("\"%s\" -> %s\n", buf,
	  strcmp (buf, "81 = 81.000000") == 0 ? "okay" : "buggy");
  result |= strcmp (buf, "81 = 81.000000") != 0;

	if ( !setlocale( LC_ALL, current_locale ) )
	{
		return 1;
	}
	
  return result;
}
