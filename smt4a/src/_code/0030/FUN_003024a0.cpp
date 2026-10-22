#include "battle/btlView.h"

extern "C" {

extern BattleViewState g_battleViewState;

s32 gameFlagIsSet(u32 flag);

/* Stores `value` in the byte at 0xA0 of the global at 0x5F0C7C when flag 0x4D0 is set. */
void FUN_003024a0(u8 value)
{
    s32 flag;

    flag = gameFlagIsSet(0x4D0);
    if (flag != 0) {
        g_battleViewState.unkA0 = value;
    }
}

} /* extern "C" */
