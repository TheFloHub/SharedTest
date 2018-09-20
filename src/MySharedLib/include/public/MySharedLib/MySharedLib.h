#ifdef EXPORTING_MY_SHARED_LIB_DLL_SYMS
	#define MSLAPI __declspec(dllexport)
#else
	#define MSLAPI __declspec(dllimport)
#endif