#include "gamedata/DevilRecordA.h"

extern "C" {

/* qsort-style comparison of two devil ids by rank (ascending), grade (descending) and id (ascending). */
s32 devilCompareByRankGradeAscending(u16 *a, u16 *b)
{
    DevilRecordA *recordA = devilGetRecord(*a);
    DevilRecordA *recordB = devilGetRecord(*b);
    s32 result = recordA->race - recordB->race;

    if (result == 0) {
        result = recordB->level - recordA->level;
        if (result == 0) {
            result = recordA->id - recordB->id;
        }
    }
    return result;
}

} /* extern "C" */
