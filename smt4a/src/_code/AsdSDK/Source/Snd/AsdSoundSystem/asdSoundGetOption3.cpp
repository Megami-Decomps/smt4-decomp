#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndOptions g_asdSoundOptions;

s32 asdSoundGetOption3(void)
{
    return g_asdSoundOptions.option3;
}

} /* extern "C" */
