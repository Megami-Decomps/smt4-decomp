/* NON_MATCHING: defaults are not held in VFP registers across the clear; vector assignment and multiply-add lowering differ. */
#include "status/StatusCamera.h"
#include <stddef.h>
#include "title/titleMain.h"
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" {
extern StatusCameraWorkA *g_statusCamera;
extern void *g_handleRegistry;
void sysMemClear(void *memory, u32 size);
void FUN_00154180(s32 x, s32 y, s32 width, s32 height);
void FUN_0014f0dc(StatusCameraWorkA *camera, const Vec3 *eye, const Vec3 *target, const Vec3 *up);
void FUN_001523b8(StatusCameraWorkA *camera, s32 mode, f32 fov, f32 nearClip, f32 farClip, f32 aspect);
void uiSetFloatPair(StatusCameraWorkA *camera, f32 first, f32 second);

// Reset the status-screen camera, construct its view/lens and register it for rendering.
void FUN_0034a3b4(void)
{
    StatusCameraWorkA *camera = g_statusCamera;
    if (camera != NULL) {
        sysMemClear(camera, sizeof(*camera));
        camera->lens.fov = 35.0f;
        camera->lens.nearClip = 0.1f;
        camera->lens.farClip = 25600.0f;
        camera->dir.x = 0.0f;
        camera->dir.y = 0.0f;
        camera->dir.z = -1.0f;
        camera->eye.x = 0.0f;
        camera->eye.y = 6.3f;
        camera->eye.z = 4.5f;
        camera->unk524.x = 0.0f;
        camera->unk524.y = 0.0f;
        camera->unk524.z = 0.0f;
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
        FUN_00154180(200, 0, 200, 240);
        asdCameraInitializeDefaults(reinterpret_cast<AsdCamera *>(camera), 1);
        FUN_0014f0dc(camera, &camera->eye, &target, &up);
        FUN_001523b8(camera, 1, camera->lens.fov, camera->lens.nearClip, camera->lens.farClip, 1.6666666f);
        FUN_0036b824(reinterpret_cast<u32>(camera));
        struct CameraRegistryView { u8 unk00[0xC]; StatusCameraWorkA *camera; };
        typedef char CameraRegistryOffsetCheck[offsetof(CameraRegistryView, camera) == 0xC ? 1 : -1];
        ((CameraRegistryView *)g_handleRegistry)->camera = camera;
        uiSetFloatPair(camera, 2.8f, 1.0f);
    }
}
}
