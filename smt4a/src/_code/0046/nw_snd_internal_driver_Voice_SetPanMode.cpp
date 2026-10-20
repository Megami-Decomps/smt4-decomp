#include "shard/Shard0046.h"

extern "C" {

void nw_snd_internal_driver_Voice_SetPanMode(VoiceCtl *voice, u8 mode)
{
    if (voice->panMode != mode) {
        voice->panMode = mode;
        voice->flags = voice->flags | 8;
    }
}

} /* extern "C" */
