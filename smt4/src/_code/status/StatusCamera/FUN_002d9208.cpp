/* NON_MATCHING: default float lifetimes and vector-store grouping differ, eliminating the retail saved VFP registers. */
#include "status/StatusCamera.h"
#include "AsdSDK/AsdMemUtil.h"
#include "script/scrScriptProcess.h"

extern "C" {
extern StatusCameraWork *g_statusCamera;
void FUN_002bc644(s32 x, s32 y, s32 width, s32 height);
void FUN_002c2044(StatusCameraWork *camera, s32 enabled);
void FUN_002c1edc(StatusCameraWork *camera, const Vec3 *eye, const Vec3 *target, const Vec3 *up);
void FUN_002c1e30(StatusCameraWork *camera, s32 enabled, f32 fov, f32 nearClip, f32 farClip, f32 aspect);
void FUN_002c159c(StatusCameraWork *camera, f32 first, f32 second);

void FUN_002d9208(void)
{
    StatusCameraWork *camera = g_statusCamera;
    if (camera) {
        memClear(camera, sizeof(*camera));
        camera->lens.fov = 35.0f;
        camera->lens.nearClip = 0.1f;
        camera->lens.farClip = 25600.0f;
        camera->dir.x = 0.0f;
        camera->dir.y = 0.0f;
        camera->dir.z = -1.0f;
        camera->eye.x = 0.0f;
        camera->eye.y = 6.3f;
        camera->eye.z = 4.5f;
        camera->unk520.x = 0.0f;
        camera->unk520.y = 0.0f;
        camera->unk520.z = 0.0f;
        camera->dist = 4.5f;
        Vec3 up;
        up.x = 0.0f;
        up.y = 1.0f;
        up.z = 0.0f;
        Vec3 target = camera->eye;
        Vec3 offset = camera->dir;
        offset.x *= camera->dist;
        offset.y *= camera->dist;
        offset.z *= camera->dist;
        target.x += offset.x;
        target.y += offset.y;
        target.z += offset.z;
        FUN_002bc644(200, 0, 200, 240);
        FUN_002c2044(camera, 1);
        FUN_002c1edc(camera, &camera->eye, &target, &up);
        FUN_002c1e30(camera, 1, camera->lens.fov, camera->lens.nearClip, camera->lens.farClip, 1.6666666f);
        FUN_00298d50(reinterpret_cast<u32>(camera));
        FUN_002c159c(camera, 2.8f, 1.0f);
    }
}
}
