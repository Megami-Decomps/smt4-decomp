/* NON_MATCHING: part address computation uses r5 instead of r0, and common success block is placed earlier. */
#include "ui/PartyPanelState.h"

extern "C" {
extern PartyPanelState *g_partyPanel;
s32 objectPartRunUnlessLocked(void *part);
s32 FUN_0029efa8(void *part);

/* Report whether the current or pending panel mode has finished its transition. */
u32 FUN_00282e70(void)
{
    u32 ready = 0;
    PartyPanelState *panel = g_partyPanel;
    u32 pending = panel->history.unk20;
    if (pending != 6 && panel->sceneState != 6) {
        if (pending == 4 || panel->sceneState == 4) {
            void *part = panel->transitionParts.stateFourPart;
            if (!FUN_0029efa8(part) && !objectPartRunUnlessLocked(part))
                ready = 1;
        } else if (pending == 8 || panel->sceneState == 8) {
            if (panel->unk42) {
                void *part = panel->transitionParts.secondaryPart;
                if (!FUN_0029efa8(part) && !objectPartRunUnlessLocked(part))
                    ready = 1;
            } else {
                void *part = panel->transitionParts.primaryPart;
                if (!FUN_0029efa8(part) && !objectPartRunUnlessLocked(part))
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
