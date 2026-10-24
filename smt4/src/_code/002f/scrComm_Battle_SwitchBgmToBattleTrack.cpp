#include "common.h"

extern "C" {

void *btlGetMainState(void);
void bgmSwitchCurrent(void *battle, u32 bgm);

/* Script command: switches the current BGM of the battle to 0x0100003A. */
u32 scrComm_Battle_SwitchBgmToBattleTrack(void)
{
    bgmSwitchCurrent(btlGetMainState(), 0x0100003A);
    return 1;
}

} /* extern "C" */
