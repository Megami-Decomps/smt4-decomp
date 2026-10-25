#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {

extern AsdSndStatus g_asdSoundStatus;

/* Returns the current sound count only while sound is ready. */
u32 FUN_00126468(void)
{
    u32 count = 0;

    if (g_asdSoundStatus.unk15 != 0) {
        count = g_asdSoundStatus.objectCount;
    }
    return count;
}

} /* extern "C" */
