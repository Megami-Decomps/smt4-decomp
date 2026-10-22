#include "map/mapDepart.h"

extern "C" {

extern GameStateA g_gameState;

bool gameStateIsFlagSetAndLarge(void)
{
    if (g_gameState.transitionActive == 0 || (s32)g_gameState.sourceMap < 200) {
        return false;
    }
    return true;
}

} /* extern "C" */
