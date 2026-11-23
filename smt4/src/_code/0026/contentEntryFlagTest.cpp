#include "common.h"
#include "gamedata/DataTable.h"
#include "gamedata/SkillDataLookup.h"
#include "addon/AocSystem.h"
#include "shard/PassiveSkill.h"
#include "util/BinarySearch.h"

extern "C" {

typedef struct Record0026a794 {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 flags;
} Record0026a794;

s32 passiveSkillCompareById(const void *first, const void *second);

static __inline PassiveSkillRecord *findContentFlagEntry(u32 id)
{
    PassiveSkillRecord *entry = recordTableFindById(g_aocSystem, id);
    if (entry == NULL) {
        void *table = dataTableGet(4, 1);
        const void *entries = dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);
        PassiveSkillRecord key;
        key.id = id;
        entry = (PassiveSkillRecord *)libc_bsearch(&key, entries, count, sizeof(PassiveSkillRecord), passiveSkillCompareById);
    }
    return entry;
}

/* Flag test on entry `id`: ids above 400 come from the add-on content or data table 4 section 1 (bit 30 clear), the rest from skillDataFindById (sign bit clear gives 1). */
u32 contentEntryFlagTest(u32 id)
{
    PassiveSkillRecord *entry;
    Record0026a794 *record;

    if (id > 400) {
        entry = findContentFlagEntry(id);
        if (entry != NULL) {
            return ~(entry->affinity >> 30) & 1;
        }
    } else {
        record = reinterpret_cast<Record0026a794 *>(skillDataFindById(id));
        if (record != NULL) {
            return (record->flags >> 31) + 1;
        }
    }
    return 0;
}

} /* extern "C" */
