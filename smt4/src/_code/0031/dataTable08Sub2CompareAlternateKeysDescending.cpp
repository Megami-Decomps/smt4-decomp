#include "gamedata/EquipmentRecord.h"


// Sort table 08/sub2 IDs by descending alternate primary and secondary keys.
extern "C" s32 dataTable08Sub2CompareAlternateKeysDescending(const u16* leftId, const u16* rightId)
{
    const EquipmentRecord* left = itemTableGetEquipmentRecord(*leftId);
    const EquipmentRecord* right = itemTableGetEquipmentRecord(*rightId);
    s32 difference = right->target - left->target;
    if (difference == 0) {
        left = itemTableGetEquipmentRecord(*leftId);
        right = itemTableGetEquipmentRecord(*rightId);
        difference = right->order - left->order;
    }
    return difference;
}
