#include "common.h"
#include "shard/GameDataBlocks.h"

extern "C" {

extern GameDataBlocks g_gameDataBlocks;

/* Returns bits 2..7 of the low byte of entry `index`'s flags, 0 for an out-of-range index. */
u32 gameDataEntryGetLevel(u32 index)
{
    GameSaveData *table;
    GameSavedItem *entry;

    if (index > 0x500) {
        return 0;
    }
    table = g_gameDataBlocks.saveBlock;
    entry = &table->items[index];
    return (entry->flags & 0xFF) >> 2;
}

} /* extern "C" */
