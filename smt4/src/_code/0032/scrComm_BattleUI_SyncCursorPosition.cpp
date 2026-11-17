#include "common.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlUiGlobal.h"

extern "C" {

extern int FUN_00254f58(BtlMainState *state);
extern int FUN_00338060(BtlMainState *state, int arg);
extern int btlUiInvalidateIndexedEntries(BtlUi *block);

/* Copies the target cursor position to the current one and refreshes the battle UI. */
u32 scrComm_BattleUI_SyncCursorPosition(void)
{
    BtlMainState *state = btlGetMainState();

    state->menuCursor.x = state->menuCursor.targetX;
    state->menuCursor.y = state->menuCursor.targetY;
    btlUiInvalidateIndexedEntries(g_btlUiBlock);
    if ((state->battleMask & 0x1000) != 0) {
        state->battleMask &= ~0x1000ULL;
        FUN_00254f58(state);
    }
    FUN_00338060(state, 1);
    return 1;
}

} /* extern "C" */
