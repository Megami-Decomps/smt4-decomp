#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 data[0x1C];
} Entry;

typedef struct Holder {
    /* 0x0000 */ u8 unk0000[0x227C];
    /* 0x227C */ void *file;
} Holder;

u32 dataTableFileGetTable(void *file, u32 section);
Entry *dataTableGetEntries(void);
s32 dataTableGetCount(u32 table);

/* Returns entry (id - 15) of the holder's file table when id is 15-21 and the entry exists; otherwise the first entry (NULL without a file). */
Entry *FUN_003eda28(Holder *holder, s32 id)
{
    u32 table;
    Entry *entries;

    if (holder->file == NULL) {
        return NULL;
    }
    table = dataTableFileGetTable(holder->file, 0);
    entries = dataTableGetEntries();
    if ((u32)(id - 15) < 7) {
        s32 index = (s16)(id - 15);
        s32 count = dataTableGetCount(table);

        if (index <= count - 1) {
            return entries + index;
        }
    }
    return entries;
}

} /* extern "C" */
