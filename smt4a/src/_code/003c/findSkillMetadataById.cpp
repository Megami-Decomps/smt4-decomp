#include "gamedata/DataTable.h"
#include "shard/W6_W6Match6_CompactSortRecord.h"

extern "C" {
s32 uiCompareHalfwordKeys(const void *, const void *);
void *libc_bsearch(const void *, const void *, u32, u32, s32 (*)(const void *, const void *));

// Table 6, section 1 stores four-byte skill records keyed by their first halfword.
CompactSortRecord *findSkillMetadataById(u16 id)
{
    void *section = dataTableGet(6, 1);
    void *entries = dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    u16 key = id;
    return (CompactSortRecord *)libc_bsearch(&key, entries, count, sizeof(CompactSortRecord), uiCompareHalfwordKeys);
}
}
