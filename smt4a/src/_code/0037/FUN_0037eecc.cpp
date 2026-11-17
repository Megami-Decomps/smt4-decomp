#include "common.h"
#include "gamedata/NamedVariantTable.h"
#include <string.h>
#include "gamedata/ConsumableRecordA.h"

extern "C" {
// Resolve a table entry by its name, excluding the string used for no entry.
const NamedVariantTableEntry *FUN_0037eecc(u32 selection, u16 id, s32 alternate)
{
    ConsumableRecordA *entry = itemTableGetItemRecord(id);
    if (entry == NULL) {
        return 0;
    }
    if (strcmp(entry->name, "0") == 0) {
        return 0;
    }
    return namedVariantTableGetEntries(selection, entry->name, alternate);
}
}
