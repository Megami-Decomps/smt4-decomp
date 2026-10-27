/* NON_MATCHING: register numbering and the argument/stack-initialisation scheduling differ (retail stores the zero arguments and the completion word with one stm and keeps the drain flag in r5) */
#include "common.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

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
s32 FUN_002c40f8(s32 *, const u32 *, s32, s32, u32, u32);
bool nn_os_CriticalSection_TryEnter(void *);
void nn_os_CriticalSection_Leave(void *);
}

/* Poll the worker completion handle and consume completed queued notifications. */
extern "C" u32 FUN_002cd680(void)
{
    u32 drained = 0;
    CecCompletionQueue *queue = g_cecProcess;

    if (queue != NULL) {
        u32 completion = queue->completion;
        bool timedOut = false;

        if (completion != 0) {
            s32 index;
            s32 result = FUN_002c40f8(&index, &completion, 1, 0, 0, 0);
            bool failed = nnResultIsFailure(result);
            if (failed) {
                FUN_002c526c(result, failed);
            }
            nnResultFields fields;
            fields.value = result;
            bool differs = fields.fields.description != 0x3FE;
            timedOut = differs != 1;
        }
        if (timedOut) {
            if (nn_os_CriticalSection_TryEnter(queue->lock)) {
                if (queue->produced != queue->consumed) {
                    ++queue->consumed;
                }
                nn_os_CriticalSection_Leave(queue->lock);
            }
        } else {
            while (queue->consumed != queue->produced) {
                ++queue->consumed;
            }
            drained = 1;
        }
    }
    return drained;
}
