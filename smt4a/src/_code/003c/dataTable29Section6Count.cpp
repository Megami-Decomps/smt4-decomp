#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

/* Entry count of data table 0x29, section 6. */
s32 dataTable29Section6Count(void)
{
    return dataTableGetCount(dataTableGetSection(0x29, 6));
}

} /* extern "C" */
