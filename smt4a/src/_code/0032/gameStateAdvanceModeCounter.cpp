#include "map/mapDepart.h"
#include "game/GameStateA.h"
extern "C" {
/* Advances the counter, capped at six, in the four supported game modes. */
void gameStateAdvanceModeCounter(void)
{
    if (g_gameState.mapId == 28 || g_gameState.mapId == 29 ||
        g_gameState.mapId == 30 || g_gameState.mapId == 31) {
        ++g_gameState.modeCounter;
        if (g_gameState.modeCounter > 6)
            g_gameState.modeCounter = 6;
    }
}
}
