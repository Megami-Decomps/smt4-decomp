#include "shard/DriverVoice.h"

extern "C" {

/* Sets the pitch and marks it dirty, if it changed. */
void nw_snd_internal_driver_Voice_SetPitch(DriverVoice *voice, f32 value)
{
    if (voice->pitch != value) {
        voice->pitch = value;
        voice->dirtyFlags = voice->dirtyFlags | 4;
    }
}

} /* extern "C" */
