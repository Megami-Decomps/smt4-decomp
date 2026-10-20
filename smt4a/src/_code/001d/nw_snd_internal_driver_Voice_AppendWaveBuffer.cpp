#include "shard/DriverVoice.h"

extern "C" {

void FUN_001c7c44(u32 channel, u32 buffer);

/* Appends the wave buffer to channel `channel` of the voice and, when `remember` is set, records it as the last wave buffer. */
void nw_snd_internal_driver_Voice_AppendWaveBuffer(DriverVoice *voice, s32 channel, u32 buffer, s32 remember)
{
    FUN_001c7c44(voice->channels[channel], buffer);
    if (remember != 0) {
        voice->lastWaveBuffer = buffer;
    }
}

} /* extern "C" */
