#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "shard/W5_W5Match7_EntrySort.h"

// Sort categories ascending, then order each category by descending tie key.
extern "C" s32 dataCompareEntryCategoryAndKey(const SortItem *left, const SortItem *right)
{
    EquipmentRecordA *leftData = itemTableGetEquipmentRecord(left->id);
    EquipmentRecordA *rightData = itemTableGetEquipmentRecord(right->id);
    s32 result = leftData->element - rightData->element;
    if (result == 0) {
        leftData = itemTableGetEquipmentRecord(left->id);
        rightData = itemTableGetEquipmentRecord(right->id);
        result = rightData->order - leftData->order;
    }
    return result;
}
