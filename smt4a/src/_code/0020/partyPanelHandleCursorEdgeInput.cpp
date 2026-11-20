#include "ui/PartyPanelStateA.h"

extern "C" {
s32 widgetSubCallIfVisible(GridNavigation *cursor);
s32 listCursorGetRowIfUnblocked(GridNavigation *cursor);
s32 gridNavigationGetItemCount(GridNavigation *cursor);
s32 listCursorGetRowOfChildIfUnblocked(GridNavigation *cursor);
s32 padQueryLogicalKey(u32 direction, u32 repeat);
void FUN_0026e848(GridNavigation *cursor);
void partyPanelToggleDisplayMode(GridNavigation *cursor);
void partyPanelReconfigureStockGrids(void);

// Change the party-panel page when directional input crosses either cursor edge.
u32 partyPanelHandleCursorEdgeInput(GridNavigation *cursor, s32 force)
{
    PartyPanelStateA *panel = g_partyPanel;
    u32 changed = 0;
    if (!cursor)
        return 0;
    s32 lastColumn = 3;
    if (cursor->count % widgetSubCallIfVisible(cursor)) {
        s32 page = listCursorGetRowIfUnblocked(cursor);
        s32 pages = gridNavigationGetItemCount(cursor);
        if (page == pages - 1)
            lastColumn = cursor->count % widgetSubCallIfVisible(cursor) - 1;
    }
    if (!panel->alternate && panel->pageCount > 1) {
        if ((force || listCursorGetRowOfChildIfUnblocked(cursor) == 0) && padQueryLogicalKey(4, 1)) {
            changed = 1;
            FUN_0026e848(cursor);
        } else if ((force || listCursorGetRowOfChildIfUnblocked(cursor) == lastColumn) && padQueryLogicalKey(3, 1)) {
            changed = 1;
            partyPanelToggleDisplayMode(cursor);
        }
        if (changed)
            partyPanelReconfigureStockGrids();
    }
    return changed;
}
}
