#include "gamedata/CampComTable.h"

extern "C" {

/* Camp command row `index` (CampComTable.tbb, no range check). */
CampComRecord *dataTable15GetEntry(u32 index)
{
    void *table = dataTableGet(0x15, 0);

    return campComRecords(table) + index;
}

} /* extern "C" */
