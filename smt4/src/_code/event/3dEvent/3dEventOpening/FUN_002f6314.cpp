/* NON_MATCHING: retail keeps the eye/target/up pointers in sl/r6/r9 (the build r6/r8/r7) and stores state and
 * frame with one stm of a fresh 1 and the zero register. */
#include "gfx/CameraManager.h"
#include "gfx/CameraParameters.h"
#include "gfx/MoveCameraCtrl.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"
#include "script/scrScriptProcess.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "code/Code0038.h"
#include "gfx/CameraStereoDepth.h"

struct Event3dOpeningWork {
    u32 process;
    ManagedCameraIV camera;
    CameraParameters parameters;
    f32 distance;
    AsdMdlObject *model;
    s32 selectedCamera;
    MoveCameraResource *loopCamera;
    MoveCameraResource *startCamera;
    s32 state;
    s32 frame;
    u32 unk56C;
    s32 active;
};
typedef char Event3dOpeningWorkLayoutCheck[sizeof(Event3dOpeningWork) == 0x574 &&
    offsetof(Event3dOpeningWork, parameters) == 0x50C && offsetof(Event3dOpeningWork, state) == 0x564 ? 1 : -1];

extern "C" {
extern Event3dOpeningWork *g_event3dOpening;
extern const char DAT_004036f8[];
extern const char DAT_004036e0[];
extern const char DAT_004036c8[];
extern char DAT_004036b0[];
void cameraMatrixCacheReset(ManagedCameraIV *camera, s32 enabled);
void cameraMatrixCacheSetLookAt(ManagedCameraIV *camera, const Vec3f *eye, const Vec3f *target, const Vec3f *up);
void stereoCameraSetPerspective(ManagedCameraIV *camera, s32 enabled, f32 fov, f32 nearClip, f32 farClip, f32 aspect);
s32 ocEventJobUpdate(u32 process);
void event3dOpeningDestroy(u32 process);
s32 eventIsSkipping(void);
void FUN_002a09b4(const char *path, s32 flags);

u32 FUN_002f6314(void)
{
    if (!g_event3dOpening) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\3dEvent\\3dEventOpening.cpp", 247);
        Event3dOpeningWork *work = (Event3dOpeningWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(Event3dOpeningWork), 1);
        g_event3dOpening = work;
        memClear(work, sizeof(*work));
        cameraMatrixCacheReset(&work->camera, 1);
        Vec3f *eye = &work->parameters.eye;
        Vec3f *target = &work->parameters.target;
        Vec3f *up = &work->parameters.up;
        eye->x = 0.0f;
        eye->y = 0.0f;
        eye->z = 0.0f;
        target->x = 0.0f;
        target->y = 0.0f;
        target->z = 5.0f;
        work->parameters.fieldOfView = 30.0f;
        work->parameters.nearClip = 1.0f;
        work->parameters.farClip = 10000.0f;
        up->x = 0.0f;
        up->y = 1.0f;
        up->z = 0.0f;
        work->parameters.aspect = 1.6666666f;
        work->distance = 5.0f;
        asdCameraSetStereoDepth(&work->camera, 5.0f, 1.0f);
        cameraMatrixCacheSetLookAt(&work->camera, eye, target, up);
        stereoCameraSetPerspective(&work->camera, 1, work->parameters.fieldOfView, work->parameters.nearClip,
            work->parameters.farClip, work->parameters.aspect);
        FUN_00298d50(reinterpret_cast<u32>(&work->camera));
        work->process = asdProcessCreateSimple((const s8 *)"3dEventOpening Calc", 2, 0, 0, ocEventJobUpdate, event3dOpeningDestroy, reinterpret_cast<u32>(work));
        /* Retail keeps the skip test although both outcomes start the same way. */
        if (eventIsSkipping()) {
            work->state = 1;
            work->frame = 0;
        } else {
            work->state = 1;
            work->frame = 0;
        }
        FUN_002a09b4(DAT_004036f8, 0);
        work->selectedCamera = 0;
        work->loopCamera = static_cast<MoveCameraResource *>(asdCameraLoadFromFile(DAT_004036e0));
        work->startCamera = static_cast<MoveCameraResource *>(asdCameraLoadFromFile(DAT_004036c8));
        work->model = asdMdlManagerCreateSecondList(DAT_004036b0, 0x38);
        work->active = 1;
    }
    return g_event3dOpening->process;
}
}
