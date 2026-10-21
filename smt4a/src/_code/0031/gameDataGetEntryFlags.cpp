/* NON_MATCHING: retail emits 'bhi 30'; compiler emits 'bhi 2c' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Entry {
    u8 pad[54];
    u16 value;
    u8 rest[24];
};
extern struct {
    u32 reserved;
    struct {
        u8 pad[0x5F0C];
        Entry entries[1];
    } *table;
}
g_gameDataBlocks;
u32 gameDataGetEntryFlags(u32 index) {
    return index<=1280?((u8)g_gameDataBlocks.table->entries[index].value>>2):0;
}
}
