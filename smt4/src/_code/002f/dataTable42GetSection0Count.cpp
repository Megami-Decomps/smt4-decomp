#include "shard/W4_W4Match5_DataTable.h"
#include "addon/AocSystem.h"

extern "C" {

/* Returns the number of entries of data table 42 section 0, the base table's plus those the add-on
 * content adds (package files of kind '$'). */
s32 dataTable42GetSection0Count(void)
{
    s32 count = dataTableGetCount(dataTableGetSection(42, 0));

    return groupedFileTablesCountRecordsOfKind(g_aocSystem, '$', 0) + count;
}

} /* extern "C" */
