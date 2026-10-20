#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndOptions g_asdSoundOptions;

s32 asdSoundGetOption2(void)
{
    return g_asdSoundOptions.option2;
}

} /* extern "C" */
