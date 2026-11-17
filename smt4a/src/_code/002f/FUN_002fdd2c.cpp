#include "shard/W6_W6Match5_EntrySortPrimaryKey.h"

// Compare the primary key, then the existing table tie-break key.
extern "C" s32 FUN_002fdd2c(const SortItem *left, const SortItem *right)
{
    EquipmentRecordA *leftData = itemTableGetEquipmentRecord(left->id);
    EquipmentRecordA *rightData = itemTableGetEquipmentRecord(right->id);
    s32 result = entrySortGetPrimaryKey(leftData) - entrySortGetPrimaryKey(rightData);
    if (result == 0) {
        leftData = itemTableGetEquipmentRecord(left->id);
        rightData = itemTableGetEquipmentRecord(right->id);
        result = leftData->order - rightData->order;
    }
    return result;
}
