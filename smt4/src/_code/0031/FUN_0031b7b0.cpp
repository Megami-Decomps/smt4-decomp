#include "shard/W4_W4Match5_DataTable.h"
#include "addon/AocSystem.h"

extern "C" {

/* Entry count of data table 0x23's section 2 plus the add-on system's extra count. */
s32 FUN_0031b7b0(void)
{
    return dataTableGetCount(dataTableGetSection(0x23, 2)) + g_aocSystem->table23[2].count;
}

} /* extern "C" */
