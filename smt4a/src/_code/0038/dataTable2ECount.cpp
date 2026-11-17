#include "gamedata/MapSystemTable.h"

extern "C" {

/* The number of map rows (MapSystemTable.tbb table 2). */
s32 dataTable2ECount(void)
{
    return dataTableGetCount(dataTableGet(0x2E, 2));
}

} /* extern "C" */
