#include "common.h"

struct EntryState { u32 unk00; s32 id; };
struct EntryTable { u8 unk00[0x2134]; EntryState *entries[42]; };
/* Reports whether the table contains a live entry with the requested identifier. */
extern "C" s32 entryContainsIdentifier(const EntryTable *table, s32 id)
{
    for (s32 index = 0; index < 42; ++index) {
        if (table->entries[index] && table->entries[index]->id == id)
            return 1;
    }
    return 0;
}
