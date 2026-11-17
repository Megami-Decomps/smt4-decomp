/* NON_MATCHING: control flow and the materialised timeout bool match; retail keeps the drained flag in r5 and the wait result in r6 (build swaps them), predicates the zero timeout (movne r2/r3) above the thread test and runs the drain loop unrotated with produced loaded once (build: ldrd and a rotated loop). */
#include "nn/Result.h"
#include "sys/ResultReport.h"
#include "cec/CecProcessGlobal.h"

/* True when the result is anything but a timeout (description 0x3fe). */
static __inline bool notTimeout(s32 result)
{
    nnResultFields fields;
    fields.value = result;
    bool differs = fields.fields.description != 0x3fe;
    return differs;
}

extern "C" {


s32 svcWaitSynchronization1(u32 handle, s64 timeout);
bool nn_os_CriticalSection_TryEnter(void *section);
void nn_os_CriticalSection_Leave(void *section);

// Polls the worker: while it still runs (the poll times out) one pending message is consumed and
// 0 is returned; once it has ended (or never started) all pending messages are drained and 1 is
// returned.
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
            timedOut = !notTimeout(result);
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

}
