/* NON_MATCHING: compiler swaps first/second argument retention between R4/R5 and reuses R4 for the second computed value; retail uses R4/R5 in the opposite roles. */
#include "common.h"
#include "gamedata/Table8Type5Lookup.h"

extern "C" {
u16 FUN_00288e68(u32 id);
s32 FUN_0028d1f4(u32 id);

// Sorts entries by computed linked-record value descending, then linked ID descending.
s32 FUN_0030be80(const u16* first, const u16* second)
{
    Table8Type5Record* a = table8Type5FindById(*first);
    Table8Type5Record* b = table8Type5FindById(*second);
    s32 secondValue = FUN_0028d1f4(FUN_00288e68(*second));
    s32 firstValue = FUN_0028d1f4(FUN_00288e68(*first));
    s32 order = secondValue - firstValue;
    if (order == 0) {
        order = b->value - a->value;
    }
    return order;
}
}
