#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
bool nw_snd_SoundArchive_IsAvailable(AsdSoundSystemA* soundSystem);
void FUN_0015fe40(AsdSoundSystemA* soundSystem, u32 soundId);

/* Plays sound `soundId` when the sound archive is open. */
void soundPlayIfArchiveAvailable(u32 soundId)
{
    AsdSoundSystemA* soundSystem = &g_asdSoundSystem;

    if (nw_snd_SoundArchive_IsAvailable(soundSystem)) {
        FUN_0015fe40(soundSystem, soundId);
    }
}
}
