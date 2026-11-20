/* NON_MATCHING: the thread start (argument by value, stack by reference, the worker's fixed priority 0x11 and core -2)
 * matches except that armcc materialises the 0 flags word early in r3 and the priority late in r4, where retail does
 * the reverse (priority in r3 with the descriptor stores, the zero in r4 after the stack fields). */
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

/* nn::os::Thread::Start: runs `entry(argument)` on a new thread whose stack is `stack`, at the worker priority 0x11 on
 * the process's default core (-2); a failure is reported. */
static __inline void workerStartThread(void *thread, void (*entry)(ThreadLaunchWork *), ThreadLaunchWork *argument,
                                       ThreadStackInfo &stack)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = FUN_00514ab4;
    descriptor.callbacks[1] = FUN_00514b98;
    descriptor.callbacks[2] = FUN_00514b50;
    s32 result = FUN_002fb0d4(thread, &descriptor, entry, &argument, stack.address + stack.size, 0x11, -2, 0);
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
    workerStartThread(work->thread, FUN_00473d54, work, *work->stack);
    return 1;
}
}
