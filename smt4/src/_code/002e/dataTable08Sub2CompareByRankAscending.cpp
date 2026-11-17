#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

/* qsort-style comparison of two ids by the records' rank (ascending), then order (descending). */
s32 dataTable08Sub2CompareByRankAscending(u16 *a, u16 *b)
{
    EquipmentRecord *recordA = dataTable08Sub2GetRecord(*a);
    EquipmentRecord *recordB = dataTable08Sub2GetRecord(*b);
    s32 result = recordA->statBonus[4] - recordB->statBonus[4];

    if (result == 0) {
        result = recordB->id - recordA->id;
    }
    return result;
}

} /* extern "C" */
