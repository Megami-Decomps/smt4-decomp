/* NON_MATCHING: branch layout now matches retail (fixed-capacity arm placed before the unlocked-slot arm); the second page's capacity reads now schedule like retail; remaining: the column results are held in swapped saved registers (r7/r8). */
#include "camp/CampMenuEntry.h"
#include "ui/PartyPanelState.h"
#include "ui/GridNavigation.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "gamedata/SaveSlotTableIV.h"
extern "C" {
s32 listCursorGetRowIfUnblocked(const GridNavigation *grid);
void gridNavigationConfigure(GridNavigation *grid, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);
void scrollOwnerSelectIndex(GridNavigation *grid, s32 index);
void scrollSelectionClampToCount(GridNavigation *grid);

/* Sizes the stock and full grids for the party's stock count (or its page) and restores their selections. */
void partyPanelConfigureGridNavigation(void)
{
    PartyPanelState *panel = g_partyPanel;
    SaveSlotTableIV *slots = gameGetSlotTable();
    s32 firstRow = objectPartRunUnlessLocked(&panel->stockGrid);
    s32 firstColumn = listCursorGetRowIfUnblocked(&panel->stockGrid);
    s32 secondRow = objectPartRunUnlessLocked(&panel->fullGrid);
    s32 secondColumn = listCursorGetRowIfUnblocked(&panel->fullGrid);
    u8 capacity = slots->stockCount;
    u32 rows = capacity >> 2;
    if (capacity & 3)
        ++rows;
    if (capacity < 12) {
        gridNavigationConfigure(&panel->stockGrid, capacity, rows, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, slots->stockCount + 4, rows + 1, 4, 1, 1);
    } else if (!panel->page) {
        gridNavigationConfigure(&panel->stockGrid, 12, 3, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, 16, 4, 4, 1, 1);
    } else {
        gridNavigationConfigure(&panel->stockGrid, gameGetSlotTable()->stockCount - 12, 3, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, gameGetSlotTable()->stockCount - 8, 4, 4, 1, 1);
    }
    scrollOwnerSelectIndex(&panel->stockGrid, firstRow);
    scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(&panel->stockGrid), firstColumn);
    scrollOwnerSelectIndex(&panel->fullGrid, secondRow);
    scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(&panel->fullGrid), secondColumn);
    scrollSelectionClampToCount(&panel->stockGrid);
    scrollSelectionClampToCount(&panel->fullGrid);
}
}
