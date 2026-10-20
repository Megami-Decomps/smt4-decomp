/* Destroys the status camera: frees its work area and clears the global, then runs the
 * follow-up teardown if lmapSceneGetScript asks for it. */
#include "common.h"

extern "C" {

int cameraRegistryRemove(void *camera);
int asdWorkAreaReset(void);
int asdMemFree(void *ptr);               /* heap free */
int lmapSceneGetScript(void);
int FUN_0021baf4(void);
int FUN_00276a3c(void);

extern void *g_statusCamera;

void statusCameraDestroy(void)
{
    void *camera = g_statusCamera;

    cameraRegistryRemove(camera);
    asdWorkAreaReset();
    asdMemFree(camera);
    g_statusCamera = NULL;
    if (lmapSceneGetScript() != 0) {
        FUN_0021baf4();
        FUN_00276a3c();
    }
}

} /* extern "C" */
