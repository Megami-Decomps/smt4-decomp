#include "shard/Shard0031.h"

extern "C" {

extern GameDataBlocks g_gameDataBlocks;

u32 gameDataBlocksGetWord(void)
{
    return g_gameDataBlocks.block->unk21E14;
}

} /* extern "C" */
