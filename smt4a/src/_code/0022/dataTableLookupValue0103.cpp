#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 value;
} Entry;

u32 dataTableGet(u32 table, u32 arg);
u32 dataTableGetCount(u32 table);
Entry *dataTableGetEntries(void);

/* Returns the value that data table (1, 3) maps `id` to; 0x32 when the id is not found or maps to 0. */
u16 dataTableLookupValue0103(u32 id)
{
    u16 value;
    u32 table;
    Entry *entries;
    u32 i;

    table = dataTableGet(1, 3);
    entries = dataTableGetEntries();
    for (i = 0; i < dataTableGetCount(table); i = i + 1) {
        if (entries[i].id == id) {
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
