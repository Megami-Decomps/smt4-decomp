#include "map/mapDepart.h"
extern "C" {
extern GameStateA g_gameState;
/* Advances the counter, capped at six, in the four supported game modes. */
void gameStateAdvanceModeCounter(void)
{
    if (g_gameState.mode == 28 || g_gameState.mode == 29 ||
        g_gameState.mode == 30 || g_gameState.mode == 31) {
        ++g_gameState.modeCounter;
        if (g_gameState.modeCounter > 6)
            g_gameState.modeCounter = 6;
    }
}
}
