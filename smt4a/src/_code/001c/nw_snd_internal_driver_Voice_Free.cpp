#include "shard/DriverVoice.h"

extern "C" {

void FUN_001afdc4(u32 channel);
void nw_snd_internal_driver_VoiceManager_FreeVoice(u32 manager, DriverVoice *voice);
u32 FUN_001c2484(void);

/* Frees an allocated voice: releases each of its channels, clears the channel count, returns the voice to the voice manager and marks it unallocated. */
void nw_snd_internal_driver_Voice_Free(DriverVoice *voice)
{
    s32 i;
    u32 manager;

    if (voice->allocated != 0) {
        i = 0;
        if (i < voice->channelCount) {
            do {
                if (voice->channels[i] != 0) {
                    FUN_001afdc4(voice->channels[i]);
                    voice->channels[i] = 0;
                }
                i = i + 1;
            } while (i < voice->channelCount);
        }
        voice->channelCount = 0;
        manager = FUN_001c2484();
        nw_snd_internal_driver_VoiceManager_FreeVoice(manager, voice);
        voice->allocated = 0;
    }
}

} /* extern "C" */
