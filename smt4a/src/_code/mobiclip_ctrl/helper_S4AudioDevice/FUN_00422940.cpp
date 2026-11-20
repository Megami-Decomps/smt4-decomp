/* NON_MATCHING: setup, ring allocation, mix-thread allocation and the NN thread start call match; retail's stack frame has 16 more bytes around the start argument/functor table (0x34 vs 0x24) and keeps the shared zero in r4 for the new-owner argument. */
#include "AsdSDK/AsdDebug.h"
#include "common.h"
#include "nn/Result.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "sys/ResultReport.h"

/* The audio device's allocator interface: slot 0 allocates. */
class AudioAllocator {
public:
    virtual void *allocate(u32 bytes, u32 alignment) = 0;
};

/* The mix thread's wrapper object: its stack block and four cleared words. */
struct AudioThreadWork {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 stackBase;
    /* 0x0C */ u32 stackSize;
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11[7];
};

/* Describes how the thread's start argument is copied onto its stack. */
struct ThreadFunctorTable {
    /* 0x00 */ u32 argumentSize;
    /* 0x04 */ void (*copyArgument)();
    /* 0x08 */ void (*destroyArgument)();
    /* 0x0C */ void (*invoke)();
};

struct AudioDeviceState {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 loop;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ AudioAllocator *allocator;
    /* 0x08 */ void *ring;
    /* 0x0C */ void *threadStack;
    /* 0x10 */ AudioThreadWork *thread;
    /* 0x14 */ s32 ringCount;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
};

extern "C" {
extern AudioDeviceState g_soundVoicePool;
extern u8 g_threadRecordA[];
extern u8 g_soundVoiceCriticalSection[];
extern const char DAT_00532a54[];

void FUN_00158f64();
void FUN_00159030();
void dspsndInitializeManagers();
void sndMasterManagerSetVolume(f32 value);
void *sysMemClear(void *destination, u32 size);
void nn_os_CriticalSection_Initialize(void *section);
void *memAlloc(u32 heap, u32 type, u32 flags, u32 bytes, u32 alignment, u32 clear);
void resultReportIfFailed(AudioThreadWork *thread, void *stack, u32 size);
s32 FUN_002fb0d4(void *thread, ThreadFunctorTable *table, void (*entry)(), void *argument, u32 stackTop, s32 priority,
                 s32 core, s32 flag);
void movieAudioDeviceRunLoop();
void copyValueIfDestination();
void emptyStub_0010032c();
void FUN_00100326();

// Starts the audio device: allocates the ring, then (when asked) the mix thread.
u32 FUN_00422940(AudioAllocator *allocator, s32 ringCount, u8 loop)
{
    FUN_00158f64();
    FUN_00159030();
    dspsndInitializeManagers();
    sndMasterManagerSetVolume(1.0f);
    g_soundVoicePool.loop = loop;
    if (g_soundVoicePool.allocator != NULL) {
        return 0;
    }
    g_soundVoicePool.ringCount = ringCount;
    g_soundVoicePool.allocator = allocator;
    g_soundVoicePool.ring = allocator->allocate(ringCount * 0x70, 4);
    if (g_soundVoicePool.ring == NULL) {
        g_soundVoicePool.allocator = NULL;
        g_soundVoicePool.ringCount = 0;
        return 0;
    }
    sysMemClear(g_soundVoicePool.ring, g_soundVoicePool.ringCount * 0x70);
    g_soundVoicePool.unk18 = 0;
    g_soundVoicePool.unk1C = 0;
    nn_os_CriticalSection_Initialize(g_soundVoiceCriticalSection);
    if (g_soundVoicePool.loop != 0) {
        asdDebugTrace(DAT_00532a54, 249);
        g_soundVoicePool.threadStack = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
        AudioThreadWork *thread = static_cast<AudioThreadWork *>(asdOperatorNew(sizeof(AudioThreadWork), NULL));
        if (thread != NULL) {
            thread->unk00 = 0;
            thread->unk04 = 0;
            thread->stackBase = 0;
            thread->stackSize = 0;
            thread->unk10 = 0;
        }
        g_soundVoicePool.thread = thread;
        resultReportIfFailed(thread, g_soundVoicePool.threadStack, 0x1000);
        u32 argument = 0;
        ThreadFunctorTable table;
        table.argumentSize = 4;
        table.copyArgument = copyValueIfDestination;
        table.destroyArgument = emptyStub_0010032c;
        table.invoke = FUN_00100326;
        s32 result = FUN_002fb0d4(g_threadRecordA, &table, movieAudioDeviceRunLoop, &argument,
                                  g_soundVoicePool.thread->stackBase + g_soundVoicePool.thread->stackSize, 2, -2, 0);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            resultHandleFailure(result, failed);
        }
    }
    return 1;
}

}
