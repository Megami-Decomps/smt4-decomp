#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "gamedata/EquipmentRecord.h"

// Sort IDs by ascending category, then ascending secondary order.
extern "C" s32 idCompareCategoryThenOrder(const u16* left, const u16* right)
{
    EquipmentRecord* leftRecord = dataTable08Sub2GetRecord(*left);
    EquipmentRecord* rightRecord = dataTable08Sub2GetRecord(*right);
    s32 difference = leftRecord->target - rightRecord->target;
    if (difference == 0) {
        leftRecord = dataTable08Sub2GetRecord(*left);
        rightRecord = dataTable08Sub2GetRecord(*right);
        difference = leftRecord->order - rightRecord->order;
    }
    return difference;
}
