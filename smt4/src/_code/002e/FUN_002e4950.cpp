#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {

/* Compares two record ids by rank (lower first), then by order (higher first). */
s32 FUN_002e4950(u16 *a, u16 *b)
{
    EquipmentRecord *recordA = itemTableGetEquipmentRecord(*a);
    EquipmentRecord *recordB = itemTableGetEquipmentRecord(*b);
    s32 diff = recordA->statBonus[0] - recordB->statBonus[0];

    if (diff == 0) {
        diff = recordB->id - recordA->id;
    }
    return diff;
}

} /* extern "C" */
