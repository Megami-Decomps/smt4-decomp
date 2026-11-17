#include "common.h"
#include "gamedata/GauntletAppTable.h"
#include "shard/W6_W6Match3_NameFormState.h"


extern "C" {

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 unsignedKeyRecordCompare(const void *left, const void *right);

/* Binary-searches the gauntlet apps (GauntletAppTable.tbb) for app `id`;
 * NULL when the table is missing. */
void *appCostRecordFindById(u16 id)
{
    GauntletAppRecord key;
    void *section = dataTableGet(0xB, 0);

    if (section != NULL) {
        void *entries = dataTableGetEntries(section);
        u32 count = dataTableGetCount(section);

        key.id = id;
        return libc_bsearch(&key, entries, count, sizeof(key), unsignedKeyRecordCompare);
    }
    return NULL;
}

} /* extern "C" */
