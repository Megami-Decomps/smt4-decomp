#include "common.h"
#include "util/BinarySearch.h"

struct SkillDataRecordEntry {
    u8 unk00[0x20];
    u16 id;
    u8 unk22[0x66];
};
typedef char SkillDataRecordEntrySizeCheck[sizeof(SkillDataRecordEntry) == 0x88 ? 1 : -1];

struct SkillDataTableHeader {
    u32 count;
    const SkillDataRecordEntry *entries;
};

struct SkillDataTableOwner {
    u8 unk000[0x434];
    SkillDataTableHeader table;
};

extern "C" {
s32 dataCompareRecordKeys(const void *lhs, const void *rhs);

/* Looks up a skill record by ID via binary search, returning NULL if the table is empty. */
void *skillDataFindByIdImpl(const SkillDataTableOwner *owner, u16 id)
{
    if (owner->table.count == 0) {
        return NULL;
    }
    SkillDataRecordEntry key;
    key.id = id;
    return libc_bsearch(&key, owner->table.entries, owner->table.count, sizeof(SkillDataRecordEntry), dataCompareRecordKeys);
}
}
