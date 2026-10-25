/* NON_MATCHING: descending tests use TST instead of a flag-setting shift, and ascending sort blocks remain inline rather than outlined. */
#include "status/StatusDown.h"
#include <stdlib.h>
#include "event/2dEvent/2dEventTex.h"

namespace {
struct InventorySortMode {
    u8 key : 7;
    u8 descending : 1;
};
typedef char InventorySortModeSizeCheck[sizeof(InventorySortMode) == 1 ? 1 : -1];
}

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
    const InventorySortMode *sortMode = reinterpret_cast<const InventorySortMode *>(FUN_0026140c() + 0x16);
    if (sortMode->key == 1) {
        if (sortMode->descending != 0)
            qsort(status->inventory.entries, status->inventory.count, 4, FUN_0035fe34);
        else
            qsort(status->inventory.entries, status->inventory.count, 4, devilSlotCompareRaceThenLevel);
    }
    if (sortMode->key == 8) {
        if (sortMode->descending != 0)
            qsort(status->inventory.entries, status->inventory.count, 4, FUN_0035fdb0);
        else
            qsort(status->inventory.entries, status->inventory.count, 4, FUN_002ce0d8);
    }
    if (sortMode->key == 2) {
        if (sortMode->descending != 0)
            qsort(status->inventory.entries, status->inventory.count, 4, FUN_00321c18);
        else
            qsort(status->inventory.entries, status->inventory.count, 4, itemSortCompare);
    }
    if (sortMode->key != 3)
        return;
    if (sortMode->descending == 0)
        arraySortQsort(status->inventory.entries, status->inventory.count, 4, entryCompareByDataValue);
    else
        arraySortQsort(status->inventory.entries, status->inventory.count, 4, flagRecCompare);
}
}
