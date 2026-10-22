#include "common.h"
#include "shard/GameDataBlocks.h"

extern "C" {

extern GameDataBlocks g_gameDataBlocks;

/* Sets bits 2..7 of entry `index`'s flags to `value` (all ones when value > 63); 0 for an out-of-range index. */
u32 gameDataEntrySetLevel(u32 index, s32 value)
{
    GameSaveData *table;
    GameSavedItem *entry;

    if (index > 0x500) {
        return 0;
    }
    table = g_gameDataBlocks.saveBlock;
    entry = &table->items[index];
    if (value > 63) {
        entry->flags |= 0xFC;
    } else {
        entry->flags = (entry->flags & ~0xFC) | ((value << 2) & 0xFC);
    }
    return 1;
}

} /* extern "C" */
