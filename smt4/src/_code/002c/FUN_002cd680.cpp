/* NON_MATCHING: result-code checks, completion-handle stack initialization, and drain-loop register allocation differ. */
#include "common.h"

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
void FUN_002c526c(u32, u32);
bool nn_os_CriticalSection_TryEnter(void *);
void nn_os_CriticalSection_Leave(void *);
}

/* Poll the worker completion handle and consume completed queued notifications. */
extern "C" u32 FUN_002cd680(void)
{
    CecCompletionQueue *queue = g_cecProcess;
    if (queue == NULL) {
        return 0;
    }
    u32 completion = queue->completion;
    if (completion != 0) {
        s32 index;
        s32 result = FUN_002c40f8(&index, &completion, 1, 0, 0, 0);
        if (result < 0) {
            FUN_002c526c((u32)result, 1);
        }
        if (((u32)result & 0x3FF) == 0x3FE) {
            if (!nn_os_CriticalSection_TryEnter(queue->lock)) {
                return 0;
            }
            if (queue->produced != queue->consumed) {
                ++queue->consumed;
            }
            nn_os_CriticalSection_Leave(queue->lock);
            return 0;
        }
    }
    while (queue->consumed != queue->produced) {
        ++queue->consumed;
    }
    return 1;
}
