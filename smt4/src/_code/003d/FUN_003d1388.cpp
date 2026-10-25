#include "shard/W6_W6Match4_UnitPairs.h"

extern "C" {

// Count pairs with a nonnegative first value and a positive second value.
s32 FUN_003d1388(void *contextHandle)
{
    UnitPairTable *unit = reinterpret_cast<UnitPairTable *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(contextHandle)));
    s32 count = 0;
    for (s32 i = 0; i < 133; i++) {
        if (unit->pairs[i][0] >= 0 && unit->pairs[i][1] > 0) {
            ++count;
        }
    }
    return count;
}
}
