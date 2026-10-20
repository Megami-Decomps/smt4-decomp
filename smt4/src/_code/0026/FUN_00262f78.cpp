#include "shard/GameDataBlocks.h"

extern "C" {

int FUN_00262f78(void)
{
    u8 *base = g_gameDataBlocks.unk04 + 0x24b88;

    return *(s16 *)(base + 0x24);
}

} /* extern "C" */
