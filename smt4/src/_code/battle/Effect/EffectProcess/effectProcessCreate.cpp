/* NON_MATCHING: preserved registers, keepScene address reuse and camera scheduling differ; -O2 candidate. */
#include "battle/Effect/EffectProcess.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern EffectProcess *g_effectProcessActive;
void *asdMemAlloc(u32, u32, u32, u32, u32);
void memClear(void *, u32);
void taskInitLists();
void FUN_00200b10(u32);
void FUN_00317a90();
void FUN_00221ba8();
void FUN_002c2044(EffectProcess *, u32);
void FUN_002c159c(EffectProcess *, f32, f32);
void FUN_002c1edc(EffectProcess *, const f32 *, const f32 *, const f32 *);
void FUN_002c1e30(EffectProcess *, u32, f32, f32, f32, f32);
void FUN_0017fbe4();
void effectProcessDestroy();
void renderScopedTaskPhaseOne();
void FUN_001aa4a8();
void effectProcessDrawPhase3();
u32 asdProcessCreateSimple(const char *, u32, u32, u32, void (*)(), void (*)(), EffectProcess *);
u32 taskCreateDraw(const char *, u32, u32, u32, void (*)(), void (*)(), EffectProcess *, u32);

// Create the battle effect scene, its camera and the appropriate 2D/3D drawing tasks.
u32 effectProcessCreate(u8 keepScene)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\Effect\\EffectProcess.cpp", 147);
    EffectProcess *work = (EffectProcess *)asdMemAlloc(0x100, 0x100, 0, sizeof(EffectProcess), 1);
    g_effectProcessActive = work;
    memClear(work, sizeof(EffectProcess));
    work->keepScene = keepScene;
    taskInitLists();
    FUN_00200b10(0);
    if (!work->keepScene)
        FUN_00317a90();
    FUN_00221ba8();
    f32 up[3];
    up[0] = 0.0f;
    up[1] = 1.0f;
    up[2] = 0.0f;
    f32 *eye = work->scene.eye;
    f32 *target = work->scene.target;
    eye[0] = 0.0f;
    eye[1] = 0.0f;
    eye[2] = 5.0f;
    target[0] = 0.0f;
    target[1] = 0.0f;
    target[2] = 0.0f;
    work->scene.fieldOfView = 60.0f;
    FUN_002c2044(work, 1);
    FUN_002c159c(work, 5.0f, 1.0f);
    FUN_002c1edc(work, eye, target, up);
    FUN_002c1e30(work, 1, work->scene.fieldOfView, 0.1f, 25600.0f, 1.66666662693f);
    work->scene.process = asdProcessCreateSimple("EffectProc", 2, 0, 0, FUN_0017fbe4, effectProcessDestroy, work);
    if (work->keepScene) {
        work->jobB = taskCreateDraw("EffectDrawDown2D", 0x84, 0, 0, renderScopedTaskPhaseOne, NULL, work, work->scene.process);
    } else {
        work->jobA = taskCreateDraw("EffectDrawUp3D", 0x70, 0, 0, FUN_001aa4a8, NULL, work, work->scene.process);
        work->jobB = taskCreateDraw("EffectDrawDown2D", 0xe8, 0, 0, effectProcessDrawPhase3, NULL, work, work->scene.process);
    }
    return work->scene.process;
}
}
