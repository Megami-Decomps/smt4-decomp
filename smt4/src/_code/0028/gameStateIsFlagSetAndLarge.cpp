#include "map/mapDepart.h"
#include "game/GameState.h"

extern "C" {


bool gameStateIsFlagSetAndLarge(void)
{
    if (g_gameState.map.savedLocationSet == 0 || g_gameState.savedMapId < 200) {
        return false;
    }
    return true;
}

} /* extern "C" */
