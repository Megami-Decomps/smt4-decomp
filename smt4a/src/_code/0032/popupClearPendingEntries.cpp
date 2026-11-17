#include "map/mapDepart.h"
#include "game/GameStateA.h"

struct PopupFlags {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u8 requested;
};

extern "C" {
extern PopupFlags *g_popupState;
void *sysMemClear(void *memory, u32 size);

/* Clears the popup's request flag and the game state's pending entry list. */
void popupClearPendingEntries(void) {
    GameStateA *state = &g_gameState;
    g_popupState->requested = 0;
    state->unk308 = 0;
    sysMemClear(state->pendingEntryIds, 0x80);
}
}
