#include "shard/Shard0033.h"

extern "C" {

extern GameDataBlocks g_gameDataBlocks;

u32 gameDataBlocksGetWord27E8C(void)
{
    return g_gameDataBlocks.block->unk27E8C;
}

} /* extern "C" */
