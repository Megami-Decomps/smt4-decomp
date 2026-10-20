/* Sets the voice volume (clamped to be non-negative), flagging it for update only when it changes. */
#include "nw/snd/Voice.h"

extern "C" {

void nw_snd_internal_driver_Voice_SetVolume(nw_snd_internal_driver_Voice *voice, f32 volume)
{
    if (volume < 0.0f) {
        volume = 0.0f;
    }
    if (voice->volume != volume) {
        voice->volume = volume;
        voice->updateFlags = voice->updateFlags | VOICE_UPDATE_VOLUME;
    }
}

} /* extern "C" */
