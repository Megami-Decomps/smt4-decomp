#include "shard/GameDataBlocks.h"

extern "C" {

void FUN_00223b0c(u32 value)
{
    *(u32 *)(g_gameDataBlocks.unk04 + 0x1f4dc) = value;
}

} /* extern "C" */
