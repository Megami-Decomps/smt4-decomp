/* NON_MATCHING: svc 0x24 (through the wrapper) and the (result, failed) fatal-error calls match; retail materializes the timeout test as a bool (movne/moveq/teq) before branching, predicates the wait arguments ahead of the branch, and keeps the thread argument at sp+32 after the descriptor. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "nn/os/ThreadLaunch.h"
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" void *asdOperatorNew(u32 bytes);

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

/* What the thread entry receives: its argument descriptor and the pointer it copies. */
struct WorkerStartContext {
    ThreadArgumentDescriptor descriptor;
    BattleWorkerState *state;
};

extern "C" {
extern const char DAT_00528898[]; /* the source file name for the allocation trace */

void nn_os_CriticalSection_Initialize(void *section);
void *memAlloc(s32 heap, s32 alignment, s32 flags, s32 size, s32 stackAlignment, s32 clear);
s32 resultReportIfFailed(WorkerStack *stack, void *memory, u32 size);
s32 svcWaitSynchronization1(u32 handle, s64 timeout);
s32 FUN_002fb0d4(WorkerThread *thread, const ThreadArgumentDescriptor *descriptor,
                 void (*entry)(void *), const void *argument, u32 stackTop, s32 priority,
                 s32 processor, u32 options);
void FUN_003f0794(void *argument);
void FUN_00514a24(void);
void FUN_00514b74(void);
void FUN_00514ae4(void);
void FUN_002e3140(s32 result, bool failed);

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
    if (state->thread.handle != 0) {
        s32 result = svcWaitSynchronization1(state->thread.handle, 0);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            FUN_002e3140(result, failed);
        }
        nnResultFields code;
        code.value = result;
        if (code.fields.description == 0x3fe) {
            return;
        }
    }
    WorkerStartContext context;
    context.descriptor.argumentSize = sizeof(state);
    context.descriptor.callbacks[0] = FUN_00514a24;
    context.descriptor.callbacks[1] = FUN_00514b74;
    context.descriptor.callbacks[2] = FUN_00514ae4;
    context.state = state;
    s32 result = FUN_002fb0d4(&state->thread, &context.descriptor, FUN_003f0794, &context.state,
                              state->stack->address + state->stack->size, 0x11, 0, 0);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
}

} /* extern "C" */
