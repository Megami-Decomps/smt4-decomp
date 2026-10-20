#include "shard/Shard0034.h"

extern "C" {

extern GameDataBlocks g_gameDataBlocks;

u32 gameDataBlocks2GetWord4(void)
{
    return g_gameDataBlocks.block2->unk04;
}

} /* extern "C" */
