#include "gamedata/DataTable.h"
#include "gamedata/DataTableSections.h"

extern "C" {

void *dataTable33Entries(void *unused, u32 type)
{
    return dataTableGetEntries(dataTableGet(0x33, type));
}

} /* extern "C" */
