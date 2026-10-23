/* NON_MATCHING: free-slot search remains a loop rather than unrolled tests; global-base reuse and float setup differ. */
#include "sound/AuxiliaryPlayback.h"
#include "sound/SoundHandlePlayback.h"

// This slot pointer lies beyond the IV sound-system prefix and beyond the auxiliary-pool view.
struct SecondaryPlaybackSystemViewA {
    u8 unk0000[0x1324];
    AsdSndSlotA *slots;
};
typedef char SecondaryPlaybackSystemSlotOffset[
    offsetof(SecondaryPlaybackSystemViewA, slots) == 0x1324 ? 1 : -1];

static inline s32 secondaryFindFreeSoundSlot(AsdSndSlotA *slots)
{
    for (s32 index = 0; index < 4; ++index) {
        if (!slots->handles[index])
            return index;
    }
    return -1;
}

extern "C" {
extern AsdSoundSystem g_asdSoundSystem;
s32 nw_snd_SoundArchive_IsAvailable(void *archive);
u32 nw_snd_SoundArchive_GetSoundType(void *archive, u32 id);
u32 asdSoundEnsureArchiveItemLoaded(u32 id);
u32 FUN_0015e2bc(void *player, AuxiliarySoundHandle *handle, u32 id, u32 flags);

// Play a wave sound or an allowed streamed sound in the first free slot, with a bounded volume fade.
s32 FUN_001448a8(u32 id, u32 level, u32 frames)
{
    AsdSndSlotA *slots = ((SecondaryPlaybackSystemViewA *)&g_asdSoundSystem)->slots;
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
    bool started = (u8)FUN_0015e2bc(((SoundHandlePlaybackStateA *)&g_asdSoundSystem)->archivePlayer, handle, id, 0) == 0;
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
