#include "shard/Dspsnd.h"

extern "C" {

s32 FUN_001c6e20(void);

/* Returns the dropped frame count of the active status block, or -1 when the DSP is not available. */
s32 nn_snd_CTR_Dspsnd_GetDroppedFrameCount(DspsndState *state)
{
    s32 result;
    u32 count;

    result = FUN_001c6e20();
    if (result == 0) {
        count = 0xFFFFFFFF;
    } else {
        count = (u32)state->statuses[state->statusIndex]->droppedFrames;
    }
    return count;
}

} /* extern "C" */
