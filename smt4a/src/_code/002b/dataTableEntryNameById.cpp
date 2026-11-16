#include "gamedata/DataTable.h"

extern "C" {

typedef struct Entry002b7af0 {
    /* 0x00 */ char name[0x20];
    /* 0x20 */ s16 id;          /* -1 ends the table */
    /* 0x22 */ u8 unk22[0xa];
} Entry002b7af0;


/* Entry `index` of the table, or NULL past its end. */
static Entry002b7af0 *tableEntry(void *table, u32 index)
{
    Entry002b7af0 *entries = reinterpret_cast<Entry002b7af0 *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    return NULL;
}

/* Name of entry `id` in data table 0x2e section 2 (0 when the table ends first); id 10 read as kind 9 or 10 has its own fixed name. */
const char *dataTableEntryNameById(s32 id, s32 kind)
{
    s32 i;

    for (i = 0; i < (s32)dataTableGetCount(dataTableGet(0x2e, 2)); i++) {
        Entry002b7af0 *entry = tableEntry(dataTableGet(0x2e, 2), i);

        if (entry->id == -1) {
            return NULL;
        }
        if (entry->id == id) {
            if (entry->id == 10 && (kind == 9 || kind == 10)) {
                return "\x82r\x82\x8b\x82\x99\x81@\x82s\x82\x8f\x82\x97\x82\x85\x82\x92";
            }
            return entry->name;
        }
    }
    return NULL;
}

} /* extern "C" */
