#include "common.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x0 */ u16 id;
    /* 0x2 */ u8 rank;
    /* 0x3 */ u8 unk3;
    /* 0x4 */ u8 unk4[2];
    /* 0x6 */ u16 grade;
} DevilRecord;

extern DevilRecord *FUN_00184310(u16 id);

/* qsort-style comparison of two devil ids by rank (ascending), grade (descending) and id (ascending). */
s32 devilCompareByRankGradeAscending(u16 *a, u16 *b)
{
    DevilRecord *recordA = FUN_00184310(*a);
    DevilRecord *recordB = FUN_00184310(*b);
    s32 result = recordA->rank - recordB->rank;

    if (result == 0) {
        result = recordB->grade - recordA->grade;
        if (result == 0) {
            result = recordA->id - recordB->id;
        }
    }
    return result;
}

} /* extern "C" */
