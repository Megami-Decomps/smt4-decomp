/* NON_MATCHING: retail emits 'bhi 3c'; compiler emits 'bhi 30' at the first differing instruction. */
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
    g_gameDataBlocks.table->entries[index].value=value>=101?100:value;
    return 1;
}
}
