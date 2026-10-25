#include "common.h"
extern "C" {
struct Status { u8 unk00[0x27FB8]; u8 flags[1]; };
struct DataTable { u8 unk00[0x88]; Status status; };
extern struct { u32 unk00; DataTable *table; } g_gameDataBlocks;
/* Writes an indexed game-data flag. */
void gameDataSetStatusFlag(u32 index, s8 value)
{
    Status *status = &g_gameDataBlocks.table->status;
    status->flags[index] = value;
}
}
