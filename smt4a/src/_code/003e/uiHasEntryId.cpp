#include "common.h"

extern "C" {

struct Entry { u32 unk00; s32 id; };
struct Owner { u8 unk0000[0x216c]; Entry *entries[42]; };

s32 uiHasEntryId(const Owner *owner, s32 id)
{
    for (s32 i = 0; i < 42; i++) {
        Entry *entry = owner->entries[i];
        if (entry != NULL && entry->id == id) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
