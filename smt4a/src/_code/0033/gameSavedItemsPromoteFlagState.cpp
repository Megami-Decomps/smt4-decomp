#include "shard/W4_W4Match6b_GameDataBlock.h"

// Advance record state bits from 01 to 10, preserving the low six bits.
extern "C" void gameSavedItemsPromoteFlagState()
{
    s32 index;
    u8 *block = (u8 *)g_gameDataBlocks.saveBlock;

    for (index = 0; index < 0x500; ++index) {
        u8 *row = block + index * sizeof(GameSavedItemA);
        GameSavedItemA *item = (GameSavedItemA *)(row + offsetof(GameSavedItemTableA, items) + sizeof(GameSavedItemA));
        if (((u8)item->flags >> 6) == 1) {
            item->flags = ((u8)item->flags & ~0xc0u) | 0x80;
        }
    }
}
