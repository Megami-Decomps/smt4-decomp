#include "common.h"
#include "gamedata/NamedVariantTable.h"
#include <string.h>
#include "gamedata/ConsumableRecord.h"

extern "C" {

// Load an item's named resource unless the record uses the "0" sentinel.
void btlItemLoadNamedResource(u32 owner, u32 id, u32 mode)
{
    const ConsumableRecord* record = itemTableGetItemRecord(id);
    if (record != NULL && strcmp(record->name, "0") != 0)
        namedVariantTableGetEntries(owner, record->name, mode);
}
}
