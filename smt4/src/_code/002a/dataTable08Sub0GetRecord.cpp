#include "common.h"

extern "C" {

/* The content system; only the add-on lookup flag is named. */
typedef struct AocSystemView {
    /* 0x000 */ u8 unk000[0x3A0];
    /* 0x3A0 */ s32 lookupEnabled;
} AocSystemView;

/* A 0x58-byte record of data table 8 sub-table 0, searched by its ID at +0x50. */
typedef struct Table08Sub0Record {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u16 id;
    /* 0x52 */ u8 unk52[6];
} Table08Sub0Record;

Table08Sub0Record *FUN_0014162c(AocSystemView *system, u32 id);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 dataTable08Sub0CompareKeys(const void *left, const void *right);
u32 dataTableGetCount(void *table);
void *dataTableGetEntries(void);
void *dataTableGet(u32 id, u32 type);

extern AocSystemView *g_aocSystem; /* 0x433158 */

/* Returns the record of data table 8 sub-table 0 for `id`: the add-on's when it has one, else the one found in the table. */
Table08Sub0Record *dataTable08Sub0GetRecord(u32 id)
{
    Table08Sub0Record key;
    Table08Sub0Record *record;
    key.id = id;
    if (g_aocSystem->lookupEnabled == 0 || (record = FUN_0014162c(g_aocSystem, id)) == NULL) {
        void *table = dataTableGet(8, 0);
        record = (Table08Sub0Record *)table;
        if (table != NULL) {
            void *entries = dataTableGetEntries();
            u32 count = dataTableGetCount(table);
            record = (Table08Sub0Record *)libc_bsearch(&key, entries, count, sizeof(Table08Sub0Record), dataTable08Sub0CompareKeys);
        }
    }
    return record;
}

} /* extern "C" */
