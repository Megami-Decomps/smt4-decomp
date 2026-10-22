#include "battle/btlView.h"

extern "C" {

void FUN_00292268(void);
s32 gameFlagIsSet(u32 id);

extern BattleViewState g_battleViewState;

/* Runs FUN_00292268 when gameFlagIsSet(0x4D0) holds and the mode word is 1. */
void FUN_00243ea0(void)
{
    s32 flag;

    flag = gameFlagIsSet(0x4D0);
    if (((flag != 0) && (g_battleViewState.attachments.state != 0)) && (g_battleViewState.attachments.state == 1)) {
        FUN_00292268();
        return;
    }
}

} /* extern "C" */
