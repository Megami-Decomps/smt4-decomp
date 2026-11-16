/* NON_MATCHING: capacity branches agree, but grid-pointer register allocation differs by one instruction. */
#include "ui/PartyPanelCapacity.h"
#include "code/Code002a.h"
#include "code/Code002a_VariantA.h"

extern "C" {
extern PartyPanelCapacityViewA *g_partyPanel;
PartyCapacitySlotsA *gameGetSlotTable();
void partyPanelSortByMode();
void scrollOwnerSelectIndex(GridNavigation *grid, s32 index);
void scrollListSetSelectionTracked(GridNavigation *grid, s32 index);
void gridNavigationConfigure(GridNavigation *grid, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);

/* Rebuild stock navigation ranges while preserving each grid's selection and scroll position. */
void partyPanelRefreshFromSlotTable()
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
    s32 primarySelection = listCursorGetRowOfChildIfUnblocked(primary);
    s32 primaryScroll = listCursorGetRowIfUnblocked(primary);
    s32 expandedSelection = listCursorGetRowOfChildIfUnblocked(&panel->expanded);
    s32 expandedScroll = listCursorGetRowIfUnblocked(&panel->expanded);
    if (panel->fixedCapacity == 0) {
        if (slots->capacity < 12) {
            gridNavigationConfigure(primary, slots->capacity, rows, 4, 1, 1);
            gridNavigationConfigure(&panel->expanded, slots->capacity + 4, rows + 1, 4, 1, 1);
        } else if (panel->expandedPage != 0) {
            gridNavigationConfigure(primary, slots->capacity - 12, 3, 4, 1, 1);
            gridNavigationConfigure(&panel->expanded, slots->capacity - 8, 4, 4, 1, 1);
        } else {
            gridNavigationConfigure(primary, 12, 3, 4, 1, 1);
            gridNavigationConfigure(&panel->expanded, 16, 4, 4, 1, 1);
        }
    } else {
        gridNavigationConfigure(&panel->expanded, 4, 1, 4, 1, 1);
    }
    scrollOwnerSelectIndex(primary, primarySelection);
    scrollListSetSelectionTracked(primary, primaryScroll);
    scrollOwnerSelectIndex(&panel->expanded, expandedSelection);
    scrollListSetSelectionTracked(&panel->expanded, expandedScroll);

    GridNavigation *secondary = &panel->secondary;
    primarySelection = listCursorGetRowOfChildIfUnblocked(secondary);
    primaryScroll = listCursorGetRowIfUnblocked(secondary);
    GridNavigation *secondaryExpanded = &panel->secondaryExpanded;
    expandedSelection = listCursorGetRowOfChildIfUnblocked(secondaryExpanded);
    expandedScroll = listCursorGetRowIfUnblocked(secondaryExpanded);
    gridNavigationConfigure(secondary, slots->capacity, rows, 4, 1, 1);
    gridNavigationConfigure(secondaryExpanded, slots->capacity + 4, rows + 1, 4, 1, 1);
    scrollOwnerSelectIndex(secondary, primarySelection);
    scrollListSetSelectionTracked(secondary, primaryScroll);
    scrollOwnerSelectIndex(secondaryExpanded, expandedSelection);
    scrollListSetSelectionTracked(secondaryExpanded, expandedScroll);
}
}
