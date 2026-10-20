#include "shard/Dspsnd.h"

extern "C" {

extern int nn_snd_CTR_Dspsnd_IsInitialized(void);

/* Frames the DSP dropped in the current status block, or 0xffffffff when the DSP isn't running. */
s32 nn_snd_CTR_Dspsnd_GetDroppedFrameCount(DspsndState *state)
{
    int ok = nn_snd_CTR_Dspsnd_IsInitialized();
    u32 count;

    if (ok == 0) {
        count = 0xffffffff;
    } else {
        count = state->statuses[state->statusIndex]->droppedFrames;
    }
    return count;
}

} /* extern "C" */
