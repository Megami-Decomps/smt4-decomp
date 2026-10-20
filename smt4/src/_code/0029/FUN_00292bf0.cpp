#include "shard/GameDataBlocks.h"

extern "C" {

u32 FUN_00292bf0(void)
{
    return *(u32 *)(g_gameDataBlocks.unk04 + 0x1f4dc);
}

} /* extern "C" */
