#include "map/mapDepart.h"

extern "C" {

extern GameStateA g_gameState;

void gameStateClearFlag(void)
{
    g_gameState.unk574 = 0;
}

} /* extern "C" */
