#include "gamedata/DataTable.h"
#include "gamedata/DataTableAccess_Smt4a.h"

extern "C" {

/* Returns the rows of table 0x18, section 0. */
const StatisticsTableEntry *dataTable18Sub0GetEntries(void)
{
    return static_cast<const StatisticsTableEntry *>(dataTableGetEntries(dataTableGet(0x18, 0)));
}

} /* extern "C" */
