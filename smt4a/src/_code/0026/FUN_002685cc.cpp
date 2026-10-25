/* Tests the availability flag for a standard or add-on table-four entry. */
#include "gamedata/Table04Record.h"

extern "C" {
extern void *g_aocSystem;
Table04ExtraRecord *FUN_001b2e78(void *system, u32 id);
Table04Record *dataTable04FindById(u32 id);
void *dataTableGet(u32 type, u32 group);
u32 dataTableGetCount(void *table);
const void *dataTableGetEntries(void *table);
s32 FUN_001ac8dc(const void *key, const void *entry);
void *libc_bsearch(const void *key, const void *entries, u32 count, u32 stride,
                  s32 (*compare)(const void *, const void *));

static __inline Table04ExtraRecord *findExtraTable04Record(u32 id)
{
    Table04ExtraRecord *record = FUN_001b2e78(g_aocSystem, id);
    if (record == NULL) {
        void *table = dataTableGet(4, 1);
        const void *entries = dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);
        Table04ExtraRecord key;
        key.id = (u16)id;
        record = (Table04ExtraRecord *)libc_bsearch(&key, entries, count, sizeof(key), FUN_001ac8dc);
    }
    return record;
}

u32 FUN_002685cc(u32 id)
{
    if (id >= 401) {
        Table04ExtraRecord *record = findExtraTable04Record(id);
        if (record != NULL) {
            return (record->flags >> 31) + 1;
        }
    } else {
        Table04Record *record = dataTable04FindById(id);
        if (record != NULL) {
            return ~(record->flags >> 29) & 1;
        }
    }
    return 0;
}
}
