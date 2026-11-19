/* NON_MATCHING: 48 lines (36 by shape). The wait and the stack slots match; retail materialises the not-timeout test as 0/1 (movne/moveq, teq #1) before branching, and the thread launch takes the stack info in r1 and the thread's address straight into r0 where the build uses r0 and ip. */
#include "nn/os/ThreadLaunch.h"
#include "nn/Result.h"
#include "addon/sys/aocThread.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "sys/ResultReport.h"
#include "sys/HandleWait.h"

/* The worker's lock overlaps the shared stage model's trailing context field. */
struct BattleStageWorkerView {
    u8 unk00[0xa4];
    u32 thread;
    u32 unkA8;
    void *stack;
    AocThreadHandle *stackInfo;
    u32 unkB4;
    u8 lock[0xc];
};

extern "C" {
extern const char DAT_00401770[];
void nn_os_CriticalSection_Initialize(void *section);
void *memAlloc(s32 heap, s32 category, s32 flags, s32 bytes, s32 alignment, s32 count);
void stageRequestSubmitLocked(void *argument);
void FUN_003f6ec4(void);
void FUN_003f6ff4(void);
void FUN_003f6f80(void);
s32 FUN_002bcc60(void *thread, const ThreadArgumentDescriptor *descriptor,
    void (*entry)(void *), const void *argument, u32 stackTop, s32 priority, s32 processor, u32 flags);

/* nn::os::Thread::Start: runs `entry(argument)` on a new thread whose stack is `stack`; a failure is reported. */
static __inline void stageStartThread(void *thread, void (*entry)(void *), BattleStageWorkerView *argument,
                                      AocThreadHandle &stack, s32 priority, s32 processor)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = FUN_003f6ec4;
    descriptor.callbacks[1] = FUN_003f6ff4;
    descriptor.callbacks[2] = FUN_003f6f80;
    s32 result = FUN_002bcc60(thread, &descriptor, entry, &argument, stack.unk08 + stack.unk0C, priority, processor, 0);
    bool failed = nnResultIsFailure(result);
    if (failed)
        resultHandleFailure(result, failed);
}

void FUN_003c8058(BattleStageWorkerView *worker)
{
    nn_os_CriticalSection_Initialize(worker->lock);
    if (!worker->stack) {
        asdDebugTrace(DAT_00401770, 0xa5);
        worker->stack = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    }
    if (!worker->stackInfo) {
        AocThreadHandle *info = (AocThreadHandle *)asdOperatorNew(sizeof(AocThreadHandle));
        if (info) {
            info->unk00 = 0;
            info->unk04 = 0;
            info->unk08 = 0;
            info->unk0C = 0;
            info->unk10 = 0;
        }
        worker->stackInfo = info;
        resultReportIfFailed(info, worker->stack, 0x1000);
    }
    /* A worker that is still running keeps going. */
    if (worker->thread && !nnResultIsNotTimeout(handleWait(worker->thread, 0)))
        return;
    stageStartThread(&worker->thread, stageRequestSubmitLocked, worker, *worker->stackInfo, 0x11, 0);
}
}
