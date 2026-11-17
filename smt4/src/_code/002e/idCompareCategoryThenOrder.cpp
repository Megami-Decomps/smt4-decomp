#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "gamedata/EquipmentRecord.h"

// Sort IDs by ascending category, then ascending secondary order.
extern "C" s32 idCompareCategoryThenOrder(const u16* left, const u16* right)
{
    EquipmentRecord* leftRecord = itemTableGetEquipmentRecord(*left);
    EquipmentRecord* rightRecord = itemTableGetEquipmentRecord(*right);
    s32 difference = leftRecord->target - rightRecord->target;
    if (difference == 0) {
        leftRecord = itemTableGetEquipmentRecord(*left);
        rightRecord = itemTableGetEquipmentRecord(*right);
        difference = leftRecord->order - rightRecord->order;
    }
    return difference;
}
