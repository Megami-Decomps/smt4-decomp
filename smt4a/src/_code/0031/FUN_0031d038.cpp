/* NON_MATCHING: item offset order and unsigned flag load now match; retail keeps the index in r0 and loads the save-block pointer into r1 first (ours: index copy in r1, block pointer in r0). */
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

/* Returns the 3-bit mode (bits 8-10) of saved item `index` when its flag bits read 2, else 0. */
s32 FUN_0031d038(u32 index)
{
    if (index <= 0x500) {
        GameSavedItemTableA *inventory = &g_gameDataBlocks.saveBlock->inventory;
        GameSavedItemA *item = inventory->items + index;
        if (item != NULL && ((u8)item->flags >> 6) == 2) {
            return (item->bits >> 8) & 7;
        }
    }
    return 0;
}

}
