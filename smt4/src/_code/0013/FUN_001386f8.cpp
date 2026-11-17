/* NON_MATCHING: only the unrolled slot loop swaps its address and byte registers (retail r3/r2, armcc r2/r3). */
#include "common.h"
#include "addon/aocMain.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTable40.h"
#include "addon/AocSystem.h"

extern "C" {
Table4SearchRecordIV *recordTableFindById(AocSystem *system, u32 id);
s32 passiveSkillCompareById(const void *key, const void *entry);
void *libc_bsearch(const void *key, const void *entries, u32 count,
                   u32 entrySize, s32 (*compare)(const void *, const void *));
}

/* Looks the add-on record up by id, falling back to the data table 4 search. */
static __inline Table4SearchRecordIV *aocExtraRecordFind(u32 id)
{
    Table4SearchRecordIV *record = recordTableFindById(g_aocSystem, id);
    if (record == 0) {
        void *table = dataTableGet(4, 1);
        const void *entries = dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);
        Table4SearchRecordIV key;
        // The comparator key's only initialized member in retail.
        key.id = static_cast<u16>(id);
        record = static_cast<Table4SearchRecordIV *>(
            libc_bsearch(&key, entries, count, 0x3C, passiveSkillCompareById));
    }
    return record;
}

/* The add-on record's bit-30 flag, or 0 when there is no record. */
static __inline u32 aocExtraRecordFlagged(u32 id)
{
    if (Table4SearchRecordIV *record = aocExtraRecordFind(id))
        return (record->flags & 0x40000000u) >> 30;
    return 0;
}

extern "C" u32 FUN_001386f8(u32 id)
{
    if (id > 400) {
        if (Table4SearchRecordIV *record = aocExtraRecordFind(id))
            return (record->flags & 0x40000000u) >> 30;
    } else {
        RecordSlotQueryPrefixIV *record = reinterpret_cast<RecordSlotQueryPrefixIV *>(dataTable40FindById(id));
        if (record != 0 && (record->flags & 0x80000000u) == 0) {
            for (s32 slot = 0; slot < 8; slot++) {
                if (record->slots[slot].used == 0)
                    return slot + 1;
            }
            return 9;
        }
    }
    return 0;
}
