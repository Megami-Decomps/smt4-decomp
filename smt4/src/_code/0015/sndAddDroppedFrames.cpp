/* Adds the DSP's dropped-frame count (if the query succeeded) to the running total. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk00[0x30];       /* 0x00 */
    s32 droppedFrames;    /* 0x30 */
} SoundStats;

extern u8 g_dspsndState;

s32 nn_snd_CTR_Dspsnd_GetDroppedFrameCount(u8 *dsp);

void sndAddDroppedFrames(SoundStats *stats)
{
    s32 dropped = nn_snd_CTR_Dspsnd_GetDroppedFrameCount(&g_dspsndState);

    if (dropped >= 0) {
        stats->droppedFrames = dropped + stats->droppedFrames;
    }
}

} /* extern "C" */
