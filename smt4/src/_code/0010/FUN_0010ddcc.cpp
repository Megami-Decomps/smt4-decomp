/* NON_MATCHING: the result register, the second selector check (FUN_0010c5b0's slot getter) and the volume steps
 * match; retail loads &g_asdSound into r7 at entry and again for the archive calls, keeps the stop call's zero
 * argument unpredicated and branches past the level-0 test after clamping to 127. */
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

/* Starts `sound` in one-sound slot `slotIndex` (0 or 1), replacing what it played, and fades it to `level`. */
u32 FUN_0010ddcc(u32 slotIndex, s32 sound, u32 level, s32 frames)
{
    u32 result = 0;
    if ((slotIndex == 0 || slotIndex == 1) && nw_snd_SoundArchive_IsAvailable(&g_asdSound) &&
        nw_snd_SoundArchive_GetSoundType(&g_asdSound, sound)) {
        AsdSndSlotC *slot = soundOutputC(slotIndex);
        if (slot != NULL) {
            if (slot->handle)
                basicSoundStopOrFadeOut(slot->handle, 0);
            if (!(u8)nw_snd_SoundStartable_StartSound(g_asdSound.player, &slot->handle, sound, NULL)) {
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
