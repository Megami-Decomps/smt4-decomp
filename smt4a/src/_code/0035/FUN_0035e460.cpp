/* NON_MATCHING: first branch (findExtraRecord, same as dataTableCountRecordStages) matches retail; the 9-slot loop keeps 9 in a register and separates loop index and counter in retail. */
#include "gamedata/DataTable.h"
#include "gamedata/SkillDataRecord.h"
#include "shard/W6_W6Match2_HelpResources.h"
#include "addon/AocSystemA.h"
#include "util/BinarySearch.h"

extern "C" {

Table04ExtraRecord *dataTable41FindByIdImpl(AocSystemA *system, u32 id);
s32 recordSortEntryCompareByKey(const void *left, const void *right);

/* Looks up a table-4 DLC record in the add-on table, falling back to binary search in data table 4 (same as dataTableCountRecordStages). */
static __inline Table04ExtraRecord *findExtraRecord(u32 id)
{
    Table04ExtraRecord *record = dataTable41FindByIdImpl(g_aocSystem, id);
    if (record == NULL) {
        void *section = dataTableGet(4, 1);
        void *entries = dataTableGetEntries(section);
        u32 count = dataTableGetCount(section);
        Table04ExtraRecord key;
        key.id = (u16)id;
        record = (Table04ExtraRecord *)libc_bsearch(&key, entries, count, sizeof(key), recordSortEntryCompareByKey);
    }
    return record;
}

typedef struct AocItemSlot {
    u8 id;
    u8 unk01;
} AocItemSlot;

/* An entry of the data table skillDataFindById searches: `slot` lists its used slots first. */
typedef struct AocItemEntry {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ AocItemSlot slot[9];
    /* 0x74 */ u8 unk74[0x4];
} AocItemEntry;

#define AOC_ID_LIMIT 400  /* ids above it are add-on ids, searched in table 4 */

/* Number of used slots (up to 9) of data table 4 entry `id`, negated when `positive` is 0.
 * Returns 0 for an unknown id; add-on ids (> 400) are only looked up. */
s32 FUN_0035e460(u32 id, s32 positive)
{
    if (id > AOC_ID_LIMIT) {
        findExtraRecord(id);
    } else {
        AocItemEntry *entry = (AocItemEntry *)skillDataFindById(id);

        if (entry != NULL) {
            s32 sign = positive != 0 ? 1 : -1;
            s32 used = 0;

            for (s32 i = 0; i < 9; i++) {
                if (entry->slot[i].id == 0) {
                    break;
                }
                used++;
            }
            return used * sign;
        }
    }
    return 0;
}

} /* extern "C" */
