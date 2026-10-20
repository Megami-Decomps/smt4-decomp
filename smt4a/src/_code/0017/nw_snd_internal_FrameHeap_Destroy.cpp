#include "common.h"

extern "C" {

s32 FUN_0018c988(s32 heap);
s32 nw_snd_internal_FrameHeap_ClearSection(s32 *frameHeap);
s32 nw_ut_FrameHeap_Free(s32 heap, s32 mode);

/* Frees the heap held in `*frameHeap` (clearing its section first) and resets the slot. */
void nw_snd_internal_FrameHeap_Destroy(s32 *frameHeap)
{
    if (*frameHeap != 0) {
        nw_snd_internal_FrameHeap_ClearSection(frameHeap);
        nw_ut_FrameHeap_Free(*frameHeap, 3);
        FUN_0018c988(*frameHeap);
        *frameHeap = 0;
    }
}

} /* extern "C" */
