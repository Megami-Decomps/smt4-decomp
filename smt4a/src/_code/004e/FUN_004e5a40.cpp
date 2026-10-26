#include "shard/W6_W6Match4_UnitPairs.h"

extern "C" {
// Fill the first unused pair in the selected battle unit's pair table.
void FUN_004e5a40(void *contextHandle, s32 first, s32 second)
{
    UnitPairTableA *unit = reinterpret_cast<UnitPairTableA *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(contextHandle)));
    for (s32 index = 0; index < 133; ++index) {
        if (unit->pairs[index][0] < 0 && unit->pairs[index][1] == 0) {
            unit->pairs[index][0] = first;
            unit->pairs[index][1] = second;
            return;
        }
    }
}
}
