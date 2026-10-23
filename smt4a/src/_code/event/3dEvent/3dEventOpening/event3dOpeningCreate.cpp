/* NON_MATCHING: camera float stores are grouped differently, pose addresses are rematerialized, and retail's unused result comparison is omitted. */
#include "gfx/CameraMatrixCache.h"
#include "status/StatusCamera.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"

namespace {
// The opening's camera includes a final stereo parameter beyond the shared 0x508-byte prefix.
struct OpeningCamera {
    CameraMatrixCache cache;
    f32 stereoParameter;
};
struct OpeningProjection {
    f32 fieldOfView, nearClip, farClip, aspect;
};
struct OpeningEventWork {
    u32 job;
    OpeningCamera camera;
    Vec3 eye;
    Vec3 target;
    Vec3 up;
    OpeningProjection projection;
    u8 unk544[0x10];
    f32 distance;
    u32 models;
    u32 environment;
    u32 loopCamera;
    u32 startCamera;
    u32 state;
    u32 substate;
    u32 unk570;
    u32 active;
};
typedef char OpeningEventWorkOffsetsCheck[sizeof(OpeningCamera) == 0x50C &&
    offsetof(OpeningEventWork, eye) == 0x510 && offsetof(OpeningEventWork, projection) == 0x534 &&
    offsetof(OpeningEventWork, models) == 0x558 && sizeof(OpeningEventWork) == 0x578 ? 1 : -1];
}

extern "C" {
extern OpeningEventWork *g_event3dOpening;
extern const char DAT_0052f680[]; // event/oc/oc_loop.bcenv
extern const char DAT_0052f668[]; // event/oc/oc_loop.bccam
extern const char DAT_0052f650[]; // event/oc/oc_start.bccam
extern const char DAT_0052f638[]; // event/oc/oc_loop.bam
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void sysMemClear(void *data, u32 size);
void FUN_0013c884(CameraMatrixCache *camera, s32 mode);
void uiSetFloatPair(CameraMatrixCache *camera, f32 first, f32 second);
void FUN_0014f0dc(CameraMatrixCache *camera, const Vec3 *eye, const Vec3 *target, const Vec3 *up);
void FUN_001523b8(CameraMatrixCache *camera, s32 mode, f32 fieldOfView, f32 nearClip, f32 farClip, f32 aspect);
void FUN_0036b824(CameraMatrixCache *camera);
s32 FUN_002caea0(u32 handle);
void event3dOpeningDestroy(u32 handle);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work);
s32 FUN_00162ea4(void);
void asdEnvResetModelBank(const char *path, u32 flags);
u32 FUN_00387350(const char *path);
u32 asdMdlManagerCreateSecondList(const char *path, u32 group);

u32 event3dOpeningCreate(void)
{
    if (g_event3dOpening == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\3dEvent\\3dEventOpening.cpp", 0xF7);
        g_event3dOpening = static_cast<OpeningEventWork *>(asdMemoryAllocTracked(
            ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(OpeningEventWork), 1));
        OpeningEventWork *work = g_event3dOpening;
        sysMemClear(work, sizeof(OpeningEventWork));
        FUN_0013c884(&work->camera.cache, 1);
        work->eye.x = 0.0f;
        work->eye.y = 0.0f;
        work->eye.z = 0.0f;
        work->target.x = 0.0f;
        work->target.y = 0.0f;
        work->target.z = 5.0f;
        work->projection.fieldOfView = 30.0f;
        work->projection.nearClip = 1.0f;
        work->projection.farClip = 10000.0f;
        work->up.x = 0.0f;
        work->up.y = 1.0f;
        work->up.z = 0.0f;
        work->projection.aspect = 5.0f / 3.0f;
        work->distance = 5.0f;
        uiSetFloatPair(&work->camera.cache, 5.0f, 1.0f);
        FUN_0014f0dc(&work->camera.cache, &work->eye, &work->target, &work->up);
        FUN_001523b8(&work->camera.cache, 1, work->projection.fieldOfView,
            work->projection.nearClip, work->projection.farClip, work->projection.aspect);
        FUN_0036b824(&work->camera.cache);
        work->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("3dEventOpening Calc"),
            4, 0, 0, FUN_002caea0, event3dOpeningDestroy, reinterpret_cast<u32>(work));
        FUN_00162ea4();
        work->state = 1;
        work->substate = 0;
        asdEnvResetModelBank(DAT_0052f680, 0);
        work->environment = 0;
        work->loopCamera = FUN_00387350(DAT_0052f668);
        work->startCamera = FUN_00387350(DAT_0052f650);
        work->models = asdMdlManagerCreateSecondList(DAT_0052f638, 0x38);
        work->active = 1;
    }
    return g_event3dOpening->job;
}
}
