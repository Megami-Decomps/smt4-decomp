#include "shard/GameDataBlocks.h"

extern "C" {

void FUN_00254600(u16 value)
{
    u16 *words = (u16 *)(g_gameDataBlocks.unk04 + 0x24b88);

    words[0x12] = value;
}

} /* extern "C" */
