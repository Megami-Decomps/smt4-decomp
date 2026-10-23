/* NON_MATCHING: column result registers, argument stores and fixed-capacity cold branch placement differ. */
#include "ui/PartyPanelState.h"
#include "ui/GridNavigation.h"
struct SlotTable;
/* Capacity is beyond the shared slot-table prefix. */
struct PartyCapacityView {
    u8 unk0000[0x910B];
    u8 capacity;
};
extern "C" {
extern PartyPanelState *g_partyPanel;
SlotTable *gameGetSlotTable(void);
s32 objectPartRunUnlessLocked(GridNavigation *grid);
s32 FUN_0029efa8(const GridNavigation *grid);
void FUN_0029f848(GridNavigation *grid, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);
void FUN_0029e8b8(GridNavigation *grid, s32 index);
void FUN_0029eb5c(GridNavigation *grid, s32 index);
void FUN_001c3600(GridNavigation *grid);

void FUN_002937e0(void)
{
    PartyPanelState *panel = g_partyPanel;
    const PartyCapacityView *party = reinterpret_cast<const PartyCapacityView *>(gameGetSlotTable());
    s32 firstRow = objectPartRunUnlessLocked(&panel->capacityGrids.base);
    s32 firstColumn = FUN_0029efa8(&panel->capacityGrids.base);
    s32 secondRow = objectPartRunUnlessLocked(&panel->capacityGrids.expanded);
    s32 secondColumn = FUN_0029efa8(&panel->capacityGrids.expanded);
    u8 capacity = party->capacity;
    u32 rows = capacity >> 2;
    if (capacity & 3)
        ++rows;
    if (capacity < 12) {
        FUN_0029f848(&panel->capacityGrids.base, capacity, rows, 4, 1, 1);
        FUN_0029f848(&panel->capacityGrids.expanded, party->capacity + 4, rows + 1, 4, 1, 1);
    } else if (panel->unk2C) {
        party = reinterpret_cast<const PartyCapacityView *>(gameGetSlotTable());
        FUN_0029f848(&panel->capacityGrids.base, party->capacity - 12, 3, 4, 1, 1);
        party = reinterpret_cast<const PartyCapacityView *>(gameGetSlotTable());
        FUN_0029f848(&panel->capacityGrids.expanded, party->capacity - 8, 4, 4, 1, 1);
    } else {
        FUN_0029f848(&panel->capacityGrids.base, 12, 3, 4, 1, 1);
        FUN_0029f848(&panel->capacityGrids.expanded, 16, 4, 4, 1, 1);
    }
    FUN_0029e8b8(&panel->capacityGrids.base, firstRow);
    FUN_0029eb5c(&panel->capacityGrids.base, firstColumn);
    FUN_0029e8b8(&panel->capacityGrids.expanded, secondRow);
    FUN_0029eb5c(&panel->capacityGrids.expanded, secondColumn);
    FUN_001c3600(&panel->capacityGrids.base);
    FUN_001c3600(&panel->capacityGrids.expanded);
}
}
