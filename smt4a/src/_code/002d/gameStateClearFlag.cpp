#include "map/mapDepart.h"
#include "game/GameStateA.h"

extern "C" {

void gameStateClearFlag(void)
{
    g_gameState.transitionActive = 0;
}

} /* extern "C" */
