#include "ui/PartyPanelStateA.h"

extern "C" {
s32 listCursorGetRowIfUnblocked(const GridNavigation *navigation);
s32 listCursorGetRowOfChildIfUnblocked(const GridNavigation *navigation);

/* Reports whether the current or pending panel mode has finished its transition: the mode's grid is idle (both
 * cursor queries return 0), or for mode 10 no selection is pending. */
u32 partyPanelIsTransitionDone(void)
{
    u32 ready = 0;
    PartyPanelStateA *panel = g_partyPanel;
    u32 pending = panel->pendingState;
    if (pending != 6 && panel->sceneState != 6) {
        if (pending == 4 || panel->sceneState == 4) {
            if (!listCursorGetRowIfUnblocked(&panel->partyGrid) &&
                !listCursorGetRowOfChildIfUnblocked(&panel->partyGrid))
                ready = 1;
        } else if (pending == 8 || panel->sceneState == 8) {
            if (panel->alternate) {
                if (!listCursorGetRowIfUnblocked(&panel->fullGridAlternate) &&
                    !listCursorGetRowOfChildIfUnblocked(&panel->fullGridAlternate))
                    ready = 1;
            } else {
                if (!listCursorGetRowIfUnblocked(&panel->fullGrid) &&
                    !listCursorGetRowOfChildIfUnblocked(&panel->fullGrid))
                    ready = 1;
            }
        } else if (pending == 10 || panel->sceneState == 10) {
            if (panel->selection < 0)
                ready = 1;
        } else if (pending == 20 || panel->sceneState == 20) {
            if (panel->alternate) {
                if (!listCursorGetRowIfUnblocked(&panel->fullGridAlternate) &&
                    !listCursorGetRowOfChildIfUnblocked(&panel->fullGridAlternate))
                    ready = 1;
            } else {
                if (!listCursorGetRowIfUnblocked(&panel->fullGrid) &&
                    !listCursorGetRowOfChildIfUnblocked(&panel->fullGrid))
                    ready = 1;
            }
        }
    }
    return ready;
}
}
