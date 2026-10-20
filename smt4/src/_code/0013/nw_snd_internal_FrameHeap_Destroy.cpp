#include "common.h"

extern "C" {

int FUN_0013c780(int heap);
int nw_snd_internal_FrameHeap_ClearSection(int *frameHeap);
int nw_ut_FrameHeap_Free(int heap, int mode);

void nw_snd_internal_FrameHeap_Destroy(int *frameHeap)
{
    if (*frameHeap != 0) {
        nw_snd_internal_FrameHeap_ClearSection(frameHeap);
        nw_ut_FrameHeap_Free(*frameHeap, 3);
        FUN_0013c780(*frameHeap);
        *frameHeap = 0;
    }
}

} /* extern "C" */
