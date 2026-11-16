/* NON_MATCHING: wait and timeout test match; r5/r6 (drained flag, wait result) are swapped and armcc rotates the drain loop (ldrd, bottom test) where retail reloads `consumed` at the top. */
#include "common.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"
#include "sys/HandleWait.h"

struct CecCompletionQueue {
    u8 unk000[0x78];
    s32 produced;
    s32 consumed;
    u8 unk080[0x3A0];
    u8 lock[8]; /* 0x420 */
    u32 unk428;
    u32 completion; /* 0x42C */
};
extern "C" {
extern CecCompletionQueue *g_cecProcess;
bool nn_os_CriticalSection_TryEnter(void *);
void nn_os_CriticalSection_Leave(void *);
}

/* Poll the worker completion handle and consume completed queued notifications. */
extern "C" u32 FUN_002cd680(void)
{
    u32 drained = 0;
    CecCompletionQueue *queue = g_cecProcess;

    if (queue != NULL) {
        bool timedOut = false;

        if (queue->completion != 0) {
            s32 result = handleWait(queue->completion, 0);
            timedOut = nnResultIsNotTimeout(result) != 1;
        }
        if (timedOut) {
            if (nn_os_CriticalSection_TryEnter(queue->lock)) {
                if (queue->produced != queue->consumed) {
                    ++queue->consumed;
                }
                nn_os_CriticalSection_Leave(queue->lock);
            }
        } else {
            drained = 1;
            while (queue->consumed != queue->produced) {
                ++queue->consumed;
            }
        }
    }
    return drained;
}
