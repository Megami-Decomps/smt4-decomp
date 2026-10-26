/* NON_MATCHING: capacity branches agree, but grid-pointer register allocation differs by one instruction. */
#include "ui/PartyPanelCapacity.h"
#include "code/Code002a.h"
#include "code/Code002a_VariantA.h"

extern "C" {
extern PartyPanelCapacityViewA *g_partyPanel;
PartyCapacitySlotsA *gameGetSlotTable();
void partyPanelSortByMode();
void scrollOwnerSelectIndex(GridNavigation *grid, s32 index);
void FUN_002a4964(GridNavigation *grid, s32 index);
void FUN_00203b40(GridNavigation *grid, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);

/* Rebuild stock navigation ranges while preserving each grid's selection and scroll position. */
void FUN_0031d890()
{
    PartyPanelCapacityViewA *panel = g_partyPanel;
    panel->occupied = 0;
    for (s32 slot = 0; slot < 24; ++slot) {
        if (gameGetSlotTable()->active.slots[slot] >= 0) {
            ++panel->occupied;
        }
    }
    panel->capacityTier = gameGetSlotTable()->capacity > 12 ? 2 : 1;
    PartyCapacitySlotsA *slots = gameGetSlotTable();
    for (s32 slot = 0; slot < 24; ++slot) {
        panel->entries[slot].packedIndex = slots->active.slots[slot];
    }
    partyPanelSortByMode();
    u32 rows = slots->capacity >> 2;
    if ((slots->capacity & 3) != 0) {
        ++rows;
    }
    GridNavigation *primary = &panel->primary;
    s32 primarySelection = FUN_002a4878(primary);
    s32 primaryScroll = FUN_002a4894(primary);
    s32 expandedSelection = FUN_002a4878(&panel->expanded);
    s32 expandedScroll = FUN_002a4894(&panel->expanded);
    if (panel->fixedCapacity == 0) {
        if (slots->capacity < 12) {
            FUN_00203b40(primary, slots->capacity, rows, 4, 1, 1);
            FUN_00203b40(&panel->expanded, slots->capacity + 4, rows + 1, 4, 1, 1);
        } else if (panel->expandedPage != 0) {
            FUN_00203b40(primary, slots->capacity - 12, 3, 4, 1, 1);
            FUN_00203b40(&panel->expanded, slots->capacity - 8, 4, 4, 1, 1);
        } else {
            FUN_00203b40(primary, 12, 3, 4, 1, 1);
            FUN_00203b40(&panel->expanded, 16, 4, 4, 1, 1);
        }
    } else {
        FUN_00203b40(&panel->expanded, 4, 1, 4, 1, 1);
    }
    scrollOwnerSelectIndex(primary, primarySelection);
    FUN_002a4964(primary, primaryScroll);
    scrollOwnerSelectIndex(&panel->expanded, expandedSelection);
    FUN_002a4964(&panel->expanded, expandedScroll);

    GridNavigation *secondary = &panel->secondary;
    primarySelection = FUN_002a4878(secondary);
    primaryScroll = FUN_002a4894(secondary);
    GridNavigation *secondaryExpanded = &panel->secondaryExpanded;
    expandedSelection = FUN_002a4878(secondaryExpanded);
    expandedScroll = FUN_002a4894(secondaryExpanded);
    FUN_00203b40(secondary, slots->capacity, rows, 4, 1, 1);
    FUN_00203b40(secondaryExpanded, slots->capacity + 4, rows + 1, 4, 1, 1);
    scrollOwnerSelectIndex(secondary, primarySelection);
    FUN_002a4964(secondary, primaryScroll);
    scrollOwnerSelectIndex(secondaryExpanded, expandedSelection);
    FUN_002a4964(secondaryExpanded, expandedScroll);
}
}
