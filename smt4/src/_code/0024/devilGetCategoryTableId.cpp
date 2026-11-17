/* Returns the table id for the element of demon `devilId`. */
#include "common.h"
#include "gamedata/NkmBaseRecord.h"

extern "C" {
u32 mapCategoryToTableId(u32 category);

u32 devilGetCategoryTableId(u32 devilId)
{
    return mapCategoryToTableId(nkmBaseGetRecord(devilId)->element);
}
}
