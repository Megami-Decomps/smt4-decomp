/* NON_MATCHING: retail adds the entry index first and then the two table offsets (0x5C00, 0x30C) as separate adds before the field load; this build folds the last 12 bytes into the load displacement. */
#include "common.h"
extern "C" {
struct Entry {
    u8 pad[54];
    u16 value;
    u8 rest[24];
};
struct EntryBlock {
    u8 pad[0x30C];
    Entry entries[1];
};
extern struct {
    u32 reserved;
    struct {
        u8 pad[0x5C00];
        EntryBlock block;
    } *table;
}
g_gameDataBlocks;
u32 gameDataGetEntryFlags(u32 index) {
    if (index > 1280) {
        return 0;
    }
    EntryBlock *block = &g_gameDataBlocks.table->block;
    Entry *entry = &block->entries[index];
    return (u8)entry->value >> 2;
}
}
