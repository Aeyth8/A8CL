#include "CommandLineArgs.h"


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
	CommandLineParameter<wchar_t> ExampleArgVar(L"GameDefaultMap", L"/Game/Aeyth8/Maps/TitleScreen/PlaceholderTitleScreen.PlaceholderTitleScreen");
	CommandLineParameter<wchar_t> ExampleBoolVar(L"DebugMode");

	// -- Global array for automated parsing, not generally needed for manual usage.
	CommandLineParameter<wchar_t>* InternalGlobalArray[] =
	{
		&ExampleArgVar,
		&ExampleBoolVar,
	};

	// I would rather have this be the entire array instead of creating a second array, but I somehow managed to get this far I'm not pushing my mental strain any further for now.
	CArray<CommandLineParameter<wchar_t>*> GlobalCommandLineArgs(sizeof(InternalGlobalArray)/sizeof(InternalGlobalArray[0]), InternalGlobalArray);

	// -- Global array for command line arguments retrieved from the WinAPI, not used but good for reference/ease of access.
	CArray<wchar_t*>* GlobalCommandLine{nullptr};
}
}