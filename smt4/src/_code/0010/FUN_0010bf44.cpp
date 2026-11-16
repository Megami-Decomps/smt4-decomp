#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {

extern AsdSoundSystem g_asdSound;
extern s32 nw_snd_SoundArchive_IsAvailable(AsdSoundSystem *sound);
extern void FUN_00133050(AsdSoundSystem *sound, u32 value);

/* Applies the archive parameter only while the sound system is available. */
void FUN_0010bf44(u32 value)
{
    AsdSoundSystem *sound = &g_asdSound;
    if (nw_snd_SoundArchive_IsAvailable(sound) != 0) {
        FUN_00133050(sound, value);
    }
}

} /* extern "C" */
