#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

/* qsort-style comparison of two ids by the records' rank (descending), then order (ascending). */
s32 dataTable08Sub2CompareByRank(u16 *a, u16 *b)
{
    EquipmentRecord *recordA = itemTableGetEquipmentRecord(*a);
    EquipmentRecord *recordB = itemTableGetEquipmentRecord(*b);
    s32 result = recordB->statBonus[4] - recordA->statBonus[4];

    if (result == 0) {
        result = recordA->id - recordB->id;
    }
    return result;
}

} /* extern "C" */
