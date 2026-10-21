#include "shard/W5_W5Match7_SceneState.h"

extern "C" {

extern void *g_mapMain;

void mapRequestGameState(void)
{
    if (g_mapMain != NULL) {
        g_gameState.mapRequested = 1;
    }
}

} /* extern "C" */
