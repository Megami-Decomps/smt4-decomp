#include "common.h"
#include "gamedata/Table04Record.h"

extern "C" {

// Convert a data-table category into its presentation order.
u32 itemGetCategorySortOrder(s32 entryId)
{
    if (entryId == 0) {
        return 99;
    }
    switch (dataTable04FindById(entryId)->properties & 0x1f) {
    case 10: return 0;
    case 11: return 1;
    case 7: return 2;
    case 8: return 3;
    case 0: return 4;
    case 1: return 5;
    case 2: return 6;
    case 3: return 7;
    case 5: return 8;
    case 6: return 9;
    case 4: return 10;
    case 9: return 11;
    case 12: return 12;
    default: return 13;
    }
}
}
