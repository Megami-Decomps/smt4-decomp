#include "gamedata/AocItemRef.h"

extern "C" {

extern s32 aocItemGetPrice(const AocItemRef *ref);
extern u16 aocEntryGetSortOrder(const u16 *entry);

/* Orders two item references by their record's order key. */
static s32 compareOrder(const AocItemRef *a, const AocItemRef *b)
{
    s32 rankA = aocEntryGetSortOrder(&a->id);
    s32 rankB = aocEntryGetSortOrder(&b->id);
    return rankA - rankB;
}

/* Compare item references by price, then by the record's order key. */
s32 FUN_003a06b8(const AocItemRef *a, const AocItemRef *b)
{
    s32 priceA = aocItemGetPrice(a);
    s32 priceB = aocItemGetPrice(b);
    s32 result = priceA - priceB;

    if (result == 0) {
        result = compareOrder(a, b);
    }
    return result;
}

} /* extern "C" */
