#include "common.h"
#include "shard/ItemStackLimit.h"

struct EntryCategory {
    u32 firstId;
    u32 lastId;
    u8 type; // 0x08
};
struct FlaggedTableEntry {
    u8 unk00[0x68];
    u32 flags; // 0x68
};

extern "C" {
FlaggedTableEntry *dataTable8FindRecord(u16);

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
    FlaggedTableEntry *entry = dataTable8FindRecord(id);
    if (entry == NULL) {
        return false;
    }
    if (entry->flags & 1) {
        return true;
    }
    return false;
}
}
