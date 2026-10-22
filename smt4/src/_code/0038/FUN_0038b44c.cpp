/* NON_MATCHING: The argument descriptor and copied work pointer occupy different stack slots, changing register allocation and stack-argument stores. */
#include "nn/os/ThreadLaunch.h"
#include "nn/Result.h"

extern "C" {
s32 FUN_003611c4(void);
void FUN_0038b400(void *argument);
void FUN_003f6f14(void);
void FUN_003f7008(void);
void FUN_003f6fbc(void);
s32 FUN_002bcc60(void *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(void *), const void *argument, u32 stackTop, s32 priority, s32 processor, u32 flags);
void FUN_002c526c(s32 result);

/* Launches the worker on its allocated stack unless the subsystem is busy. */
u32 FUN_0038b44c(ThreadLaunchWork *work)
{
    if (FUN_003611c4()) {
        return 0;
    }
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(work);
    descriptor.callbacks[0] = FUN_003f6f14;
    descriptor.callbacks[1] = FUN_003f7008;
    descriptor.callbacks[2] = FUN_003f6fbc;
    ThreadLaunchWork *argument = work;
    s32 result = FUN_002bcc60(work->thread, &descriptor, FUN_0038b400, &argument,
        work->stack->address + work->stack->size, 0x11, -2, 0);
    if ((static_cast<u32>(result) & 0x7E00000) != 0x600000 && nnResultIsFailure(result)) {
        FUN_002c526c(result);
    }
    return 1;
}
}
