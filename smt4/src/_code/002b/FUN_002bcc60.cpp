/* NON_MATCHING: startup-record stores and argument lifetimes differ; this build spills processor affinity through s16 and adds a VFP save. */
#include "nn/os/ThreadLaunch.h"
#include "nn/Result.h"

extern "C" {
void nn_os_Thread_ThreadStart(ThreadStartupRecord *startup);
u32 FUN_00124178(u32 *handle, void (*entry)(ThreadStartupRecord *), ThreadStartupRecord *argument,
    void *stackTop, u32 priority, s32 processor);
}

static __inline u32 threadDecodePriority(u32 priority)
{
    if (priority <= 32)
        return priority + 32;
    u32 relative = priority - 0x5109d500u;
    if (relative <= 39)
        return relative + 24;
    u32 absolute = priority - 0x6c8da500u;
    return absolute <= 64 ? absolute : 0xffffffffu;
}

// Copy the packed argument below the supplied stack top, then launch the SDK's startup thunk.
extern "C" u32 FUN_002bcc60(ThreadHandleState *thread, const ThreadArgumentDescriptor *descriptor,
    ThreadEntryPoint entry, const void *argument, void *stackTop, u32 priority, s32 processor, u8 owned)
{
    u32 argumentAddress = (reinterpret_cast<u32>(stackTop) - descriptor->argumentSize) & ~7u;
    void *argumentStorage = reinterpret_cast<void *>(argumentAddress);
    descriptor->operations.copy(argument, argumentStorage);
    ThreadStartupRecord *startup = reinterpret_cast<ThreadStartupRecord *>(
        (argumentAddress - sizeof(ThreadStartupRecord)) & ~7u);
    startup->destroy = descriptor->operations.destroy;
    startup->invoke = descriptor->operations.invoke;
    startup->userEntry = entry;
    startup->argument = argumentStorage;
    startup->stackTop = stackTop;
    startup->owned = owned;
    u32 handle = 0;
    u32 result = FUN_00124178(&handle, nn_os_Thread_ThreadStart, startup, startup,
        threadDecodePriority(priority), processor);
    if (nnResultIsFailure(result))
        return result;
    thread->handle = handle;
    thread->unk04 = 0;
    thread->unk05 = 0;
    return 0;
}
