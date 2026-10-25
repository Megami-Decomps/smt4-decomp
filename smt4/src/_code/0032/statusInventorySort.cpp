/* NON_MATCHING: ascending-comparator blocks stay inline instead of retail's out-of-line branch layout; lower optimization may change placement. */
#include "status/StatusDown.h"
#include "shard/W6_W6Match5_EntryCollection.h"
#include "status/StatusCamera.h"

namespace {
struct StatusSortInventory {
    u8 unk0000[0xE30];
    u16 entries[0x500][2];
    s16 count;
};
struct StatusSortOptions {
    u8 unk00[0x16];
    u8 inventory;
};
}

extern "C" {
extern StatusDownState *g_statusDown;
void FUN_002b7bca(void*, s32, s32, EntryComparator);
void FUN_0027f3dc(void*, s32, s32, EntryComparator);
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
    StatusSortInventory* status = reinterpret_cast<StatusSortInventory*>(g_statusDown);
    const u8* options =
        &reinterpret_cast<const StatusSortOptions*>(FUN_002a0d0c())->inventory;
    if ((*options & 0x7F) == 1) {
        if (*options >> 7) {
            FUN_002b7bca(status->entries, status->count, sizeof(status->entries[0]), devilSlotCompareRaceThenLevel);
        } else {
            FUN_002b7bca(status->entries, status->count, sizeof(status->entries[0]), devilCompareNonEmptyFirstB);
        }
    }
    if ((*options & 0x7F) == 8) {
        if (*options >> 7) {
            FUN_002b7bca(status->entries, status->count, sizeof(status->entries[0]), FUN_002e45f8);
        } else {
            FUN_002b7bca(status->entries, status->count, sizeof(status->entries[0]), FUN_00206d9c);
        }
    }
    if ((*options & 0x7F) == 2) {
        if (*options >> 7) {
            FUN_002b7bca(status->entries, status->count, sizeof(status->entries[0]), devilCompareNonEmptyFirst);
        } else {
            FUN_002b7bca(status->entries, status->count, sizeof(status->entries[0]), devilSlotCompareRaceDescending);
        }
    }
    if ((*options & 0x7F) != 3) {
        return;
    }
    if ((*options >> 7) == 0) {
        FUN_0027f3dc(status->entries, status->count, sizeof(status->entries[0]), entryCompareByDataValue);
        return;
    }
    FUN_0027f3dc(status->entries, status->count, sizeof(status->entries[0]), entryCompareByDataValueB);
}
} // extern "C"
