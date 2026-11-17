#include "gamedata/EquipmentRecord.h"


// Sort table 08/sub2 IDs by signed primary key, then descending secondary key.
extern "C" s32 dataTable08Sub2CompareBySortKeys(const u16* leftId, const u16* rightId)
{
    const EquipmentRecord* left = dataTable08Sub2GetRecord(*leftId);
    const EquipmentRecord* right = dataTable08Sub2GetRecord(*rightId);
    s32 difference = left->hpBonus - right->hpBonus;
    if (difference == 0) {
        left = dataTable08Sub2GetRecord(*leftId);
        right = dataTable08Sub2GetRecord(*rightId);
        difference = right->order - left->order;
    }
    return difference;
}
