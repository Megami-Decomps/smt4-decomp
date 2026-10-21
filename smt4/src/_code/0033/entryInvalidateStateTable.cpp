#include "common.h"
struct EntryState {
    /* 0x00 */ s32 first;
    /* 0x04 */ s32 second;
    /* 0x08 */ u8 unk08[16];
    /* 0x18 */ s32 third;
};
struct EntryTable {
    /* 0x0000 */ u8 unk00[0x2318];
    /* 0x2318 */ EntryState entries[109];
};
/* Invalidates the three state fields in every table entry. */
extern "C" void entryInvalidateStateTable(EntryTable *table)
{
    for (u32 index = 0; index < 109; ++index) {
        table->entries[index].first = -1;
        table->entries[index].second = -1;
        table->entries[index].third = -1;
    }
}
