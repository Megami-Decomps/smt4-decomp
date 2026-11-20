/* NON_MATCHING: the thread start (uniteStartThread's shape: argument by value, stack by reference) matches up to the
 * stack arguments: retail stores the 0 flags word on its own and the stack top, 17 and -2 with one stm; the build pairs
 * them differently (stm {top, 17}, stm {-2, 0}). */
#include "nn/os/ThreadLaunch.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {
s32 FUN_0043c2b4(void);
void FUN_00473d54(ThreadLaunchWork *work);
void FUN_00514ab4(void);
void FUN_00514b98(void);
void FUN_00514b50(void);
s32 FUN_002fb0d4(void *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(ThreadLaunchWork *),
                 ThreadLaunchWork **argument, u32 stackTop, s32 priority, s32 processor, u32 flags);

/* nn::os::Thread::Start: runs `entry(argument)` on a new thread whose stack is `stack`; a failure is reported. */
static __inline void workerStartThread(void *thread, void (*entry)(ThreadLaunchWork *), ThreadLaunchWork *argument,
                                       ThreadStackInfo &stack, s32 priority, s32 processor)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = FUN_00514ab4;
    descriptor.callbacks[1] = FUN_00514b98;
    descriptor.callbacks[2] = FUN_00514b50;
    s32 result = FUN_002fb0d4(thread, &descriptor, entry, &argument, stack.address + stack.size, priority, processor, 0);
    if (nnResultIsFailureExceptSummary(result, 3)) {
        resultHandleFailure(result);
    }
}

/* Launches the worker on its allocated stack unless the subsystem is busy. */
u32 FUN_00473da0(ThreadLaunchWork *work)
{
    if (FUN_0043c2b4()) {
        return 0;
    }
    workerStartThread(work->thread, FUN_00473d54, work, *work->stack, 0x11, -2);
    return 1;
}
}
