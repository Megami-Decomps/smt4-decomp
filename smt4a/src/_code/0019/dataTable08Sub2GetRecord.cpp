#include "common.h"

extern "C" {

/* The content system; only the add-on lookup flag is named. */
typedef struct AocSystemView {
    /* 0x000 */ u8 unk000[0x3B8];
    /* 0x3B8 */ s32 lookupEnabled;
} AocSystemView;

/* A 0x80-byte record of data table 8 type 2, searched by its ID at +0x20. */
typedef struct Table8Type2Record {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x5E];
} Table8Type2Record;

Table8Type2Record *FUN_00192360(AocSystemView *system, u32 id);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 FUN_00183d90(const void *left, const void *right);
u32 dataTableGetCount(void *table);
void *dataTableGetEntries(void);
void *dataTableGet(u32 id, u32 type);

extern AocSystemView *g_aocSystem; /* 0x570280 */

/* Returns the record of data table 8 type 2 for `id`: the add-on's when it has one, else the one found in the table. */
Table8Type2Record *dataTable08Sub2GetRecord(u32 id)
{
    Table8Type2Record key;
    Table8Type2Record *record;
    key.id = id;
    if (g_aocSystem->lookupEnabled == 0 || (record = FUN_00192360(g_aocSystem, id)) == NULL) {
        void *table = dataTableGet(8, 2);
        record = (Table8Type2Record *)table;
        if (table != NULL) {
            void *entries = dataTableGetEntries();
            u32 count = dataTableGetCount(table);
            record = (Table8Type2Record *)libc_bsearch(&key, entries, count, sizeof(Table8Type2Record), FUN_00183d90);
        }
    }
    return record;
}

} /* extern "C" */
