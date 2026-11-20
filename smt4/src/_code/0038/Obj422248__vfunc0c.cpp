#include "classes/Obj422248.h"
#include "addon/aocMain.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"
#include "nn/os/ThreadLaunch.h"

extern "C" {
void FUN_003f6f24(void);
void FUN_003f700c(void);
void FUN_003f6fc8(void);
s32 threadTryJoinAndClose(AocWorkerThread *thread);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
s32 FUN_002bcc60(AocWorkerThread *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(Obj422248 *),
                 Obj422248 **argument, u32 stackTop, s32 priority, s32 processor, u32 flags);
void FUN_0038cbdc(Obj422248 *operation);
}

/* nn::os::Thread::Start: runs `entry(argument)` on the AOC worker thread's stack; a failure is reported. */
static __inline void aocStartWorkerThread(AocWorkerThread *thread, void (*entry)(Obj422248 *), Obj422248 *argument,
                                          AocThreadStack &stack, s32 priority, s32 processor)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = FUN_003f6f24;
    descriptor.callbacks[1] = FUN_003f700c;
    descriptor.callbacks[2] = FUN_003f6fc8;
    s32 status = FUN_002bcc60(thread, &descriptor, entry, &argument, stack.base + stack.size, priority, processor, 0);
    if ((status & 0x7e00000) != 0x600000) {
        bool failed = nnResultIsFailure(status);
        if (failed) {
            resultHandleFailure(status, failed);
        }
    }
}

/* Starts the AOC worker thread on the first call; once it has finished, reports its result (0 or 100 with the
 * failure) and moves to the done state. Otherwise the result is 1 (busy). */
WindowStatusOperationResult Obj422248::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    AocMain *manager = g_aocMain;
    switch (reserved) {
    case 0: {
        reserved = 1;
        AocWorkerThread *thread = &manager->thread;
        aocStartWorkerThread(thread, FUN_0038cbdc, this, *thread->stack, 0x11, -2);
        break;
    }
    case 1:
        if (threadTryJoinAndClose(&manager->thread) != 0) {
            bool succeeded = !nnResultIsFailureBool(legacyResourceIdRemap(&result));
            if (succeeded) {
                output.status = 0;
            } else {
                output.result = result;
                output.status = 100;
            }
            reserved = 2;
        }
        break;
    }
    return output;
}
