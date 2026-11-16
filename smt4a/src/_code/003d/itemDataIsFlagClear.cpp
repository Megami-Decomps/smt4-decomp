#include "common.h"

extern "C" {

struct ItemData { u8 unk00[7]; u8 flags; };
ItemData *dataTable1bOr1cGetRecord(u32 id);

u32 itemDataIsFlagClear(u32 id)
{
    ItemData *item = dataTable1bOr1cGetRecord(id);
    return item != NULL ? (1u & ~item->flags) : 0;
}

} /* extern "C" */
