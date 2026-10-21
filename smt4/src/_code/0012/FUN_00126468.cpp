/* NON_MATCHING: instruction selection/order differs: retail mov r0, #0; compiler ldrb r1, [r0, #21]. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {

extern AsdSndStatus g_asdSoundStatus;

/* Returns the current sound count only while sound is ready. */
u32 FUN_00126468(void)
{
    if (g_asdSoundStatus.unk15 == 0) {
        return 0;
    }
    return g_asdSoundStatus.objectCount;
}

} /* extern "C" */
