/* NON_MATCHING: retail does not reuse the first load of the flag word for the clear: it reloads it (ldr r2, [r0]; bic; str) after the test. */
#include "common.h"

extern "C" {

typedef struct BtlMainState {
    /* 0x0000 */ u8 unk0000[0x4968];
    /* 0x4968 */ u16 cursorX;
    /* 0x496A */ u16 cursorY;
    /* 0x496C */ u8 unk496C[4];
    /* 0x4970 */ u16 targetX;
    /* 0x4972 */ u16 targetY;
} BtlMainState;

extern u32 g_btlUiBlock; /* 0x439ca8 */
extern BtlMainState *btlGetMainState(void);
extern int FUN_00254f58(BtlMainState *state);
extern int FUN_00338060(BtlMainState *state, int arg);
extern int btlUiInvalidateIndexedEntries(u32 block);

/* Copies the target cursor position to the current one and refreshes the battle UI. */
u32 scrComm_BattleUI_SyncCursorPosition(void)
{
    BtlMainState *state = btlGetMainState();
    u32 *flags;

    state->cursorX = state->targetX;
    state->cursorY = state->targetY;
    btlUiInvalidateIndexedEntries(g_btlUiBlock);
    flags = (u32 *)((u8 *)state + 0x44A0);
    if ((*flags & 0x1000) != 0) {
        *flags &= ~0x1000;
        FUN_00254f58(state);
    }
    FUN_00338060(state, 1);
    return 1;
}

} /* extern "C" */
