#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

extern void *g_aocSystem;
s32 groupedFileTablesCountRecordsOfKind(void *system, s32 kind, s32 slot);

/* Adds installed and downloadable table counts. */
s32 FUN_003c30e4(void)
{
    s32 count = dataTableGetCount(dataTableGetSection(41, 3));

    return groupedFileTablesCountRecordsOfKind(g_aocSystem, 35, 3) + count;
}

} /* extern "C" */
