#include "gamedata/GameSaveBlocks.h"
#include "shard/Shard0035.h"

extern "C" {

/* Returns the word at 0x15D4 of the map block. */
u32 gameDataGetTableValue(void)
{
    return g_gameDataBlocks.saveBlock->body.mapBlock.tableValue;
}

} /* extern "C" */
