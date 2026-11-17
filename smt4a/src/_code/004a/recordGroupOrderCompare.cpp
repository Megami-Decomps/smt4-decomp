#include "gamedata/NkmBaseRecordA.h"

extern "C" {

/* Sort comparison of two ids: by group descending, then order ascending, then id descending. */
s32 recordGroupOrderCompare(u16 *idA, u16 *idB)
{
    NkmBaseRecordA *recordA = nkmBaseGetRecord(*idA);
    NkmBaseRecordA *recordB = nkmBaseGetRecord(*idB);
    s32 diff = recordB->baseHp - recordA->baseHp;

    if (diff == 0) {
        recordA = nkmBaseGetRecord(*idA);
        recordB = nkmBaseGetRecord(*idB);
        diff = recordA->level - recordB->level;
        if (diff == 0) {
            diff = *idB - *idA;
        }
    }
    return diff;
}

} /* extern "C" */
