#include "shard/Shard0031.h"

extern "C" {

extern GameDataBlocks g_gameDataBlocks;

void gameDataBlocksSetWord(u32 value)
{
    g_gameDataBlocks.block->unk21E14 = value;
}

} /* extern "C" */
