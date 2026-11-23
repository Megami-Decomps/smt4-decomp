/* NON_MATCHING: only the unrolled slot loop swaps its address and byte registers (retail r3/r2, armcc r2/r3). */
#include "ui/UiSpriteApi.h"
#include "common.h"
#include "addon/aocMain.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "shard/PassiveSkill.h"
#include "gamedata/DataTable.h"
#include "gamedata/SkillDataLookup.h"
#include "addon/AocSystem.h"

extern "C" {
s32 passiveSkillCompareById(const void *key, const void *entry);
void *libc_bsearch(const void *key, const void *entries, u32 count,
                   u32 entrySize, s32 (*compare)(const void *, const void *));
}

/* Looks the add-on record up by id, falling back to the data table 4 search. */
static __inline PassiveSkillRecord *aocExtraRecordFind(u32 id)
{
    PassiveSkillRecord *record = recordTableFindById(g_aocSystem, id);
    if (record == 0) {
        void *table = dataTableGet(4, 1);
        const void *entries = dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);
        PassiveSkillRecord key;
        /* The comparator reads only the id. */
        key.id = (u16)id;
        record = (PassiveSkillRecord *)(
            libc_bsearch(&key, entries, count, 0x3C, passiveSkillCompareById));
    }
    return record;
}

/* The add-on record's bit-30 flag, or 0 when there is no record. */
static __inline u32 aocExtraRecordFlagged(u32 id)
{
    if (PassiveSkillRecord *record = aocExtraRecordFind(id))
        return (record->affinity & 0x40000000u) >> 30;
    return 0;
}

extern "C" u32 FUN_001386f8(u32 id)
{
    if (id > 400) {
        if (PassiveSkillRecord *record = aocExtraRecordFind(id))
            return (record->affinity & 0x40000000u) >> 30;
    } else {
        RecordSlotQueryPrefixIV *record = reinterpret_cast<RecordSlotQueryPrefixIV *>(skillDataFindById(id));
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
