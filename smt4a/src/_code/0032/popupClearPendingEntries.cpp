#include "map/mapDepart.h"

struct PopupFlags {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u8 requested;
};

extern "C" {
extern PopupFlags *g_popupState;
extern GameStateA g_gameState;
void *sysMemClear(void *memory, u32 size);

/* Clears the popup's request flag and the game state's pending entry list. */
void popupClearPendingEntries(void) {
    GameStateA *state = &g_gameState;
    g_popupState->requested = 0;
    state->mapFlags.unk308 = 0;
    sysMemClear(state->pendingEntries.ids, 0x80);
}
}
