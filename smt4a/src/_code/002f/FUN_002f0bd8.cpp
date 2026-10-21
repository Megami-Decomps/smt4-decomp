/* NON_MATCHING: retail emits 'ldr r1, [pc, #52]'; compiler emits 'ldr r1, [pc, #36]' at the first differing instruction. */
#include "common.h"
extern "C" {
extern struct {
    u32 reserved;
    struct {
        u8 pad[0x2DB8];
        u32 count;
    } *table;
}
g_gameDataBlocks;
u32 FUN_002f0bd8(u32 value) {
    u32 count=g_gameDataBlocks.table->count;
    if(count<value)count=value;
    g_gameDataBlocks.table->count=count-value;
    return count-value;
}
}
