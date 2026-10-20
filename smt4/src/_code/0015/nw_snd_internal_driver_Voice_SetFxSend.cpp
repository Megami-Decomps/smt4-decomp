/* Sets one FX-bus send level (clamped to be non-negative), flagging it for update only when it changes. */
#include "nw/snd/Voice.h"

extern "C" {

void nw_snd_internal_driver_Voice_SetFxSend(nw_snd_internal_driver_Voice *voice, s32 bus, f32 send)
{
    if (send < 0.0f) {
        send = 0.0f;
    }
    if (voice->fxSend[bus] != send) {
        voice->fxSend[bus] = send;
        voice->updateFlags = voice->updateFlags | VOICE_UPDATE_FX_SEND;
    }
}

} /* extern "C" */
