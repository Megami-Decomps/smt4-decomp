#include "common.h"

extern "C" {

int dataTableGetCount(...);
extern int dataTableGetEntries(void);
int dataTableGet(int id, int index);

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 subTable;
} Entry;

/* Looks up record `index` (0x68-byte records) of data table 0x17/1 and queries its sub table. */
void dataTable17Sub1ChildGetCount(u32 unused, u32 index)
{
    u32 table = dataTableGet(0x17, 1);
    Entry *entries = (Entry *)dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        entries = NULL;
    } else {
        entries = (Entry *)((u8 *)entries + index * 0x68);
    }
    dataTableGet(0x17, entries->subTable + 2);
    dataTableGetCount();
}

} /* extern "C" */
