#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Returns the game-data counter. */
u16 gameDataBlocksGetCounter(void)
{
    return *g_gameDataBlocks.smallBlock;
}

} /* extern "C" */
