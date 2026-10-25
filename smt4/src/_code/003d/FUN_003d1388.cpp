/* NON_MATCHING: compiler pads the call frame with r4 and schedules the loop-count constant later than retail. */
#include "shard/W6_W6Match4_UnitPairs.h"

extern "C" {

// Count pairs with a nonnegative first value and a positive second value.
s32 FUN_003d1388(void *contextHandle)
{
    UnitPairTable *unit = reinterpret_cast<UnitPairTable *>(btlUnitGet(reinterpret_cast<BtlState *const *>(contextHandle)));
    s32 *first = &unit->pairs[0][0];
    s32 *second = &unit->pairs[0][1];
    s32 count = 0;
    for (s32 remaining = 133; remaining != 0; --remaining) {
        if (*first >= 0 && *second > 0) {
            ++count;
        }
        first += 2;
        second += 2;
    }
    return count;
}
}
