#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

extern void *g_aocSystem;
s32 groupedFileTablesCountRecordsOfKind(void *system, s32 kind, s32 slot);

/* Adds installed and downloadable table counts. */
s32 FUN_00326e44(void)
{
    s32 count = dataTableGetCount(dataTableGetSection(50, 1));

    return groupedFileTablesCountRecordsOfKind(g_aocSystem, 40, 1) + count;
}

} /* extern "C" */
