#include "common.h"

extern "C" {

s32 nw_ut_FrameHeap_FreeByState(u32 heap, s32 state);
s32 nw_snd_internal_FrameHeap_NewSection(u32 *frameHeap);
s32 nw_ut_FrameHeap_RecordState(u32 heap, u32 label);

/* Records a state on the heap and opens a new section; returns the state's index (count - 1), or -1 if either step failed (undoing the recorded state if only the section failed). */
s32 nw_snd_internal_FrameHeap_SaveState(u32 *frameHeap)
{
    s32 result;

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
