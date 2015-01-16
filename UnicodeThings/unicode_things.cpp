// UnicodeThings.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "unicode_things.hpp"

DLLEXPORT size_t unicode_things::utf8_strlen(const char *bytes)
{
	std::string s(bytes);
	std::cout << "As char *: ";
	std::puts(bytes);
	std::cout << "\n" << "as string: " << s << std::endl;
	return s.length();
}

extern "C" DLLEXPORT size_t utf8_strncpy()
{
	return size_t();
}
