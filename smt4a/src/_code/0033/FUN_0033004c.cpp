/* NON_MATCHING: retail predicates the zero timeout, keeps the drained flag in r5 instead of r6,
 * and tests the drain loop at the top after loading the producer cursor once. */
#include "cec/CecProcessGlobal.h"
#include "nn/os/WaitObject.h"

extern "C" {

bool nn_os_CriticalSection_TryEnter(void *section);
void nn_os_CriticalSection_Leave(void *section);

/* Consumes one pending batch while the worker is running, or drains the queue and returns 1 once
 * the worker has stopped or did not start. */
u32 FUN_0033004c(void)
{
    u32 drained = 0;
    CecProcessA *process = g_cecProcess;
    if (process != NULL) {
        bool timedOut = false;
        if (process->thread.handle != 0) {
            s32 result = svcWaitSynchronization1(process->thread.handle, 0);
            bool failed = nnResultIsFailure(result);
            if (failed) {
                resultHandleFailure(result, failed);
            }
            timedOut = !nnResultIsNotTimeout(result);
        }
        if (timedOut) {
            if (nn_os_CriticalSection_TryEnter(process->lock)) {
                if (process->producedBatches != process->consumedBatches) {
                    process->consumedBatches++;
                }
                nn_os_CriticalSection_Leave(process->lock);
            }
        } else {
            drained = 1;
            while (process->consumedBatches != process->producedBatches) {
                process->consumedBatches++;
            }
        }
    }
    return drained;
}

} /* extern "C" */
