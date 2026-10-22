#include "shard/GameDataBlocks.h"

extern "C" {


/* Stores `value` into flag bit 1 of item `index`; returns whether the index was valid. */
u8 gameDataSetItemFlag(u32 index, s16 value)
{
    if (index <= 0x500) {
        GameSaveData *data = g_gameDataBlocks.saveBlock;
        GameSavedItem *item = &data->items[index];

        item->flags = (item->flags & ~2) | (value << 1);
    }
    return index <= 0x500;
}

} /* extern "C" */
