#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u16 id;           /* 0xFFFF = empty */
    /* 0x02 */ u8 unk02[0x1E];
} Entry; /* 0x20 bytes */

typedef struct EntryList {
    /* 0x00 */ Entry *entries;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s32 current;
    /* 0x0C */ u8 unk0C[0x28];
    /* 0x34 */ u32 flags;        /* 0x20: needs a filled current entry, 0x80: blocked */
    /* 0x38 */ u8 unk38[0xC];
    /* 0x44 */ u8 state;
} EntryList;

/* True when the list is in state 2, its current entry is usable (when required) and it is not blocked. */
u32 entryListCurrentIsUsable(EntryList *list)
{
    u32 usable;

    if (list->state == 2
        && ((list->flags & 0x20) == 0 || list->entries[list->current].id != 0xFFFF)
        && (list->flags & 0x80) == 0) {
        usable = 1;
    } else {
        usable = 0;
    }
    return usable;
}

} /* extern "C" */
