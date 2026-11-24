#include "ui/PlaceTextTransition.h"
#include "gamedata/DataTable.h"

extern "C" {

/* The number of place records in data table 0x17's section 1. */
s32 dataTable17Count(PlaceTextTableCursor *cursor)
{
    return dataTableGetCount(dataTableGet(0x17, 1));
}

} /* extern "C" */
