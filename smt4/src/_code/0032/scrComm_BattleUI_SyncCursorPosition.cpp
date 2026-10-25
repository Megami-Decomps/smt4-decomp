/* NON_MATCHING: retail does not reuse the first load of the flag word for the clear: it reloads it (ldr r2, [r0]; bic; str) after the test. */
#include "common.h"
#include "battle/BtlMainAccess.h"

extern "C" {

extern u32 g_btlUiBlock; /* 0x439ca8 */
extern int FUN_00254f58(BtlMainState *state);
extern int FUN_00338060(BtlMainState *state, int arg);
extern int btlUiInvalidateIndexedEntries(u32 block);

/* Copies the target cursor position to the current one and refreshes the battle UI. */
u32 scrComm_BattleUI_SyncCursorPosition(void)
{
    BtlMainState *state = btlGetMainState();

    state->menuCursor.x = state->menuCursor.targetX;
    state->menuCursor.y = state->menuCursor.targetY;
    btlUiInvalidateIndexedEntries(g_btlUiBlock);
    if ((state->battleFlags & 0x1000) != 0) {
        state->battleFlags &= ~0x1000;
        FUN_00254f58(state);
    }
    FUN_00338060(state, 1);
    return 1;
}

} /* extern "C" */
