/* NON_MATCHING: structure matches (smt4 FileQueue worker restart); retail keeps a zero in r7 from the top (pushes five registers, 36-byte frame, predicated wait arguments) and orders the literal pool with FUN_001c3864 first, so the entry address was materialised before the descriptor stores. */
#include "sys/FileWorkerQueue.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {
s32 svcWaitSynchronization1(u32 handle, s64 timeout);
void FUN_001b3428(void *thread);
u32 FUN_002fb0d4(ThreadHandleState *thread, const ThreadArgumentDescriptor *descriptor,
    ThreadEntryPoint entry, const void *argument, void *stackTop, u32 priority, s32 processor, u8 owned);
void FUN_001c3864(void *queue);
void FUN_001c45ec(const void *source, void *destination);
void FUN_001c4608(void *argument);
void FUN_001c45fc(ThreadEntryPoint entry, void *argument);

// Restart a completed worker; a zero-timeout poll leaves a worker that is still running alone.
void FUN_001b9fe4(FileQueue *queue)
{
    FileQueueWorker *thread = &queue->thread;
    if (thread->handle != 0) {
        s32 result = svcWaitSynchronization1(thread->handle, 0);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            FUN_002e3140(result, failed);
        }
        if (!nnResultIsNotTimeout(result))
            return;
    }
    FUN_001b3428(thread);
    FileQueue *argument = queue;
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.operations.copy = FUN_001c45ec;
    descriptor.operations.destroy = FUN_001c4608;
    descriptor.operations.invoke = FUN_001c45fc;
    u32 result = FUN_002fb0d4(thread, &descriptor, FUN_001c3864, &argument,
        reinterpret_cast<void *>(thread->stack->address + thread->stack->size), 0x11, -2, 0);
    if (nnResultIsFailureExceptSummary(result, 3))
        FUN_002e3140(result);
}
}
