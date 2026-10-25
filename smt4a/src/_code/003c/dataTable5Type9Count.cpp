#include "gamedata/DataTable.h"
#include "gamedata/DataTableSections.h"

extern "C" {

u32 dataTable5Type9Count(void)
{
    return dataTableGetCount(dataTableGet(5, 9));
}

} /* extern "C" */
