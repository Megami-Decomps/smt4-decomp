/* NON_MATCHING: 54 lines: only register numbering differs (retail keeps the volume in r5, the slot in r6 and the index
 * in r4, testing the slot with movs; here they are r6, r4 and r5), plus the sense of the branch after the archive
 * item check. */
#include "sound/AuxiliaryPlayback.h"
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
s32 nw_snd_SoundArchive_IsAvailable(void *archive);
u32 nw_snd_SoundArchive_GetSoundType(void *archive, u32 id);
u32 asdSoundEnsureArchiveItemLoaded(u32 id);
u32 nw_snd_SoundStartable_StartSound(void *player, AuxiliarySoundHandle *handle, u32 id, u32 flags);

/* Whether the sound archive is open and has a sound `id`. */
static __inline bool asdSndSoundExists(u32 id)
{
    AsdSoundSystemA *sound = &g_asdSoundSystem;
    return nw_snd_SoundArchive_IsAvailable(sound) && nw_snd_SoundArchive_GetSoundType(sound, id) != 0;
}

/* Plays sound `id` in the current A slot's first free handle at `volume` (0-127, 64 = unity) faded in over
 * `fadeFrames`; streamed sounds need the slot's heap. Returns the handle index, or -1 when the sound did not start. */
s32 asdSndPlaySlotA(u32 id, u32 volume, u32 fadeFrames)
{
    AsdSoundSystemA *sound = &g_asdSoundSystem;
    AsdSndSlotA *slot = g_asdSoundSystem.currentSlotA;
    if (!slot) {
        return -1;
    }
    s32 index = -1;
    if (!slot->handles[0])
        index = 0;
    else if (!slot->handles[1])
        index = 1;
    else if (!slot->handles[2])
        index = 2;
    else if (!slot->handles[3])
        index = 3;
    if (index == -1)
        return index;
    if (!asdSndSoundExists(id)) {
        return index;
    }
    u32 type = nw_snd_SoundArchive_GetSoundType(sound, id);
    if (slot->hasHeap) {
        if (type == 3) {
            if (!asdSoundEnsureArchiveItemLoaded(id)) {
                return index;
            }
        } else if (type != 2) {
            return index;
        }
    } else {
        if (type == 3) {
            return index;
        }
        if (type != 2) {
            return index;
        }
    }
    AuxiliarySoundHandle *handle = (AuxiliarySoundHandle *)&slot->handles[index];
    bool success = (u8)nw_snd_SoundStartable_StartSound(sound->player, handle, id, 0) == 0;
    if (volume > 127) {
        volume = 127;
    }
    f32 gain;
    if (volume) {
        gain = ((f32)volume - 64.0f) * 0.015748031f + 1.0f;
        if (gain > 2.0f) {
            gain = 2.0f;
        }
    } else {
        gain = 0.0f;
    }
    ((AuxiliarySoundHandle *)&slot->handles[index])->setVolume(0.0f, 0);
    ((AuxiliarySoundHandle *)&slot->handles[index])->setVolume(gain, fadeFrames);
    if (!success) {
        index = -1;
    }
    return index;
}
}
