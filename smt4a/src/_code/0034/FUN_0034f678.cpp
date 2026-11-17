#include "common.h"
#include "gamedata/EquipmentRecordA.h"

struct EquipmentUpgradeBonusesView {
    s16 unk00;     // 0x00
    u8 unk02[14];  // 0x02
};

extern "C" void equipmentGetCappedUpgradeBonuses(
    u16 equipmentId, EquipmentUpgradeBonusesView* bonuses);

// Compare equipment by unk36, breaking ties by descending unk70.
extern "C" s32 FUN_0034f678(u16* firstId, u16* secondId)
{
    EquipmentRecordA* first = itemTableGetEquipmentRecord(*firstId);
    EquipmentRecordA* second = itemTableGetEquipmentRecord(*secondId);
    EquipmentUpgradeBonusesView firstBonuses;
    EquipmentUpgradeBonusesView secondBonuses;

    equipmentGetCappedUpgradeBonuses(*firstId, &firstBonuses);
    equipmentGetCappedUpgradeBonuses(*secondId, &secondBonuses);

    s32 difference = (first->hpBonus + firstBonuses.unk00)
                   - (second->hpBonus + firstBonuses.unk00);
    if (difference == 0) {
        first = itemTableGetEquipmentRecord(*firstId);
        second = itemTableGetEquipmentRecord(*secondId);
        difference = second->order - first->order;
    }
    return difference;
}
