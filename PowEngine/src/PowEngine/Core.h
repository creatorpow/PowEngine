#pragma once

#ifdef PE_PLATFORM_WINDOWS
#ifdef PE_BUILD_DLL
#define POWENGINE_API _declspec(dllexport)
#else
#define POWENGINE_API _declspec(dllimport)
#endif
#else
#error PowEngine Currently Only Supports Windows.
#endif