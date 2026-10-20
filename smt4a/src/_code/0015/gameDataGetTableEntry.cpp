#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

extern s32 FUN_001775a8(void);

/* Address of the entry of the game data table selected by FUN_001775a8. */
u32 *gameDataGetTableEntry(void)
{
    s32 index = FUN_001775a8();
    GameDataSub *sub = &g_gameDataBlocks.block->sub;

    return &sub->table[index];
}

}
