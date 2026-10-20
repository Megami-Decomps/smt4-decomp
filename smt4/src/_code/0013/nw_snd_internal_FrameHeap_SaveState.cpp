#include "common.h"

extern "C" {

int nw_ut_FrameHeap_FreeByState(u32 heap, int state);
extern int nw_snd_internal_FrameHeap_NewSection(u32 *frameHeap);
extern int nw_ut_FrameHeap_RecordState(u32 heap, u32 label);

/* Records a heap state and opens a new section; returns the section index, or -1 on failure. */
int nw_snd_internal_FrameHeap_SaveState(u32 *frameHeap)
{
    int result;

    result = nw_ut_FrameHeap_RecordState(frameHeap[0], frameHeap[1]);
    if (result == 0) {
        result = -1;
    } else {
        result = nw_snd_internal_FrameHeap_NewSection(frameHeap);
        if (result != 0) {
            result = frameHeap[1] - 1;
        } else {
            nw_ut_FrameHeap_FreeByState(frameHeap[0], 0);
            result = -1;
        }
    }
    return result;
}

} /* extern "C" */
