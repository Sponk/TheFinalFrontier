#ifndef __PLUGIN_H
#define __PLUGIN_H

#if defined(WIN32) && defined(_MSC_VER)
	#pragma warning(disable: 4251)

	#ifdef PLUGIN_DLL_EXPORT
		#define PLUGIN_EXPORT __declspec( dllexport )
	#else
		#define PLUGIN_EXPORT __declspec( dllimport )
	#endif

#else
#define PLUGIN_EXPORT
#endif

extern "C" PLUGIN_EXPORT void StartPlugin();
extern "C" PLUGIN_EXPORT void EndPlugin();

#endif