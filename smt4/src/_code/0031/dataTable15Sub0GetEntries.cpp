#include "gamedata/CampComTable.h"

extern "C" {

/* Camp command row `index` (CampComTable.tbb, no range check). */
CampComRecord *dataTable15Sub0GetEntries(u32 index)
{
    return campComRecords(dataTableGet(0x15, 0)) + index;
}

} /* extern "C" */
