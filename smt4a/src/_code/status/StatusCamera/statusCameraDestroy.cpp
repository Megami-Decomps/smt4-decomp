/* Destroys the status camera: frees its work area and clears the global, then runs the
 * follow-up teardown if lmapSceneGetScript asks for it. */
#include "common.h"

extern "C" {

int cameraRegistryRemove(void *camera);
int asdCameraInitAreas(void);
int asdMemFree(void *ptr);               /* heap free */
int lmapSceneGetScript(void);
int lmapCameraResetLocal(void);
int lmapCameraUpdate(void);

extern void *g_statusCamera;

void statusCameraDestroy(void)
{
    void *camera = g_statusCamera;

    cameraRegistryRemove(camera);
    asdCameraInitAreas();
    asdMemFree(camera);
    g_statusCamera = NULL;
    if (lmapSceneGetScript() != 0) {
        lmapCameraResetLocal();
        lmapCameraUpdate();
    }
}

} /* extern "C" */
