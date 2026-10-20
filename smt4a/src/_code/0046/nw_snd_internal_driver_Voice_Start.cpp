#include "shard/Shard0046.h"

extern "C" {

void nw_snd_internal_driver_Voice_Start(VoiceCtl *voice)
{
    voice->started = 1;
    voice->unk17 = 0;
    voice->flags = voice->flags | 1;
}

} /* extern "C" */
