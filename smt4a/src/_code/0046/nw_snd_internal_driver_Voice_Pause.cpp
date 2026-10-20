/* Pauses or resumes the voice, flagging it for update only when the state changes. */
#include "nw/snd/Voice.h"

extern "C" {

void nw_snd_internal_driver_Voice_Pause(nw_snd_internal_driver_Voice *voice, bool pause)
{
    if (voice->pause != pause) {
        voice->pause = pause;
        voice->updateFlags |= VOICE_UPDATE_PAUSE;
    }
}

} /* extern "C" */
