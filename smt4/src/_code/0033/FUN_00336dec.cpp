#include "common.h"

struct FilteredEntry {
    u8 unk00[0x44];
    s8 category; // 0x44
    u8 unk45[0x0b];
    u32 flags; // 0x50
    u8 unk054[0xc0];
};
struct EntryFilterOwner {
    u8 unk0000[0x1e98];
    FilteredEntry *entries; // 0x1e98
};

extern "C" s32 FUN_00336dec(const EntryFilterOwner *owner, s32 category)
{
    s32 count = 0;
    for (s32 index = 4; index < 0x36; ++index) {
        const FilteredEntry &entry = owner->entries[index];
        if ((entry.flags & 1) != 0 && (entry.flags & 0x80) != 0
                && entry.category == category)
            ++count;
    }
    return count;
}
