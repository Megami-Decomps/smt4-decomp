#include "ui/PartyPanelStateA.h"
#include "ui/GridNavigation.h"
#include "battle/btlMain.h"
#include "code/Code002a.h"
#include "code/Code002a_VariantA.h"

extern "C" {
BtlPartyBlockA *gameGetSlotTable();
void gridNavigationConfigure(GridNavigation *, s32, s32, s32, s32, s32);
void scrollOwnerSelectIndex(GridNavigation *, s32);
void scrollListSetSelectionTracked(GridNavigation *, s32);
void scrollSelectionClampToCount(GridNavigation *);

/* Reconfigures the stock grids for the current stock size and page, keeping each grid's selection. */
void partyPanelReconfigureStockGrids()
{
    PartyPanelStateA *panel = g_partyPanel;
    BtlPartyBlockA *party = gameGetSlotTable();
    if (panel->layoutMode == 1)
        return;
    s32 primaryColumn = listCursorGetRowOfChildIfUnblocked(&panel->stockGrid);
    s32 primaryRow = listCursorGetRowIfUnblocked(&panel->stockGrid);
    s32 secondaryColumn = listCursorGetRowOfChildIfUnblocked(&panel->fullGrid);
    s32 secondaryRow = listCursorGetRowIfUnblocked(&panel->fullGrid);
    u8 count = party->count;
    u32 rows = count >> 2;
    if (count & 3)
        ++rows;
    if (count < 12) {
        gridNavigationConfigure(&panel->stockGrid, count, rows, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, party->count + 4, rows + 1, 4, 1, 1);
    } else if (!panel->page) {
        gridNavigationConfigure(&panel->stockGrid, 12, 3, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, 16, 4, 4, 1, 1);
    } else {
        gridNavigationConfigure(&panel->stockGrid, gameGetSlotTable()->count - 12, 3, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, gameGetSlotTable()->count - 8, 4, 4, 1, 1);
    }
    scrollOwnerSelectIndex(&panel->stockGrid, primaryColumn);
    scrollListSetSelectionTracked(&panel->stockGrid, primaryRow);
    scrollOwnerSelectIndex(&panel->fullGrid, secondaryColumn);
    scrollListSetSelectionTracked(&panel->fullGrid, secondaryRow);
    scrollSelectionClampToCount(&panel->stockGrid);
    scrollSelectionClampToCount(&panel->fullGrid);
}
}
