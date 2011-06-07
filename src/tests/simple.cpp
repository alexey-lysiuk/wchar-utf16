
#include <iostream>
#include <sstream>


int main (int argc, const char * argv[])
{
	std::wstringstream stream;
	stream << "Is this wchar_t test? ";
	stream << L"\u0414\u0430";
	
	std::wcout << stream.str() << std::endl;
	
	char cbuf[123];
	snprintf( cbuf, 123, "%llu != %ls", 123456ULL, /*L"123456"*/ L"\u16A1\uFE62" );
	puts( cbuf );
	
	wchar_t wbuf[123];
	swprintf( wbuf, 123, L"%llu != %ls", 123456ULL, /*L"123456"*/ L"\u16A1\uFE62" );
	fputws( wbuf, stdout );
	fputs( "\n", stdout );
	
	unsigned long long idc = 0;
	sscanf( "ID:123456", "ID:%llu", &idc );
	sscanf( "ID:123456", "ID:%s", cbuf );
	printf( "%llu == %s\n", idc, cbuf );
	
	unsigned long long idw = 0;
	swscanf( L"ID:123456", L"ID:%llu", &idw );
	swscanf( L"ID:123456", L"ID:%ls", wbuf );
	printf( "%llu == %S\n", idw, wbuf );
	
	//fscanf( stdin, "%llu", &idw );
	
	return 0;
}
