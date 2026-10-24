/* NON_MATCHING: retail scales the index first and adds the 0x5F0C items offset last (add #23552; adds #780); ours adds the offset first. */
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

/* Returns the 3-bit mode (bits 8-10) of saved item `index` when its flag bits read 2, else 0. */
s32 FUN_0031d038(u32 index)
{
    if (index <= 0x500) {
        GameSavedItemA *items = g_gameDataBlocks.saveBlock->inventory.items;
        GameSavedItemA *item = items + index;
        if (item != NULL && (item->flags >> 6) == 2) {
            return (item->bits >> 8) & 7;
        }
    }
    return 0;
}

}
