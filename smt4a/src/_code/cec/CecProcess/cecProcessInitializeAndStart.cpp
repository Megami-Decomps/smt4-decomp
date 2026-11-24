/* NON_MATCHING: armcc forms the descriptor address before the bound argument address; retail forms the argument first. */
#include "cec/CecProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "nn/Result.h"
#include "nn/os/CriticalSection.h"
#include "sys/ResultReport.h"
#include "shard/W6_W6Match3_OnlineValueCompletion.h"

extern "C" {
extern const char DAT_0052f4b0[];
void resultReportIfFailed(ThreadStackStorage *stack, void *memory, u32 size);
void FUN_00514a44(void);
void FUN_00514b7c(void);
void FUN_00514afc(void);
void FUN_0028196c(CecProcessA *process);
s32 FUN_002fb0d4(ThreadHandleState *thread, const ThreadArgumentDescriptor *descriptor,
                 ThreadEntryPoint entry, const void *argument, u32 stackTop, u32 priority, s32 cpu, bool owned);
} /* extern "C" */

/* Starts the inbox worker with a copy of the process pointer on its stack. */
static __inline void cecStartThread(NnOsThread *thread, void (*entry)(CecProcessA *), CecProcessA *argument,
                                    ThreadStackStorage &stack, u32 priority, s32 processor)
{
    CecThreadBinding<CecProcessA> bound;
    bound.argument = argument;
    bound.descriptor.argumentSize = sizeof(argument);
    bound.descriptor.callbacks[0] = FUN_00514a44;
    bound.descriptor.callbacks[1] = FUN_00514b7c;
    bound.descriptor.callbacks[2] = FUN_00514afc;
    s32 result = FUN_002fb0d4((ThreadHandleState *)thread, &bound.descriptor, (ThreadEntryPoint)entry, &bound.argument,
                             stack.info.address + stack.info.size, priority, processor, false);
    if (nnResultIsFailureExceptSummary(result, 3)) {
        resultHandleFailure(result);
    }
}

/* Sets up the CEC inbox reader and starts its worker thread on a fresh 4 KB stack. */
extern "C" void cecProcessInitializeAndStart(CecProcessA *process)
{
    nn_os_CriticalSection_Initialize(process->lock);
    process->receivedCount = 0;
    process->requestedCount = asdCecInboxGetMessageCount();
    process->producedBatches = 0;
    process->consumedBatches = 0;
    asdDebugTrace(DAT_0052f4b0, 215);
    process->buffer = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    resultReportIfFailed(&process->workerStack, process->buffer, 0x1000);
    cecStartThread(&process->thread, FUN_0028196c, process, process->workerStack, 17, -2);
}
