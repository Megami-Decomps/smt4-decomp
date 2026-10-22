#include "map/mapDepart.h"

extern "C" {

extern GameStateA g_gameState;

void gameStateClearFlag(void)
{
    g_gameState.transitionActive = 0;
}

} /* extern "C" */
