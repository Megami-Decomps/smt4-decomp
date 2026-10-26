/* NON_MATCHING: timeout-description predicate lowering, descriptor stores and retained worker/result registers differ. */
#include "sys/FileWorkerQueue.h"
#include "nn/Result.h"
#include "code/Code002b.h"
#include "sys/ResultReport.h"
extern "C" {
s32 FUN_002c40f8(s32 *index, const u32 *handles, s32 count, s32 waitAll, s64 timeout);
u32 FUN_002bcc60(ThreadHandleState *thread, const ThreadArgumentDescriptor *descriptor,
    ThreadEntryPoint entry, const void *argument, void *stackTop, u32 priority, s32 processor, u8 owned);
void FUN_00158bb4(void *queue);
void fileWorkerCopyArgument(const void *source, void *destination);
void fileWorkerDestroyArgument(void *argument);
void fileWorkerInvokeEntry(ThreadEntryPoint entry, void *argument);

// Restart a completed worker; a zero-timeout poll leaves a worker that is still running alone.
void FUN_002a2e08(FileQueue *queue)
{
    FileQueueWorker *thread = &queue->thread;
    if (thread->handle != 0) {
        u32 handle = thread->handle;
        s32 index;
        u32 result = FUN_002c40f8(&index, &handle, 1, 0, 0);
        if (nnResultIsFailure(result))
            FUN_002c526c(result);
        if (!nnResultDescriptionIsNot(result, 0x3fe))
            return;
    }
    FUN_002ba8f4(thread);
    FileQueue *argument = queue;
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.operations.copy = fileWorkerCopyArgument;
    descriptor.operations.destroy = fileWorkerDestroyArgument;
    descriptor.operations.invoke = fileWorkerInvokeEntry;
    u32 result = FUN_002bcc60(thread, &descriptor, FUN_00158bb4, &argument,
        reinterpret_cast<void *>(thread->stack->address + thread->stack->size), 0x11, -2, 0);
    if (nnResultIsFailureExceptSummary(result, 3))
        FUN_002c526c(result);
}
}
