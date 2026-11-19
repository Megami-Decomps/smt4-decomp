#include "shard/GameDataBlocks.h"

extern "C" {


u32 gameDataBlocks2GetWord4(void)
{
    return g_gameDataBlocks.workBlock->unk04;
}

} /* extern "C" */
