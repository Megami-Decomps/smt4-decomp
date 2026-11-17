#include "map/mapDepart.h"
#include "game/GameState.h"

extern "C" {


void gameStateClearFlag(void)
{
    g_gameState.map.savedLocationSet = 0;
}

} /* extern "C" */
