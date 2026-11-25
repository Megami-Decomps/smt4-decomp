#include "shard/ItemStackLimit.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/ConsumableRecordA.h"

extern "C" {


/* Returns how many of the item can be held: 1 for unlimited storage, the record's limit for limited
 * types (999 when the record leaves it 0), 0 for unknown items. */
s32 itemGetStackLimit(u32 id)
{
    ItemCategoryEntry *entry = itemCategoryFindByItemId(id);

    if (entry == NULL) {
        return 0;
    }
    if (entry->storage == 0) {
        return 1;
    }
    if (entry->storage != 1) {
        return 0;
    }
    switch (entry->type) {
    case 1:
    case 12: {
        ConsumableRecordA *record = itemTableGetItemRecord(id);
        if (record == NULL) {
            return 0;
        }
        if (record->sortBits.stackLimit != 0) {
            return record->sortBits.stackLimit;
        }
        break;
    }
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8: {
        EquipmentRecordA *record = itemTableGetEquipmentRecord(id);
        if (record == NULL) {
            return 0;
        }
        if (record->flagBits.stackLimit != 0) {
            return record->flagBits.stackLimit;
        }
        break;
    }
    }
    return 999;
}

} /* extern "C" */
