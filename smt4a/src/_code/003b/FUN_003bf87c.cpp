#include "shard/W4_W4Match5_DataTable.h"
#include "gamedata/GameFlags.h"

extern "C" {

/* Entry count of data table 0x49's first section. */
u32 FUN_003bf87c(void)
{
    return dataTableGetCount(dataTableGetSection(0x49, 0));
}

} /* extern "C" */
