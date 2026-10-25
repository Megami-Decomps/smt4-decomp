#include "gamedata/DataTable.h"
#include "gamedata/DataTableSections.h"

extern "C" {

void *dataTable5GetEntries(void)
{
    return dataTableGetEntries(dataTableGet(5, 0));
}

} /* extern "C" */
