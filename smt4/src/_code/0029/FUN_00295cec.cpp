#include "shard/GameDataBlocks.h"

extern "C" {

u32 FUN_00295cec(void)
{
    return *(u32 *)(g_gameDataBlocks.unk04 + 0x9870);
}

} /* extern "C" */
