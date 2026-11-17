#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
extern AsdSndStatusApoc g_asdSoundStatus;

s32 FUN_00148f28(u8 *player);
void FUN_00143d00(void);
void FUN_00147c10(u8 *player);

void FUN_00137e5c(void)
{
    if (FUN_00148f28(g_asdSoundSystem.player) != 0) {
        FUN_00143d00();
        FUN_00147c10(g_asdSoundSystem.player);
    }
    if (g_asdSoundStatus.ready != 0) {
        g_asdSoundStatus.stepPending = 1;
    }
}

} /* extern "C" */
