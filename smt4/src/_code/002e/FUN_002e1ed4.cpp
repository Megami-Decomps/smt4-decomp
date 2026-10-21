#include "common.h"

struct CategoryEntry {
    u8 unk00[0x22];
    s16 categoryIndex; // 0x22
};

extern "C" {
CategoryEntry *dataTable12FindBySortKey(u16);
u32 categoryIdFromIndex(s32);
void FUN_002ae9ec(s32, s32, u32, u32, u32, u32);

// Dispatch a category event for the requested table entry, when it exists.
void FUN_002e1ed4(u16 entryId, u32 argument, u32 first, u32 second)
{
    CategoryEntry *entry = dataTable12FindBySortKey(entryId);
    if (entry != NULL) {
        u32 category = categoryIdFromIndex(entry->categoryIndex);
        FUN_002ae9ec(2, 0x13, category, argument, first, second);
    }
}
}
