/* NON_MATCHING: loop and navigation setup now match; only the cursor clamp test loads row/column into r1/r2 the other way round. */
#include "ui/UiSpriteApi.h"
#include "status/StatusDown.h"
#include "gamedata/NkmBaseRecord.h"
#include "AsdSDK/AsdMemUtil.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

extern "C" {
void gridNavigationConfigure(GridNavigation *navigation, s32 count, s32 rows, s32 columns, s32 firstPolicy, s32 secondPolicy);
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
        const NkmBaseRecord *record = reinterpret_cast<const NkmBaseRecord *>(nkmBaseGetRecord(index));
        if (record && (record->flags & 1) && quantities[record->id]) {
            status->inventory.entries[status->inventory.count][0] = record->id;
            u8 quantity = quantities[record->id];
            status->inventory.entries[status->inventory.count][1] = quantity;
            s16 count = status->inventory.count;
            if (quantity)
                ++status->inventory.ownedCount;
            status->inventory.count = count + 1;
        }
    }
    gridNavigationConfigure(&status->inventory.navigation, status->inventory.count, 9, 4, 1, 1);
    GridNavigation *navigation = &status->inventory.navigation;
    s32 count = status->inventory.count;
    if (count > 0 && status->inventory.column + status->inventory.row * 4 >= count) {
        status->inventory.row = (count - 1) / 4;
        status->inventory.column = status->inventory.count - status->inventory.row * 4 - 1;
        scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(navigation), status->inventory.row);
        scrollOwnerSelectIndex(navigation, status->inventory.column);
    } else {
        scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(navigation), status->inventory.row);
        scrollOwnerSelectIndex(navigation, status->inventory.column);
    }
    statusInventorySort();
    status->listActive = 1;
}
}
