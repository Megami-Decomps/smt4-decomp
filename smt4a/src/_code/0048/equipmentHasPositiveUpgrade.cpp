#include "shard/W5_W5Match7_EntrySort.h"

extern "C" EquipmentUpgradeRecord *FUN_0019c06c(u32 item);

/* Test the positive upgrade bonuses relevant to this equipment category. */
extern "C" bool equipmentHasPositiveUpgrade(u32 item)
{
    if (item == 0) {
        return 0;
    }
    EquipmentUpgradeBonuses bonuses;
    equipmentGetCappedUpgradeBonuses(item, bonuses.values);
    const EquipmentUpgradeRecord *record = FUN_0019c06c(item);
    if (record == NULL) {
        return 0;
    }
    bool upgraded = false;
    switch (record->category) {
    case 4:
        if (bonuses.values[0] > 0 || bonuses.values[4] > 0 || bonuses.values[6] > 0) {
            upgraded = true;
        }
        break;
    case 5:
        if (bonuses.values[0] > 0) {
            upgraded = true;
        }
        break;
    case 6:
        if (bonuses.values[0] > 0 || bonuses.values[5] > 0) {
            upgraded = true;
        }
        break;
    }
    return upgraded;
}
