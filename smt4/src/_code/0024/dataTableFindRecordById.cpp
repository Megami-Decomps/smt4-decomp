#include "common.h"
#include "gamedata/DataTable.h"

extern "C" {

typedef struct Entry00246944 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 id;        /* -1 ends the list */
    /* 0x22 */ u8 unk22[0xa];
} Entry00246944;  /* 0x2c */

void *dataTableGet(s32 table, s32 slot);
u32 dataTableGetCount(void *table);

/* Entry `index` of the table, or NULL past its end. */
static Entry00246944 *tableEntry(void *table, u32 index)
{
    Entry00246944 *entries = reinterpret_cast<Entry00246944 *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    return NULL;
}

/* Finds the entry of data table 0x2e, section 2 whose id is `id`; stops at the -1 terminator (returns 0). */
Entry00246944 *dataTableFindRecordById(s32 id)
{
    s32 i;

    for (i = 0; i < (s32)dataTableGetCount(dataTableGet(0x2e, 2)); i++) {
        Entry00246944 *entry = tableEntry(dataTableGet(0x2e, 2), i);

        if (entry->id == -1) {
            return NULL;
        }
        if (entry->id == id) {
            return entry;
        }
    }
    return NULL;
}

} /* extern "C" */
