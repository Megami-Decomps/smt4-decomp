#include "gfx/MoveCameraCtrl.h"
#include "Model/MoriModelManager.h"
#include "classes/Obj557b58.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "title/titleMain.h"
#include "shard/W6_W6Match3_EffectColor.h"
#include "gfx/CameraStereoDepth.h"

extern "C" {
extern const char DAT_0053295c[];
MoveCameraResource *_ZN9Obj557af8C1EPK21AsdAnimCameraResource(MoveCameraResource *resource, void *data);
void cameraMatrixCacheSetLookAt(ManagedCamera *camera, const Vec3f *eye, const Vec3f *target, const Vec3f *up);
void stereoCameraSetPerspective(ManagedCamera *camera, u32 pivot, f32 fieldOfView, f32 nearClip, f32 farClip, f32 aspect);

/* Sets a vector's three components. A plain `static` that armcc inlines on its own: retail takes the address of the
 * eye, the target and the up vector into saved registers, stores through them and passes them on to the look-at
 * call; the stores written in place, or an `__inline` copy, address all three from one base. */
static void vec3Set(Vec3f *vector, f32 x, f32 y, f32 z)
{
    vector->x = x;
    vector->y = y;
    vector->z = z;
}

/* Loads a movement-camera track and initialises its native camera, projection and first key. */
void moveCameraCtrlLoadTrack(MoveCameraCtrlWork *work, const char *name)
{
    u32 entry;
    void *data = asdLoadFileWithSize(name, &entry, 1);
    MoveCameraResource *resource = static_cast<MoveCameraResource *>(asdMemoryAllocTraced(sizeof(MoveCameraResource), DAT_0053295c, 0x29));
    if (resource != NULL)
        resource = _ZN9Obj557af8C1EPK21AsdAnimCameraResource(resource, data);
    work->resource = resource;
    work->frameCount = resource->track->frameCount;
    work->auxiliaryCount = resource->track->auxiliaryCount;
    asdCameraInitializeDefaults(reinterpret_cast<AsdCamera *>(&work->camera), 1);
    vec3Set(&work->eye, 0.0f, 0.0f, 0.0f);
    vec3Set(&work->target, 0.0f, 0.0f, 5.0f);
    work->roll = 0.0f;
    work->fieldOfView = 30.0f;
    work->nearClip = 1.0f;
    work->farClip = 10000.0f;
    vec3Set(&work->up, 0.0f, 1.0f, 0.0f);
    work->distance = 5.0f;
    asdCameraSetStereoDepth(&work->camera, 5.0f, 1.0f);
    cameraMatrixCacheSetLookAt(&work->camera, &work->eye, &work->target, &work->up);
    stereoCameraSetPerspective(&work->camera, 1, work->fieldOfView, work->nearClip, work->farClip, 1.6666666f);
    FUN_0036b824(reinterpret_cast<u32>(&work->camera));
    g_handleRegistry->camera = &work->camera;
    moveCameraSelectKey(work, 0, -1);
}
}
