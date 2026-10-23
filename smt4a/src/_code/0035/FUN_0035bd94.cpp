/* NON_MATCHING: bsearch callback store scheduling and the shared success-branch join differ. */
#include "addon/aocMain.h"
#include "gamedata/Table00.h"
#include "gamedata/DataTable.h"

extern "C" {
extern AocSystemA *g_aocSystem;
s32 FUN_001ab89c(const void *left, const void *right);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));

// Copy up to eight skill IDs, preferring the downloadable table over the base table.
s32 FUN_0035bd94(u16 id, u16 *skills, s32 count)
{
    Table00Record key;
    key.id = id;
    Table00Record *record = NULL;
    if (g_aocSystem->table00.records != NULL) {
        record = static_cast<Table00Record *>(libc_bsearch(&key,
            g_aocSystem->table00.records, g_aocSystem->table00.count,
            sizeof(Table00Record), FUN_001ab89c));
    }
    if (record == NULL) {
        void *table = dataTableGet(0, 1);
        void *entries = dataTableGetEntries(table);
        u32 entryCount = dataTableGetCount(table);
        record = static_cast<Table00Record *>(libc_bsearch(&key, entries,
            entryCount, sizeof(Table00Record), FUN_001ab89c));
    }
    if (record != NULL) {
        if (count > 8) {
            count = 8;
        }
        for (s32 index = 0; index < count; ++index) {
            skills[index] = record->skillList.ids[index];
        }
        return 1;
    }
    return 0;
}
}
