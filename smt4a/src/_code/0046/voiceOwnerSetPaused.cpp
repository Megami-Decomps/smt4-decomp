#include "shard/Shard0046.h"

extern "C" {

extern void nw_snd_internal_driver_Voice_Pause(u32 handle, u32 pause);

/* Pauses or resumes every active voice whose state differs. */
void voiceOwnerSetPaused(VoiceOwner *owner, u8 pause)
{
    VoiceB *voice;

    for (voice = owner->voices; voice != NULL; voice = voice->next) {
        if (voice->active != 0 && (voice->paused != 0) != pause) {
            voice->paused = pause;
            nw_snd_internal_driver_Voice_Pause(voice->handle, pause);
        }
    }
}

} /* extern "C" */
