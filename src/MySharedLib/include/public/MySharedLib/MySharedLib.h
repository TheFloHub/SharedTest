#ifdef EXPORTING_MY_SHARED_LIB_DLL_SYMS
	#define MSL_LINKAGE __declspec(dllexport)
#else
	#define MSL_LINKAGE __declspec(dllimport)
#endif