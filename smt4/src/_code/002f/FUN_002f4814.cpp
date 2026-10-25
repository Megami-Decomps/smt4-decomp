#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

extern void *g_aocSystem;
s32 FUN_0025bed8(void *system, s32 kind, s32 slot);

/* Adds installed and downloadable table counts. */
s32 FUN_002f4814(void)
{
    s32 count = dataTableGetCount(dataTableGetSection(45, 4));

    return FUN_0025bed8(g_aocSystem, 37, 4) + count;
}

} /* extern "C" */
