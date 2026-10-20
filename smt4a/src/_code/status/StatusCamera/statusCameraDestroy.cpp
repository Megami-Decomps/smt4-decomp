/* Destroys the status camera: frees its work area and clears the global, then runs the
 * follow-up teardown if lmapSceneGetScript asks for it. */
#include "common.h"

extern "C" {

int FUN_00358f38(void *camera);
int FUN_001ad6d8(void);
int asdMemFree(void *ptr);               /* heap free */
int lmapSceneGetScript(void);
int FUN_00303710(void);
int FUN_00292b84(void);

extern void *g_statusCamera;

void statusCameraDestroy(void)
{
    void *camera = g_statusCamera;

    FUN_00358f38(camera);
    FUN_001ad6d8();
    asdMemFree(camera);
    g_statusCamera = NULL;
    if (lmapSceneGetScript() != 0) {
        FUN_00303710();
        FUN_00292b84();
    }
}

} /* extern "C" */
