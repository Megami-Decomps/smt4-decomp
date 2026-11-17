#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

/* Sort comparison of two ids: lower grade first, then higher order first. */
s32 devilIdCompareGradeAsc(u16 *idA, u16 *idB)
{
    EquipmentRecord *recordA = itemTableGetEquipmentRecord(*idA);
    EquipmentRecord *recordB = itemTableGetEquipmentRecord(*idB);
    s32 diff = recordA->statBonus[1] - recordB->statBonus[1];

    if (diff == 0) {
        diff = recordB->id - recordA->id;
    }
    return diff;
}

} /* extern "C" */
