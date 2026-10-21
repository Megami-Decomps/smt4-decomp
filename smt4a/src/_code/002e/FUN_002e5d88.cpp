/* NON_MATCHING: compiler uses different address construction, argument registers or stack-frame scheduling than retail. */
#include "common.h"
extern "C" {
extern struct { u32 unk00; struct { u8 unk00[0x88]; struct { u8 unk00[0x27EB8]; u8 flags[1]; } state; } *table; } g_gameDataBlocks;
/* Tests whether an indexed game-data flag is nonzero. */
s32 FUN_002e5d88(u32 index) { return g_gameDataBlocks.table->state.flags[index] != 0; }
}
