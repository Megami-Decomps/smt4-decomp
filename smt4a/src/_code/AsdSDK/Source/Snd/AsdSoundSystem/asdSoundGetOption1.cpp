#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndOptions g_asdSoundOptions;

s32 asdSoundGetOption1(void)
{
    return g_asdSoundOptions.option1;
}

} /* extern "C" */
