#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndOptions g_asdSoundOptions;

s32 asdSoundGetOption0(void)
{
    return g_asdSoundOptions.option0;
}

} /* extern "C" */
