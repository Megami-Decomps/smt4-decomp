#include "gamedata/DataTable.h"
#include "gamedata/DataTable33.h"

extern "C" {

s32 FUN_0022afb0(void *unused, s32 section)
{
    return dataTableGetCount(dataTableGet(0x33, section));
}

} /* extern "C" */
