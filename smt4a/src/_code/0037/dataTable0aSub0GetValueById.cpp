#include "common.h"

extern "C" {

/* One entry of data table 0x0a sub-table 0. */
typedef struct DataTable0aEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 value;
} DataTable0aEntry;

extern void *dataTableGet(u32 table, u32 index);
extern u32 dataTableGetCount(void *table);
extern DataTable0aEntry *dataTableGetEntries(void);

/* Returns the value of the entry with the given id, or 0 when there is none. */
u16 dataTable0aSub0GetValueById(u32 id)
{
    void *table = dataTableGet(10, 0);
    DataTable0aEntry *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);
    s32 i;

    for (i = 0; i < count; i++) {
        if (entries[i].id == id) {
            return entries[i].value;
        }
    }
    return 0;
}

} /* extern "C" */
