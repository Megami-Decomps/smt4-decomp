#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

/* Compares two record ids by rank (higher first), then by order. */
s32 btlDevilCompareRankAndOrder(u16 *a, u16 *b)
{
    EquipmentRecord *recordA = itemTableGetEquipmentRecord(*a);
    EquipmentRecord *recordB = itemTableGetEquipmentRecord(*b);
    s32 diff = recordB->statBonus[0] - recordA->statBonus[0];

    if (diff == 0) {
        diff = recordA->id - recordB->id;
    }
    return diff;
}

} /* extern "C" */
