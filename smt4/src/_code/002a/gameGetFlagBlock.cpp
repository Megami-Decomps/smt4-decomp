#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameGetFlagBlock(void)
{
    return g_gameDataBlocks.unk04 + 0xb9a4;
}

} /* extern "C" */
