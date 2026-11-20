#include "classes/Obj422290.h"
#include "addon/aocMain.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"
#include "nn/os/ThreadLaunch.h"

extern "C" {
void FUN_00514ad4(void);
void FUN_00514ba0(void);
void FUN_00514b68(void);
s32 threadTryJoinAndClose(AocWorkerThread *thread);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
s32 FUN_002fb0d4(AocWorkerThread *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(Obj422290 *),
                 Obj422290 **argument, u32 stackTop, s32 priority, s32 processor, u32 flags);
void FUN_004767a8(Obj422290 *operation);
}

/* nn::os::Thread::Start: runs `entry(argument)` on the AOC worker thread's stack; a failure is reported. */
static __inline void aocStartWorkerThread(AocWorkerThread *thread, void (*entry)(Obj422290 *), Obj422290 *argument,
                                          AocThreadStack &stack, s32 priority, s32 processor)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = FUN_00514ad4;
    descriptor.callbacks[1] = FUN_00514ba0;
    descriptor.callbacks[2] = FUN_00514b68;
    s32 status = FUN_002fb0d4(thread, &descriptor, entry, &argument, stack.base + stack.size, priority, processor, 0);
    if ((status & 0x7e00000) != 0x600000 && nnResultIsFailure(status)) {
        resultHandleFailure(status);
    }
}

/* Starts the AOC worker thread on the first call; once it has finished, reports its result (0 or 100 with the
 * failure) and moves to the done state. Otherwise the result is 1 (busy). */
WindowStatusOperationResult Obj422290::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    AocMain *manager = g_aocMain;
    switch (reserved) {
    case 0: {
        reserved = 1;
        AocWorkerThread *thread = &manager->thread;
        aocStartWorkerThread(thread, FUN_004767a8, this, *thread->stack, 0x11, -2);
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
