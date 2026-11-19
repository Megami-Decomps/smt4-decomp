/* NON_MATCHING: the section handle and entries pointer use r4/r5 in the opposite order in the two larger-record sorts (5,4 and 5,8). */
#include "gamedata/DataTable.h"
#include <stdlib.h>

extern "C" {
s32 uiCompareBytePriorityAndKey(const void *, const void *);
s32 uiCompareBytePriorityThenKey(const void *, const void *);
s32 packedKeyCompare(const void *, const void *);
s32 recordCompareUnsignedValue(const void *, const void *);
s32 tableCompareWordByteKeys(const void *, const void *);
s32 tableCompareHalfwordKeys(const void *, const void *);
s32 idMapCompareKeys(const void *, const void *);
s32 dataCompareSignedWordKeys(const void *, const void *);
extern int *fileSlotGetBuffer(int table);
extern void FUN_0027f3dc(void *entries, u32 count, int stride, s32 (*compare)(const void *, const void *));
}

template <typename Record>
static __inline void sortTableSection(s32 table, s32 section,
                                     s32 (*compare)(const void *, const void *))
{
    void *resource = dataTableGet(table, section);
    Record *entries = static_cast<Record *>(dataTableGetEntries(resource));
    qsort(entries, dataTableGetCount(resource), sizeof(Record), compare);
}

// Sort lookup sections by their record keys before consumers perform binary searches.
extern "C" void dataTableSortLookupSections(void)
{
    sortTableSection<u32>(5, 1, uiCompareBytePriorityAndKey);
    sortTableSection<u32>(5, 2, uiCompareBytePriorityThenKey);
    sortTableSection<u32>(5, 3, packedKeyCompare);
    sortTableSection<u32[7]>(5, 4, recordCompareUnsignedValue);
    sortTableSection<u32>(5, 7, tableCompareWordByteKeys);
    sortTableSection<u32[5]>(5, 8, tableCompareHalfwordKeys);
    sortTableSection<u32>(6, 1, idMapCompareKeys);
    int *block = fileSlotGetBuffer(0x1f);
    FUN_0027f3dc(block + 1, (*block - 4U) >> 3, 8, dataCompareSignedWordKeys);
}
