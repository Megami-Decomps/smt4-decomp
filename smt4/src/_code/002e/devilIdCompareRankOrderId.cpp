#include "gamedata/NkmBaseRecord.h"

extern "C" {


/* Sort comparison of two devil ids: higher rank first, then higher order, then lower id. */
s32 devilIdCompareRankOrderId(u16 *idA, u16 *idB)
{
    NkmBaseRecord *recordA = nkmBaseGetRecord(*idA);
    NkmBaseRecord *recordB = nkmBaseGetRecord(*idB);
    s32 diff = recordB->race - recordA->race;

    if (diff == 0) {
        diff = recordB->level - recordA->level;
        if (diff == 0) {
            diff = recordA->id - recordB->id;
        }
    }
    return diff;
}

} /* extern "C" */
