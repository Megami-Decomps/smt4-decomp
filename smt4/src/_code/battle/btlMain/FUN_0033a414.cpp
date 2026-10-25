/* NON_MATCHING: worker wait-result and argument descriptor stack slots and result-predicate lowering differ. */
#include "battle/btlMain.h"
#include "nn/os/ThreadLaunch.h"
#include "nn/Result.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
extern "C" {
extern const char DAT_00400b68[];
void nn_os_CriticalSection_Initialize(void *section);
void *memAlloc(u32 heap, u32 alignment, u32 mode, u32 bytes, u32 pageSize, u32 flags);
void resultReportIfFailed(ThreadStackStorage *stack, void *memory, u32 bytes);
s32 FUN_002c40f8(s32 *index, const u32 *handles, s32 count, bool waitAll, s64 timeout);
void FUN_002c526c(s32 result);
void FUN_00339b64(void *argument);
void FUN_003f6e74(void);
void FUN_003f6fe0(void);
void FUN_003f6f44(void);
s32 FUN_002bcc60(void *thread, const ThreadArgumentDescriptor *descriptor,
    void (*entry)(void *), const void *argument, u32 stackTop, s32 priority,
    s32 processor, u32 flags);

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
    if (worker->thread) {
        u32 handle = worker->thread;
        s32 index;
        s32 result = FUN_002c40f8(&index, &handle, 1, false, 0);
        if (nnResultIsFailure(result))
            FUN_002c526c(result);
        if (nnResultDescription(result) == 0x3FE)
            return;
    }
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(state);
    descriptor.callbacks[0] = FUN_003f6e74;
    descriptor.callbacks[1] = FUN_003f6fe0;
    descriptor.callbacks[2] = FUN_003f6f44;
    BattleWorkerView *argument = worker;
    s32 result = FUN_002bcc60(&worker->thread, &descriptor, FUN_00339b64, &argument,
        worker->stack->info.address + worker->stack->info.size, 17, 0, 0);
    if (nnResultIsFailure(result))
        FUN_002c526c(result);
}
}
