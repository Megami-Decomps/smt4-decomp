#include "common.h"

extern "C" {

struct ItemData { u8 unk00[7]; u8 flags; };
ItemData *FUN_001ad9b4(u32 id);

u32 itemDataIsFlagClear(u32 id)
{
    ItemData *item = FUN_001ad9b4(id);
    return item != NULL ? (1u & ~item->flags) : 0;
}

} /* extern "C" */
