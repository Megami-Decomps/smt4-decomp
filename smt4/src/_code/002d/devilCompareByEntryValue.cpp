#include "common.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x0 */ u16 id;
    /* 0x2 */ u8 rank;
    /* 0x3 */ u8 grade;
} DevilRecord;

extern DevilRecord *devilGetRecord(u16 id);
extern s32 dataTableGetEntry0102Value(u16 id);

/* qsort-style comparison of two devil ids by their entry value, then rank, grade and id (all descending except grade). */
s32 devilCompareByEntryValue(u16 *a, u16 *b)
{
    DevilRecord *recordA = devilGetRecord(*a);
    DevilRecord *recordB = devilGetRecord(*b);
    s32 valueA = dataTableGetEntry0102Value(recordA->id);
    s32 valueB = dataTableGetEntry0102Value(recordB->id);
    s32 result = valueB - valueA;

    if (result == 0) {
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
