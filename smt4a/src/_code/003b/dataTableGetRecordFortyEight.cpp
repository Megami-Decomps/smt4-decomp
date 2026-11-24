#include "gamedata/MsSearchTableA.h"

/* Counts base map-search marks and any add-on entries appended to the table. */
extern "C" s32 dataTableGetRecordFortyEight(void)
{
    return msSearchCount();
}
