#include "map/mapDepart.h"
#include "game/GameStateA.h"

extern "C" {

void gameStateClearFlag(void)
{
    g_gameState.savedLocationSet = 0;
}

} /* extern "C" */
