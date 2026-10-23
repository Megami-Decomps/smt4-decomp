#include "ui/PartyPanelNavigation.h"

extern "C" {
extern PartyPanelNavigationView *g_partyPanel;
s32 widgetSubCallIfVisible(PartyPanelCursorView *cursor);
s32 FUN_002a4894(PartyPanelCursorView *cursor);
s32 objectApplyIfUnblocked(PartyPanelCursorView *cursor);
s32 FUN_002a4878(PartyPanelCursorView *cursor);
s32 FUN_001517b4(u32 direction, u32 repeat);
void FUN_0026e848(PartyPanelCursorView *cursor);
void partyPanelToggleDisplayMode(PartyPanelCursorView *cursor);
void FUN_0026fa30(void);

// Change the party-panel page when directional input crosses either cursor edge.
u32 partyPanelHandleCursorEdgeInput(PartyPanelCursorView *cursor, s32 force)
{
    PartyPanelNavigationView *panel = g_partyPanel;
    u32 changed = 0;
    if (!cursor)
        return 0;
    s32 lastColumn = 3;
    if (cursor->count % widgetSubCallIfVisible(cursor)) {
        s32 page = FUN_002a4894(cursor);
        s32 pages = objectApplyIfUnblocked(cursor);
        if (page == pages - 1)
            lastColumn = cursor->count % widgetSubCallIfVisible(cursor) - 1;
    }
    if (!panel->blocked && panel->count > 1) {
        if ((force || FUN_002a4878(cursor) == 0) && FUN_001517b4(4, 1)) {
            changed = 1;
            FUN_0026e848(cursor);
        } else if ((force || FUN_002a4878(cursor) == lastColumn) && FUN_001517b4(3, 1)) {
            changed = 1;
            partyPanelToggleDisplayMode(cursor);
        }
        if (changed)
            FUN_0026fa30();
    }
    return changed;
}
}
