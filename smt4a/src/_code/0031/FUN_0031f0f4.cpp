/* NON_MATCHING: retail zero-extends the u16 value (uxth) before the clamp compare and adds the 0x5F0C entry offset as two immediates (add #23552; add #780); the build loads the offset from a pool word. */
#include "common.h"
extern "C" {
struct Entry {
    u8 pad[52];
    u16 value;
    u8 rest[26];
};
extern struct {
    u32 reserved;
    struct {
        u8 pad[0x5F0C];
        Entry entries[1];
    } *table;
}
g_gameDataBlocks;
s32 FUN_0031f0f4(u32 index,u16 value) {
    if(index>1280)return 0;
    Entry *entry = &g_gameDataBlocks.table->entries[index];
    entry->value = value;
    if (value > 100)
        entry->value = 100;
    return 1;
}
}
