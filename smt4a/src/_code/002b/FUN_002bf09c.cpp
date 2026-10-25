#include "common.h"
extern "C" {
extern u8 g_asdSoundSystem;
s32 nw_snd_SoundArchive_IsAvailable(void *);
s32 FUN_00507c74(void *,u32);
s32 FUN_002bf09c(u32 value) {
    void *soundSystem = &g_asdSoundSystem;

    if (!nw_snd_SoundArchive_IsAvailable(soundSystem)) {
        return -1;
    }
    return FUN_00507c74(soundSystem, value);
}
}
