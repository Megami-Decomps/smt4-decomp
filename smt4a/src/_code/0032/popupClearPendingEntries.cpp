#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "map/PopupStateA.h"

extern "C" {
void *sysMemClear(void *memory, u32 size);

/* Clears the popup's request flag and the game state's pending entry list. */
void popupClearPendingEntries(void) {
    GameStateA *state = &g_gameState;
    g_popupState->requested = 0;
    state->unk308 = 0;
    sysMemClear(state->pendingEntryIds, 0x80);
}
}
