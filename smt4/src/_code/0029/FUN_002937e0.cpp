/* NON_MATCHING: branch layout now matches retail (fixed-capacity arm placed before the unlocked-slot arm); the second page's capacity reads now schedule like retail; remaining: the column results are held in swapped saved registers (r7/r8). */
#include "camp/CampMenuEntry.h"
#include "ui/PartyPanelState.h"
#include "ui/GridNavigation.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "gamedata/SaveSlotTableIV.h"
struct SlotTable;
/* Capacity is beyond the shared slot-table prefix. */
struct PartyCapacityView {
    u8 unk0000[0x910B];
    u8 capacity;
};
extern "C" {
s32 listCursorGetRowIfUnblocked(const GridNavigation *grid);
void gridNavigationConfigure(GridNavigation *grid, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);
void scrollOwnerSelectIndex(GridNavigation *grid, s32 index);
void scrollSelectionClampToCount(GridNavigation *grid);

void FUN_002937e0(void)
{
    PartyPanelState *panel = g_partyPanel;
    const PartyCapacityView *party = reinterpret_cast<const PartyCapacityView *>(gameGetSlotTable());
    s32 firstRow = objectPartRunUnlessLocked(&panel->stockGrid);
    s32 firstColumn = listCursorGetRowIfUnblocked(&panel->stockGrid);
    s32 secondRow = objectPartRunUnlessLocked(&panel->fullGrid);
    s32 secondColumn = listCursorGetRowIfUnblocked(&panel->fullGrid);
    u8 capacity = party->capacity;
    u32 rows = capacity >> 2;
    if (capacity & 3)
        ++rows;
    if (capacity < 12) {
        gridNavigationConfigure(&panel->stockGrid, capacity, rows, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, party->capacity + 4, rows + 1, 4, 1, 1);
    } else if (!panel->page) {
        gridNavigationConfigure(&panel->stockGrid, 12, 3, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, 16, 4, 4, 1, 1);
    } else {
        gridNavigationConfigure(&panel->stockGrid, reinterpret_cast<const PartyCapacityView *>(gameGetSlotTable())->capacity - 12, 3, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, reinterpret_cast<const PartyCapacityView *>(gameGetSlotTable())->capacity - 8, 4, 4, 1, 1);
    }
    scrollOwnerSelectIndex(&panel->stockGrid, firstRow);
    scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(&panel->stockGrid), firstColumn);
    scrollOwnerSelectIndex(&panel->fullGrid, secondRow);
    scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(&panel->fullGrid), secondColumn);
    scrollSelectionClampToCount(&panel->stockGrid);
    scrollSelectionClampToCount(&panel->fullGrid);
}
}
