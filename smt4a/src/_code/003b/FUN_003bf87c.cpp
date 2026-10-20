/* NON_MATCHING: the constant arguments are loaded r1 then r0 instead of r0 then r1. */
#include "gamedata/DataTable.h"

extern "C" {

/* Entry count of data table 0x49's first section. */
u32 FUN_003bf87c(void)
{
    return dataTableGetCount(dataTableGet(0x49, 0));
}

} /* extern "C" */
