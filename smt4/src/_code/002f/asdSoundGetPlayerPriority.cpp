#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "nw/snd/SoundArchiveQuery.h"
#include "sound/SoundPlayerPriority.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
s32 nw_snd_SoundArchive_IsAvailable(void *archive);
s32 nw_snd_SoundArchive_ReadSoundInfo(void *archive, u32 soundId, SoundParams *parameters);

// Return a sound's configured player priority, or -1 when unavailable.
s32 asdSoundGetPlayerPriority(u32 soundId)
{
    AsdSoundSystem *sound = &g_asdSound;
    SoundParams parameters;
    s32 priority = -1;
    if (nw_snd_SoundArchive_IsAvailable(sound) != 0 &&
        nw_snd_SoundArchive_ReadSoundInfo(sound, soundId, &parameters) != 0) {
        priority = parameters.playerPriority;
    }
    return priority;
}
}
