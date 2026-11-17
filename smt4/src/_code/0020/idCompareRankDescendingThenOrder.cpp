#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "gamedata/EquipmentRecord.h"

// Sort IDs by descending rank, then ascending secondary order.
extern "C" s32 idCompareRankDescendingThenOrder(const u16* left, const u16* right)
{
    EquipmentRecord* leftRecord = itemTableGetEquipmentRecord(*left);
    EquipmentRecord* rightRecord = itemTableGetEquipmentRecord(*right);
    s32 difference = rightRecord->element - leftRecord->element;
    if (difference == 0) {
        leftRecord = itemTableGetEquipmentRecord(*left);
        rightRecord = itemTableGetEquipmentRecord(*right);
        difference = leftRecord->order - rightRecord->order;
    }
    return difference;
}
