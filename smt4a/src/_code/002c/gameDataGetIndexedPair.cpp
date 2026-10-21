/* NON_MATCHING: retail emits 'ldr r1, [pc, #24]'; compiler emits 'movne r0, r1' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Pair { u32 first, second; };
extern struct { u32 reserved; struct { u8 unk00[0x27EC8]; Pair values[2]; } *table; } g_gameDataBlocks;
Pair *gameDataGetIndexedPair(s32 index, Pair *fallback) {
    if (index == 0 || index == 1) return &g_gameDataBlocks.table->values[index];
    return fallback;
}
}
