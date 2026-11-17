#include "gamedata/GameSaveBlocks.h"
#include "shard/GameDataBlocks.h"
#include "gamedata/GameDataAccess.h"

extern "C" {

u8 *gameDataBlocksGetSaveData(void)
{
    return (u8 *)&g_gameDataBlocks.saveBlock->body;
}

} /* extern "C" */
