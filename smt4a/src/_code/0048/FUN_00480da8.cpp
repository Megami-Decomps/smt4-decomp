/* NON_MATCHING: with the lookup in a helper taking the system the entry registers match; only the system load is scheduled before the key store (retail: strh key, then ldr). */
#include "gamedata/DataTable.h"
#include "gamedata/Table8Type5Record.h"

extern "C" {

/* The content system; only the add-on lookup flag is named. */
typedef struct AocSystemView {
    /* 0x000 */ u8 unk000[0x3DC];
    /* 0x3DC */ s32 lookupEnabled;
} AocSystemView;

Table8Type5Record *FUN_00471e80(AocSystemView *system, u32 id);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 uiCompareEntryKeys(const void *left, const void *right);


extern AocSystemView *g_aocSystem; /* 0x570280 */

/* The table 8 type 5 record for `id`: the add-on's record when the system has one, else the one found in the table. */
static __inline Table8Type5Record *table8Type5Lookup(AocSystemView *system, u16 id)
{
    Table8Type5Record key;
    Table8Type5Record *record;
    key.id = id;
    if (system->lookupEnabled == 0 || (record = FUN_00471e80(system, id)) == NULL) {
        void *table = dataTableGet(8, 5);
        record = (Table8Type5Record *)table;
        if (table != NULL) {
            void *entries = dataTableGetEntries(table);
            u32 count = dataTableGetCount(table);
            record = (Table8Type5Record *)libc_bsearch(&key, entries, count, sizeof(Table8Type5Record), uiCompareEntryKeys);
        }
    }
    return record;
}

/* Returns the value of the table 8 type 5 record for `id`. */
u16 FUN_00480da8(u16 id)
{
    return table8Type5Lookup(g_aocSystem, id)->value;
}

} /* extern "C" */
