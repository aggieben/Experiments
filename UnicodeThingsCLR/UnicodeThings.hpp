// UnicodeThingsCLR.h

#pragma once
#include <string>
using namespace System;

namespace UnicodeThings
{
	public ref class UnicodeThings
	{
	public:
		static size_t utf8_strlen(String^ string);
	};
}
