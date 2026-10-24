/* NON_MATCHING: scalar vector arithmetic fuses multiply/adds; retail uses vector-class temporaries and different VFP saves. */
#include "status/StatusCamera.h"
#include "AsdSDK/AsdDebug.h"

struct StatusCameraRegistryView {
    u8 prefix[0xC];
    StatusCameraWorkA *camera;
};
extern "C" {
extern StatusCameraWorkA *g_statusCamera;
extern StatusCameraRegistryView *g_handleRegistry;
void *asdMemoryAllocTracked(u32, u32, u32, u32, u32);
void sysMemClear(void *, u32);
void FUN_00154180(s32, s32, s32, s32);
void asdCameraInitializeDefaults(StatusCameraWorkA *, s32);
void FUN_0014f0dc(StatusCameraWorkA *, const Vec3 *, const Vec3 *, const Vec3 *);
void FUN_001523b8(StatusCameraWorkA *, s32, f32, f32, f32, f32);
void FUN_0036b824(StatusCameraWorkA *);
void asdCameraRegister(StatusCameraWorkA *);
void uiSetFloatPair(StatusCameraWorkA *, f32, f32);

// Create the status camera, aim it along the requested direction and register its viewport.
void FUN_002a6dcc(const Vec3 *eye, const Vec3 *direction, const Vec3 *auxiliary,
                  f32 nearClip, f32 farClip, f32 fieldOfView, f32 distance, f32 viewportScale)
{
    if (g_statusCamera == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\status\\StatusCamera.cpp", 116);
        g_statusCamera = static_cast<StatusCameraWorkA *>(asdMemoryAllocTracked(0x100, 0x100, 0, 0x540, 1));
    }
    StatusCameraWorkA *camera = g_statusCamera;
    sysMemClear(camera, 0x540);
    camera->lens.fov = fieldOfView;
    camera->lens.nearClip = nearClip;
    camera->lens.farClip = farClip;
    camera->dir = *direction;
    camera->eye = *eye;
    camera->unk524 = *auxiliary;
    camera->dist = distance;
    Vec3 up = {0.0f, 1.0f, 0.0f};
    Vec3 target = camera->eye;
    target.x += camera->dir.x * camera->dist;
    target.y += camera->dir.y * camera->dist;
    target.z += camera->dir.z * camera->dist;
    FUN_00154180(200, 0, 200, 240);
    asdCameraInitializeDefaults(camera, 1);
    FUN_0014f0dc(camera, &camera->eye, &target, &up);
    FUN_001523b8(camera, 1, camera->lens.fov, camera->lens.nearClip, camera->lens.farClip, 1.6666666f);
    FUN_0036b824(camera);
    asdCameraRegister(camera);
    uiSetFloatPair(camera, viewportScale, 1.0f);
    g_handleRegistry->camera = camera;
}
}
