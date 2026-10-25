/* NON_MATCHING: thread wait, portrait slots and buffer-return contracts fixed; stack-owner lifetime and color argument stores differ. */
#include "common.h"
#include "nn/svc.h"
#include "nn/Result.h"

// Fusion (unite) screen object: only the members its teardown touches.
struct UniteScreen {
    u8* buffer;                 // 0x0000
    u8 unk0004[0x3f4];
    s32 job;                    // 0x03f8
    u8 unk03fc[0x20];
    s32 startTime;              // 0x041c
    u8 unk0420[4];
    u8* scratchA;               // 0x0424
    u8* scratchB;               // 0x0428
    s32 scriptProcess;          // 0x042c
    u8 unk0430[0x6660 - 0x430];
    u16 pendingIds[4];          // 0x6660
    u8 unk6668[0x95c8 - 0x6668];
    s32 modelManagerA;          // 0x95c8
    s32 modelManagerB;          // 0x95cc
    s32 camera;                 // 0x95d0
    u8 unk95d4[0x0c];
    u8 stopRequested;           // 0x95e0
    s32 stack;                  // 0x95e4
    u32 thread;                 // 0x95e8
    u8 threadDone;              // 0x95ec
    s32 threadBuffer;           // 0x95f0
};

extern "C" {

extern UniteScreen* g_unite;

s32 FUN_002c40f8(s32 *signalled, const s32 *handles, s32 count, s32 waitAll, s64 timeout);
void FUN_002c526c(s32 result);
void nn_os_Thread_FinalizeImpl(u32* thread);
void FUN_002c3f5c(s32 object);
void asdMemFreeNonNull(s32 object);
void asdMemFree(s32 object);
s32 FUN_002907a8(void);
void gameCounterAddSaturating(s32 counter, s32 amount);
s32 lmapSceneGetScript(void);
s32 lmapMainIsRunning(void);
void FUN_00294834(s32 r0, s32 g0, s32 b0, s32 r1, s32 g1, s32 b1, s32 r2, s32 g2, s32 b2, s32 r3, s32 g3, s32 b3,
                  f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8);
void asdModelSlotRelease(s32 slot);
void FUN_0029c2cc(s32 object, s32 arg);
void gfxObjectDestroy(s32 object);
void statusCameraDestroy(void);
void asdMdlManagerMarkDestroy(s32 manager);
void asdMdlManagerDestroy(s32 manager);
void FUN_002958f8(s32 id, s32 arg);
void scrScriptProcessDestroy(s32 process);
u8 *bufferArrayFree(u8 *buffer);
void jobStop(s32 job, s32 arg);
void fileSlotFree(s32 slot);
void mapMainCallIfFlag(s32 flag);


static __inline void uniteWaitForThread(u32 thread)
{
    s32 handle = thread;
    s32 signalled;
    s32 result = FUN_002c40f8(&signalled, &handle, 1, 0, -1LL);
    if (nnResultIsFailure(result))
        FUN_002c526c(result);
}

// Destroys the fusion screen: stops its worker thread, releases its models, scripts and buffers.
void FUN_00223dcc(void)
{
    UniteScreen* screen = g_unite;
    if (screen == NULL) return;

    screen->stopRequested = 1;
    uniteWaitForThread(screen->thread);
    screen->threadDone = 1;
    nn_os_Thread_FinalizeImpl(&screen->thread);
    if (screen->thread != 0) {
        nn::svc::CloseHandle(screen->thread);
        screen->thread = 0;
    }
    FUN_002c3f5c(screen->stack);
    s32 stack = screen->stack;
    if (stack != 0) {
        FUN_002c3f5c(stack);
        asdMemFreeNonNull(stack);
    }
    screen->stack = 0;
    asdMemFree(screen->threadBuffer);
    screen->threadBuffer = 0;

    gameCounterAddSaturating(0x25, FUN_002907a8() - screen->startTime);
    if (lmapSceneGetScript() != 0 || lmapMainIsRunning() != 0) {
        FUN_00294834(200, 200, 200, 130, 130, 130, 30, 30, 30, 150, 150, 150, 90.0f, -0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 30.0f, 1.5f);
    } else {
        asdModelSlotRelease(0);
    }
    FUN_0029c2cc(screen->camera, 0);
    gfxObjectDestroy(screen->camera);
    screen->camera = 0;
    statusCameraDestroy();
    asdMdlManagerMarkDestroy(screen->modelManagerA);
    asdMdlManagerMarkDestroy(screen->modelManagerB);
    asdMdlManagerDestroy(screen->modelManagerA);
    asdMdlManagerDestroy(screen->modelManagerB);
    screen->modelManagerA = 0;
    screen->modelManagerB = 0;
    for (s32 i = 0; i < 4; i++) {
        if (screen->pendingIds[i] != 0) FUN_002958f8((s16)screen->pendingIds[i], 1);
    }
    scrScriptProcessDestroy(screen->scriptProcess);
    asdMemFree((s32)screen->scratchB);
    asdMemFree((s32)screen->scratchA);
    if (screen->buffer != NULL) {
        asdMemFreeNonNull((s32)bufferArrayFree(screen->buffer));
    }
    screen->buffer = NULL;
    jobStop(screen->job, 0);
    asdMemFree((s32)screen);
    g_unite = NULL;
    fileSlotFree(0x24);
    fileSlotFree(0x22);
    mapMainCallIfFlag(1);
}

} /* extern "C" */
