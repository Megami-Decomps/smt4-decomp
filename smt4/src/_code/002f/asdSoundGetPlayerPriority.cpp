#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "nw/snd/SoundArchiveQuery.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
s32 FUN_002bf684(void *archive);
s32 FUN_0014d3fc(void *archive, u32 soundId, SoundParams *parameters);

// Return a sound's configured player priority, or -1 when unavailable.
s32 asdSoundGetPlayerPriority(u32 soundId)
{
    AsdSoundSystem *sound = &g_asdSound;
    SoundParams parameters;
    s32 priority = -1;
    if (FUN_002bf684(sound) != 0 &&
        FUN_0014d3fc(sound, soundId, &parameters) != 0) {
        priority = parameters.playerPriority;
    }
    return priority;
}
}
