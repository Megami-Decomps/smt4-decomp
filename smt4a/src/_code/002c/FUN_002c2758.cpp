/* NON_MATCHING: compiler uses different stack-frame allocation and instruction scheduling. */
#include "common.h"
extern "C" {
struct DataTable { u8 unk00[0x88]; struct { u8 unk00[0x27FB8]; u8 flags[1]; } status; };
extern struct { u32 unk00; DataTable *table; } g_gameDataBlocks;
/* Reads an indexed game-data flag. */
s32 FUN_002c2758(u32 index) { return g_gameDataBlocks.table->status.flags[index]; }
}
