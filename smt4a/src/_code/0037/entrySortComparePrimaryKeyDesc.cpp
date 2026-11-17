#include "shard/W6_W6Match5_EntrySortPrimaryKey.h"

extern "C" {
// Sort descending by the primary key, then descending by the tie-break key.
s32 entrySortComparePrimaryKeyDesc(const SortItem *left, const SortItem *right)
{
    EquipmentRecordA *leftData = itemTableGetEquipmentRecord(left->id);
    EquipmentRecordA *rightData = itemTableGetEquipmentRecord(right->id);
    s32 difference = entrySortGetPrimaryKey(rightData) - entrySortGetPrimaryKey(leftData);
    if (difference == 0) {
        leftData = itemTableGetEquipmentRecord(left->id);
        rightData = itemTableGetEquipmentRecord(right->id);
        difference = rightData->order - leftData->order;
    }
    return difference;
}
}
