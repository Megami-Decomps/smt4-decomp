#include "common.h"
struct EntryState { s32 first; s32 second; };
struct EntryTable {
    /* 0x0000 */ u8 unk00[0x1030];
    /* 0x1030 */ EntryState entries[109];
};
/* Invalidates both state values in every entry. */
extern "C" void FUN_004f7fbc(EntryTable *table)
{
    for (u32 index = 0; index < 109; ++index) {
        table->entries[index].first = -1;
        table->entries[index].second = -1;
    }
}
