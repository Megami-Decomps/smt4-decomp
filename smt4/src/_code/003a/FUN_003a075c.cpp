/* Compares two ids: by aocItemGetPrice key (descending), then by aocEntryGetSortOrder rank. */
#include "common.h"
#include "gamedata/EquipmentSortPower.h"

extern "C" {

extern s32 aocItemGetPrice(u32 id);


/* Orders two ids by their aocEntryGetSortOrder rank. */
static s32 compareRanks(u32 a, u32 b)
{
    s32 rankA = aocEntryGetSortOrder(reinterpret_cast<const u16 *>(a));
    s32 rankB = aocEntryGetSortOrder(reinterpret_cast<const u16 *>(b));
    return rankA - rankB;
}

s32 FUN_003a075c(u32 a, u32 b)
{
    s32 keyA = aocItemGetPrice(a);
    s32 keyB = aocItemGetPrice(b);
    s32 diff = keyB - keyA;

    if (diff == 0) {
        diff = compareRanks(a, b);
    }
    return diff;
}

}
