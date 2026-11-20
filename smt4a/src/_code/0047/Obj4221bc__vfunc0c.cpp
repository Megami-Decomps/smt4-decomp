/* NON_MATCHING: the thread start (uniteStartThread's shape: argument by value, stack by reference) matches up to the
 * stack arguments: retail stores the 0 flags word on its own and the stack top, 17 and -2 with one stm; the build pairs
 * them differently. */
#include "classes/Obj4221bc.h"
#include "addon/aocMain.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"
#include "nn/os/ThreadLaunch.h"

extern "C" {
void FUN_00514aa4(void);
void FUN_00514b94(void);
void FUN_00514b44(void);
s32 threadTryJoinAndClose(AocWorkerThread *thread);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
s32 FUN_002fb0d4(AocWorkerThread *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(Obj4221bc *),
                 Obj4221bc **argument, u32 stackTop, s32 priority, s32 processor, u32 flags);
void aocListJobSubmitFlaggedIds(Obj4221bc *operation);
}

/* nn::os::Thread::Start: runs `entry(argument)` on the AOC worker thread's stack; a failure is reported. */
static __inline void aocStartWorkerThread(AocWorkerThread *thread, void (*entry)(Obj4221bc *), Obj4221bc *argument,
                                          AocThreadStack &stack, s32 priority, s32 processor)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = FUN_00514aa4;
    descriptor.callbacks[1] = FUN_00514b94;
    descriptor.callbacks[2] = FUN_00514b44;
    s32 status = FUN_002fb0d4(thread, &descriptor, entry, &argument, stack.base + stack.size, priority, processor, 0);
    if (nnResultIsFailureExceptSummary(status, 3)) {
        resultHandleFailure(status);
    }
}

WindowStatusOperationResult Obj4221bc::vfunc0c(const void *)
{
    WindowStatusOperationResult output(1);
    AocMain *manager = g_aocMain;
    if (reserved != 0) {
        if (reserved == 1 && threadTryJoinAndClose(&manager->thread) != 0) {
            bool succeeded = !nnResultIsFailureBool(legacyResourceIdRemap(&result));
            if (succeeded) {
                output.status = 0;
            } else {
                output.status = 100;
                output.result = result;
            }
        }
    } else {
        reserved = 1;
        AocWorkerThread *thread = &manager->thread;
        aocStartWorkerThread(thread, aocListJobSubmitFlaggedIds, this, *thread->stack, 0x11, -2);
    }
    return output;
}
