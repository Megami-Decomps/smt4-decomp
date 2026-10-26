/* NON_MATCHING: wait-result temporary and thread argument descriptor occupy different stack slots; result-test lowering differs. */
#include "nn/os/ThreadLaunch.h"
#include "nn/Result.h"
#include "addon/sys/aocThread.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "sys/ResultReport.h"

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
s32 FUN_002c40f8(s32 *index, const u32 *handles, s32 count, s32 waitAll, s64 timeout);
void FUN_003c7ffc(void *argument);
void FUN_003f6ec4(void);
void FUN_003f6ff4(void);
void FUN_003f6f80(void);
s32 FUN_002bcc60(void *thread, const ThreadArgumentDescriptor *descriptor,
    void (*entry)(void *), const void *argument, u32 stackTop, s32 priority, s32 processor, u32 flags);

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
    u32 handle = worker->thread;
    if (handle) {
        s32 index;
        s32 result = FUN_002c40f8(&index, &handle, 1, 0, 0);
        if (nnResultIsFailure(result))
            FUN_002c526c(result);
        if (nnResultDescription(result) == 0x3fe)
            return;
    }
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(worker);
    descriptor.callbacks[0] = FUN_003f6ec4;
    descriptor.callbacks[1] = FUN_003f6ff4;
    descriptor.callbacks[2] = FUN_003f6f80;
    BattleStageWorkerView *argument = worker;
    s32 result = FUN_002bcc60(&worker->thread, &descriptor, FUN_003c7ffc, &argument,
        worker->stackInfo->unk08 + worker->stackInfo->unk0C, 0x11, 0, 0);
    if (nnResultIsFailure(result))
        FUN_002c526c(result);
}
}
