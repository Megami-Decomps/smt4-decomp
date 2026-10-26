/* NON_MATCHING: part address computation uses r5 instead of r0 before preserving it; shared success block matches. */
#include "ui/PartyPanelState.h"
#include "code/Code0029_VariantB.h"

extern "C" {
extern PartyPanelState *g_partyPanel;
s32 objectPartRunUnlessLocked(void *part);


static __inline bool partyPanelPartReady(void *part)
{
    return !FUN_0029efa8(part) && !objectPartRunUnlessLocked(part);
}
/* Report whether the current or pending panel mode has finished its transition. */
u32 FUN_00282e70(void)
{
    u32 ready = 0;
    PartyPanelState *panel = g_partyPanel;
    u32 pending = panel->history.unk20;
    if (pending != 6 && panel->sceneState != 6) {
        if (pending == 4 || panel->sceneState == 4) {
            if (partyPanelPartReady(panel->transitionParts.stateFourPart))
                ready = 1;
        } else if (pending == 8 || panel->sceneState == 8) {
            if (panel->unk42) {
                if (partyPanelPartReady(panel->transitionParts.secondaryPart))
                    ready = 1;
            } else {
                if (partyPanelPartReady(panel->transitionParts.primaryPart))
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
