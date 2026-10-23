#include "gfx/CameraParameters.h"
#include "gfx/CameraManager.h"
#include "AsdSDK/AsdDebug.h"

/* The fusion work appends its settings pointer to the shared camera prefix. */
struct UniteCameraWorkView {
    ManagedCamera camera;
    const CameraParameters *parameters;
};
struct UniteCameraRegistryView {
    u8 unk00[0xc];
    ManagedCamera *active;
};
typedef char UniteCameraWorkLayout[sizeof(UniteCameraWorkView) == 0x510 &&
    offsetof(UniteCameraWorkView, parameters) == 0x50c ? 1 : -1];

extern "C" {
extern UniteCameraWorkView *g_uniteCamera;
extern UniteCameraRegistryView *g_handleRegistry;
void *asdMemoryAllocTracked(u32, u32, u32, u32, u32);
void sysMemClear(void *, u32);
void FUN_00154180(s32, s32, s32, s32);
f32 FUN_001bc124(f32);
f32 FUN_001bbf0c(f32);
void FUN_0013c884(ManagedCamera *, s32);
void FUN_0014f0dc(ManagedCamera *, const Vec3f *, const Vec3f *, const Vec3f *);
void FUN_001523b8(ManagedCamera *, s32, f32, f32, f32, f32);
void FUN_0036b824(ManagedCamera *);
void asdCameraRegister(ManagedCamera *);
void uiSetFloatPair(ManagedCamera *, f32, f32);

/* Set up the fusion camera's look direction, projection and stereo parameters. */
void uniteCameraInitialize(const CameraParameters *parameters)
{
    if (g_uniteCamera == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\Unite\\UniteCamera.cpp", 26);
        g_uniteCamera = static_cast<UniteCameraWorkView *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(UniteCameraWorkView), 1));
    }
    UniteCameraWorkView *work = g_uniteCamera;
    sysMemClear(work, sizeof(UniteCameraWorkView));
    work->parameters = parameters;
    FUN_00154180(0, 0, 400, 240);
    Vec3f target = work->parameters->eye;
    target.x -= FUN_001bc124(work->parameters->rotation.y);
    target.y = FUN_001bc124(work->parameters->rotation.x) + target.y;
    target.z -= FUN_001bbf0c(work->parameters->rotation.y);
    FUN_0013c884(&work->camera, 1);
    FUN_0014f0dc(&work->camera, &work->parameters->eye, &target, &work->parameters->up);
    FUN_001523b8(&work->camera, 1, work->parameters->fieldOfView, work->parameters->nearClip,
                 work->parameters->farClip, work->parameters->aspect);
    FUN_0036b824(&work->camera);
    asdCameraRegister(&work->camera);
    uiSetFloatPair(&work->camera, 0.25f, 1.0f);
    g_handleRegistry->active = &work->camera;
}
}
