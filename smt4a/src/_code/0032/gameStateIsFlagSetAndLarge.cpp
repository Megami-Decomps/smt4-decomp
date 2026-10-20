#include "map/mapDepart.h"

extern "C" {

extern GameStateA g_gameState;

bool gameStateIsFlagSetAndLarge(void)
{
    if (g_gameState.unk574 == 0 || g_gameState.unk578 < 200) {
        return false;
    }
    return true;
}

} /* extern "C" */
