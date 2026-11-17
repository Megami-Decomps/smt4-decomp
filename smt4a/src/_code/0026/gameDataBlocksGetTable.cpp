#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Returns the game-data table pointer. */
u32 gameDataBlocksGetTable(void)
{
    return (u32)g_gameDataBlocks.saveBlock; /* callers take the save block as a word */
}

} /* extern "C" */
