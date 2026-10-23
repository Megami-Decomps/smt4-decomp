/* NON_MATCHING: global-base reuse, saved float/register allocation, handle subobject bases and parameter scheduling differ. */
#include "sound/AuxiliaryPlayback.h"
#include "sound/SoundHandlePlayback.h"

static inline s32 auxiliaryFindFreeSlot16(AuxiliarySoundSlots16 *slots)
{
    for (s32 index = 0; index < 16; ++index) {
        if (!slots->handles[index].sound)
            return index;
    }
    return -1;
}

extern "C" {
extern AsdSoundSystem g_asdSoundSystem;
s32 nw_snd_SoundArchive_IsAvailable(void *archive);
u32 nw_snd_SoundArchive_GetSoundType(void *archive, u32 id);
s32 FUN_00151340(u32 id);
u32 FUN_0015e2bc(void *player, AuxiliarySoundHandle *handle, u32 id, u32 flags);

// Start a sound in the first free auxiliary slot, reset parameters and apply the requested volume fade/pitch/pan.
s32 FUN_00143b58(u32 id, u32 level, u32 frames, f32 pitch, f32 pan)
{
    AuxiliarySoundSlots16 *slots = ((AuxiliaryPlaybackSystemViewA *)&g_asdSoundSystem)->slots16;
    if (!slots)
        return -1;
    s32 index = auxiliaryFindFreeSlot16(slots);
    if (index == -1)
        return -1;
    if (nw_snd_SoundArchive_IsAvailable(&g_asdSoundSystem) &&
        nw_snd_SoundArchive_GetSoundType(&g_asdSoundSystem, id)) {
        if (!FUN_00151340(id))
            return -1;
        AuxiliarySoundHandle *handle = &slots->handles[index];
        bool started = (u8)FUN_0015e2bc(((SoundHandlePlaybackStateA *)&g_asdSoundSystem)->archivePlayer, handle, id, 0) == 0;
        f32 volume = 0.0f;
        if (level != 0) {
            volume = 1.0f + ((f32)level - 64.0f) * (2.0f / 127.0f);
            if (volume > 2.0f)
                volume = 2.0f;
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
