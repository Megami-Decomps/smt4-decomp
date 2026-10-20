#include "common.h"

extern "C" {

u32 dataTableGetCount(u32 table);
extern int dataTableGetEntries(void);
extern u32 dataTableGet(u32 id, u32 index);

typedef struct Entry {
    /* 0x0 */ u16 key;
    /* 0x2 */ u16 value;
} Entry;

/* Looks `key` up in data table 1/3; returns its value, or 0x32 when absent or zero. */
u16 dataTableLookupValue0103(u32 key)
{
    u16 value;
    u32 table = dataTableGet(1, 3);
    Entry *entries = (Entry *)dataTableGetEntries();
    u32 i;

    for (i = 0; i < dataTableGetCount(table); i++) {
        if (entries[i].key == key) {
            value = entries[i].value;
            if (value == 0) {
                return 0x32;
            }
            return value;
        }
    }
    return 0x32;
}

} /* extern "C" */
