/* NON_MATCHING: twin of smt4a FUN_00422940: retail's frame has 16 more bytes around the thread start argument/functor table (0x34 vs 0x24), passes an uninitialised register (r8) as the owner argument of asdOperatorNew, and loads the allocator vtable into r2 before the slot call. */
#include "AsdSDK/AsdDebug.h"
#include "common.h"
#include "nn/Result.h"
#include "AsdSDK/AsdMemUtil.h"
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
    /* 0x00 */ u8 unk00[4];
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
extern u8 DAT_0044d128[];
extern u8 DAT_004c40f8[];
extern const char DAT_00404ee4[];

void FUN_0011be58();
void FUN_0035a31c(const void *a, const void *b, u32 c, u32 d);
void dspComponentLoadEmbedded();
void dspsndInitializeManagers();
void nw_snd_SoundSystem_SetMasterVolume(f32 volume);
void nn_os_CriticalSection_Initialize(void *section);
void *memAlloc(u32 heap, u32 type, u32 flags, u32 bytes, u32 alignment, u32 clear);
s32 FUN_002bcc60(void *thread, ThreadFunctorTable *table, void (*entry)(), void *argument, u32 stackTop, s32 priority,
                 s32 core, s32 flag);
void FUN_0034e718();
void FUN_00123c88();
void FUN_00123cb4();
void FUN_00123ca4();

// Starts the audio device: allocates the ring and the mix thread.
u32 FUN_0034e43c(AudioAllocator *allocator, s32 ringCount, const void *first, const void *second)
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
    g_soundVoicePool.ringCount = ringCount;
    g_soundVoicePool.allocator = allocator;
    g_soundVoicePool.ring = allocator->allocate(ringCount * 0x70, 4);
    if (g_soundVoicePool.ring == NULL) {
        g_soundVoicePool.allocator = NULL;
        g_soundVoicePool.ringCount = 0;
        return 0;
    }
    memClear(g_soundVoicePool.ring, g_soundVoicePool.ringCount * 0x70);
    g_soundVoicePool.unk18 = 0;
    g_soundVoicePool.unk1C = 0;
    nn_os_CriticalSection_Initialize(DAT_004c40f8);
    asdDebugTrace(DAT_00404ee4, 271);
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
    table.copyArgument = FUN_00123c88;
    table.argumentSize = 4;
    table.destroyArgument = FUN_00123cb4;
    table.invoke = FUN_00123ca4;
    s32 result = FUN_002bcc60(DAT_0044d128, &table, FUN_0034e718, &argument,
                              g_soundVoicePool.thread->stackBase + g_soundVoicePool.thread->stackSize, 2, -2, 0);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
    return 1;
}

}
