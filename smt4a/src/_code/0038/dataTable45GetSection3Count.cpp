#include "shard/W4_W4Match5_DataTable.h"
#include "addon/AocSystemA.h"

extern "C" {

/* Returns the number of entries of data table 45 section 3, the base table's plus those the add-on
 * content adds (package files of kind '%'). */
s32 dataTable45GetSection3Count(void)
{
    s32 count = dataTableGetCount(dataTableGetSection(45, 3));

    return groupedFileTablesCountRecordsOfKind(g_aocSystem, '%', 3) + count;
}

} /* extern "C" */
