/* NON_MATCHING: tie-break item pointer and first order-key result occupy different saved registers; retail copies the second pointer to r6. */
#include "gamedata/AocItemRef.h"

extern "C" {

extern s32 aocItemGetPrice(const AocItemRef *ref);
extern u16 FUN_00230f44(const u16 *entry);

/* Compare item references by price, then by the record's order key. */
s32 FUN_003a06b8(const void *left, const void *right)
{
    const AocItemRef *a = static_cast<const AocItemRef *>(left);
    const AocItemRef *b = static_cast<const AocItemRef *>(right);
    s32 result = aocItemGetPrice(a) - aocItemGetPrice(b);

    if (result == 0) {
        result = FUN_00230f44(&a->id) - FUN_00230f44(&b->id);
    }
    return result;
}

} /* extern "C" */
