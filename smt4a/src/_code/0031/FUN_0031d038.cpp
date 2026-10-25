#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

/* Returns the 3-bit mode (bits 8-10) of saved item `index` when its flag bits read 2, else 0. */
s32 FUN_0031d038(u32 index)
{
    if (index > 0x500) {
        return 0;
    }
    GameDataBlock *block = g_gameDataBlocks.saveBlock;
    GameSavedItemA *item = &block->inventory.items[index];
    if (item == NULL) {
        return 0;
    }
    if (((u8)item->flags >> 6) == 2) {
        return (item->bits >> 8) & 7;
    }
    return 0;
}

}
