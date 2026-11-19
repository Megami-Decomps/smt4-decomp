#include "gamedata/GameSaveBlocks.h"
#include "shard/Shard0037.h"

extern "C" {

u32 gameDataBlocksGetWord27E90(void)
{
    return g_gameDataBlocks.saveBlock->body.record.tail.unk08;
}

} /* extern "C" */
