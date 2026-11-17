#include "gamedata/NkmBaseRecord.h"

extern "C" {


/* qsort-style comparison of two devil ids by rank (descending), grade (ascending) and id (descending). */
s32 devilCompareByRankGradeId(u16 *a, u16 *b)
{
    NkmBaseRecord *recordA = nkmBaseGetRecord(*a);
    NkmBaseRecord *recordB = nkmBaseGetRecord(*b);
    s32 result = recordB->race - recordA->race;

    if (result == 0) {
        result = recordA->level - recordB->level;
        if (result == 0) {
            result = recordB->id - recordA->id;
        }
    }
    return result;
}

} /* extern "C" */
