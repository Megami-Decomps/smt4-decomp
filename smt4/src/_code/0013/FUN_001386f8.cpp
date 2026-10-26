/* NON_MATCHING: only the epilogue scheduling (retail restores sp before the flag extraction) and two loop registers (r2/r3) differ. */
#include "common.h"
#include "addon/aocMain.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTable40.h"

extern "C" {
extern AocSystem *g_aocSystem;
Table4SearchRecordIV *recordTableFindById(AocSystem *system, u32 id);
s32 FUN_00145a98(const void *key, const void *entry);
void *libc_bsearch(const void *key, const void *entries, u32 count,
                   u32 entrySize, s32 (*compare)(const void *, const void *));
}

/* Looks the add-on record up by id (falling back to the data table 4 search) and returns its bit-30 flag. */
static __inline u32 aocExtraRecordFlagged(u32 id)
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
            libc_bsearch(&key, entries, count, 0x3C, FUN_00145a98));
    }
    if (record != 0)
        return (record->flags & 0x40000000u) >> 30;
    return 0;
}

extern "C" u32 FUN_001386f8(u32 id)
{
    if (id > 400) {
        return aocExtraRecordFlagged(id);
    }

    RecordSlotQueryPrefixIV *record = reinterpret_cast<RecordSlotQueryPrefixIV *>(dataTable40FindById(id));
    if (record == 0 || (record->flags & 0x80000000u) != 0)
        return 0;

    for (s32 slot = 0; slot < 8; slot++) {
        if (record->slotBytes[slot * 2] == 0)
            return slot + 1;
    }
    return 9;
}
