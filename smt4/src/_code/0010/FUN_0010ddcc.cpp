/* NON_MATCHING: 53 lines: the three &g_asdSound literals (entry, archive check, output slot) now match; retail keeps the
 * entry one in r7 (here r8), keeps the stop call's zero argument unpredicated and branches past the level-0 test after
 * clamping to 127. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Snd/AsdSoundVolume.h"
#include "code/Code002b.h"
extern "C" {
extern AsdSoundSystem g_asdSound;
s32 nw_snd_SoundArchive_GetSoundType(AsdSoundSystem *system, s32 sound);
void basicSoundStopOrFadeOut(s32 handle, s32 frames);
u32 nw_snd_SoundStartable_StartSound(void *player, s32 *handle, s32 sound, void *parameters);

/* Output slot `index` (0 or 1), or NULL for any other index. */
static __inline AsdSndSlotC *soundOutputC(u32 index)
{
    if (index == 0 || index == 1) {
        return g_asdSound.outputC[index];
    }
    return NULL;
}

/* Whether the sound archive is open and has a sound `id`. */
static __inline bool asdSndSoundExists(s32 id)
{
    AsdSoundSystem *sound = &g_asdSound;
    return nw_snd_SoundArchive_IsAvailable(sound) && nw_snd_SoundArchive_GetSoundType(sound, id) != 0;
}

/* Starts `sound` in one-sound slot `slotIndex` (0 or 1), replacing what it played, and fades it to `level`. */
u32 FUN_0010ddcc(u32 slotIndex, s32 sound, u32 level, s32 frames)
{
    AsdSoundSystem *system = &g_asdSound;
    u32 result = 0;
    if ((slotIndex == 0 || slotIndex == 1) && asdSndSoundExists(sound)) {
        AsdSndSlotC *slot = soundOutputC(slotIndex);
        if (slot != NULL) {
            if (slot->handle)
                basicSoundStopOrFadeOut(slot->handle, 0);
            if (!(u8)nw_snd_SoundStartable_StartSound(system->player, &slot->handle, sound, NULL)) {
                result = 1;
                asdSoundHandleSetVolume(slot->handle, 0, 0.0f);
                slot->volume = (u8)level;
                if (level > 127)
                    slot->volume = 127;
                f32 volume;
                if (level != 0) {
                    volume = 1.0f + ((f32)(u32)slot->volume - 64.0f) * (2.0f / 127.0f);
                    if (volume > 2.0f)
                        volume = 2.0f;
                } else {
                    volume = 0.0f;
                }
                asdSoundHandleSetVolume(slot->handle, frames, volume);
                slot->unk08 = sound;
                slot->flag |= 2;
            }
        }
    }
    return result;
}
}
