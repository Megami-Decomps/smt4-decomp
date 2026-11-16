/* NON_MATCHING: everything matches except that retail predicates the zero timeout (movne r2, #0; movne r3, r2) above the thread-handle branch, where the build sets it after (same as FUN_0035d83c). */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "nn/os/ThreadLaunch.h"
#include "nn/Result.h"
#include "nn/svc.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "sys/ResultReport.h"


/* The storage that owns the worker thread's stack (nn::os::ThreadStackStorage). */
struct WorkerStack {
    u32 unk00;
    u32 unk04;
    u32 address;  // 0x08
    u32 size;     // 0x0c
    u8 owned;     // 0x10
    u8 unk11[7];

    WorkerStack() : unk00(0), unk04(0), address(0), size(0), owned(0) {}
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
};

/* The kernel handle of the worker thread. */
struct WorkerThread {
    u32 handle;  // 0x00
    u8 joined;   // 0x04
    u8 unk05[3];
};

/* The battle state's worker: its thread, the stack memory and the stack storage. */
struct BattleWorkerState {
    /* 0x0000 */ u8 unk0000[0x4cf8];
    /* 0x4cf8 */ WorkerThread thread;
    /* 0x4d00 */ void *stackMemory;
    /* 0x4d04 */ WorkerStack *stack;
    /* 0x4d08 */ u8 unk4d08[4];
    /* 0x4d0c */ u8 lock[0x14];
};

extern "C" {
extern const char DAT_00528898[]; /* the source file name for the allocation trace */

void nn_os_CriticalSection_Initialize(void *section);
s32 resultReportIfFailed(WorkerStack *stack, void *memory, u32 size);
s32 svcWaitSynchronization1(u32 handle, s64 timeout);
s32 FUN_002fb0d4(WorkerThread *thread, const ThreadArgumentDescriptor *descriptor,
                 void (*entry)(void *), const void *argument, u32 stackTop, s32 priority,
                 s32 processor, u32 options);
void FUN_003f0794(void *argument);
void FUN_00514a24(void);
void FUN_00514b74(void);
void FUN_00514ae4(void);

/* Starts a thread running entry(argument) on the stack, the argument copied by value; a failure is reported. */
static __inline void workerThreadStart(WorkerThread *thread, void (*entry)(void *), BattleWorkerState *argument,
                                      WorkerStack *stack, s32 priority)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = FUN_00514a24;
    descriptor.callbacks[1] = FUN_00514b74;
    descriptor.callbacks[2] = FUN_00514ae4;
    s32 result = FUN_002fb0d4(thread, &descriptor, entry, &argument, stack->address + stack->size, priority, 0, 0);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
}

/* Starts the battle state's worker thread on its own 4 KiB stack, unless it is still running. */
void FUN_003f0f58(BattleWorkerState *state)
{
    nn_os_CriticalSection_Initialize(state->lock);
    if (state->stackMemory == NULL) {
        asdDebugTrace(DAT_00528898, 0x148f);
        state->stackMemory = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    }
    if (state->stack == NULL) {
        state->stack = new WorkerStack();
        resultReportIfFailed(state->stack, state->stackMemory, 0x1000);
    }
    bool timedOut = false;
    if (state->thread.handle != 0) {
        s32 result = svcWaitSynchronization1(state->thread.handle, 0);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            FUN_002e3140(result, failed);
        }
        timedOut = !nnResultIsNotTimeout(result);
    }
    if (timedOut) {
        return;
    }
    workerThreadStart(&state->thread, FUN_003f0794, state, state->stack, 0x11);
}

} /* extern "C" */
