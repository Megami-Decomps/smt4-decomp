#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

void bgmSwitchCurrent(void *battle, u32 bgm);

/* Script command: switches the current BGM of the battle to 0x0100003A. */
u32 scrComm_Battle_SwitchBgmToBattleTrack(void)
{
    bgmSwitchCurrent(static_cast<void *>(btlGetMainState()), 0x0100003A);
    return 1;
}

} /* extern "C" */
