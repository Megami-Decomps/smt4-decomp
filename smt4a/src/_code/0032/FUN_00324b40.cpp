#include "battle/btlView.h"
extern "C" {
s32 gameFlagIsSet(u32 flag);
extern BattleViewState g_battleViewState;
/* Applies the alternate mode when game flag 0x4d0 is enabled. */
void FUN_00324b40(void) {
    if (gameFlagIsSet(0x4D0)) {
        BattleViewState *view = &g_battleViewState;
        view->unkAC = 0x1E;
    }
}
}
