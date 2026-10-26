/* NON_MATCHING: retail explicitly tests eight resistances and uses a larger candidate frame; the loop is partially unrolled and switch cases are ordered differently. */
#include "common.h"
#include "util/Random.h"

struct BattleResistances {
    /* 0x000 */ u8 unk000[0x2b6];
    /* 0x2b6 */ u16 elements[8];
};

extern "C" {

// Downgrade one randomly selected elemental resistance that is not already a weakness.
s32 btlDowngradeRandomResistance(BattleResistances *resistances)
{
    s32 candidates[8];
    u32 count = 0;
    for (s32 i = 0; i < 8; ++i) {
        if ((resistances->elements[i] >> 10) != 2)
            candidates[count++] = i;
    }
    if (count == 0)
        return -1;
    s32 selected = candidates[lcgRandomRange(static_cast<u16>(count - 1))];
    u16 *resistance = &resistances->elements[selected];
    switch (*resistance >> 10) {
    case 0:
        *resistance = 0x87d;
        break;
    case 1:
        *resistance = 0x1432;
        break;
    case 3:
    case 4:
        *resistance = (*resistance & 0x3ff) | 0x400;
        break;
    case 5:
        *resistance = 100;
        break;
    }
    return selected;
}
}
