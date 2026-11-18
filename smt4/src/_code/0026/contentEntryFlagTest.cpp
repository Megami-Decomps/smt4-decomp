#include "common.h"
#include "gamedata/DataTable.h"
#include "gamedata/SkillDataLookup.h"
#include "addon/AocSystem.h"

extern "C" {

typedef struct Entry0026a794 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x16];
    /* 0x38 */ u32 flags;
} Entry0026a794;

typedef struct Record0026a794 {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 flags;
} Record0026a794;

typedef s32 Compare0026a794(const Entry0026a794 *a, const Entry0026a794 *b);

Entry0026a794 *recordTableFindById(AocSystem *aoc, u32 id);


Entry0026a794 *libc_bsearch(const Entry0026a794 *key, const Entry0026a794 *base, u32 count, u32 size, Compare0026a794 *compare);

s32 passiveSkillCompareById(const Entry0026a794 *first, const Entry0026a794 *second);

static inline Entry0026a794 *findContentFlagEntry(u32 id)
{
    Entry0026a794 *entry = recordTableFindById(g_aocSystem, id);
    if (entry == NULL) {
        void *table = dataTableGet(4, 1);
        Entry0026a794 *entries = reinterpret_cast<Entry0026a794 *>(dataTableGetEntries(table));
        u32 count = dataTableGetCount(table);
        Entry0026a794 key;
        key.id = id;
        entry = libc_bsearch(&key, entries, count, sizeof(Entry0026a794), passiveSkillCompareById);
    }
    return entry;
}

/* Flag test on entry `id`: ids above 400 come from the add-on content or data table 4 section 1 (bit 30 clear), the rest from skillDataFindById (sign bit clear gives 1). */
u32 contentEntryFlagTest(u32 id)
{
    Entry0026a794 *entry;
    Record0026a794 *record;

    if (id > 400) {
        entry = findContentFlagEntry(id);
        if (entry != NULL) {
            return ~(entry->flags >> 30) & 1;
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
