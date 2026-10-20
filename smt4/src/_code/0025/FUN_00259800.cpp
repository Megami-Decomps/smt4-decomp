#include "shard/GameDataBlocks.h"

extern "C" {

u32 FUN_00259800(void)
{
    return *(u32 *)(g_gameDataBlocks.unk04 + 0x24ba4);
}

} /* extern "C" */
