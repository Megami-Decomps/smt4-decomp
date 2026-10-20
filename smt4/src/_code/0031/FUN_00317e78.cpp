/* NON_MATCHING: the section handle and entries pointer land in r4/r5 the other way round in every repetition. */
#include "gamedata/DataTable.h"

extern "C" {

typedef void (*RecordCallback)(void);

extern RecordCallback LAB_001e16bc, LAB_001f65ac, LAB_002d0520, LAB_002d06dc, LAB_002dca98, LAB_002e4b08, LAB_002e4b20, LAB_00300b8c;

extern void FUN_002b7bca(void *entries, u32 count, int stride, void *callback);
extern int *FUN_002b47f4(int table);
extern void FUN_0027f3dc(void *entries, u32 count, int stride, void *callback);

/* Hands one data table section's entries to the registry along with their stride and callback. */
static __inline void registerSection(int table, int section, int stride, void *callback)
{
    void *data = dataTableGet(table, section);
    void *entries = dataTableGetEntries(data);

    FUN_002b7bca(entries, dataTableGetCount(data), stride, callback);
}

void FUN_00317e78(void)
{
    int *block;

    registerSection(5, 1, 4, &LAB_002d0520);
    registerSection(5, 2, 4, &LAB_00300b8c);
    registerSection(5, 3, 4, &LAB_002d06dc);
    registerSection(5, 4, 0x1c, &LAB_001f65ac);
    registerSection(5, 7, 4, &LAB_002e4b08);
    registerSection(5, 8, 0x14, &LAB_002e4b20);
    registerSection(6, 1, 4, &LAB_002dca98);
    block = FUN_002b47f4(0x1f);
    FUN_0027f3dc(block + 1, (*block - 4U) >> 3, 8, &LAB_001e16bc);
}

} /* extern "C" */
