#include "common.h"
#include "shard/W4_Match1b_GameDataTable.h"

extern "C" {

extern GameDataBlocksTable g_gameDataBlocks;

/* Returns bits 2..7 of the low byte of entry `index`'s flags, 0 for an out-of-range index. */
u32 gameDataEntryGetLevel(u32 index)
{
    GameDataTable *table;
    GameDataEntry *entry;

    if (index > 0x500) {
        return 0;
    }
    table = g_gameDataBlocks.table;
    entry = &table->entries[index];
    return (entry->flags & 0xFF) >> 2;
}

} /* extern "C" */
