#include "gamedata/DevilRecordA.h"

extern "C" {

/* Sort comparison of two ids: by group descending, then order ascending, then id descending. */
s32 recordGroupOrderCompare(u16 *idA, u16 *idB)
{
    DevilRecordA *recordA = devilGetRecord(*idA);
    DevilRecordA *recordB = devilGetRecord(*idB);
    s32 diff = recordB->baseHp - recordA->baseHp;

    if (diff == 0) {
        recordA = devilGetRecord(*idA);
        recordB = devilGetRecord(*idB);
        diff = recordA->level - recordB->level;
        if (diff == 0) {
            diff = *idB - *idA;
        }
    }
    return diff;
}

} /* extern "C" */
