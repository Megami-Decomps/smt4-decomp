#include "shard/GameDataBlocks.h"

extern "C" {

u32 FUN_002907a8(void)
{
    return *(u32 *)(g_gameDataBlocks.unk04 + 0x1f4e0);
}

} /* extern "C" */
