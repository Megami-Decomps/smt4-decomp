#include "map/mapDepart.h"

extern "C" {

extern GameState g_gameState;

void gameStateClearFlag(void)
{
    g_gameState.unk2F8 = 0;
}

} /* extern "C" */
