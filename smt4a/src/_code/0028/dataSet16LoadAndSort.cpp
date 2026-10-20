/* Loads data set 0x16 and registers the 0x64-byte entries of its two tables; returns the load result. */
#include "common.h"

extern "C" {

extern void LAB_003d4e88(void);

extern void qsort(void *entries, u32 count, s32 entrySize, void (*callback)(void));
extern void *dataTableGet(s32 group, s32 id);
extern u32 dataTableGetCount(void *table);
extern void *dataTableGetEntries(void);
extern u32 loadSlotEnsureLoaded(s32 id);

u32 dataSet16LoadAndSort(void)
{
    u32 result = loadSlotEnsureLoaded(0x16);
    void *table;
    void *entries;

    table = dataTableGet(0x16, 0);
    entries = dataTableGetEntries();
    qsort(entries, dataTableGetCount(table), 100, LAB_003d4e88);
    table = dataTableGet(0x16, 1);
    entries = dataTableGetEntries();
    qsort(entries, dataTableGetCount(table), 100, LAB_003d4e88);
    return result;
}

}
