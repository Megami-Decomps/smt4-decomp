#include "shard/W4_W4Match5_DataTable.h"
#include "addon/AocSystem.h"

extern "C" {

/* Entry count of data table 0x23's section 0 plus the add-on system's extra count. */
s32 dataTable23Type0CountWithAoc(void)
{
    return dataTableGetCount(dataTableGetSection(0x23, 0)) + g_aocSystem->table23[0].count;
}

} /* extern "C" */
