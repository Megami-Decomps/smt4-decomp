#include "common.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u16 order;
    /* 0x52 */ u8 unk52[0x10];
    /* 0x62 */ s8 grade;
} DevilRecord;

extern DevilRecord *dataTable08Sub2GetRecord(u32 id);

/* Sort comparison of two ids: higher grade first, then lower order first. */
s32 devilIdCompareGradeDesc(u16 *idA, u16 *idB)
{
    DevilRecord *recordA = dataTable08Sub2GetRecord(*idA);
    DevilRecord *recordB = dataTable08Sub2GetRecord(*idB);
    s32 diff = recordB->grade - recordA->grade;

    if (diff == 0) {
        diff = recordA->order - recordB->order;
    }
    return diff;
}

} /* extern "C" */
