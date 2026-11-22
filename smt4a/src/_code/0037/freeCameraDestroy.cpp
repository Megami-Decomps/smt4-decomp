#include "gfx/FreeCamera.h"
#include "sys/RuntimeObjects.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

/* Stops the free camera's process and frees its work area. */
void freeCameraDestroy(void)
{
    jobStop(g_freeCamera->process, 0);
    if (g_freeCamera != NULL) {
        asdOperatorDelete(g_freeCamera);
        g_freeCamera = NULL;
    }
}

} /* extern "C" */
