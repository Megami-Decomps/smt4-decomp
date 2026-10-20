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

/* qsort-style comparison of two entries: empty entries sort last, then by devil grade (ascending), rank and id (descending). */
s32 devilCompareNonEmptyFirst(SortEntry *a, SortEntry *b)
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

        result = recordA->grade - recordB->grade;
        if (result == 0) {
            result = recordB->rank - recordA->rank;
            if (result == 0) {
                result = recordB->id - recordA->id;
            }
        }
    }
    return result;
}

} /* extern "C" */
