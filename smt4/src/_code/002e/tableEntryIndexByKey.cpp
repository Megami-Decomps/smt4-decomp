#include "common.h"

extern "C" {

typedef struct Entry002eea80 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 key;         /* id in the low 7 bits */
    /* 0x0c */ u8 unk0c[0x50];
} Entry002eea80;

void *dataTableGet(s32 table, u8 slot);
Entry002eea80 *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);

/* Index of the entry of data table 10 (section chosen by `group`) whose key id is `id`, 0 when none. */
u32 tableEntryIndexByKey(s32 group, u32 id)
{
    u8 slot = 0;
    void *table;
    Entry002eea80 *entries;
    u32 count;
    s32 i;

    if (group == 5) {
        slot = 2;
    } else if (group < 5) {
        if (group != 3) {
            if (group == 4) {
                slot = 1;
            }
        }
    } else if (group == 0x5c) {
        slot = 4;
    } else if (group == 0x5d) {
        slot = 3;
    }
    table = dataTableGet(10, slot);
    entries = dataTableGetEntries(table);
    count = dataTableGetCount(table);
    for (i = 0; i < count; i++) {
        if ((entries[i].key & 0x7f) == id) {
            return i;
        }
    }
    return 0;
}

} /* extern "C" */
