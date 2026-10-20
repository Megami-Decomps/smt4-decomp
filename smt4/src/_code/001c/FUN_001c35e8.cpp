#include "shard/GameDataBlocks.h"

extern "C" {

u8 *FUN_001c35e8(void)
{
    return g_gameDataBlocks.unk04 + 0x1eb80;
}

} /* extern "C" */
