/* NON_MATCHING: the up vector is now a CameraPosition built in VFP registers as retail; remaining: retail loads the 0.0 constant first and stores x then y/z (ours x/y then z), loads the view direction with one vldmia, and swaps the camera/base registers (r4/r5). */
/* Points the status camera at its target (eye + dir * dist) with +Y up, if the camera exists. */
#include "common.h"
#include "status/StatusCamera.h"
#include "gfx/CameraVector3.h"

extern "C" {

void FUN_00280070(StatusCameraWorkA *camera, s32 lowerScreen, f32 fieldOfView, f32 nearClip, f32 farClip);
int cameraMatrixCacheSetLookAt(StatusCameraWorkA *camera, Vec3 *eye, Vec3 *target, AsdCameraVec3 *up);

extern StatusCameraWorkA *g_statusCamera;

void statusCameraApply(void)
{
    StatusCameraWorkA *camera = g_statusCamera;
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
        CameraPosition up(0.0f, 1.0f, 0.0f);
        cameraMatrixCacheSetLookAt(camera, &camera->eye, &target, &up);
        FUN_00280070(camera, 0, camera->lens.fov, camera->lens.nearClip, camera->lens.farClip);
    }
}

} /* extern "C" */
