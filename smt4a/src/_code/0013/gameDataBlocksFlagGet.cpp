#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Returns the signed byte at 0x2 of the game-data block table. */
s32 gameDataBlocksFlagGet(void)
{
    return g_gameDataBlocks.noFlags;
}

} /* extern "C" */
