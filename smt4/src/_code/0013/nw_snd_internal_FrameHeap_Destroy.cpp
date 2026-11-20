#include "common.h"

extern "C" {

int nw_snd_internal_FrameHeap_DestroyImpl(int heap);
int nw_snd_internal_FrameHeap_ClearSection(int *frameHeap);
int nw_ut_FrameHeap_Free(int heap, int mode);

void nw_snd_internal_FrameHeap_Destroy(int *frameHeap)
{
    if (*frameHeap != 0) {
        nw_snd_internal_FrameHeap_ClearSection(frameHeap);
        nw_ut_FrameHeap_Free(*frameHeap, 3);
        nw_snd_internal_FrameHeap_DestroyImpl(*frameHeap);
        *frameHeap = 0;
    }
}

} /* extern "C" */
