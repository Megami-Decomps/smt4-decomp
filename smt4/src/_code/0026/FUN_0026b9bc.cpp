/* NON_MATCHING: only register allocation differs (retail spills the expanded-grid pointer to the stack and keeps the first row/column in r7/fp; build spills the first row). */
#include "ui/PartyPanelState.h"
#include "ui/GridNavigation.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

/* Stock slots and capacity beyond the shared slot-table prefix. */
struct PartyStockView {
    u8 unk0000[0x90F0];
    s8 stock[24];
    s8 units[3];
    u8 capacity;
};

extern "C" {
PartyStockView *gameGetSlotTable(void);
s32 objectPartRunUnlessLocked(GridNavigation *grid);
s32 listCursorGetRowIfUnblocked(const GridNavigation *grid);
void gridNavigationConfigure(GridNavigation *grid, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);
void scrollOwnerSelectIndex(GridNavigation *grid, s32 index);
void partyPanelSortEntries(void);

/* Counts the filled stock slots, copies them into the panel's entry list and lays out the four capacity grids. */
void FUN_0026b9bc(void)
{
    PartyPanelState *panel = g_partyPanel;
    panel->occupiedCount = 0;
    for (s32 i = 0; i < 24; ++i) {
        if (gameGetSlotTable()->stock[i] >= 0)
            panel->occupiedCount++;
    }
    panel->pageCount = gameGetSlotTable()->capacity > 12 ? 2 : 1;

    PartyStockView *party = gameGetSlotTable();
    for (s32 i = 0; i < 24; ++i)
        panel->entries[i].packedIndex = party->stock[i];
    partyPanelSortEntries();

    u32 rows = party->capacity >> 2;
    if (party->capacity & 3)
        ++rows;

    s32 firstRow = objectPartRunUnlessLocked(&panel->stockGrid);
    s32 firstColumn = listCursorGetRowIfUnblocked(&panel->stockGrid);
    s32 secondRow = objectPartRunUnlessLocked(&panel->fullGrid);
    s32 secondColumn = listCursorGetRowIfUnblocked(&panel->fullGrid);
    if (party->capacity < 12) {
        gridNavigationConfigure(&panel->stockGrid, party->capacity, rows, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, party->capacity + 4, rows + 1, 4, 1, 1);
    } else if (!panel->page) {
        gridNavigationConfigure(&panel->stockGrid, 12, 3, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, 16, 4, 4, 1, 1);
    } else {
        gridNavigationConfigure(&panel->stockGrid, party->capacity - 12, 3, 4, 1, 1);
        gridNavigationConfigure(&panel->fullGrid, party->capacity - 8, 4, 4, 1, 1);
    }
    scrollOwnerSelectIndex(&panel->stockGrid, firstRow);
    scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(&panel->stockGrid), firstColumn);
    scrollOwnerSelectIndex(&panel->fullGrid, secondRow);
    scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(&panel->fullGrid), secondColumn);

    GridNavigation *base2 = &panel->stockGridAlternate;
    GridNavigation *expanded2 = &panel->fullGridAlternate;
    firstRow = objectPartRunUnlessLocked(base2);
    firstColumn = listCursorGetRowIfUnblocked(base2);
    secondRow = objectPartRunUnlessLocked(expanded2);
    secondColumn = listCursorGetRowIfUnblocked(expanded2);
    gridNavigationConfigure(base2, party->capacity, rows, 4, 1, 1);
    gridNavigationConfigure(expanded2, party->capacity + 4, rows + 1, 4, 1, 1);
    scrollOwnerSelectIndex(base2, firstRow);
    scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(base2), firstColumn);
    scrollOwnerSelectIndex(expanded2, secondRow);
    scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(expanded2), secondColumn);
}

} /* extern "C" */
