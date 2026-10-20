#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

/* Reads the byte at +0x27E0E of the game data's save-data part. */
u8 FUN_0031cee0(void)
{
    GameDataSub *sub = &g_gameDataBlocks.block->sub;

    return sub->flag0e;
}

}
