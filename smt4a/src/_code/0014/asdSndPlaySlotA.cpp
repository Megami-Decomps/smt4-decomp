/* NON_MATCHING: free-slot search now unrolled as retail; retail keeps &g_asdSoundSystem in saved registers (r7/sl) for both the slot-pointer load and the archive calls, ours reloads the pool word, and the final -1 exit differs. */
#include "sound/AuxiliaryPlayback.h"
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

static inline s32 secondaryFindFreeSoundSlot(AsdSndSlotA *slots)
{
    s32 index = -1;
    if (!slots->handles[0])
        index = 0;
    else if (!slots->handles[1])
        index = 1;
    else if (!slots->handles[2])
        index = 2;
    else if (!slots->handles[3])
        index = 3;
    return index;
}

extern "C" {
s32 nw_snd_SoundArchive_IsAvailable(void *archive);
u32 nw_snd_SoundArchive_GetSoundType(void *archive, u32 id);
u32 asdSoundEnsureArchiveItemLoaded(u32 id);
u32 nw_snd_SoundStartable_StartSound(void *player, AuxiliarySoundHandle *handle, u32 id, u32 flags);

// Play a wave sound or an allowed streamed sound in the first free slot, with a bounded volume fade.
s32 asdSndPlaySlotA(u32 id, u32 level, u32 frames)
{
    AsdSndSlotA *slots = g_asdSoundSystem.currentSlotA;
    if (!slots)
        return -1;
    s32 index = secondaryFindFreeSoundSlot(slots);
    if (index == -1)
        return -1;
    if (!nw_snd_SoundArchive_IsAvailable(&g_asdSoundSystem) ||
        !nw_snd_SoundArchive_GetSoundType(&g_asdSoundSystem, id))
        return index;
    u32 type = nw_snd_SoundArchive_GetSoundType(&g_asdSoundSystem, id);
    if (slots->hasHeap) {
        if (type == 3) {
            if (!asdSoundEnsureArchiveItemLoaded(id))
                return index;
        } else if (type != 2) {
            return index;
        }
    } else if (type != 2) {
        return index;
    }
    AuxiliarySoundHandle *handle = (AuxiliarySoundHandle *)&slots->handles[index];
    bool started = (u8)nw_snd_SoundStartable_StartSound(g_asdSoundSystem.player, handle, id, 0) == 0;
    if (level > 127)
        level = 127;
    f32 volume = 0.0f;
    if (level != 0) {
        volume = 1.0f + ((f32)level - 64.0f) * (2.0f / 127.0f);
        if (volume > 2.0f)
            volume = 2.0f;
    }
    handle->setVolume(0.0f, 0);
    handle->setVolume(volume, frames);
    if (!started)
        index = -1;
    return index;
}
}
