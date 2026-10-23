#include "ui/PartyPanelNavigation.h"

extern "C" {
extern PartyPanelNavigationView *g_partyPanel;
s32 FUN_0029e958(PartyPanelCursorView *cursor);
s32 FUN_0029efa8(PartyPanelCursorView *cursor);
s32 FUN_0029ee54(PartyPanelCursorView *cursor);
s32 objectPartRunUnlessLocked(PartyPanelCursorView *cursor);
s32 FUN_002c1658(u32 direction, u32 repeat);
void FUN_002932d8(PartyPanelCursorView *cursor);
void partyPanelToggleRefresh(PartyPanelCursorView *cursor);
void FUN_002937e0(void);

// Change the party-panel page when directional input crosses either cursor edge.
u32 partyPanelHandleCursorEdgeInput(PartyPanelCursorView *cursor, s32 force)
{
    PartyPanelNavigationView *panel = g_partyPanel;
    u32 changed = 0;
    if (!cursor)
        return 0;
    s32 lastColumn = 3;
    if (cursor->count % FUN_0029e958(cursor)) {
        s32 page = FUN_0029efa8(cursor);
        s32 pages = FUN_0029ee54(cursor);
        if (page == pages - 1)
            lastColumn = cursor->count % FUN_0029e958(cursor) - 1;
    }
    if (!panel->blocked && panel->count > 1) {
        if ((force || objectPartRunUnlessLocked(cursor) == 0) && FUN_002c1658(4, 1)) {
            changed = 1;
            FUN_002932d8(cursor);
        } else if ((force || objectPartRunUnlessLocked(cursor) == lastColumn) && FUN_002c1658(3, 1)) {
            changed = 1;
            partyPanelToggleRefresh(cursor);
        }
        if (changed)
            FUN_002937e0();
    }
    return changed;
}
}
