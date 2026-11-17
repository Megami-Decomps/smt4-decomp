#include "gamedata/DevilRecordA.h"

extern "C" {

extern u32 FUN_002a4b28(u16 id);

/* Sort comparison of two ids: by their FUN_002a4b28 bit sets (a set containing bits the other lacks sorts first), then by rank ascending, order descending and id ascending. */
s32 FUN_002fe074(u16 *idA, u16 *idB)
{
    u32 setA = FUN_002a4b28(*idA);
    u32 setB = FUN_002a4b28(*idB);
    DevilRecordA *recordA;
    DevilRecordA *recordB;
    s32 diff;

    if ((setB & ~setA) != 0) {
        return -1;
    }
    if ((setA & ~setB) != 0) {
        return 1;
    }
    recordA = devilGetRecord(*idA);
    recordB = devilGetRecord(*idB);
    diff = recordA->race - recordB->race;
    if (diff == 0) {
        diff = recordB->level - recordA->level;
        if (diff == 0) {
            diff = recordA->id - recordB->id;
        }
    }
    return diff;
}

} /* extern "C" */
