#include "ui/PartyPanelStateA.h"
#include "gamedata/SaveSlotTable.h"
#include "code/Code002a.h"
#include "code/Code002a_VariantA.h"

extern "C" {
void partyPanelSortByMode();
void scrollOwnerSelectIndex(GridNavigation *grid, s32 index);
void scrollListSetSelectionTracked(GridNavigation *grid, s32 index);
void gridNavigationConfigure(GridNavigation *grid, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);

/* Rebuild stock navigation ranges while preserving each grid's selection and scroll position. */
void partyPanelRefreshFromSlotTable()
{
    PartyPanelStateA *panel = g_partyPanel;
    panel->occupiedCount = 0;
    for (s32 slot = 0; slot < 24; ++slot) {
        if (gameGetSlotTable()->party[slot] >= 0) {
            ++panel->occupiedCount;
        }
    }
    panel->pageCount = gameGetSlotTable()->count > 12 ? 2 : 1;
    SaveSlotTableA *slots = gameGetSlotTable();
    for (s32 slot = 0; slot < 24; ++slot) {
        panel->entries[slot].packedIndex = slots->party[slot];
    }
    partyPanelSortByMode();
    u32 rows = slots->count >> 2;
    if ((slots->count & 3) != 0) {
        ++rows;
    }
    s32 selection = listCursorGetRowOfChildIfUnblocked(&panel->stockGrid);
    s32 scroll = listCursorGetRowIfUnblocked(&panel->stockGrid);
    s32 expandedSelection = listCursorGetRowOfChildIfUnblocked(&panel->fullGrid);
    s32 expandedScroll = listCursorGetRowIfUnblocked(&panel->fullGrid);
    if (panel->layoutMode == 0) {
        if (slots->count < 12) {
            gridNavigationConfigure(&panel->stockGrid, slots->count, rows, 4, 1, 1);
            gridNavigationConfigure(&panel->fullGrid, slots->count + 4, rows + 1, 4, 1, 1);
        } else if (panel->page != 0) {
            gridNavigationConfigure(&panel->stockGrid, slots->count - 12, 3, 4, 1, 1);
            gridNavigationConfigure(&panel->fullGrid, slots->count - 8, 4, 4, 1, 1);
        } else {
            gridNavigationConfigure(&panel->stockGrid, 12, 3, 4, 1, 1);
            gridNavigationConfigure(&panel->fullGrid, 16, 4, 4, 1, 1);
        }
    } else {
        gridNavigationConfigure(&panel->fullGrid, 4, 1, 4, 1, 1);
    }
    scrollOwnerSelectIndex(&panel->stockGrid, selection);
    scrollListSetSelectionTracked(&panel->stockGrid, scroll);
    scrollOwnerSelectIndex(&panel->fullGrid, expandedSelection);
    scrollListSetSelectionTracked(&panel->fullGrid, expandedScroll);

    selection = listCursorGetRowOfChildIfUnblocked(&panel->stockGridAlternate);
    scroll = listCursorGetRowIfUnblocked(&panel->stockGridAlternate);
    expandedSelection = listCursorGetRowOfChildIfUnblocked(&panel->fullGridAlternate);
    expandedScroll = listCursorGetRowIfUnblocked(&panel->fullGridAlternate);
    gridNavigationConfigure(&panel->stockGridAlternate, slots->count, rows, 4, 1, 1);
    gridNavigationConfigure(&panel->fullGridAlternate, slots->count + 4, rows + 1, 4, 1, 1);
    scrollOwnerSelectIndex(&panel->stockGridAlternate, selection);
    scrollListSetSelectionTracked(&panel->stockGridAlternate, scroll);
    scrollOwnerSelectIndex(&panel->fullGridAlternate, expandedSelection);
    scrollListSetSelectionTracked(&panel->fullGridAlternate, expandedScroll);
}
}
