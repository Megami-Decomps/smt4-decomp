#include "gamedata/GameSaveBlocks.h"
#include "gamedata/GameDataAccess_Smt4a.h"

extern "C" {

/* Returns the byte at 0x27EC4 of the game-data table. */
u8 gameDataBlocksGetTableFlag(void)
{
    return g_gameDataBlocks.saveBlock->body.tableFlag;
}

} /* extern "C" */
