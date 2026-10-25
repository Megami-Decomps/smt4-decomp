/* NON_MATCHING: the section handle and entries pointer use r4/r5 in the opposite order in five repeated sorts. */
#include "gamedata/DataTable.h"
#include <stdlib.h>

extern "C" {
s32 uiCompareBytePriorityAndKey(const void *, const void *);
s32 uiCompareBytePriorityThenKey(const void *, const void *);
s32 packedKeyCompare(const void *, const void *);
s32 contentCompareEntryId(const void *, const void *);
s32 tableCompareWordByteKeys(const void *, const void *);
s32 uiCompareHalfwordValues(const void *, const void *);
s32 uiCompareHalfwordKeys(const void *, const void *);
s32 intKeyCompare(const void *, const void *);
u32 *dataTableValueOrZero(u32 table);
void arraySortQsort(void *entries, u32 count, u32 stride, s32 (*compare)(const void *, const void *));
}

template <typename Record>
static __inline void sortTableSection(s32 table, s32 section,
                                     s32 (*compare)(const void *, const void *))
{
    void *resource = dataTableGet(table, section);
    void *entries = dataTableGetEntries(resource);
    u32 count = dataTableGetCount(resource);
    qsort(entries, count, sizeof(Record), compare);
}

// Sort lookup sections by their record keys before consumers perform binary searches.
extern "C" void FUN_003b078c(void)
{
    sortTableSection<u32>(5, 1, uiCompareBytePriorityAndKey);
    sortTableSection<u32>(5, 2, uiCompareBytePriorityThenKey);
    sortTableSection<u32>(5, 3, packedKeyCompare);
    sortTableSection<u32[7]>(5, 4, contentCompareEntryId);
    sortTableSection<u32>(5, 7, tableCompareWordByteKeys);
    sortTableSection<u32[5]>(5, 8, uiCompareHalfwordValues);
    sortTableSection<u32>(6, 1, uiCompareHalfwordKeys);
    u32 *table = dataTableValueOrZero(0x1f);
    arraySortQsort(table + 1, (table[0] - 4) >> 3, 8, intKeyCompare);
}
