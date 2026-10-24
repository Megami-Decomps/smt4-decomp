#include "gamedata/Table8Type5Record.h"

extern "C" {

/* The content system; only the add-on lookup flag is named. */
typedef struct AocSystemView {
    /* 0x000 */ u8 unk000[0x3DC];
    /* 0x3DC */ s32 lookupEnabled;
} AocSystemView;

s32 FUN_00471e80(AocSystemView *system, u32 id);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 uiCompareEntryKeys(const void *left, const void *right);
u32 dataTableGetCount(void *table);
void *dataTableGetEntries(void);
void *dataTableGet(u32 id, u32 type);

extern AocSystemView *g_aocSystem; /* 0x570280 */

/* Looks up the table 8 type 5 record for `id` unless the add-on lookup already answers for it. */
void FUN_00480ba0(u32 id)
{
    Table8Type5Record key;
    key.id = id;
    if (g_aocSystem->lookupEnabled == 0 || FUN_00471e80(g_aocSystem, id) == 0) {
        void *table = dataTableGet(8, 5);
        if (table != NULL) {
            void *entries = dataTableGetEntries();
            u32 count = dataTableGetCount(table);
            libc_bsearch(&key, entries, count, sizeof(Table8Type5Record), uiCompareEntryKeys);
        }
    }
}

} /* extern "C" */
