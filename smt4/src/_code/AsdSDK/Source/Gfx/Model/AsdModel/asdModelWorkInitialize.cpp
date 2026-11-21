/* NON_MATCHING: the handle fetch, the thread start and its failure report match in kind; retail keeps the fetched
 * handle at sp+0 inside a 48-byte frame (here a 56-byte frame with it at sp+48), tests the fetch's result with a
 * signed compare and predicated store (here a compare against 0x80000000 and a branch) and pools the trampoline
 * FUN_0011bd5c after the stack arguments. (Moving the fetch into an inline wrapper gives the frame: 47 lines.) */
#include "common.h"
#include "nn/Result.h"
#include "nn/os/Handle.h"
#include "nn/os/Thread.h"
#include "nn/os/ThreadLaunch.h"
#include "sys/ResultReport.h"

extern "C" {

extern NnOsHandle g_modelWorkHandle;
extern NnOsThread g_modelWorkThread;
extern u8 DAT_004e9db8; /* the end of the model work thread's stack */

s32 FUN_0011cec8(u32 *out);
void FUN_0011bd5c(void (*function)(void));
__declspec(noreturn) void FUN_0011cd24(void);
void sysCopyWordIfOutputPresent(const u32 *value, u32 *output);
void FUN_00123cb0(void);
u32 FUN_00123c98(u32 (*callback)(u32), const u32 *value);
s32 FUN_002bcc60(void *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(void (*)(void)),
                 void (**argument)(void), u32 stackTop, s32 priority, s32 processor, u32 flags);

/* nn::os::Thread::Start: runs `entry(argument)` on a new thread whose stack ends at `stackTop`; a failure is fatal. */
static __inline void modelWorkStartThread(void *thread, void (*entry)(void (*)(void)), void (*argument)(void),
                                          u32 stackTop, s32 priority, s32 processor)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = (void (*)(void))sysCopyWordIfOutputPresent;
    descriptor.callbacks[1] = FUN_00123cb0;
    descriptor.callbacks[2] = (void (*)(void))FUN_00123c98;
    s32 result = FUN_002bcc60(thread, &descriptor, entry, &argument, stackTop, priority, processor, 0);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
}

/* Fetches the model work handle, then starts the model work thread. */
s32 asdModelWorkInitialize(void)
{
    u32 handle = 0;
    s32 result = FUN_0011cec8(&handle);
    if (nnResultIsSuccess(result)) {
        g_modelWorkHandle.handle = handle;
    }
    if (nnResultIsSuccess(result)) {
        modelWorkStartThread(&g_modelWorkThread, FUN_0011bd5c, FUN_0011cd24, (u32)&DAT_004e9db8, 0x5109d500, -2);
    }
    return result;
}

} /* extern "C" */
