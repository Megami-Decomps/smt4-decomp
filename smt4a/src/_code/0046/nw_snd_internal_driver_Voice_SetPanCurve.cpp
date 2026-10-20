#include "shard/Shard0046.h"

extern "C" {

void nw_snd_internal_driver_Voice_SetPanCurve(VoiceCtl *voice, u32 curve)
{
    if (voice->panCurve != curve) {
        u32 flags = voice->flags;

        voice->panCurve = curve;
        voice->flags = flags | 8;
    }
}

} /* extern "C" */
