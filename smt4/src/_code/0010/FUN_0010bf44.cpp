/* NON_MATCHING: instruction selection/order differs: retail push {r4, r5, r6, lr}; compiler push {r4, lr}. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {

extern AsdSoundSystem g_asdSound;
extern s32 FUN_002bf684(AsdSoundSystem *sound);
extern void FUN_00133050(AsdSoundSystem *sound, u32 value);

/* Applies the archive parameter only while the sound system is available. */
void FUN_0010bf44(u32 value)
{
    if (FUN_002bf684(&g_asdSound) != 0) {
        FUN_00133050(&g_asdSound, value);
    }
}

} /* extern "C" */
