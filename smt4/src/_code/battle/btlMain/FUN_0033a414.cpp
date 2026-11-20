#include "battle/BtlResidentLoader.h"
/* NON_MATCHING: 16 lines. The wait, the 0/1 running test (as in fileWorkerQueueRestartIfIdle) and the thread launch match; retail keeps the thread's address in r5 and the wait's result in r7 (swapped here). */
#include "battle/btlMain.h"
#include "nn/os/ThreadLaunch.h"
#include "nn/Result.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "sys/ResultReport.h"
#include "sys/HandleWait.h"
extern "C" {
extern const char DAT_00400b68[];
void nn_os_CriticalSection_Initialize(void *section);
void *memAlloc(u32 heap, u32 alignment, u32 mode, u32 bytes, u32 pageSize, u32 flags);

void FUN_003f6e74(void);
void FUN_003f6fe0(void);
void FUN_003f6f44(void);
s32 FUN_002bcc60(void *thread, const ThreadArgumentDescriptor *descriptor,
    void (*entry)(void *), const void *argument, u32 stackTop, s32 priority,
    s32 processor, u32 flags);

/* nn::os::Thread::Start: runs `entry(argument)` on a new thread whose stack is `stack`; a failure is reported. */
static __inline void btlStartWorkerThread(void *thread, void (*entry)(void *), void *argument, ThreadStackStorage &stack,
                                          s32 priority, s32 processor)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = FUN_003f6e74;
    descriptor.callbacks[1] = FUN_003f6fe0;
    descriptor.callbacks[2] = FUN_003f6f44;
    s32 result = FUN_002bcc60(thread, &descriptor, entry, &argument, stack.info.address + stack.info.size, priority,
                              processor, 0);
    bool failed = nnResultIsFailure(result);
    if (failed)
        resultHandleFailure(result, failed);
}

// Create the battle worker once its previous invocation is no longer running.
void FUN_0033a414(BtlMainState *state)
{
    // The worker storage follows the canonical battle-state prefix.
    struct BattleWorkerView {
        u8 prefix[0x49EC];
        u32 thread;
        u32 unk49F0;
        void *memory;
        ThreadStackStorage *stack;
        u32 unk49FC;
        u8 criticalSection[0xC];
    };
    typedef char BattleWorkerOffsets[offsetof(BattleWorkerView, thread) == 0x49EC &&
        offsetof(BattleWorkerView, memory) == 0x49F4 &&
        offsetof(BattleWorkerView, stack) == 0x49F8 &&
        offsetof(BattleWorkerView, criticalSection) == 0x4A00 ? 1 : -1];
    BattleWorkerView *worker = (BattleWorkerView *)state;
    nn_os_CriticalSection_Initialize(worker->criticalSection);
    if (worker->memory == NULL) {
        asdDebugTrace(DAT_00400b68, 3857);
        worker->memory = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    }
    if (worker->stack == NULL) {
        ThreadStackStorage *stack = (ThreadStackStorage *)asdOperatorNew(sizeof(ThreadStackStorage));
        if (stack) {
            stack->info.unk00 = 0;
            stack->info.unk04 = 0;
            stack->info.address = 0;
            stack->info.size = 0;
            stack->owned = 0;
        }
        worker->stack = stack;
        resultReportIfFailed(stack, worker->memory, 0x1000);
    }
    /* A worker that is still running keeps going. */
    bool running = false;
    if (worker->thread != 0) {
        s32 result = handleWait(worker->thread, 0);
        running = nnResultIsNotTimeout(result) != 1;
    }
    if (running)
        return;
    btlStartWorkerThread(&worker->thread, btlAdvanceResidentResourceLoad, worker, *worker->stack, 17, 0);
}
}
