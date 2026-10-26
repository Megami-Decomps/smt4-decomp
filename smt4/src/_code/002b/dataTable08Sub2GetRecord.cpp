#include "common.h"
#include "gamedata/DataTable.h"

extern "C" {

/* The content system; only the add-on lookup flag is named. */
typedef struct AocSystemView {
    /* 0x000 */ u8 unk000[0x3B8];
    /* 0x3B8 */ s32 lookupEnabled;
} AocSystemView;

/* A 0xA8-byte record of data table 8 type 2, searched by its key at +0x50. */
typedef struct Table8Type2Record {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u16 key;
    /* 0x52 */ u8 unk52[0x56];
} Table8Type2Record;

Table8Type2Record *FUN_00141548(AocSystemView *system, u32 id);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 dataTable08Sub2CompareKeys(const void *left, const void *right);

extern AocSystemView *g_aocSystem; /* 0x433158 */

/* Returns the record of data table 8 type 2 for `id`: the add-on's when it has one, else the one found in the table. */
Table8Type2Record *dataTable08Sub2GetRecord(u32 id)
{
    Table8Type2Record key;
    Table8Type2Record *record;
    key.key = id;
    if (g_aocSystem->lookupEnabled == 0 || (record = FUN_00141548(g_aocSystem, id)) == NULL) {
        void *table = dataTableGet(8, 2);
        record = (Table8Type2Record *)table;
        if (table != NULL) {
            void *entries = dataTableGetEntries(table);
            u32 count = dataTableGetCount(table);
            record = (Table8Type2Record *)libc_bsearch(&key, entries, count, sizeof(Table8Type2Record), dataTable08Sub2CompareKeys);
        }
    }
    return record;
}

} /* extern "C" */
