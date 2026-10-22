#include "map/mapDepart.h"

extern "C" {


extern GameStateA g_gameState; /* 0x5f15fc */

extern int lmapGetSpawnIndex(void);

/* Whether the feature is unlocked and lmapGetSpawnIndex reports more than 100. */
u8 FUN_003d21dc(void)
{
    int level = lmapGetSpawnIndex();

    return g_gameState.progressEnabled != 0 && level > 100;
}

} /* extern "C" */
