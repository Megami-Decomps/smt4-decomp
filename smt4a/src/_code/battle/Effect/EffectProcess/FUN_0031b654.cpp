/* NON_MATCHING: retail hoists the camera field addresses (eye/target/keepScene base pointers) and allocates r8 for the draw callback; the allocation result is stored to the global before sysMemClear's argument setup here */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {

typedef struct EffectProcessInit {
    /* 0x000 */ u8 unk000[0x508];
    /* 0x508 */ u8 unk508[4];
    /* 0x50C */ f32 eye[3];
    /* 0x518 */ f32 target[3];
    /* 0x524 */ f32 fieldOfView;
    /* 0x528 */ u32 process;
    /* 0x52C */ u32 drawZero;
    /* 0x530 */ u32 drawTwo;
    /* 0x534 */ u32 drawThree;
    /* 0x538 */ u8 keepScene;
    /* 0x539 */ u8 unk539[3];
} EffectProcessInit;

extern EffectProcessInit *g_effectProcessActive;

void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 region, u32 size, u32 option);
void sysMemClear(void *block, u32 size);
void taskInitLists(void);
void textureCacheReset(u32 mode);
void FUN_003afc2c(void);
void FUN_0031b96c(void);
void asdCameraInitializeDefaults(EffectProcessInit *camera, s32 enabled);
void uiSetFloatPair(EffectProcessInit *camera, f32 distance, f32 scale);
void FUN_0014f0dc(EffectProcessInit *camera, const f32 *eye, const f32 *target, const f32 *up);
void FUN_001523b8(EffectProcessInit *camera, u32 pivot, f32 fov, f32 aspect, f32 nearClip, f32 farClip);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc update, AsdProcFunc end, u32 work, void *owner);
s32 FUN_001f4c80(u32 job);
void effectProcessDestroy(u32 job);
s32 renderScopedTaskPhaseOne(u32 job);
s32 renderScopedTaskPhaseZero(u32 job);
s32 renderScopedTaskPhaseThree(u32 job);

/* Creates the battle effect process: the work area with its camera, the process job and its draw tasks; returns the process job. */
u32 FUN_0031b654(u8 keepScene)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\dds4\\program\\battle\\Effect\\EffectProcess.cpp", 150);
    EffectProcessInit *process = (EffectProcessInit *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x53C, 1);
    g_effectProcessActive = process;
    sysMemClear(process, 0x53C);
    process->keepScene = keepScene;
    taskInitLists();
    textureCacheReset(0);
    if (process->keepScene == 0) {
        FUN_003afc2c();
    }
    FUN_0031b96c();
    f32 up[3];
    up[0] = 0.0f;
    up[1] = 1.0f;
    up[2] = 0.0f;
    process->eye[0] = 0.0f;
    process->eye[1] = 0.0f;
    process->eye[2] = 5.0f;
    process->target[0] = 0.0f;
    process->target[1] = 0.0f;
    process->target[2] = 0.0f;
    process->fieldOfView = 60.0f;
    asdCameraInitializeDefaults(process, 1);
    uiSetFloatPair(process, 5.0f, 1.0f);
    FUN_0014f0dc(process, process->eye, process->target, up);
    FUN_001523b8(process, 1, process->fieldOfView, 1.6666666f, 0.1f, 100000.0f);
    process->process = asdProcessCreateSimple((const s8 *)"EffectProc", 4, 0, 0, FUN_001f4c80, effectProcessDestroy, (u32)process);
    if (process->keepScene != 0) {
        process->drawThree = taskCreateDraw((const s8 *)"EffectDrawDown2D", 0x89, 0, 0, renderScopedTaskPhaseOne, NULL, (u32)process, (void *)process->process);
    } else {
        process->drawZero = taskCreateDraw((const s8 *)"EffectDrawUp3D", 0x72, 0, 0, renderScopedTaskPhaseZero, NULL, (u32)process, (void *)process->process);
        process->drawTwo = taskCreateDraw((const s8 *)"EffectDrawUp2D", 0x89, 0, 0, renderScopedTaskPhaseOne, NULL, (u32)process, (void *)process->process);
        process->drawThree = taskCreateDraw((const s8 *)"EffectDrawDown2D", 0xEC, 0, 0, renderScopedTaskPhaseThree, NULL, (u32)process, (void *)process->process);
    }
    return process->process;
}

} /* extern "C" */
