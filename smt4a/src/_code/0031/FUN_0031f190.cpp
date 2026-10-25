#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

/* Sets (mode 1-7) or clears (mode 0) the flag bits of one saved item: flag 0x40 and a 3-bit mode at bit 8. */
void FUN_0031f190(u32 index, s32 mode)
{
    if (index > 0x500) {
        return;
    }
    GameDataBlock *block = g_gameDataBlocks.saveBlock;
    GameSavedItemA *item = &block->inventory.items[index];
    if (item == NULL) {
        return;
    }
    if (mode != 0) {
        u8 flags = item->flags;
        u16 bits = item->bits;
        item->flags = (flags & ~0xC0) | 0x40;
        item->bits = (bits & 0xF8FF) | ((mode << 8) & 0x700);
    } else {
        item->flags &= ~0xC0;
        item->bits &= 0xF8FF;
    }
}

} /* extern "C" */
