#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

extern void *g_aocSystem;
s32 groupedFileTablesCountRecordsOfKind(void *system, s32 kind, s32 slot);

/* Adds installed and downloadable table counts. */
s32 FUN_002fb4a4(void)
{
    s32 count = dataTableGetCount(dataTableGetSection(42, 0));

    return groupedFileTablesCountRecordsOfKind(g_aocSystem, 36, 0) + count;
}

} /* extern "C" */
