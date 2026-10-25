#include "common.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x0 */ u16 id;
    /* 0x2 */ u8 rank;
    /* 0x3 */ u8 grade;
} DevilRecord;

extern u32 itemGetFlagBit1(u16 id);
extern DevilRecord *devilGetRecord(u16 id);

/* qsort-style comparison of two devil ids: by flag word first, then rank, grade and id. */
s32 devilCompare(u16 *a, u16 *b)
{
    u32 flagsA = itemGetFlagBit1(*a);
    u32 flagsB = itemGetFlagBit1(*b);
    DevilRecord *recordA;
    DevilRecord *recordB;
    s32 result;

    if ((flagsB & ~flagsA) != 0) {
        result = 1;
    } else if ((flagsA & ~flagsB) != 0) {
        result = -1;
    } else {
        recordA = devilGetRecord(*a);
        recordB = devilGetRecord(*b);
        result = recordB->rank - recordA->rank;
        if (result == 0) {
            result = recordA->grade - recordB->grade;
            if (result == 0) {
                result = recordB->id - recordA->id;
            }
        }
    }
    return result;
}

} /* extern "C" */
