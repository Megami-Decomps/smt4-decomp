#include "common.h"

// Private views of the records used by this comparator.
struct EquipmentCompareRecordView {
    u8 unk00[0x36]; // 0x00
    s16 unk36;      // 0x36
    u8 unk38[0x38]; // 0x38
    u16 unk70;      // 0x70
};

struct EquipmentUpgradeBonusesView {
    s16 unk00;     // 0x00
    u8 unk02[14];  // 0x02
};

extern "C" EquipmentCompareRecordView* dataTable08Sub2GetRecord(u16 equipmentId);
extern "C" void equipmentGetCappedUpgradeBonuses(
    u16 equipmentId, EquipmentUpgradeBonusesView* bonuses);

// Compare equipment by unk36, breaking ties by descending unk70.
extern "C" s32 FUN_0034f678(u16* firstId, u16* secondId)
{
    EquipmentCompareRecordView* first = dataTable08Sub2GetRecord(*firstId);
    EquipmentCompareRecordView* second = dataTable08Sub2GetRecord(*secondId);
    EquipmentUpgradeBonusesView firstBonuses;
    EquipmentUpgradeBonusesView secondBonuses;

    equipmentGetCappedUpgradeBonuses(*firstId, &firstBonuses);
    equipmentGetCappedUpgradeBonuses(*secondId, &secondBonuses);

    s32 difference = (first->unk36 + firstBonuses.unk00)
                   - (second->unk36 + firstBonuses.unk00);
    if (difference == 0) {
        first = dataTable08Sub2GetRecord(*firstId);
        second = dataTable08Sub2GetRecord(*secondId);
        difference = second->unk70 - first->unk70;
    }
    return difference;
}
