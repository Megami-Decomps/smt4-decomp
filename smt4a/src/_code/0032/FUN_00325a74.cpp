/* NON_MATCHING: compiler loads the popup global before the game-state global, changing instruction order. */
#include "common.h"
extern "C" {
extern struct { u8 unk00[0x24]; u8 requested; } *g_gameState;
extern struct { u8 unk00[0x308]; u32 value; u8 unk30C[4]; u8 text[0x80]; } g_popupState;
void *sysMemClear(void *memory, u32 size);
/* Resets popup contents and clears the game-state request flag. */
void FUN_00325a74(void) {
    g_gameState->requested = 0;
    g_popupState.value = 0;
    sysMemClear(g_popupState.text, 0x80);
}
}
