#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

/* Sort comparison of two ids: higher grade first, then lower order first. */
s32 devilIdCompareGradeDesc(u16 *idA, u16 *idB)
{
    EquipmentRecord *recordA = itemTableGetEquipmentRecord(*idA);
    EquipmentRecord *recordB = itemTableGetEquipmentRecord(*idB);
    s32 diff = recordB->statBonus[1] - recordA->statBonus[1];

    if (diff == 0) {
        diff = recordA->id - recordB->id;
    }
    return diff;
}

} /* extern "C" */
