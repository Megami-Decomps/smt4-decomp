#include "map/mapDepart.h"

extern "C" {

extern GameState g_gameState;

bool gameStateIsFlagSetAndLarge(void)
{
    if (g_gameState.unk2F8 == 0 || g_gameState.savedMapId < 200) {
        return false;
    }
    return true;
}

} /* extern "C" */
