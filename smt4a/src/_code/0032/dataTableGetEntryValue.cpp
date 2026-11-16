/* NON_MATCHING: the entry lookup helper restores retail's `mov r1, r0`; only the scratch register of the index*11 product differs (retail r2, here r0). */
#include "common.h"
#include "gamedata/DataTable.h"
extern "C" {
struct Entry { u8 unk00[0x20]; u16 value; u8 unk22[0xA]; };

/* Entry `index` of table 0x4A's first section. */
static __inline Entry *tableEntryAt(u32 index)
{
    Entry *entries = (Entry *)dataTableGetEntries(dataTableGet(0x4A, 0));
    return &entries[index];
}

/* The value field of table 0x4A's entry `index`. */
u16 dataTableGetEntryValue(u32 index)
{
    Entry *entry = tableEntryAt(index);
    if (entry != NULL) {
        return entry->value;
    }
    return 0;
}
}
