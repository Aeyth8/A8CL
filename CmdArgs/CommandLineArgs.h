#pragma once
#include "Core/CMLA.h"

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

namespace A8CL
{
namespace CMLA
{
	// -- Individual args for manual use 
	extern CommandLineParameter<wchar_t> ExampleArgVar;
	extern CommandLineParameter<wchar_t> ExampleBoolVar;

	// -- Global array for automated parsing, not generally needed for manual usage.
	extern CArray<CommandLineParameter<wchar_t>*> GlobalCommandLineArgs;

	// -- Global array for command line arguments retrieved from the WinAPI, not used but good for reference/ease of access.
	extern CArray<wchar_t*>* GlobalCommandLine;
}
}