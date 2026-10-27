/* NON_MATCHING: timeout-description predicate lowering, descriptor stores and retained worker/result registers differ. */
#include "sys/FileWorkerQueue.h"
#include "nn/Result.h"
#include "code/Code002b.h"
#include "sys/HandleWait.h"
extern "C" {
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
        s32 result = handleWait(thread->handle, 0);
        if (!nnResultIsNotTimeout(result))
            return;
    }
    kernelThreadJoinAndClose(thread);
    FileQueue *argument = queue;
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.operations.copy = fileWorkerCopyArgument;
    descriptor.operations.destroy = fileWorkerDestroyArgument;
    descriptor.operations.invoke = fileWorkerInvokeEntry;
    u32 result = FUN_002bcc60(thread, &descriptor, FUN_00158bb4, &argument,
        reinterpret_cast<void *>(thread->stack->address + thread->stack->size), 0x11, -2, 0);
    bool failed = nnResultIsFailureExceptSummary(result, 3);
    if (failed)
        FUN_002c526c(result, failed);
}
}
