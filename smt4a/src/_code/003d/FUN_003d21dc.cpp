#include "common.h"

extern "C" {

typedef struct GameState {
    /* 0x00 */ u8 unk00[0x27];
    /* 0x27 */ s8 unlocked;
} GameState;

extern GameState g_gameState; /* 0x5f15fc */

extern int lmapGetSpawnIndex(void);

/* Whether the feature is unlocked and lmapGetSpawnIndex reports more than 100. */
u8 FUN_003d21dc(void)
{
    int level = lmapGetSpawnIndex();

    return g_gameState.unlocked != 0 && level > 100;
}

} /* extern "C" */
