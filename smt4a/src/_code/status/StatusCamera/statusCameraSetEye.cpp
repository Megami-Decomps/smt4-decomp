/* Moves the status camera's eye to (x, y, z), if the camera exists. */
#include "common.h"
#include "status/StatusCamera.h"

extern "C" {

extern StatusCameraWorkA *g_statusCamera;

void statusCameraSetEye(f32 x, f32 y, f32 z)
{
    StatusCameraWorkA *camera = g_statusCamera;

    if (g_statusCamera != NULL) {
        camera->eye.x = x;
        camera->eye.y = y;
        camera->eye.z = z;
    }
}

} /* extern "C" */
