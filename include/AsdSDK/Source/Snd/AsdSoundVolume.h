#ifndef ASDSDK_SOURCE_SND_ASDSOUNDVOLUME_H
#define ASDSDK_SOURCE_SND_ASDSOUNDVOLUME_H

#include "common.h"

extern "C" void nw_snd_internal_BasicSound_SetVolume(s32 sound, s32 frames, f32 volume);
/* BasicSound's pitch and pan setters store one float each (armlink inlined them: vstr s0, [r0, #0xb8] / #0xb4). */
extern "C" void nw_snd_internal_BasicSound_SetPitch(s32 sound, f32 pitch);
extern "C" void nw_snd_internal_BasicSound_SetPan(s32 sound, f32 pan);

/* The sound handle accepts volume changes even when no sound is attached. */
static __inline void asdSoundHandleSetVolume(s32 sound, s32 frames, f32 volume)
{
    if (sound != 0) {
        nw_snd_internal_BasicSound_SetVolume(sound, frames, volume);
    }
}

/* nw::snd SoundHandle::SetPitch: only an attached sound takes it. */
static __inline void asdSoundHandleSetPitch(s32 sound, f32 pitch)
{
    if (sound != 0) {
        nw_snd_internal_BasicSound_SetPitch(sound, pitch);
    }
}

/* nw::snd SoundHandle::SetPan: only an attached sound takes it. */
static __inline void asdSoundHandleSetPan(s32 sound, f32 pan)
{
    if (sound != 0) {
        nw_snd_internal_BasicSound_SetPan(sound, pan);
    }
}

#endif
