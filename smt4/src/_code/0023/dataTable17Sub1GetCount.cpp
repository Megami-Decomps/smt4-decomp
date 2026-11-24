#include "gamedata/PlaceRecordTable.h"
#include "gamedata/DataTable.h"

extern "C" {

/* The number of place records of data table 0x17 (section 1). */
s32 dataTable17Sub1GetCount(Table17Handle *ignored)
{
    return dataTableGetCount(dataTableGet(0x17, 1));
}

} /* extern "C" */
