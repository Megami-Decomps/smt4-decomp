#include "gamedata/DevilRecordA.h"

extern "C" {

/* Sort comparison of two ids: lower rank first, then higher order, then lower id. */
s32 FUN_002ce088(u16 *idA, u16 *idB)
{
    DevilRecordA *recordA = devilGetRecord(*idA);
    DevilRecordA *recordB = devilGetRecord(*idB);
    s32 diff = recordA->race - recordB->race;

    if (diff == 0) {
        diff = recordB->level - recordA->level;
        if (diff == 0) {
            diff = recordA->id - recordB->id;
        }
    }
    return diff;
}

} /* extern "C" */
