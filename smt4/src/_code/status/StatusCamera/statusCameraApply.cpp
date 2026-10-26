/* NON_MATCHING: stack frame now matches retail (aggregate up vector, real three-float lens call); remaining: retail loads the view direction with one vldmia and builds the up vector in VFP registers (vstr + vstmia), the build uses core ldm/stm for the constant and separate vldr loads. */
/* Points the status camera at its target (eye + dir * dist) with +Y up, if the camera exists. */
#include "common.h"
#include "status/StatusCamera.h"

extern "C" {

void FUN_001db388(StatusCameraWork *camera, s32 lowerScreen, f32 fieldOfView, f32 nearClip, f32 farClip);
int FUN_002c1edc(StatusCameraWork *camera, Vec3 *eye, Vec3 *target, Vec3 *up);

extern StatusCameraWork *g_statusCamera;

void statusCameraApply(void)
{
    StatusCameraWork *camera = g_statusCamera;
    Vec3 target;
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
        Vec3 up = {0.0f, 1.0f, 0.0f};
        FUN_002c1edc(camera, &camera->eye, &target, &up);
        FUN_001db388(camera, 0, camera->lens.fov, camera->lens.nearClip, camera->lens.farClip);
    }
}

} /* extern "C" */
