/* NON_MATCHING: armcc forms the descriptor address before the bound argument address; retail forms the argument first. */
#include "cec/CecProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "nn/Result.h"
#include "nn/os/CriticalSection.h"
#include "sys/ResultReport.h"
#include "shard/W6_W6Match3_OnlineValueCompletion.h"

extern "C" {
extern const char DAT_00403530[];
s32 FUN_002bcc60(void *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(CecProcess *),
                 CecProcess **argument, u32 stackTop, s32 priority, s32 affinity, s32 flag);
void FUN_001dc684(CecProcess *reader);
void FUN_003f6e94(const u32 *source, u32 *destination);
void FUN_003f6fe8(void);
u32 FUN_003f6f5c(u32 (*callback)(u32), const u32 *value);
} /* extern "C" */

/* Starts the inbox worker with a copy of the process pointer on its stack. */
static __inline void cecStartThread(NnOsThread *thread, void (*entry)(CecProcess *), CecProcess *argument,
                                    ThreadStackStorage &stack, s32 priority, s32 processor)
{
    CecThreadBinding<CecProcess> bound;
    bound.argument = argument;
    bound.descriptor.argumentSize = sizeof(argument);
    bound.descriptor.callbacks[0] = (void (*)(void))FUN_003f6e94;
    bound.descriptor.callbacks[1] = FUN_003f6fe8;
    bound.descriptor.callbacks[2] = (void (*)(void))FUN_003f6f5c;
    s32 result = FUN_002bcc60(thread, &bound.descriptor, entry, &bound.argument,
                             stack.info.address + stack.info.size, priority, processor, 0);
    if (nnResultIsFailureExceptSummary(result, 3)) {
        resultHandleFailure(result);
    }
}

/* Sets up the CEC inbox reader and starts its worker thread on a fresh 4 KB stack. */
extern "C" void cecProcessInitializeAndStart(CecProcess *reader)
{
    nn_os_CriticalSection_Initialize(reader->lock);
    reader->nextMessageIndex = 0;
    reader->messageCount = asdCecInboxGetMessageCount();
    reader->producedBatches = 0;
    reader->consumedBatches = 0;
    asdDebugTrace(DAT_00403530, 202);
    reader->buffer = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    resultReportIfFailed(&reader->stack, reader->buffer, 0x1000);
    cecStartThread(&reader->thread, FUN_001dc684, reader, reader->stack, 17, -2);
}
