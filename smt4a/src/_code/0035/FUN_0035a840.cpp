/* NON_MATCHING: svc 0x24 (wrapper), the thread destructor (nn/os/Thread.h) and the control flow match; armcc computes the thread address (state + 0x7fc) before the wait where retail computes it after (add/add/mov r5, r0) and loads the zero into r6 right after the wait. */
#include "common.h"
#include "nn/os/AddressSpaceManager.h"
#include "nn/Result.h"
#include "nn/os/Thread.h"
#include <stddef.h>
#include "sys/ResultReport.h"

/* The memory mapped for the loader's stack: its destructor unmaps it, and the block goes back
 * through the engine's operator delete. */
struct StackRegion : AddressSpaceRegion {
    ~StackRegion();
    static void operator delete(void *block);
};

/* The script process of the state machine, of which only the run state is known. */
struct ScriptProcess {
    u8 unk000[0x108];
    u32 state;  // 0x108
};

/* The state machine that loads a script on a loader thread and starts it. */
struct ScriptLoadState {
    /* 0x000 */ u8 unk000[0xa0];
    /* 0x0a0 */ u32 phase;
    /* 0x0a4 */ u8 unk0a4[0x2ac];
    /* 0x350 */ void *scriptData;
    /* 0x354 */ u32 scriptSize;
    /* 0x358 */ u8 unk358[8];
    /* 0x360 */ ScriptProcess *process;
    /* 0x364 */ u8 unk364[0x4c];
    /* 0x3b0 */ u32 running;
    /* 0x3b4 */ u8 unk3b4[0x38];
    /* 0x3ec */ u8 results[1000];
    /* 0x7d4 */ u8 unk7d4;
    /* 0x7d5 */ u8 startImmediately;
    /* 0x7d6 */ u8 unk7d6[0x1a];
    /* 0x7f0 */ u8 stopRequested;
    /* 0x7f1 */ u8 unk7f1[3];
    /* 0x7f4 */ s32 loadState;           /* 2 once the thread has been told to stop */
    /* 0x7f8 */ StackRegion *stackRegion;
    /* 0x7fc */ NnOsThread thread;
    /* 0x804 */ void *threadStack;
};
typedef char ScriptLoadStateOffsets[offsetof(ScriptLoadState, loadState) == 0x7f4 &&
    offsetof(ScriptLoadState, thread) == 0x7fc &&
    offsetof(ScriptLoadState, threadStack) == 0x804 ? 1 : -1];

extern "C" {
s32 svcWaitSynchronization1(u32 handle, s64 timeout);
void nn_os_Thread_FinalizeImpl(u32 *thread);
void FUN_001469a8(AddressSpaceRegion *region);
void asdOperatorDelete(void *block);
void asdMemFree(void *block);
void gameDataBlocksReleaseHold(u32 mask);
void gameDataFlagsClearBits(u32 mask);
ScriptProcess *FUN_00275bc8(void *data, u32 size);
void rt_aeabi_memclr(void *memory, u32 size);
void scrScriptProcessStartEntry(ScriptProcess *process, u32 entry);
void gameDataAddHomeButtonHold(u32 mask);
void gameDataBlocksAddFlags(u32 mask);
}

inline StackRegion::~StackRegion()
{
    FUN_001469a8(this);
}

inline void StackRegion::operator delete(void *block)
{
    asdOperatorDelete(block);
}

/* Once the loader has been told to stop: joins its thread, frees its stack, releases the
 * game-data holds and starts the loaded script. Returns 3 when it did, 0 while still waiting. */
extern "C" u32 FUN_0035a840(ScriptLoadState *state)
{
    u32 next = 0;

    if (state->loadState == 2) {
        state->stopRequested = 1;
        s32 result = svcWaitSynchronization1(state->thread.handle, -1);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            FUN_002e3140(result, failed);
        }
        state->thread.joined = 1;
        state->thread.~NnOsThread();
        FUN_001469a8(state->stackRegion);
        delete state->stackRegion;
        state->stackRegion = NULL;
        asdMemFree(state->threadStack);
        state->threadStack = NULL;
        gameDataBlocksReleaseHold(2);
        gameDataFlagsClearBits(2);
        ScriptProcess *process = FUN_00275bc8(state->scriptData, state->scriptSize);
        state->process = process;
        process->state = 2;
        state->running = 1;
        if (state->startImmediately == 1) {
            state->phase = 0;
            rt_aeabi_memclr(state->results, 1000);
            scrScriptProcessStartEntry(state->process, 0x28);
            gameDataAddHomeButtonHold(2);
            gameDataBlocksAddFlags(2);
        } else {
            state->phase = 8;
        }
        next = 3;
    }
    return next;
}
