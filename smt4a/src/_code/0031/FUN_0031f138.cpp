#include "shard/W4_W4Match6b_GameDataBlock.h"
#include <stddef.h>

extern "C" {



/* Stores a 6-bit value (saturating above 63) in bits 2-7 of entry `index`; returns 0 for an index past the table. */
u32 FUN_0031f138(u32 index, s32 value)
{
    u8 *row;
    GameSavedItemA *entry;

    if (index > 0x500) {
        return 0;
    }
    row = (u8 *)g_gameDataBlocks.saveBlock + index * sizeof(GameSavedItemA);
    entry = (GameSavedItemA *)(row + offsetof(GameSavedItemTableA, items));
    if (value > 63) {
        entry->bits |= 0xFC;
    } else {
        entry->bits = (entry->bits & ~0xFC) | ((value << 2) & 0xFC);
    }
    return 1;
}

} /* extern "C" */
