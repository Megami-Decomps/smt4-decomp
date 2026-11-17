#include "gamedata/MapSystemTable.h"

extern "C" {

/* The number of map rows (MapSystemTable.tbb table 2). */
s32 dataTable2eSub2GetCount(void)
{
    return dataTableGetCount(dataTableGet(0x2e, 2));
}

} /* extern "C" */
