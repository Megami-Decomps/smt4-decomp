#include "common.h"

extern "C" {

struct Camera;
extern Camera g_fixedCamera;
void cameraRegistryRemove(Camera *camera);

/* Remove this camera from the registry. */
void cameraUnregisterFixed(void)
{
    cameraRegistryRemove(&g_fixedCamera);
}

}
