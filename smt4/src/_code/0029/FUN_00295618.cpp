#include "shard/GameGlobals.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {


u8 FUN_00295618(void)
{
    return g_gameGlobals.data->activeState == 3;
}

} /* extern "C" */
