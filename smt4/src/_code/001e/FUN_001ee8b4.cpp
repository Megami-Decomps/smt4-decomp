/* NON_MATCHING: count-increment load scheduling, navigation pointer lifetime and cursor-clamp arithmetic registers differ; 96 instructions each. */
#include "status/StatusDown.h"
#include "gamedata/DevilRecord.h"

extern "C" {
extern StatusDownState *g_statusDown;
void memClear(void *memory, u32 bytes);
void FUN_0029f848(GridNavigation *navigation, s32 count, s32 rows, s32 columns, s32 firstPolicy, s32 secondPolicy);
void FUN_0029eb5c(GridNavigation *navigation, s32 row);
void scrollOwnerSelectIndex(GridNavigation *navigation, s32 column);
void statusInventorySort();

// Rebuild the status inventory from owned demon quantities and keep its grid cursor in range.
void FUN_001ee8b4(const u8 *quantities)
{
    StatusDownState *status = g_statusDown;
    status->inventory.count = 0;
    status->inventory.ownedCount = 0;
    memClear(status->inventory.entries, sizeof(status->inventory.entries));
    for (u16 index = 0; index < 0x500; ++index) {
        const DevilRecord *record = reinterpret_cast<const DevilRecord *>(devilGetRecord(index));
        if (record && (record->fusion.flags & 1) && quantities[record->header.id]) {
            status->inventory.entries[status->inventory.count][0] = record->header.id;
            u8 quantity = quantities[record->header.id];
            status->inventory.entries[status->inventory.count][1] = quantity;
            if (quantity)
                ++status->inventory.ownedCount;
            ++status->inventory.count;
        }
    }
    GridNavigation *navigation = &status->inventory.navigation;
    FUN_0029f848(navigation, status->inventory.count, 9, 4, 1, 1);
    s32 count = status->inventory.count;
    if (count > 0 && status->inventory.column + status->inventory.row * 4 >= count) {
        status->inventory.row = (count - 1) / 4;
        status->inventory.column = status->inventory.count - status->inventory.row * 4 - 1;
        FUN_0029eb5c(navigation, status->inventory.row);
        scrollOwnerSelectIndex(navigation, status->inventory.column);
    } else {
        FUN_0029eb5c(navigation, status->inventory.row);
        scrollOwnerSelectIndex(navigation, status->inventory.column);
    }
    statusInventorySort();
    status->unk410 = 1;
}
}
