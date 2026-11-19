#include "gamedata/Table8Type5Record.h"
#include "addon/AocSystemA.h"

extern "C" {

s32 aocTable8Type5FindRecord(AocSystemA *system, u32 id);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 uiCompareEntryKeys(const void *left, const void *right);
u32 dataTableGetCount(void *table);
void *dataTableGetEntries(void);
void *dataTableGet(u32 id, u32 type);

/* Looks up the table 8 type 5 record for `id` unless the add-on lookup already answers for it. */
void dataTableFindType5Record(u32 id)
{
    Table8Type5Record key;
    key.id = id;
    if (g_aocSystem->table08[5].records == 0 || aocTable8Type5FindRecord(g_aocSystem, id) == 0) {
        void *table = dataTableGet(8, 5);
        if (table != NULL) {
            void *entries = dataTableGetEntries();
            u32 count = dataTableGetCount(table);
            libc_bsearch(&key, entries, count, sizeof(Table8Type5Record), uiCompareEntryKeys);
        }
    }
}

} /* extern "C" */
