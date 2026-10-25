#include "common.h"

struct SoundSystem;

extern "C" {
extern SoundSystem g_asdSoundSystem;

bool nw_snd_SoundArchive_IsAvailable(SoundSystem* soundSystem);
void FUN_0015fe40(SoundSystem* soundSystem, u32 soundId);

void soundPlayIfArchiveAvailable(u32 soundId)
{
    SoundSystem* soundSystem = &g_asdSoundSystem;

    if (nw_snd_SoundArchive_IsAvailable(soundSystem)) {
        FUN_0015fe40(soundSystem, soundId);
    }
}
}
