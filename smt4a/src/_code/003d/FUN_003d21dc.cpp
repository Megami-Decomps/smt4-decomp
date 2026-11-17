#include "map/mapDepart.h"
#include "game/GameStateA.h"

extern "C" {

extern int lmapGetSpawnIndex(void);

/* Whether the feature is unlocked and lmapGetSpawnIndex reports more than 100. */
u8 FUN_003d21dc(void)
{
    int level = lmapGetSpawnIndex();

    return g_gameState.progressEnabled != 0 && level > 100;
}

} /* extern "C" */
