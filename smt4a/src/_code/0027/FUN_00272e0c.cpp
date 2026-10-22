#include "battle/btlView.h"

extern "C" {

extern BattleViewState g_battleViewState;

s32 gameFlagIsSet(u32 flag);

/* Stores `value` and clears the pending word when game flag 0x4D0 is set. */
void FUN_00272e0c(u32 value)
{
    if (gameFlagIsSet(0x4D0)) {
        g_battleViewState.unk2c = value;
        g_battleViewState.pending = 0;
    }
}

} /* extern "C" */
