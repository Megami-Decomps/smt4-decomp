/* NON_MATCHING: retail scales the index first and adds the 0x5F0C items offset last (add #23552; adds #780); ours adds the offset first, and the final clear path allocates different registers. */
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

/* Sets (mode 1-7) or clears (mode 0) the flag bits of one saved item: flag 0x40 and a 3-bit mode at bit 8. */
void FUN_0031f190(u32 index, s32 mode)
{
    if (index <= 0x500) {
        GameSavedItemA *items = g_gameDataBlocks.saveBlock->inventory.items;
        GameSavedItemA *item = items + index;
        if (item != NULL) {
            if (mode != 0) {
                item->flags = (item->flags & ~0xC0) | 0x40;
                item->bits = ((mode << 8) & 0x700) | (item->bits & 0xF8FF);
            } else {
                item->flags &= ~0xC0;
                item->bits &= 0xF8FF;
            }
        }
    }
}

} /* extern "C" */
