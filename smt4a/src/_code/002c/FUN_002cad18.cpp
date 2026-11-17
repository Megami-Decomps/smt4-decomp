/* NON_MATCHING: boolean returns and selection-sign test are folded, reducing the save set; active-grid pointer lifetimes differ, 96 versus retail 98 instructions. */
#include "ui/PartyPanelStateA.h"

extern "C" {
s32 listCursorGetRowIfUnblocked(const GridNavigation *navigation);
s32 listCursorGetRowOfChildIfUnblocked(const GridNavigation *navigation);
}
static __inline bool gridAtOrigin(const GridNavigation *navigation)
{
    return !listCursorGetRowIfUnblocked(navigation) && !listCursorGetRowOfChildIfUnblocked(navigation);
}

// Allow an empty/origin selection only in the party modes that support it.
extern "C" u32 FUN_002cad18()
{
    PartyPanelStateA *panel = g_partyPanel;
    s32 mode = panel->pendingState;
    if (mode == 6 || panel->sceneState == 6)
        return 0;
    if (mode == 4 || panel->sceneState == 4)
        return gridAtOrigin(&panel->partyGrid);
    if (mode == 8 || panel->sceneState == 8) {
        if (panel->alternate)
            return gridAtOrigin(&panel->fullGridAlternate);
        return gridAtOrigin(&panel->fullGrid);
    }
    if (mode == 10 || panel->sceneState == 10)
        return panel->selection < 0;
    if (mode == 20 || panel->sceneState == 20) {
        if (panel->alternate)
            return gridAtOrigin(&panel->fullGridAlternate);
        return gridAtOrigin(&panel->fullGrid);
    }
    return 0;
}
