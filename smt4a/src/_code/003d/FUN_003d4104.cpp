#include "status/StatusDown.h"
#include <stdlib.h>
#include "event/2dEvent/2dEventTex.h"


extern "C" {
extern StatusDownStateA *g_statusDown;
void arraySortQsort(void *entries, u32 count, u32 elementSize, int (*compare)(const void *, const void *));
int FUN_0035fe34(const void *, const void *);
int devilSlotCompareRaceThenLevel(const void *, const void *);
int FUN_0035fdb0(const void *, const void *);
int FUN_002ce0d8(const void *, const void *);
int FUN_00321c18(const void *, const void *);
int itemSortCompare(const void *, const void *);
int flagRecCompare(const void *, const void *);
int entryCompareByDataValue(const void *, const void *);

// Apply the persisted inventory sort key and ascending/descending selection.
void FUN_003d4104(void)
{
    StatusDownStateA *status = g_statusDown;
    /* Low seven bits: sort key; high bit: descending. */
    const u8 *sortMode = reinterpret_cast<const u8 *>(FUN_0026140c() + 0x16);
    if ((*sortMode & 0x7f) == 1) {
        if ((*sortMode >> 7) == 0)
            qsort(status->inventory.entries, status->inventory.count, 4, devilSlotCompareRaceThenLevel);
        else
            qsort(status->inventory.entries, status->inventory.count, 4, FUN_0035fe34);
    }
    if ((*sortMode & 0x7f) == 8) {
        if ((*sortMode >> 7) == 0)
            qsort(status->inventory.entries, status->inventory.count, 4, FUN_002ce0d8);
        else
            qsort(status->inventory.entries, status->inventory.count, 4, FUN_0035fdb0);
    }
    if ((*sortMode & 0x7f) == 2) {
        if ((*sortMode >> 7) == 0)
            qsort(status->inventory.entries, status->inventory.count, 4, itemSortCompare);
        else
            qsort(status->inventory.entries, status->inventory.count, 4, FUN_00321c18);
    }
    if ((*sortMode & 0x7f) != 3)
        return;
    if ((*sortMode >> 7) == 0)
        arraySortQsort(status->inventory.entries, status->inventory.count, 4, entryCompareByDataValue);
    else
        arraySortQsort(status->inventory.entries, status->inventory.count, 4, flagRecCompare);
}
}
