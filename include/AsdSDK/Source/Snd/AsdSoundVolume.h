#ifndef ASDSDK_SOURCE_SND_ASDSOUNDVOLUME_H
#define ASDSDK_SOURCE_SND_ASDSOUNDVOLUME_H

#include "common.h"

extern "C" void nw_snd_internal_BasicSound_SetVolume(s32 sound, s32 frames, f32 volume);

/* The sound handle accepts volume changes even when no sound is attached. */
static __inline void asdSoundHandleSetVolume(s32 sound, s32 frames, f32 volume)
{
    if (sound != 0) {
        nw_snd_internal_BasicSound_SetVolume(sound, frames, volume);
    }
}

#endif
