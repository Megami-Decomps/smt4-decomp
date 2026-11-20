#include "ui/PartyPanelState.h"

extern "C" {

void flaggedEntrySetValueB(GridNavigation *cursor, s32 value);   /* column */
void flaggedEntrySetValueA(GridNavigation *cursor, s32 value);   /* row */
s32 uiGridNavigationEntryCount(GridNavigation *cursor);                        /* column count */
s32 gridNavigationGetItemCount(GridNavigation *cursor);                        /* row count */

/* Puts the panel's cursor on the first present member (mode 4 and the reserve row of mode 8) or the
 * first filled grid cell (modes 6 and 8), and mirrors it on the second cursor when the other side
 * of the panel is shown. */
void partyPanelResetCursor(void)
{
    PartyPanelState *panel = g_partyPanel;
    if (panel->pendingState == 4) {
        for (s32 column = 0; column < uiGridNavigationEntryCount(&panel->partyGrid); column++) {
            if (panel->activeSlots[column]) {
                flaggedEntrySetValueB(&panel->partyGrid, column);
                return;
            }
        }
    } else if (panel->pendingState == 6) {
        for (s32 row = 0; row < gridNavigationGetItemCount(&panel->stockGridAlternate); row++) {
            for (s32 column = 0; column < uiGridNavigationEntryCount(&panel->stockGridAlternate); column++) {
                s32 cell = column + row * 4;
                if (panel->entries[cell].available == 0)
                    continue;
                flaggedEntrySetValueB(&panel->stockGridAlternate, column);
                flaggedEntrySetValueA(&panel->stockGridAlternate, row);
                if (panel->page == 0) {
                    if (cell >= 12)
                        return;
                    flaggedEntrySetValueB(&panel->stockGrid, column);
                    flaggedEntrySetValueA(&panel->stockGrid, row);
                    return;
                }
                if (panel->page != 1 || cell < 12)
                    return;
                flaggedEntrySetValueB(&panel->stockGrid, column);
                flaggedEntrySetValueA(&panel->stockGrid, row - 4);
                return;
            }
        }
    } else if (panel->pendingState == 8) {
        for (s32 column = 0; column < uiGridNavigationEntryCount(&panel->fullGridAlternate); column++) {
            if (panel->activeSlots[column]) {
                flaggedEntrySetValueB(&panel->fullGrid, column);
                flaggedEntrySetValueA(&panel->fullGrid, 0);
                flaggedEntrySetValueB(&panel->fullGridAlternate, column);
                flaggedEntrySetValueA(&panel->fullGridAlternate, 0);
                return;
            }
        }
        for (s32 row = 1; row < gridNavigationGetItemCount(&panel->fullGridAlternate); row++) {
            for (s32 column = 0; column < uiGridNavigationEntryCount(&panel->fullGridAlternate); column++) {
                s32 cell = column + row * 4 - 4;
                if (panel->entries[cell].available == 0)
                    continue;
                flaggedEntrySetValueB(&panel->fullGridAlternate, column);
                flaggedEntrySetValueA(&panel->fullGridAlternate, row);
                if (panel->page == 0) {
                    if (cell >= 12)
                        return;
                    flaggedEntrySetValueB(&panel->fullGrid, column);
                    flaggedEntrySetValueA(&panel->fullGrid, row);
                    return;
                }
                if (panel->page != 1 || cell < 12)
                    return;
                flaggedEntrySetValueB(&panel->fullGrid, column);
                flaggedEntrySetValueA(&panel->fullGrid, row - 3);
                return;
            }
        }
    }
}

} /* extern "C" */
