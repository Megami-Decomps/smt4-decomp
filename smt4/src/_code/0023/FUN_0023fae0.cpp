#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u32 flags2;
    /* 0x58 */ u8 unk58[0x114 - 0x58];
} Entry; /* 0x114 */

typedef struct EntryOwner {
    /* 0x0000 */ u8 unk0000[0x1E98];
    /* 0x1E98 */ Entry *entries;
} EntryOwner;

/* Returns 0 if any entry of the given group (0-3, each a range of the table) is in the state
 * flags & 0x81 == 0x81 with neither flag 2 nor flags2 bit 4 set; 1 otherwise. */
u32 FUN_0023fae0(EntryOwner *owner, s32 group)
{
    s32 first = 0;
    s32 count = 0;
    s32 i;

    if (group == 0) {
        count = 4;
    } else if (group == 1) {
        first = 4;
        count = 0x32;
    } else if (group == 2) {
        first = 0x36;
        count = 1;
    } else if (group == 3) {
        first = 0x43;
        count = 0x2a;
    }
    for (i = first; i < first + count; i++) {
        Entry *entry = &owner->entries[i];

        if ((entry->flags & 1) != 0 && (entry->flags & 0x80) != 0 && (entry->flags & 2) == 0 && (entry->flags2 & 4) == 0) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
