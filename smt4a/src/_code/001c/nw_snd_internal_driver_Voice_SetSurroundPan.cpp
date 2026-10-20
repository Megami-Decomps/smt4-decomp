#include "shard/DriverVoice.h"

extern "C" {

/* Sets the surround pan and marks it dirty, if it changed. */
void nw_snd_internal_driver_Voice_SetSurroundPan(DriverVoice *voice, f32 value)
{
    if (voice->surroundPan != value) {
        voice->surroundPan = value;
        voice->dirtyFlags = voice->dirtyFlags | 8;
    }
}

} /* extern "C" */
