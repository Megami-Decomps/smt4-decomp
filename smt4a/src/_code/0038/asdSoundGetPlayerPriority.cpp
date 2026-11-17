#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"
#include "nw/snd/SoundArchiveQuery.h"

extern "C" {
s32 nw_snd_SoundArchive_IsAvailable(void *archive);
s32 soundArchiveReadSoundInfoWithExtension(void *archive, u32 soundId, SoundParams *parameters);

// Return a sound's configured player priority, or -1 when unavailable.
s32 asdSoundGetPlayerPriority(u32 soundId)
{
    AsdSoundSystemA *sound = &g_asdSoundSystem;
    SoundParams parameters;
    s32 priority = -1;
    if (nw_snd_SoundArchive_IsAvailable(sound) != 0 &&
        soundArchiveReadSoundInfoWithExtension(sound, soundId, &parameters) != 0) {
        priority = parameters.playerPriority;
    }
    return priority;
}
}
