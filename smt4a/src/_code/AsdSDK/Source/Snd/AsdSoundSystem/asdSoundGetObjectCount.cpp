#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndStatusApoc g_asdSoundStatus;

u32 asdSoundGetObjectCount(void)
{
    u32 value = 0;

    if (g_asdSoundStatus.ready != 0) {
        value = g_asdSoundStatus.objectCount;
    }
    return value;
}

} /* extern "C" */
