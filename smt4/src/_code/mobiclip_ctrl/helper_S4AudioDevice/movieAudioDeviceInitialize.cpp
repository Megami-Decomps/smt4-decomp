/* NON_MATCHING: retail passes uninitialized r8 to asdOperatorNew's ignored owner argument; the build safely passes NULL. */
#include "AsdSDK/AsdDebug.h"
#include "common.h"
#include "nn/Result.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "sys/ResultReport.h"
#include "mobiclip_ctrl/S4FsReader.h"
#include "nn/os/CriticalSection.h"
#include "nn/os/ThreadLaunch.h"
#include "sound/AudioStreamWorker.h"

/* Describes how the thread's start argument is copied onto its stack. */
struct ThreadFunctorTable {
    /* 0x00 */ u32 argumentSize;
    /* 0x04 */ void (*copyArgument)();
    /* 0x08 */ void (*destroyArgument)();
    /* 0x0C */ void (*invoke)();
};

extern "C" {
extern AudioStreamWorker g_soundVoicePool;
extern u8 DAT_0044d128[];
extern nn::os::CriticalSection DAT_004c40f8;
extern const char DAT_00404ee4[];

void FUN_0011be58();
void FUN_0035a31c(const void *a, const void *b, u32 c, u32 d);
void dspComponentLoadEmbedded();
void dspsndInitializeManagers();
void nw_snd_SoundSystem_SetMasterVolume(f32 volume);
void *memAlloc(u32 heap, u32 type, u32 flags, u32 bytes, u32 alignment, u32 clear);
s32 FUN_002bcc60(void *thread, ThreadFunctorTable *table, void (*entry)(), void *argument, u32 stackTop, s32 priority,
                 s32 core, s32 flag);
void FUN_0034e718();
void FUN_00123c88();
void FUN_00123cb4();
void FUN_00123ca4();

/* nn::os::Thread::Start: runs `entry(argument)` on a new thread whose stack is `stack`; a failure is reported. */
static __inline void audioStartThread(void *thread, void (*entry)(), u32 argument, ThreadStackStorage &stack, s32 priority,
                                      s32 processor)
{
    ThreadFunctorTable table;
    table.argumentSize = sizeof(argument);
    table.copyArgument = FUN_00123c88;
    table.destroyArgument = FUN_00123cb4;
    table.invoke = FUN_00123ca4;
    s32 result = FUN_002bcc60(thread, &table, entry, &argument, stack.info.address + stack.info.size, priority, processor, 0);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
}

/* Starts the audio device: allocates the ring and starts the mix thread. */
u32 movieAudioDeviceInitialize(S4Allocator *allocator, s32 ringCount, const void *first, const void *second)
{
    FUN_0011be58();
    if (first != NULL && second != NULL) {
        FUN_0035a31c(first, second, 0xFF, 0xFF);
    } else {
        dspComponentLoadEmbedded();
    }
    dspsndInitializeManagers();
    nw_snd_SoundSystem_SetMasterVolume(1.0f);
    if (g_soundVoicePool.allocator != NULL) {
        return 0;
    }
    g_soundVoicePool.streamCount = ringCount;
    g_soundVoicePool.allocator = allocator;
    g_soundVoicePool.streams = (AudioStreamSlot *)g_soundVoicePool.allocator->allocate(
        g_soundVoicePool.streamCount * sizeof(AudioStreamSlot), 4);
    if (g_soundVoicePool.streams == NULL) {
        g_soundVoicePool.allocator = NULL;
        g_soundVoicePool.streamCount = 0;
        return 0;
    }
    memClear(g_soundVoicePool.streams, g_soundVoicePool.streamCount * sizeof(AudioStreamSlot));
    g_soundVoicePool.written = 0;
    g_soundVoicePool.read = 0;
    nn_os_CriticalSection_Initialize(&DAT_004c40f8);
    asdDebugTrace(DAT_00404ee4, 271);
    g_soundVoicePool.stackMemory = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    ThreadStackStorage *stack = (ThreadStackStorage *)asdOperatorNew(sizeof(ThreadStackStorage), NULL);
    if (stack != NULL) {
        stack->info.unk00 = 0;
        stack->info.unk04 = 0;
        stack->info.address = 0;
        stack->info.size = 0;
        stack->owned = 0;
    }
    g_soundVoicePool.stackRegion = stack;
    resultReportIfFailed(stack, g_soundVoicePool.stackMemory, 0x1000);
    audioStartThread(DAT_0044d128, FUN_0034e718, 0, *g_soundVoicePool.stackRegion, 2, -2);
    return 1;
}

} /* extern "C" */
