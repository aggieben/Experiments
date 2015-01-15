#include "stdafx.h"
#include "UnicodeThings.hpp"

size_t UnicodeThings::UnicodeThings::utf8_strlen(System::String^ string)
{
	System::Console::WriteLine(string);
	auto str = msclr::interop::marshal_as<std::string>(string);
	std::cout << str << std::endl;
	return str.length();
}
