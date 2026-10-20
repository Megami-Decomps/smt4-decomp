#include "shard/DriverVoice.h"

extern "C" {

/* Sets the pan and marks it dirty, if it changed. */
void nw_snd_internal_driver_Voice_SetPan(DriverVoice *voice, f32 value)
{
    if (voice->pan != value) {
        voice->pan = value;
        voice->dirtyFlags = voice->dirtyFlags | 8;
    }
}

} /* extern "C" */
