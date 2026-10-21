#include "common.h"

extern "C" {
extern u8 g_localCamera;
void cameraRegistryRemove(void *camera);

/* Removes the file-local camera from the active camera registry. */
void cameraUnregisterLocal(void)
{
    cameraRegistryRemove(&g_localCamera);
}
}
