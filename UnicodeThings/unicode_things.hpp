#pragma once

#ifdef UNICODETHINGS_EXPORTS
#	define DLLEXPORT __declspec(dllexport)
#else
#	define DLLEXPORT __declspec(dllimport)
#endif

#include <string>

namespace unicode_things
{
	DLLEXPORT size_t utf8_strlen(const std::string &s);
}