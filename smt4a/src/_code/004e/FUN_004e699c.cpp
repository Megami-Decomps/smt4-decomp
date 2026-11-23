#include "shard/W6_W6Match4_UnitPairs.h"

extern "C" {
/* Clears every pair of the selected battle unit that matches (first, second). */
void FUN_004e699c(void *contextHandle, s32 first, s32 second)
{
    UnitPairTableA *unit = reinterpret_cast<UnitPairTableA *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(contextHandle)));
    for (s32 index = 0; index < 133; ++index) {
        if (unit->pairs[index][0] == first && unit->pairs[index][1] == second) {
            unit->pairs[index][0] = -1;
            unit->pairs[index][1] = 0;
        }
    }
}
}
