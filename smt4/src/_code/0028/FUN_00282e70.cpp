#include "camp/CampMenuEntry.h"
#include "ui/PartyPanelState.h"
#include "code/Code0029_VariantB.h"

extern "C" {

/* Reports whether the current or pending panel mode has finished its transition: the mode's part
 * is idle (listCursorGetRowIfUnblocked and objectPartRunUnlessLocked both return 0), or for mode 10 no
 * selection is pending. */
u32 FUN_00282e70(void)
{
    u32 ready = 0;
    PartyPanelState *panel = g_partyPanel;
    u32 pending = panel->pendingState;
    if (pending != 6 && panel->sceneState != 6) {
        if (pending == 4 || panel->sceneState == 4) {
            if (!listCursorGetRowIfUnblocked(&panel->partyGrid) &&
                !objectPartRunUnlessLocked(&panel->partyGrid))
                ready = 1;
        } else if (pending == 8 || panel->sceneState == 8) {
            if (panel->alternate) {
                if (!listCursorGetRowIfUnblocked(&panel->fullGridAlternate) &&
                    !objectPartRunUnlessLocked(&panel->fullGridAlternate))
                    ready = 1;
            } else {
                if (!listCursorGetRowIfUnblocked(&panel->fullGrid) &&
                    !objectPartRunUnlessLocked(&panel->fullGrid))
                    ready = 1;
            }
        } else if (pending == 10 || panel->sceneState == 10) {
            if (panel->selection < 0)
                ready = 1;
        }
    }
    return ready;
}
}
