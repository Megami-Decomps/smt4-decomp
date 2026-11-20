/* NON_MATCHING: global-base reuse, saved float/register allocation, handle subobject bases and parameter scheduling differ. */
#include "sound/AuxiliaryPlayback.h"
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

static inline s32 auxiliaryFindFreeSlot16(AsdSndSlotBA *slots)
{
    for (s32 index = 0; index < 16; ++index) {
        if (!slots->handles[index])
            return index;
    }
    return -1;
}

extern "C" {
s32 nw_snd_SoundArchive_IsAvailable(void *archive);
u32 nw_snd_SoundArchive_GetSoundType(void *archive, u32 id);
s32 asdSndEnsureCurrentSlotData(u32 id);
u32 nw_snd_SoundStartable_StartSound(void *player, AuxiliarySoundHandle *handle, u32 id, u32 flags);

// Start a sound in the first free auxiliary slot, reset parameters and apply the requested volume fade/pitch/pan.
s32 asdSndPlaySlotB(u32 id, u32 level, u32 frames, f32 pitch, f32 pan)
{
    AsdSndSlotBA *slots = g_asdSoundSystem.currentSlotB;
    if (!slots)
        return -1;
    s32 index = auxiliaryFindFreeSlot16(slots);
    if (index == -1)
        return -1;
    if (nw_snd_SoundArchive_IsAvailable(&g_asdSoundSystem) &&
        nw_snd_SoundArchive_GetSoundType(&g_asdSoundSystem, id)) {
        if (!asdSndEnsureCurrentSlotData(id))
            return -1;
        AuxiliarySoundHandle *handle = (AuxiliarySoundHandle *)&slots->handles[index];
        bool started = (u8)nw_snd_SoundStartable_StartSound(g_asdSoundSystem.player, handle, id, 0) == 0;
        f32 volume = 0.0f;
        if (level != 0) {
            volume = 1.0f + ((f32)level - 64.0f) * (2.0f / 127.0f);
            volume = volume > 2.0f ? 2.0f : volume;
        }
        handle->setVolume(0.0f, 0);
        handle->setPitch(1.0f);
        handle->setPan(0.0f);
        handle->setVolume(volume, frames);
        handle->setPitch(pitch);
        handle->setPan(pan);
        if (!started)
            return -1;
    }
    return index;
}
}
