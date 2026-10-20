/* Destroys the status camera: frees its work area and clears the global, then runs the
 * follow-up teardown if lmapSceneGetScript asks for it. */
#include "common.h"

extern "C" {

int FUN_00263c80(void *camera);
int FUN_002a4d14(void);
int asdMemFree(void *ptr);               /* heap free */
int lmapSceneGetScript(void);
int FUN_0021baf4(void);
int FUN_00276a3c(void);

extern void *g_statusCamera;

void statusCameraDestroy(void)
{
    void *camera = g_statusCamera;

    FUN_00263c80(camera);
    FUN_002a4d14();
    asdMemFree(camera);
    g_statusCamera = NULL;
    if (lmapSceneGetScript() != 0) {
        FUN_0021baf4();
        FUN_00276a3c();
    }
}

} /* extern "C" */
