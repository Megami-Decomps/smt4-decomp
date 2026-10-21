/* NON_MATCHING: retail emits 'push {r4, r5, r6, lr}'; compiler emits 'push {r4, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
extern u8 g_asdSoundSystem;
s32 nw_snd_SoundArchive_IsAvailable(void *);
s32 FUN_00507c74(void *,u32);
s32 FUN_002bf09c(u32 value) {
    if(!nw_snd_SoundArchive_IsAvailable(&g_asdSoundSystem))return -1;
    return FUN_00507c74(&g_asdSoundSystem,value);
}
}
