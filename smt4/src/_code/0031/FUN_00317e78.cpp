/* NON_MATCHING: section/entries saved registers are swapped for the five stride-four sections; larger-record sections match. */
#include "gamedata/DataTable.h"

extern "C" {

typedef s32 (*RecordCompare)(const void *, const void *);

s32 FUN_002d0520(const void *, const void *);
s32 FUN_00300b8c(const void *, const void *);
s32 FUN_002d06dc(const void *, const void *);
s32 recordCompareUnsignedValue(const void *, const void *);
s32 tableCompareWordByteKeys(const void *, const void *);
s32 tableCompareHalfwordKeys(const void *, const void *);
s32 idMapCompareKeys(const void *, const void *);
s32 dataCompareSignedWordKeys(const void *, const void *);

extern void FUN_002b7bca(void *entries, u32 count, int stride, RecordCompare compare);
extern int *fileSlotGetBuffer(int table);
extern void FUN_0027f3dc(void *entries, u32 count, int stride, RecordCompare compare);

/* Hands one data table section's entries to the registry along with their stride and callback. */
static __inline void registerSection(int table, int section, int stride, RecordCompare compare)
{
    void *data = dataTableGet(table, section);
    void *entries = dataTableGetEntries(data);

    FUN_002b7bca(entries, dataTableGetCount(data), stride, compare);
}

void FUN_00317e78(void)
{
    int *block;

    registerSection(5, 1, 4, FUN_002d0520);
    registerSection(5, 2, 4, FUN_00300b8c);
    registerSection(5, 3, 4, FUN_002d06dc);
    registerSection(5, 4, 0x1c, recordCompareUnsignedValue);
    registerSection(5, 7, 4, tableCompareWordByteKeys);
    registerSection(5, 8, 0x14, tableCompareHalfwordKeys);
    registerSection(6, 1, 4, idMapCompareKeys);
    block = fileSlotGetBuffer(0x1f);
    FUN_0027f3dc(block + 1, (*block - 4U) >> 3, 8, dataCompareSignedWordKeys);
}

} /* extern "C" */
