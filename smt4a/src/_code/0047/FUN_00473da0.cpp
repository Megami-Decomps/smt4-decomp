/* NON_MATCHING: The argument descriptor and copied work pointer occupy different stack slots, changing register allocation and stack-argument stores. */
#include "nn/os/ThreadLaunch.h"
#include "nn/Result.h"

extern "C" {
s32 FUN_0043c2b4(void);
void FUN_00473d54(void *argument);
void FUN_00514ab4(void);
void FUN_00514b98(void);
void FUN_00514b50(void);
s32 FUN_002fb0d4(void *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(void *), const void *argument, u32 stackTop, s32 priority, s32 processor, u32 flags);
void FUN_002e3140(s32 result);

/* Launches the worker on its allocated stack unless the subsystem is busy. */
u32 FUN_00473da0(ThreadLaunchWork *work)
{
    if (FUN_0043c2b4()) {
        return 0;
    }
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(work);
    descriptor.callbacks[0] = FUN_00514ab4;
    descriptor.callbacks[1] = FUN_00514b98;
    descriptor.callbacks[2] = FUN_00514b50;
    ThreadLaunchWork *argument = work;
    s32 result = FUN_002fb0d4(work->thread, &descriptor, FUN_00473d54, &argument,
        work->stack->address + work->stack->size, 0x11, -2, 0);
    if ((static_cast<u32>(result) & 0x7E00000) != 0x600000 && nnResultIsFailure(result)) {
        FUN_002e3140(result);
    }
    return 1;
}
}
