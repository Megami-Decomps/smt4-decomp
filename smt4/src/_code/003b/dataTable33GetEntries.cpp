#include "gamedata/DataTable.h"
#include "gamedata/DataTable33.h"

extern "C" {

void *dataTable33GetEntries(void *unused, s32 section)
{
    return dataTableGetEntries(dataTableGet(0x33, section));
}

} /* extern "C" */
