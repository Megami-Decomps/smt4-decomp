#include "common.h"

extern "C" {
struct Entry { u8 pad[0x34]; u16 value; u8 rest[0x1A]; };
struct SaveBlock { u8 pad[0x5F0C]; Entry entries[0x501]; };
extern struct { u32 reserved; SaveBlock *table; } g_gameDataBlocks;
u16 FUN_0031cfd0(u32 index)
{
    if (index > 0x500) {
        return 0;
    }
    SaveBlock *block = g_gameDataBlocks.table;
    Entry *entry = &block->entries[index];
    return entry->value;
}
}
