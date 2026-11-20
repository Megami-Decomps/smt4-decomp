/* NON_MATCHING: the thread start (uniteStartThread's shape: argument by value, stack by reference) matches up to the
 * stack arguments: retail stores the 0 flags word on its own and the stack top, 17 and -2 with one stm; the build pairs
 * them differently. */
#include "classes/Obj422248.h"
#include "addon/aocMain.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"
#include "nn/os/ThreadLaunch.h"

extern "C" {
void FUN_00514ac4(void);
void FUN_00514b9c(void);
void FUN_00514b5c(void);
s32 threadTryJoinAndClose(AocWorkerThread *thread);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
s32 FUN_002fb0d4(AocWorkerThread *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(Obj422248 *),
                 Obj422248 **argument, u32 stackTop, s32 priority, s32 processor, u32 flags);
void FUN_00475700(Obj422248 *operation);
}

/* nn::os::Thread::Start: runs `entry(argument)` on the AOC worker thread's stack; a failure is reported. */
static __inline void aocStartWorkerThread(AocWorkerThread *thread, void (*entry)(Obj422248 *), Obj422248 *argument,
                                          AocThreadStack &stack, s32 priority, s32 processor)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = FUN_00514ac4;
    descriptor.callbacks[1] = FUN_00514b9c;
    descriptor.callbacks[2] = FUN_00514b5c;
    s32 status = FUN_002fb0d4(thread, &descriptor, entry, &argument, stack.base + stack.size, priority, processor, 0);
    if ((status & 0x7e00000) != 0x600000) {
        bool failed = nnResultIsFailure(status);
        if (failed) {
            resultHandleFailure(status, failed);
        }
    }
}

WindowStatusOperationResult Obj422248::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    AocMain *manager = g_aocMain;
    if (reserved == 0) {
        reserved = 1;
        AocWorkerThread *thread = &manager->thread;
        aocStartWorkerThread(thread, FUN_00475700, this, *thread->stack, 0x11, -2);
    } else {
        if (reserved == 1 && threadTryJoinAndClose(&manager->thread) != 0) {
            bool succeeded = !nnResultIsFailureBool(legacyResourceIdRemap(&result));
            if (succeeded) {
                output.status = 0;
            } else {
                output.result = result;
                output.status = 100;
            }
            reserved = 2;
        }
    }
    return output;
}
