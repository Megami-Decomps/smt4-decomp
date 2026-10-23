/* NON_MATCHING: camera parameter vector-store grouping and saved address registers differ; retail also retains an unused result comparison. */
#include "gfx/CameraManager.h"
#include "gfx/CameraParameters.h"
#include "gfx/MoveCameraCtrl.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"

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
extern const char DAT_004036b0[];
void *asdMemAlloc(s32 heap, s32 category, s32 flags, u32 bytes, s32 count);
void memClear(void *memory, u32 bytes);
void FUN_002c2044(ManagedCameraIV *camera, s32 enabled);
void FUN_002c159c(ManagedCameraIV *camera, f32 first, f32 second);
void FUN_002c1edc(ManagedCameraIV *camera, const Vec3f *eye, const Vec3f *target, const Vec3f *up);
void FUN_002c1e30(ManagedCameraIV *camera, s32 enabled, f32 fov, f32 nearClip, f32 farClip, f32 aspect);
void FUN_00298d50(ManagedCameraIV *camera);
s32 FUN_00205184(u32 process);
void event3dOpeningDestroy(u32 process);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc end, void *work);
s32 FUN_002c1d5c(void);
void FUN_002a09b4(const char *path, s32 flags);
MoveCameraResource *FUN_00263c1c(const char *path);
AsdMdlObject *asdMdlManagerCreateSecondList(const void *source, u32 parameter);

u32 FUN_002f6314(void)
{
    if (!g_event3dOpening) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\3dEvent\\3dEventOpening.cpp", 247);
        Event3dOpeningWork *work = (Event3dOpeningWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(Event3dOpeningWork), 1);
        g_event3dOpening = work;
        memClear(work, sizeof(*work));
        FUN_002c2044(&work->camera, 1);
        work->parameters.eye.x = 0.0f;
        work->parameters.eye.y = 0.0f;
        work->parameters.eye.z = 0.0f;
        work->parameters.target.x = 0.0f;
        work->parameters.target.y = 0.0f;
        work->parameters.target.z = 5.0f;
        work->parameters.fieldOfView = 30.0f;
        work->parameters.nearClip = 1.0f;
        work->parameters.farClip = 10000.0f;
        work->parameters.up.x = 0.0f;
        work->parameters.up.y = 1.0f;
        work->parameters.up.z = 0.0f;
        work->parameters.aspect = 1.6666666f;
        work->distance = 5.0f;
        FUN_002c159c(&work->camera, 5.0f, 1.0f);
        FUN_002c1edc(&work->camera, &work->parameters.eye, &work->parameters.target, &work->parameters.up);
        FUN_002c1e30(&work->camera, 1, work->parameters.fieldOfView, work->parameters.nearClip,
            work->parameters.farClip, work->parameters.aspect);
        FUN_00298d50(&work->camera);
        work->process = asdProcessCreateSimple((const s8 *)"3dEventOpening Calc", 2, 0, 0,
            FUN_00205184, event3dOpeningDestroy, work);
        FUN_002c1d5c();
        work->state = 1;
        work->frame = 0;
        FUN_002a09b4(DAT_004036f8, 0);
        work->selectedCamera = 0;
        work->loopCamera = FUN_00263c1c(DAT_004036e0);
        work->startCamera = FUN_00263c1c(DAT_004036c8);
        work->model = asdMdlManagerCreateSecondList(DAT_004036b0, 0x38);
        work->active = 1;
    }
    return g_event3dOpening->process;
}
}
