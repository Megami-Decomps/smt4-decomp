#include "common.h"
extern "C" {
struct DataStatus { u8 unk00[0x27FB8]; u8 flags[1]; };
struct DataTable { u8 unk00[0x88]; DataStatus status; };
extern struct { u32 unk00; DataTable *table; } g_gameDataBlocks;
/* Reads an indexed game-data flag. */
s32 FUN_002c2758(u32 index)
{
    DataStatus *status = &g_gameDataBlocks.table->status;

    return status->flags[index];
}
}
