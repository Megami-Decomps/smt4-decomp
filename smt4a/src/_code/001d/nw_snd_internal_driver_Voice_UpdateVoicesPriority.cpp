#include "shard/DriverVoice.h"

extern "C" {

void nn_snd_CTR_Voice_SetPriority(u32 channel, s32 priority);

/* Applies the voice's priority to each of its channels (unless it is 1, which SetPriority already handles). */
void nw_snd_internal_driver_Voice_UpdateVoicesPriority(DriverVoice *voice)
{
    s32 i;

    if ((voice->priority != 1) && (i = 0, 0 < voice->channelCount)) {
        do {
            if (voice->channels[i] != 0) {
                nn_snd_CTR_Voice_SetPriority(voice->channels[i], voice->priority);
            }
            i = i + 1;
        } while (i < voice->channelCount);
    }
}

} /* extern "C" */
