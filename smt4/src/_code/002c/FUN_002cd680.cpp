/* NON_MATCHING: wait and timeout test match; r5/r6 (drained flag, wait result) are swapped and armcc rotates the drain loop (ldrd, bottom test) where retail reloads `consumed` at the top. */
#include "common.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"
#include "sys/HandleWait.h"
#include "cec/CecProcessGlobal.h"

extern "C" {
bool nn_os_CriticalSection_TryEnter(void *);
void nn_os_CriticalSection_Leave(void *);
}

/* Poll the worker completion handle and consume completed queued notifications. */
extern "C" u32 FUN_002cd680(void)
{
    u32 drained = 0;
    CecProcess *queue = g_cecProcess;

    if (queue != NULL) {
        bool timedOut = false;

        if (queue->thread.handle != 0) {
            s32 result = handleWait(queue->thread.handle, 0);
            timedOut = nnResultIsNotTimeout(result) != 1;
        }
        if (timedOut) {
            if (nn_os_CriticalSection_TryEnter(queue->lock)) {
                if (queue->producedBatches != queue->consumedBatches) {
                    ++queue->consumedBatches;
                }
                nn_os_CriticalSection_Leave(queue->lock);
            }
        } else {
            drained = 1;
            while (queue->consumedBatches != queue->producedBatches) {
                ++queue->consumedBatches;
            }
        }
    }
    return drained;
}
