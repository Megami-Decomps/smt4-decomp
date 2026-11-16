#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

extern void *g_aocSystem;
s32 groupedFileTablesCountRecordsOfKind(void *system, s32 kind, s32 slot);

/* Count base-table entries together with the add-on entries of kind thirty-nine. */
s32 dataTableGetRecordFortyEight(void)
{
    s32 count = dataTableGetCount(dataTableGetSection(48, 0));

    return groupedFileTablesCountRecordsOfKind(g_aocSystem, 39, 0) + count;
}

} /* extern "C" */
