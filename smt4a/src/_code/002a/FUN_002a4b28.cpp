#include "common.h"
#include "code/Code002a_Smt4a.h"
extern "C" {
struct Entry {
    u8 pad[54];
    u16 value;
    u8 rest[24];
};
struct SaveBlock {
    u8 pad[0x5F0C];
    Entry entries[0x501];
};
extern struct {
    u32 reserved;
    SaveBlock *table;
} g_gameDataBlocks;
u32 FUN_002a4b28(u32 index) {
    if (index > 0x500) {
        return 0;
    }
    SaveBlock *block = g_gameDataBlocks.table;
    Entry *entry = &block->entries[index];
    return (entry->value & 2) >> 1;
}
}
