#include "common.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"
#include "battle/BtlGlobals.h"

extern "C" {

/* Rates the share of active units (flags 0, 1 and 4 set, status flag 1 clear) among the unit
 * total: 5 at 70% or more (or when the check fails), 4 from 40%, else 3. */
u32 btlGetActiveShareRating(void)
{
    if (btlGetMainState() == NULL) {
        return 5;
    }
    s32 id = btlGetMainState()->playerCheck.checkId;
    if (reinterpret_cast<s32>(btlFindEntryBlockByMemberId(btlGetMainState(), id)) == 0) {
        return 5;
    }
    s32 percent = 0;
    s32 total = btlGetMainState()->unitTotal;
    s32 active = 0;
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlActionRecord *unit = &btlGetMainState()->actions[i];
        if ((unit->status & 1) && (unit->status & 2) && (unit->status & 0x10) &&
            !(unit->stateFlags & 2)) {
            active++;
        }
    }
    if (total != 0) {
        percent = active * 100 / total;
    }
    if (percent >= 70) {
        return 5;
    }
    return (percent <= 39) ? 3 : 4;
}

} /* extern "C" */
