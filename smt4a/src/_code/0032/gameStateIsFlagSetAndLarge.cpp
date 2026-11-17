#include "map/mapDepart.h"
#include "game/GameStateA.h"

extern "C" {

bool gameStateIsFlagSetAndLarge(void)
{
    if (g_gameState.savedLocationSet == 0 || (s32)g_gameState.savedMapId < 200) {
        return false;
    }
    return true;
}

} /* extern "C" */
