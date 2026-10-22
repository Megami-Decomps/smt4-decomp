/* NON_MATCHING: compiler folds the final flag test into conditional loads and merges the early zero returns differently. */
#include "common.h"

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
EntryCategory *FUN_0019c06c(u32);
FlaggedTableEntry *dataTable8FindRecord(u16);

// Test the first entry flag only for the two supported entry categories.
bool FUN_00481404(u16 id)
{
    EntryCategory *category = FUN_0019c06c(id);
    if (category == NULL || (category->type != 1 && category->type != 12))
        return 0;
    FlaggedTableEntry *entry = dataTable8FindRecord(id);
    if (entry == NULL)
        return 0;
    return (entry->flags & 1) != 0;
}
}
