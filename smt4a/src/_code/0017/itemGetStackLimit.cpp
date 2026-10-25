#include "shard/ItemStackLimit.h"

extern "C" {

ItemCategoryEntry *itemCategoryFindByItemId(u32 id);
ItemRecordA *dataTable8FindRecord(u32 id);
ItemRecordB *dataTable08Sub2GetRecord(u32 id);

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
        ItemRecordA *record = dataTable8FindRecord(id);
        if (record == NULL) {
            return 0;
        }
        if (record->limit != 0) {
            return record->limit;
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
        ItemRecordB *record = dataTable08Sub2GetRecord(id);
        if (record == NULL) {
            return 0;
        }
        if (record->limit != 0) {
            return record->limit;
        }
        break;
    }
    }
    return 999;
}

} /* extern "C" */
