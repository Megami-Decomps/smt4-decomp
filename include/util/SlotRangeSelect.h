#pragma once
#include "common.h"

extern "C" {

/* Selects the four-entry range (start 0, 55, 59 or 63) for `kind`. */
void btlGetEntryChoiceRange(s32 kind, s32 *first, s32 *count);

/* The same range selection in smt4. */
void btlSideGetEntryRange(s32 kind, s32 *first, s32 *count);

} /* extern "C" */

/* A battle roster group's first slot and slot count (0: party 0..3, 1: enemies 4..53, 2: partner 54,
 * 3: reserve 67..108); other groups leave both unchanged. FUN_004caca0's getUnitGroupRange has the same body and
 * btlRosterGroupAllInactive the same tests in place (used by smt4a btlHasDuplicateEnemyDemonId, btlEnemyGroupColorTransitionStep; smt4 btlEnemyGroupColorTransitionStep). */
static void btlRosterGroupRange(s32 group, s32 &first, s32 &count)
{
    if (group == 0) {
        count = 4;
    } else if (group == 1) {
        first = 4;
        count = 50;
    } else if (group == 2) {
        first = 54;
        count = 1;
    } else if (group == 3) {
        first = 67;
        count = 42;
    }
}
