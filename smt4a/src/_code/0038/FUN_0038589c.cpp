#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

extern void *g_aocSystem;
s32 groupedFileTablesCountRecordsOfKind(void *system, s32 kind, s32 slot);

/* Adds installed and downloadable table counts. */
s32 FUN_0038589c(void)
{
    s32 count = dataTableGetCount(dataTableGetSection(45, 3));

    return groupedFileTablesCountRecordsOfKind(g_aocSystem, 37, 3) + count;
}

} /* extern "C" */
