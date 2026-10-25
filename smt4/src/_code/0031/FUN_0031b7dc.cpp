#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

extern void *g_aocSystem;
s32 FUN_0025bed8(void *system, s32 kind, s32 slot);

/* Adds installed and downloadable table counts. */
s32 FUN_0031b7dc(void)
{
    s32 count = dataTableGetCount(dataTableGetSection(42, 1));

    return FUN_0025bed8(g_aocSystem, 36, 1) + count;
}

} /* extern "C" */
