#include "shard/DriverVoice.h"

extern "C" {

/* Sets the low-pass filter frequency and marks it dirty, if it changed. */
void nw_snd_internal_driver_Voice_SetLpfFreq(DriverVoice *voice, f32 value)
{
    if (voice->lpfFreq != value) {
        voice->lpfFreq = value;
        voice->dirtyFlags = voice->dirtyFlags | 0x10;
    }
}

} /* extern "C" */
