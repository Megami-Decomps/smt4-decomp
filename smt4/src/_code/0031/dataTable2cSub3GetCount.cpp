#include "gamedata/DataTable.h"

extern "C" {
/* Number of native map collision placements in table0x2c section3. */
s32 dataTable2cSub3GetCount(void)
{
    return dataTableGetCount(dataTableGet(0x2c, 3));
}
}
