#include "ui/PartyPanelState.h"
#include "code/Code0029_VariantB.h"

extern "C" {
extern PartyPanelState *g_partyPanel;
s32 objectPartRunUnlessLocked(void *part);

/* Reports whether the current or pending panel mode has finished its transition: the mode's part
 * is idle (FUN_0029efa8 and objectPartRunUnlessLocked both return 0), or for mode 10 no
 * selection is pending. */
u32 FUN_00282e70(void)
{
    u32 ready = 0;
    PartyPanelState *panel = g_partyPanel;
    u32 pending = panel->history.unk20;
    if (pending != 6 && panel->sceneState != 6) {
        if (pending == 4 || panel->sceneState == 4) {
            if (!FUN_0029efa8(panel->transitionParts.stateFourPart) &&
                !objectPartRunUnlessLocked(panel->transitionParts.stateFourPart))
                ready = 1;
        } else if (pending == 8 || panel->sceneState == 8) {
            if (panel->unk42) {
                if (!FUN_0029efa8(panel->transitionParts.secondaryPart) &&
                    !objectPartRunUnlessLocked(panel->transitionParts.secondaryPart))
                    ready = 1;
            } else {
                if (!FUN_0029efa8(panel->transitionParts.primaryPart) &&
                    !objectPartRunUnlessLocked(panel->transitionParts.primaryPart))
                    ready = 1;
            }
        } else if (pending == 10 || panel->sceneState == 10) {
            if (panel->pendingSelection.selection < 0)
                ready = 1;
        }
    }
    return ready;
}
}
