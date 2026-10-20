#include "common.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x0 */ u16 id;
    /* 0x2 */ u8 rank;
    /* 0x3 */ u8 grade;
} DevilRecord;

extern DevilRecord *devilGetRecord(u16 id);

/* qsort-style comparison of two devil ids by rank (descending), grade (ascending) and id (descending). */
s32 devilCompareByRankGradeId(u16 *a, u16 *b)
{
    DevilRecord *recordA = devilGetRecord(*a);
    DevilRecord *recordB = devilGetRecord(*b);
    s32 result = recordB->rank - recordA->rank;

    if (result == 0) {
        result = recordA->grade - recordB->grade;
        if (result == 0) {
            result = recordB->id - recordA->id;
        }
    }
    return result;
}

} /* extern "C" */
