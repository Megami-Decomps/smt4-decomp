/* NON_MATCHING: body matches retail; only the prologue schedule differs (retail materialises the candidate-array base `mov r5, sp` after the first test, ours hoists it). */
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
    s32 candidates[10];
    u32 count = 0;
    if ((resistances->elements[0] >> 10) != 2)
        candidates[count++] = 0;
    if ((resistances->elements[1] >> 10) != 2)
        candidates[count++] = 1;
    if ((resistances->elements[2] >> 10) != 2)
        candidates[count++] = 2;
    if ((resistances->elements[3] >> 10) != 2)
        candidates[count++] = 3;
    if ((resistances->elements[4] >> 10) != 2)
        candidates[count++] = 4;
    if ((resistances->elements[5] >> 10) != 2)
        candidates[count++] = 5;
    if ((resistances->elements[6] >> 10) != 2)
        candidates[count++] = 6;
    if ((resistances->elements[7] >> 10) != 2)
        candidates[count++] = 7;
    if (count == 0)
        return -1;
    s32 selected = candidates[lcgRandomRange(static_cast<u16>(count - 1))];
    u16 *resistance = &resistances->elements[selected];
    u32 value = *resistance;
    switch (value >> 10) {
    case 3:
    case 4:
        *resistance = (*resistance & 0x3ff) | 0x400;
        break;
    case 1:
        *resistance = 0x1432;
        break;
    case 5:
        *resistance = 100;
        break;
    case 0:
        *resistance = 0x87d;
        break;
    }
    return selected;
}
}
