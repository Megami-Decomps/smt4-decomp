/* NON_MATCHING: ascending-comparator blocks stay inline instead of retail's out-of-line branch layout; lower optimization may change placement. */
#include "status/StatusDown.h"
#include "shard/W6_W6Match5_EntryCollection.h"
#include "status/StatusCamera.h"

namespace {
struct StatusSortOptions {
    u8 unk00[0x16];
    u8 inventory;
};
}

extern "C" {
void qsort(void*, s32, s32, EntryComparator);
void arraySortQsort(void*, s32, s32, EntryComparator);
s32 devilSlotCompareRaceDescending(const void*, const void*);
s32 entryCompareByDataValue(const void*, const void*);
s32 FUN_00206d9c(const void*, const void*);
s32 devilCompareNonEmptyFirstB(const void*, const void*);
s32 devilCompareNonEmptyFirst(const void*, const void*);
s32 entryCompareByDataValueB(const void*, const void*);
s32 FUN_002e45f8(const void*, const void*);
s32 devilSlotCompareRaceThenLevel(const void*, const void*);

void statusInventorySort(void)
{
    StatusDownState* status = g_statusDown;
    const u8* options =
        &reinterpret_cast<const StatusSortOptions*>(gameDataGetSortPreferences())->inventory;
    if ((*options & 0x7F) == 1) {
        if (*options >> 7) {
            qsort(status->inventory.entries, status->inventory.count, sizeof(status->inventory.entries[0]), devilSlotCompareRaceThenLevel);
        } else {
            qsort(status->inventory.entries, status->inventory.count, sizeof(status->inventory.entries[0]), devilCompareNonEmptyFirstB);
        }
    }
    if ((*options & 0x7F) == 8) {
        if (*options >> 7) {
            qsort(status->inventory.entries, status->inventory.count, sizeof(status->inventory.entries[0]), FUN_002e45f8);
        } else {
            qsort(status->inventory.entries, status->inventory.count, sizeof(status->inventory.entries[0]), FUN_00206d9c);
        }
    }
    if ((*options & 0x7F) == 2) {
        if (*options >> 7) {
            qsort(status->inventory.entries, status->inventory.count, sizeof(status->inventory.entries[0]), devilCompareNonEmptyFirst);
        } else {
            qsort(status->inventory.entries, status->inventory.count, sizeof(status->inventory.entries[0]), devilSlotCompareRaceDescending);
        }
    }
    if ((*options & 0x7F) != 3) {
        return;
    }
    if ((*options >> 7) == 0) {
        arraySortQsort(status->inventory.entries, status->inventory.count, sizeof(status->inventory.entries[0]), entryCompareByDataValue);
        return;
    }
    arraySortQsort(status->inventory.entries, status->inventory.count, sizeof(status->inventory.entries[0]), entryCompareByDataValueB);
}
} // extern "C"
