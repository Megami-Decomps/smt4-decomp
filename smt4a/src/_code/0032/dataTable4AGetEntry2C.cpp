#include "gamedata/CampCecTable.h"

extern "C" {

/* Title row `index` of data table 0x4A (CampCecTable.tbb table 0). */
CampCecRecord *dataTable4AGetEntry2C(s32 index)
{
    void *table = dataTableGet(0x4A, 0);

    return static_cast<CampCecRecord *>(dataTableGetEntries(table)) + index;
}

} /* extern "C" */
