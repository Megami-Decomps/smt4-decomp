#include "shard/W4_W4Match5_DataTable.h"
#include "addon/AocSystemA.h"

extern "C" {

/* Returns the number of entries of data table 45 section 4, the base table's plus those the add-on
 * content adds (package files of kind '%'). */
s32 dataTable45GetSection4Count(void)
{
    s32 count = dataTableGetCount(dataTableGetSection(45, 4));

    return groupedFileTablesCountRecordsOfKind(g_aocSystem, '%', 4) + count;
}

} /* extern "C" */
