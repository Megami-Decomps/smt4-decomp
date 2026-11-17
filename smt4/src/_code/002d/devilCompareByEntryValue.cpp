#include "gamedata/NkmBaseRecord.h"

extern "C" {

extern s32 dataTableGetEntry0102Value(u16 id);

/* qsort-style comparison of two devil ids by their entry value, then rank, grade and id (all descending except grade). */
s32 devilCompareByEntryValue(u16 *a, u16 *b)
{
    NkmBaseRecord *recordA = nkmBaseGetRecord(*a);
    NkmBaseRecord *recordB = nkmBaseGetRecord(*b);
    s32 valueA = dataTableGetEntry0102Value(recordA->id);
    s32 valueB = dataTableGetEntry0102Value(recordB->id);
    s32 result = valueB - valueA;

    if (result == 0) {
        recordA = nkmBaseGetRecord(*a);
        recordB = nkmBaseGetRecord(*b);
        result = recordB->race - recordA->race;
        if (result == 0) {
            result = recordA->level - recordB->level;
            if (result == 0) {
                result = recordB->id - recordA->id;
            }
        }
    }
    return result;
}

} /* extern "C" */
