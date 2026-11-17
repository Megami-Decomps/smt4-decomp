#include "gamedata/EquipmentRecord.h"


// Sort table 08/sub2 IDs by signed primary key, then descending secondary key.
extern "C" s32 dataTable08Sub2CompareBySortKeys(const u16* leftId, const u16* rightId)
{
    const EquipmentRecord* left = itemTableGetEquipmentRecord(*leftId);
    const EquipmentRecord* right = itemTableGetEquipmentRecord(*rightId);
    s32 difference = left->hpBonus - right->hpBonus;
    if (difference == 0) {
        left = itemTableGetEquipmentRecord(*leftId);
        right = itemTableGetEquipmentRecord(*rightId);
        difference = right->order - left->order;
    }
    return difference;
}
