#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" s32 dataTable08Sub2CompareSecondaryKeysDescending(const SortItem* leftId, const SortItem* rightId)
{
    const EquipmentRecordA* left = dataTable08Sub2GetRecord(leftId->id);
    const EquipmentRecordA* right = dataTable08Sub2GetRecord(rightId->id);
    s32 difference = right->target - left->target;
    if (difference == 0) {
        left = dataTable08Sub2GetRecord(leftId->id);
        right = dataTable08Sub2GetRecord(rightId->id);
        difference = right->order - left->order;
    }
    return difference;
}
