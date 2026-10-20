#include "common.h"

extern "C" {

typedef struct SortEntry {
    /* 0x0 */ u16 id;
    /* 0x2 */ u16 count;
} SortEntry;

typedef struct DevilRecord {
    /* 0x0 */ u16 id;
    /* 0x2 */ u8 rank;
    /* 0x3 */ u8 grade;
} DevilRecord;

extern DevilRecord *devilGetRecord(u16 id);

/* qsort-style comparison of two entries: empty entries sort last, then by devil rank (ascending), grade (descending) and id (ascending). */
s32 devilCompareNonEmptyFirstB(SortEntry *a, SortEntry *b)
{
    s32 result;

    if (a->count == 0) {
        if (b->count == 0) {
            return 0;
        }
        return 1;
    }
    if (b->count == 0) {
        result = -1;
    } else {
        DevilRecord *recordA = devilGetRecord(a->id);
        DevilRecord *recordB = devilGetRecord(b->id);

        result = recordA->rank - recordB->rank;
        if (result == 0) {
            result = recordB->grade - recordA->grade;
            if (result == 0) {
                result = recordA->id - recordB->id;
            }
        }
    }
    return result;
}

} /* extern "C" */
