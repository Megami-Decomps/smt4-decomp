#include "common.h"
#include "addon/AocEntryKind.h"

struct Record { u32 first; u32 second; u8 kind; };

extern "C" {
/* Copies or updates the stored values. */
Record *itemCategoryFindByItemId(u32 id);

u32 aocEntryGetKind(u32 id)
{
    Record *record = itemCategoryFindByItemId(id);
    return record != NULL ? record->kind : 0;
}
}
