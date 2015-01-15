// UnicodeThings.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "unicode_things.hpp"

DLLEXPORT size_t unicode_things::utf8_strlen(const std::string &s)
{
	return s.length();
}
