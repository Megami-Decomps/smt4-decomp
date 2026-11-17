#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"
extern "C" {
s32 nw_snd_SoundArchive_IsAvailable(void *);
s32 FUN_00507c74(void *,u32);
s32 FUN_002bf09c(u32 value) {
    AsdSoundSystemA *soundSystem = &g_asdSoundSystem;

    if (!nw_snd_SoundArchive_IsAvailable(soundSystem)) {
        return -1;
    }
    return FUN_00507c74(soundSystem, value);
}
}
