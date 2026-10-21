/* NON_MATCHING: retail emits 'ldr r0, [pc, #40]'; compiler emits 'ldr r1, [pc, #40]' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Entry {
    u8 active;
    u8 pad[0x53];
};
extern struct {
    u8 pad[0x5C];
    Entry entries[16];
} *g_mapHakai;
u32 FUN_0032530c() {
    u32 count=0;
    for(u32 index=0;index<16;++index) if(g_mapHakai->entries[index].active) ++count;
    return count;
}
}
