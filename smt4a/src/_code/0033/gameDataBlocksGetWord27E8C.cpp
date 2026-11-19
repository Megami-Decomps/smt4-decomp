#include "gamedata/GameSaveBlocks.h"
#include "shard/Shard0033.h"

extern "C" {

u32 gameDataBlocksGetWord27E8C(void)
{
    return g_gameDataBlocks.saveBlock->body.record.tail.unk04;
}

} /* extern "C" */
