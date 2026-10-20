#include "shard/DriverVoice.h"

extern "C" {

void FUN_001d3714(u32 channel, s32 priority);
void nw_snd_internal_driver_VoiceManager_ChangeVoicePriority(u32 manager, DriverVoice *voice);
u32 FUN_001c2484(void);

/* Sets the voice's priority and tells the voice manager; a priority of 1 is also applied to each of its channels. */
void nw_snd_internal_driver_Voice_SetPriority(DriverVoice *voice, s32 priority)
{
    u32 manager;
    s32 i;

    voice->priority = priority;
    manager = FUN_001c2484();
    nw_snd_internal_driver_VoiceManager_ChangeVoicePriority(manager, voice);
    if ((voice->priority == 1) && (i = 0, 0 < voice->channelCount)) {
        do {
            if (voice->channels[i] != 0) {
                FUN_001d3714(voice->channels[i], 1);
            }
            i = i + 1;
        } while (i < voice->channelCount);
    }
}

} /* extern "C" */
