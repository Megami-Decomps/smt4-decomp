#include "gamedata/Table8Type5Lookup.h"

extern "C" {

/* The content system; only the add-on lookup flag is named. */
typedef struct AocSystemView {
    /* 0x000 */ u8 unk000[0x3DC];
    /* 0x3DC */ s32 lookupEnabled;
} AocSystemView;

Table8Type5Record *FUN_002b4504(AocSystemView *system, u32 id);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 compareLookupKey(const void *left, const void *right);
u32 dataTableGetCount(void *table);
void *dataTableGetEntries(void);
void *dataTableGet(u32 id, u32 type);

extern AocSystemView *g_aocSystem; /* 0x433158 */

/* The table 8 type 5 record for `id`: the add-on lookup's answer first, else a search of the table. */
Table8Type5Record *table8Type5FindById(u32 id)
{
    Table8Type5Record key;
    key.id = id;
    if (g_aocSystem->lookupEnabled != 0) {
        Table8Type5Record *record = FUN_002b4504(g_aocSystem, id);
        if (record != NULL) {
            return record;
        }
    }
    void *table = dataTableGet(8, 5);
    if (table == NULL) {
        return NULL;
    }
    void *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);
    return (Table8Type5Record *)libc_bsearch(&key, entries, count, sizeof(Table8Type5Record), compareLookupKey);
}

} /* extern "C" */
