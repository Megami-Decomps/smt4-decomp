/* NON_MATCHING: compiler folds the nested member offsets into a different large address adjustment. */
#include "common.h"
extern "C" {
extern struct { u32 unk00; struct { u8 unk00[0x5274]; struct { u8 unk00[0x1F0]; f32 value; } member; } *table; } g_gameDataBlocks;
/* Reads the game-data floating-point setting. */
f32 FUN_002c263c(void) { return g_gameDataBlocks.table->member.value; }
}
