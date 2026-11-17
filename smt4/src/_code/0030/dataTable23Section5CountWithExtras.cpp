#include "shard/W4_W4Match5_DataTable.h"
#include "addon/AocSystem.h"

extern "C" {

/* Entry count of data table 0x23's section 5, plus the add-on content's extra entries. */
s32 dataTable23Section5CountWithExtras(void)
{
    return dataTableGetCount(dataTableGetSection(0x23, 5)) + g_aocSystem->table23[5].count;
}

} /* extern "C" */
