#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" s32 dataTable08Sub2CompareSecondaryKeysDescending(const SortItem* leftId, const SortItem* rightId)
{
    const EquipmentRecordA* left = itemTableGetEquipmentRecord(leftId->id);
    const EquipmentRecordA* right = itemTableGetEquipmentRecord(rightId->id);
    s32 difference = right->target - left->target;
    if (difference == 0) {
        left = itemTableGetEquipmentRecord(leftId->id);
        right = itemTableGetEquipmentRecord(rightId->id);
        difference = right->order - left->order;
    }
    return difference;
}
