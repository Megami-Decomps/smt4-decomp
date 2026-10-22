/* NON_MATCHING: retail retains the settings address in r0; compiler uses r1 for the conditional store. */
#include "battle/btlView.h"
extern "C" {
s32 gameFlagIsSet(u32 flag);
extern BattleViewState g_battleViewState;
/* Applies the alternate mode when game flag 0x4d0 is enabled. */
void FUN_00324b40(void) {
    if (gameFlagIsSet(0x4D0))
        g_battleViewState.unkAC = 0x1E;
}
}
