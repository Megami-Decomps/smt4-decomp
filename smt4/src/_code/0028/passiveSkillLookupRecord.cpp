#include "shard/PassiveSkill.h"

extern "C" {

struct AocSystem;

extern AocSystem *g_aocSystem;

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 FUN_00145a98(const void *a, const void *b);
const PassiveSkillRecord *recordTableFindById(AocSystem *system, u32 id);
u32 dataTableGet(u32 table, u32 index);
u32 dataTableGetCount(u32 table);
void *dataTableGetEntries(u32 table);

/* Finds the passive skill record with `id`: the add-on content's override first, else a search of data table 4/1. */
const PassiveSkillRecord *passiveSkillLookupRecord(u32 id)
{
    const PassiveSkillRecord *record = recordTableFindById(g_aocSystem, id);

    if (record != NULL) {
        return record;
    }
    u32 table = dataTableGet(4, 1);
    void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    PassiveSkillRecord key;
    key.id = id;
    return (const PassiveSkillRecord *)libc_bsearch(&key, entries, count, sizeof(PassiveSkillRecord), FUN_00145a98);
}

} /* extern "C" */
