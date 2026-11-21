/* NON_MATCHING: the processor number is copied to the outgoing stack argument through s16 (retail loads it with the
   priority, ldm {r5, sl}), so the saved registers and the success-result registers differ. */
#include "nn/os/ThreadLaunch.h"
#include "nn/Result.h"

extern "C" {
void FUN_0019a318(void *startup);
s32 FUN_00162390(u32 *handle, ThreadEntryPoint entry, void *argument,
    void *stackTop, u32 priority, s32 cpu);

// Copy the launch argument onto the stack, add its cleanup record, and create the kernel thread.
s32 FUN_002fb0d4(ThreadHandleState *thread, const ThreadArgumentDescriptor *descriptor,
    ThreadEntryPoint entry, const void *argument, u32 stackTop, u32 priority, s32 cpu, bool owned)
{
    void *copiedArgument = (void *)((stackTop - descriptor->argumentSize) & ~7u);
    if (!owned)
        stackTop = 0;
    descriptor->operations.copy(argument, copiedArgument);
    ThreadStartupCore *startup = (ThreadStartupCore *)
        (((u32)copiedArgument - sizeof(ThreadStartupCore)) & ~7u);
    startup->destroy = descriptor->operations.destroy;
    startup->invoke = descriptor->operations.invoke;
    startup->userEntry = entry;
    startup->argument = copiedArgument;
    startup->stackTop = (void *)stackTop;

    u32 handle = 0;
    u32 kernelPriority;
    if (priority <= 32) {
        kernelPriority = priority + 32;
    } else {
        u32 offset = priority - 0x5109d500u;
        if (offset <= 39) {
            kernelPriority = offset + 24;
        } else {
            kernelPriority = priority - 0x6c8da500u;
            if (kernelPriority > 64)
                kernelPriority = (u32)-1;
        }
    }
    s32 result = FUN_00162390(&handle, FUN_0019a318, startup, startup, kernelPriority, cpu);
    bool failed = nnResultIsFailure(result);
    if (!failed) {
        thread->handle = handle;
        thread->unk04 = 0;
        thread->unk05 = 0;
        result = 0;
    }
    return result;
}
}
