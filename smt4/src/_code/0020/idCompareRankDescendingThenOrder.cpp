#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "gamedata/EquipmentRecord.h"

// Sort IDs by descending rank, then ascending secondary order.
extern "C" s32 idCompareRankDescendingThenOrder(const u16* left, const u16* right)
{
    EquipmentRecord* leftRecord = dataTable08Sub2GetRecord(*left);
    EquipmentRecord* rightRecord = dataTable08Sub2GetRecord(*right);
    s32 difference = rightRecord->element - leftRecord->element;
    if (difference == 0) {
        leftRecord = dataTable08Sub2GetRecord(*left);
        rightRecord = dataTable08Sub2GetRecord(*right);
        difference = leftRecord->order - rightRecord->order;
    }
    return difference;
}
