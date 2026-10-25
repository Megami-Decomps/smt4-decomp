#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

extern void *g_aocSystem;
s32 FUN_0046c35c(void *system, s32 kind, s32 slot);

/* Adds installed and downloadable table counts. */
s32 FUN_00385964(void)
{
    s32 count = dataTableGetCount(dataTableGetSection(42, 0));

    return FUN_0046c35c(g_aocSystem, 36, 0) + count;
}

} /* extern "C" */
