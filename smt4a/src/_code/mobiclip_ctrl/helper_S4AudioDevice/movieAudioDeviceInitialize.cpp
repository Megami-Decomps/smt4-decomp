/* NON_MATCHING: retail copies the shared zero in r4 to asdOperatorNew's optional owner argument; the build materializes NULL in r1. */
#include "AsdSDK/AsdDebug.h"
#include "common.h"
#include "nn/Result.h"
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
extern u8 g_threadRecordA[];
extern nn::os::CriticalSection g_soundVoiceCriticalSection;
extern const char DAT_00532a54[];

void FUN_00158f64();
void dspComponentLoadEmbeddedAndStart();
void dspsndInitializeManagers();
void sndMasterManagerSetVolume(f32 value);
void *sysMemClear(void *destination, u32 size);
void *memAlloc(u32 heap, u32 type, u32 flags, u32 bytes, u32 alignment, u32 clear);
void resultReportIfFailed(ThreadStackStorage *thread, void *stack, u32 size);
s32 FUN_002fb0d4(void *thread, ThreadFunctorTable *table, void (*entry)(), void *argument, u32 stackTop, s32 priority,
                 s32 core, s32 flag);
void movieAudioDeviceRunLoop();
void copyValueIfDestination();
void emptyStub_0010032c();
void FUN_00100326();

/* nn::os::Thread::Start: runs `entry(argument)` on a new thread whose stack is `stack`; a failure is reported. */
static __inline void audioStartThread(void *thread, void (*entry)(), u32 argument, ThreadStackStorage &stack, s32 priority,
                                      s32 processor)
{
    ThreadFunctorTable table;
    table.argumentSize = sizeof(argument);
    table.copyArgument = copyValueIfDestination;
    table.destroyArgument = emptyStub_0010032c;
    table.invoke = FUN_00100326;
    s32 result = FUN_002fb0d4(thread, &table, entry, &argument, stack.info.address + stack.info.size, priority, processor, 0);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
}

/* Starts the audio device: allocates the ring, then starts the mix thread if requested. */
u32 movieAudioDeviceInitialize(S4Allocator *allocator, s32 ringCount, u8 loop)
{
    FUN_00158f64();
    dspComponentLoadEmbeddedAndStart();
    dspsndInitializeManagers();
    sndMasterManagerSetVolume(1.0f);
    g_soundVoicePool.mixThreadRequested = loop;
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
    sysMemClear(g_soundVoicePool.streams, g_soundVoicePool.streamCount * sizeof(AudioStreamSlot));
    g_soundVoicePool.written = 0;
    g_soundVoicePool.read = 0;
    nn_os_CriticalSection_Initialize(&g_soundVoiceCriticalSection);
    if (g_soundVoicePool.mixThreadRequested != 0) {
        asdDebugTrace(DAT_00532a54, 249);
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
        audioStartThread(g_threadRecordA, movieAudioDeviceRunLoop, 0, *g_soundVoicePool.stackRegion, 2, -2);
    }
    return 1;
}

} /* extern "C" */
