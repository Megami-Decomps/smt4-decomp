#include "common.h"
#include "gamedata/EquipmentRecordA.h"

extern "C" {

extern void equipmentGetCappedUpgradeBonuses(u32 id, s16 *values);

/* Sort comparison of two ids: by the sum of the first equipmentGetCappedUpgradeBonuses value and the record bonus (b before a when larger), then by order ascending. */
s32 FUN_002b2bbc(u16 *idA, u16 *idB)
{
    s16 valuesA[8];
    s16 valuesB[8];
    EquipmentRecordA *recordA = itemTableGetEquipmentRecord(*idA);
    EquipmentRecordA *recordB = itemTableGetEquipmentRecord(*idB);
    s32 diff;

    equipmentGetCappedUpgradeBonuses(*idA, valuesA);
    equipmentGetCappedUpgradeBonuses(*idB, valuesB);
    diff = (valuesB[0] + recordB->hpBonus) - (valuesA[0] + recordA->hpBonus);
    if (diff == 0) {
        recordA = itemTableGetEquipmentRecord(*idA);
        recordB = itemTableGetEquipmentRecord(*idB);
        diff = recordA->order - recordB->order;
    }
    return diff;
}

} /* extern "C" */
