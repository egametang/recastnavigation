#ifndef INVOKE_HELPER_H
#define INVOKE_HELPER_H

#ifdef DLL_EXPORTS
#define RECAST_DLL _declspec(dllexport)
#else
#define RECAST_DLL
#endif
#include "DetourNavMesh.h"

#ifdef __cplusplus
extern "C" {
#endif	
	
RECAST_DLL void RecastInit();

RECAST_DLL int RecastFind();
	

#ifdef __cplusplus
}
#endif



dtNavMesh* Load(const char* path);



#endif
