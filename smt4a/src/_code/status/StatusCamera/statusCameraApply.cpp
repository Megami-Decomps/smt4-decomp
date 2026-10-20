/* NON_MATCHING: stack frame and register allocation differ (retail keeps the target vector in one slot and the camera in r4); same operations */
/* Points the status camera at its target (eye + dir * dist) with +Y up, if the camera exists. */
#include "common.h"
#include "status/StatusCamera.h"

extern "C" {

int FUN_00280070(StatusCameraWorkA *camera, int arg, CameraLens lens);
int FUN_0014f0dc(StatusCameraWorkA *camera, Vec3 *eye, Vec3 *target, Vec3 *up);

extern StatusCameraWorkA *g_statusCamera;

void statusCameraApply(void)
{
    StatusCameraWorkA *camera = g_statusCamera;
    Vec3 target;
    Vec3 up;
    Vec3 offset;

    if (camera != NULL) {
        f32 dist = camera->dist;

        target = camera->eye;
        offset = camera->dir;
        offset.x *= dist;
        offset.y *= dist;
        offset.z *= dist;
        target.x += offset.x;
        target.y += offset.y;
        target.z += offset.z;
        up.x = 0.0f;
        up.y = 1.0f;
        up.z = 0.0f;
        FUN_0014f0dc(camera, &camera->eye, &target, &up);
        FUN_00280070(camera, 0, camera->lens);
    }
}

} /* extern "C" */
