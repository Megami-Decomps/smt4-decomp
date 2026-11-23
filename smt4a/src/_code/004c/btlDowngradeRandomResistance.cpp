/* NON_MATCHING: only the prologue schedule differs: retail materialises the candidate array's base (`mov r5, sp`)
 * after the first test, the build before it. Writing the first test alone as `candidates[0] = 0; count = 1;` is
 * IDENTICAL, but that spells one of eight identical statements differently for the schedule (review w84: steering). */
#include "battle/BtlEntryA.h"
#include "util/Random.h"

enum { RESISTANCE_WEAK = 2 };

extern "C" {

/* Downgrades one randomly selected elemental resistance that is not already a weakness. */
s32 btlDowngradeRandomResistance(BtlCombatantEntryA *entry)
{
    s32 candidates[10];
    u32 count = 0;
    if ((entry->data.values[0] >> 10) != RESISTANCE_WEAK)
        candidates[count++] = 0;
    if ((entry->data.values[1] >> 10) != RESISTANCE_WEAK)
        candidates[count++] = 1;
    if ((entry->data.values[2] >> 10) != RESISTANCE_WEAK)
        candidates[count++] = 2;
    if ((entry->data.values[3] >> 10) != RESISTANCE_WEAK)
        candidates[count++] = 3;
    if ((entry->data.values[4] >> 10) != RESISTANCE_WEAK)
        candidates[count++] = 4;
    if ((entry->data.values[5] >> 10) != RESISTANCE_WEAK)
        candidates[count++] = 5;
    if ((entry->data.values[6] >> 10) != RESISTANCE_WEAK)
        candidates[count++] = 6;
    if ((entry->data.values[7] >> 10) != RESISTANCE_WEAK)
        candidates[count++] = 7;
    if (count == 0)
        return -1;
    s32 selected = candidates[lcgRandomRange((u16)(count - 1))];
    u16 *resistance = &entry->data.values[selected];
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
} /* extern "C" */
