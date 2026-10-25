/* NON_MATCHING: register allocation at entry only: retail loads g_aocSystem straight into r0 and keeps the ID in r1 for both the stack key and the add-on lookup call; the build moves them around (extra mov r1, r0 / mov r0, r2). */
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

/* Returns the value of the table 8 type 5 record for `id`: the add-on's record when it has one, else the one found in the table. */
u16 FUN_00480da8(u32 id)
{
    AocSystemView *system = g_aocSystem;
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
    return record->value;
}

} /* extern "C" */
