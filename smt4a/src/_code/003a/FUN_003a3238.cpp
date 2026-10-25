#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

extern void *g_aocSystem;
s32 FUN_0046c35c(void *system, s32 kind, s32 slot);

/* Adds installed and downloadable table counts. */
s32 FUN_003a3238(void)
{
    s32 count = dataTableGetCount(dataTableGetSection(45, 2));

    return FUN_0046c35c(g_aocSystem, 37, 2) + count;
}

} /* extern "C" */
