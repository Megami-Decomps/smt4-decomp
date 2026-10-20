#include "common.h"
#include "shard/W4_Match1b_GameDataTable.h"

extern "C" {

extern GameDataBlocksTable g_gameDataBlocks;

/* Sets bits 2..7 of entry `index`'s flags to `value` (all ones when value > 63); 0 for an out-of-range index. */
u32 gameDataEntrySetLevel(u32 index, s32 value)
{
    GameDataTable *table;
    GameDataEntry *entry;

    if (index > 0x500) {
        return 0;
    }
    table = g_gameDataBlocks.table;
    entry = &table->entries[index];
    if (value > 63) {
        entry->flags |= 0xFC;
    } else {
        entry->flags = (entry->flags & ~0xFC) | ((value << 2) & 0xFC);
    }
    return 1;
}

} /* extern "C" */
