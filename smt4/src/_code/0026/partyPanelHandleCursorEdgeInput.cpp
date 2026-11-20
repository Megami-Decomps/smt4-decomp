#include "ui/PartyPanelState.h"

extern "C" {
s32 uiGridNavigationEntryCount(GridNavigation *cursor);
s32 listCursorGetRowIfUnblocked(GridNavigation *cursor);
s32 gridNavigationGetItemCount(GridNavigation *cursor);
s32 objectPartRunUnlessLocked(GridNavigation *cursor);
s32 inputQueryButtonState(u32 direction, u32 repeat);
void FUN_002932d8(GridNavigation *cursor);
void partyPanelToggleRefresh(GridNavigation *cursor);
void partyPanelConfigureGridNavigation(void);

// Change the party-panel page when directional input crosses either cursor edge.
u32 partyPanelHandleCursorEdgeInput(GridNavigation *cursor, s32 force)
{
    PartyPanelState *panel = g_partyPanel;
    u32 changed = 0;
    if (!cursor)
        return 0;
    s32 lastColumn = 3;
    if (cursor->count % uiGridNavigationEntryCount(cursor)) {
        s32 page = listCursorGetRowIfUnblocked(cursor);
        s32 pages = gridNavigationGetItemCount(cursor);
        if (page == pages - 1)
            lastColumn = cursor->count % uiGridNavigationEntryCount(cursor) - 1;
    }
    if (!panel->alternate && panel->pageCount > 1) {
        if ((force || objectPartRunUnlessLocked(cursor) == 0) && inputQueryButtonState(4, 1)) {
            changed = 1;
            FUN_002932d8(cursor);
        } else if ((force || objectPartRunUnlessLocked(cursor) == lastColumn) && inputQueryButtonState(3, 1)) {
            changed = 1;
            partyPanelToggleRefresh(cursor);
        }
        if (changed)
            partyPanelConfigureGridNavigation();
    }
    return changed;
}
}
