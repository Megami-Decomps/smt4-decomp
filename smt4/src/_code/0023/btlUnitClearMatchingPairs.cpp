/* Built in one --multifile run with btlUnitGet, as its Apocalypse twin FUN_004e699c (retail saves five registers
 * with no alignment pad around the call). */
#include "shard/W6_W6Match4_UnitPairs.h"

extern "C" {
/* Clears every pair of the selected battle unit that matches (first, second). */
void btlUnitClearMatchingPairs(void *contextHandle, s32 first, s32 second)
{
    UnitPairTable *unit = reinterpret_cast<UnitPairTable *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(contextHandle)));
    for (s32 index = 0; index < 133; ++index) {
        if (unit->pairs[index][0] == first && unit->pairs[index][1] == second) {
            unit->pairs[index][0] = -1;
            unit->pairs[index][1] = 0;
        }
    }
}
}
