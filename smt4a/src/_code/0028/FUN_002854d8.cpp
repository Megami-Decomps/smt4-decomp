#include "shard/W4_W4Match6b_GameDataBlock.h"
#include <stddef.h>

extern "C" {

u8 FUN_002854d8(u32 index, char value)
{
    if (index < 0x501) {
        u8 *row = (u8 *)g_gameDataBlocks.saveBlock + index * sizeof(GameSavedItemA);
        GameSavedItemA *item = (GameSavedItemA *)(row + offsetof(GameSavedItemTableA, items));
        item->flags = (item->flags & ~2) | (value << 1);
    }
    return index < 0x501;
}

} /* extern "C" */
