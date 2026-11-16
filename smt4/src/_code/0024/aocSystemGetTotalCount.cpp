#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

extern void *g_aocSystem;
s32 groupedFileTablesCountRecordsOfKind(void *system, s32 kind, s32 slot);

/* Adds table 0x2d section 1's entry count to the add-on system's count of kind 0x25. */
s32 aocSystemGetTotalCount(void)
{
    s32 count = dataTableGetCount(dataTableGetSection(45, 1));

    return groupedFileTablesCountRecordsOfKind(g_aocSystem, 37, 1) + count;
}

} /* extern "C" */
