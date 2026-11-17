#include "status/StatusDown.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {

u32 FUN_00295408(void)
{
    return g_statusDown->unk53C;
}

} /* extern "C" */
