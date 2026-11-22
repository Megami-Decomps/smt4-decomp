/* NON_MATCHING: the target is eye + dir * dist through nn::math's VEC3Scale/VEC3Add inlines and the up vector is stored as
 * retail (x alone, y/z as a pair); remaining: retail loads the up vector's 0.0 into s1 before the arithmetic, so the
 * direction lands in s2-s4 (ours s1-s3). */
#include "common.h"
#include "status/StatusCamera.h"
#include "gfx/CameraVector3.h"

extern "C" {

void asdCameraSetScreenPerspective(StatusCameraWorkA *camera, s32 lowerScreen, f32 fieldOfView, f32 nearClip, f32 farClip);
int cameraMatrixCacheSetLookAt(StatusCameraWorkA *camera, Vec3 *eye, Vec3 *target, AsdCameraVec3 *up);

extern StatusCameraWorkA *g_statusCamera;

/* Points the status camera at its target (eye + dir * dist) with +Y up, if the camera exists. */
void statusCameraApply(void)
{
    StatusCameraWorkA *camera = g_statusCamera;
    Vec3 target;
    Vec3 offset;

    if (camera != NULL) {
        target = camera->eye;
        vec3Scale(&offset, &camera->dir, camera->dist);
        vec3Add(&target, &target, &offset);
        AsdCameraVec3 up;
        up.z = up.x = 0.0f;
        up.y = 1.0f;
        cameraMatrixCacheSetLookAt(camera, &camera->eye, &target, &up);
        asdCameraSetScreenPerspective(camera, 0, camera->lens.fov, camera->lens.nearClip, camera->lens.farClip);
    }
}

} /* extern "C" */
