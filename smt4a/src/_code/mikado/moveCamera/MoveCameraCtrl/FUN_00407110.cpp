/* NON_MATCHING: movement camera resource and float arguments restored; vector field bases, saved registers and initial key copy scheduling differ. */
#include "gfx/MoveCameraCtrl.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "title/titleMain.h"
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" {
extern void *g_handleRegistry;
extern const char DAT_0053295c[];
void *FUN_00178b04(u32 size, const char *source, u32 line);
MoveCameraResource *_ZN9Obj557af8C1EPK21AsdAnimCameraResource(MoveCameraResource *resource, void *data);
void uiSetFloatPair(ManagedCamera *camera, f32 distance, f32 scale);
void FUN_0014f0dc(ManagedCamera *camera, const Vec3f *eye, const Vec3f *target, const Vec3f *up);
void FUN_001523b8(ManagedCamera *camera, u32 pivot, f32 fieldOfView, f32 nearClip, f32 farClip, f32 aspect);
void FUN_00407598(MoveCameraCtrlWork *work);

// Load a movement-camera track and initialize its native camera, projection and first key.
void FUN_00407110(MoveCameraCtrlWork *work, const char *name)
{
    struct CurrentCameraView {
        u8 prefix[0xC];
        ManagedCamera *camera;
    };
    u32 entry;
    void *data = asdLoadFileWithSize(name, &entry, 1);
    MoveCameraResource *resource = static_cast<MoveCameraResource *>(FUN_00178b04(sizeof(MoveCameraResource), DAT_0053295c, 0x29));
    if (resource != NULL)
        resource = _ZN9Obj557af8C1EPK21AsdAnimCameraResource(resource, data);
    work->resource = resource;
    work->frameCount = resource->track->frameCount;
    work->auxiliaryCount = resource->track->auxiliaryCount;
    asdCameraInitializeDefaults(reinterpret_cast<AsdCamera *>(&work->camera), 1);
    work->eye.x = 0.0f;
    work->eye.y = 0.0f;
    work->eye.z = 0.0f;
    work->target.x = 0.0f;
    work->target.y = 0.0f;
    work->target.z = 5.0f;
    work->nearClip = 1.0f;
    work->farClip = 10000.0f;
    work->roll = 0.0f;
    work->fieldOfView = 30.0f;
    work->up.x = 0.0f;
    work->up.y = 1.0f;
    work->up.z = 0.0f;
    work->distance = 5.0f;
    uiSetFloatPair(&work->camera, 5.0f, 1.0f);
    FUN_0014f0dc(&work->camera, &work->eye, &work->target, &work->up);
    FUN_001523b8(&work->camera, 1, work->fieldOfView, work->nearClip, work->farClip, 1.6666666f);
    FUN_0036b824(reinterpret_cast<u32>(&work->camera));
    static_cast<CurrentCameraView *>(g_handleRegistry)->camera = &work->camera;
    if (work->frameCount > 0) {
        work->frame = 0;
        work->selectedKey = -1;
        MoveCameraTrackKey *key = work->resource->track->keys[0];
        Vec3f *target = key->target;
        work->initialPosition = key->position;
        work->initialTarget = *target;
        FUN_00407598(work);
    }
}
}
