#include "gamedata/DataTable.h"

extern "C" {
u32 MapNaviTable_GetCategoryCount(void)
{
    return dataTableGetCount(dataTableGet(0x2B, 0));
}
}
