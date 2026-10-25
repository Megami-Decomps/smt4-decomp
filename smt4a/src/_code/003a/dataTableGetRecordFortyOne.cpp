#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

extern void *g_aocSystem;
s32 FUN_0046c35c(void *system, s32 kind, s32 slot);

/* Count base and add-on entries for the selected table. */
s32 dataTableGetRecordFortyOne(void)
{
    s32 count = dataTableGetCount(dataTableGetSection(41, 0));

    return FUN_0046c35c(g_aocSystem, 35, 0) + count;
}

} /* extern "C" */
