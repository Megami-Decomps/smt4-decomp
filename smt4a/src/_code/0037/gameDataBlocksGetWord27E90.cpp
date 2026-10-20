#include "shard/Shard0037.h"

extern "C" {

extern GameDataBlocks g_gameDataBlocks;

u32 gameDataBlocksGetWord27E90(void)
{
    return g_gameDataBlocks.block->unk27E90;
}

} /* extern "C" */
