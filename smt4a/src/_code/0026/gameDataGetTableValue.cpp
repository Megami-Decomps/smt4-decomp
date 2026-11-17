#include "gamedata/GameSaveBlocks.h"
#include "shard/Shard0035.h"

extern "C" {

/* Returns the word at 0x53C0 of the save body. */
u32 gameDataGetTableValue(void)
{
    return g_gameDataBlocks.saveBlock->body.unk053C0;
}

} /* extern "C" */
