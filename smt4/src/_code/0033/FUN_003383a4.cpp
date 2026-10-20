#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x1C];
} Entry; /* 0x1C */

typedef struct Owner {
    /* 0x0000 */ u8 unk0000[0x2244];
    /* 0x2244 */ void *file;
} Owner;

extern void *dataTableFileGetTable(void *file, s32 index);
extern Entry *dataTableGetEntries(void *table);
extern s32 dataTableGetCount(void *table);

/* The table entry for ids 15-21 (index id - 15) when it is within the table; otherwise the
 * table's first entry. NULL when the owner has no data file. */
Entry *FUN_003383a4(Owner *owner, u32 id)
{
    void *table;
    Entry *entries;
    s16 index;

    if (owner->file == NULL) {
        return NULL;
    }
    table = dataTableFileGetTable(owner->file, 0);
    entries = dataTableGetEntries(table);
    if (id - 15 < 7) {
        index = id - 15;
        s32 last = dataTableGetCount(table) - 1;

        if (index <= last) {
            return &entries[index];
        }
    }
    return entries;
}

} /* extern "C" */
