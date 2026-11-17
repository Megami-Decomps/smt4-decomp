#include "common.h"
#include "shard/ItemStackLimit.h"
#include "gamedata/ConsumableRecordA.h"

struct EntryCategory {
    u32 firstId;
    u32 lastId;
    u8 type; // 0x08
};

extern "C" {

// Test the first entry flag only for the two supported entry categories.
bool FUN_00481404(u16 id)
{
    EntryCategory *category = reinterpret_cast<EntryCategory *>(itemCategoryFindByItemId(id));
    if (category == NULL) {
        return false;
    }
    if (category->type != 1 && category->type != 12) {
        return false;
    }
    ConsumableRecordA *entry = itemTableGetItemRecord(id);
    if (entry == NULL) {
        return false;
    }
    if (entry->flags & 1) {
        return true;
    }
    return false;
}
}
