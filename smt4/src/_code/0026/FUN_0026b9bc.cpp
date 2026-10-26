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
extern PartyPanelState *g_partyPanel;
PartyStockView *gameGetSlotTable(void);
s32 objectPartRunUnlessLocked(GridNavigation *grid);
s32 FUN_0029efa8(const GridNavigation *grid);
void FUN_0029f848(GridNavigation *grid, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);
void scrollOwnerSelectIndex(GridNavigation *grid, s32 index);
void partyPanelSortEntries(void);

/* Counts the filled stock slots, copies them into the panel's entry list and lays out the four capacity grids. */
void FUN_0026b9bc(void)
{
    PartyPanelState *panel = g_partyPanel;
    panel->history.unk28 = 0;
    for (s32 i = 0; i < 24; ++i) {
        if (gameGetSlotTable()->stock[i] >= 0)
            panel->history.unk28++;
    }
    panel->capacityTier = gameGetSlotTable()->capacity > 12 ? 2 : 1;

    PartyStockView *party = gameGetSlotTable();
    for (s32 i = 0; i < 24; ++i)
        panel->previewUnits[i].packedIndex = party->stock[i];
    partyPanelSortEntries();

    u32 rows = party->capacity >> 2;
    if (party->capacity & 3)
        ++rows;

    s32 firstRow = objectPartRunUnlessLocked(&panel->capacityGrids.base);
    s32 firstColumn = FUN_0029efa8(&panel->capacityGrids.base);
    s32 secondRow = objectPartRunUnlessLocked(&panel->capacityGrids.expanded);
    s32 secondColumn = FUN_0029efa8(&panel->capacityGrids.expanded);
    if (party->capacity < 12) {
        FUN_0029f848(&panel->capacityGrids.base, party->capacity, rows, 4, 1, 1);
        FUN_0029f848(&panel->capacityGrids.expanded, party->capacity + 4, rows + 1, 4, 1, 1);
    } else if (!panel->unk2C) {
        FUN_0029f848(&panel->capacityGrids.base, 12, 3, 4, 1, 1);
        FUN_0029f848(&panel->capacityGrids.expanded, 16, 4, 4, 1, 1);
    } else {
        FUN_0029f848(&panel->capacityGrids.base, party->capacity - 12, 3, 4, 1, 1);
        FUN_0029f848(&panel->capacityGrids.expanded, party->capacity - 8, 4, 4, 1, 1);
    }
    scrollOwnerSelectIndex(&panel->capacityGrids.base, firstRow);
    FUN_0029eb5c(reinterpret_cast<ScrollSelection *>(&panel->capacityGrids.base), firstColumn);
    scrollOwnerSelectIndex(&panel->capacityGrids.expanded, secondRow);
    FUN_0029eb5c(reinterpret_cast<ScrollSelection *>(&panel->capacityGrids.expanded), secondColumn);

    GridNavigation *base2 = &panel->capacityGrids.secondary;
    GridNavigation *expanded2 = &panel->capacityGrids.secondaryExpanded;
    firstRow = objectPartRunUnlessLocked(base2);
    firstColumn = FUN_0029efa8(base2);
    secondRow = objectPartRunUnlessLocked(expanded2);
    secondColumn = FUN_0029efa8(expanded2);
    FUN_0029f848(base2, party->capacity, rows, 4, 1, 1);
    FUN_0029f848(expanded2, party->capacity + 4, rows + 1, 4, 1, 1);
    scrollOwnerSelectIndex(base2, firstRow);
    FUN_0029eb5c(reinterpret_cast<ScrollSelection *>(base2), firstColumn);
    scrollOwnerSelectIndex(expanded2, secondRow);
    FUN_0029eb5c(reinterpret_cast<ScrollSelection *>(expanded2), secondColumn);
}

} /* extern "C" */
