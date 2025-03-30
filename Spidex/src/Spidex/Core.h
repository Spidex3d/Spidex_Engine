#pragma once

#ifdef SPX_PLATFORM_WINDOWS
	#ifdef SPX_BUILD_DLL
		#define SPIDEX_API __declspec(dllexport)
	#else
		#define SPIDEX_API __declspec(dllimport)
	#endif
#else 
	#error SPIDEX only supports windows!

#endif 
