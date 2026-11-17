#include "gamedata/DevilRecord.h"

extern "C" {


/* qsort-style comparison of two devil ids by rank (descending), grade (ascending) and id (descending). */
s32 devilCompareByRankGradeId(u16 *a, u16 *b)
{
    DevilRecord *recordA = devilGetRecord(*a);
    DevilRecord *recordB = devilGetRecord(*b);
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
