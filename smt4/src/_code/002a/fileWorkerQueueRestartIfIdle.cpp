/* NON_MATCHING: the zero-timeout poll, its bool test and the inlined Thread::Start now match in shape; retail keeps the
   thread in r5 and the queue in r4 (the build: r4 and r6) and builds the wait's stack arguments with str+stm. */
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

/* nn::os::Thread::Start: runs `entry(argument)` on a new thread whose stack is `stack`; a failure is reported. */
static __inline void fileWorkerStartThread(FileQueueWorker *thread, ThreadEntryPoint entry, FileQueue *argument,
    ThreadStackInfo &stack, u32 priority, s32 processor)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.operations.copy = fileWorkerCopyArgument;
    descriptor.operations.destroy = fileWorkerDestroyArgument;
    descriptor.operations.invoke = fileWorkerInvokeEntry;
    u32 result = FUN_002bcc60(thread, &descriptor, entry, &argument,
        reinterpret_cast<void *>(stack.address + stack.size), priority, processor, 0);
    if (nnResultIsFailureExceptSummary(result, 3))
        resultHandleFailure(result);
}

/* Restarts a completed worker; a zero-timeout poll leaves a worker that is still running alone. */
void fileWorkerQueueRestartIfIdle(FileQueue *queue)
{
    FileQueueWorker *thread = &queue->thread;
    bool running = false;
    if (thread->handle != 0) {
        s32 result = handleWait(thread->handle, 0);
        running = nnResultIsNotTimeout(result) != 1;
    }
    if (running)
        return;
    kernelThreadJoinAndClose(thread);
    fileWorkerStartThread(thread, FUN_00158bb4, queue, *thread->stack, 0x11, -2);
}
}
