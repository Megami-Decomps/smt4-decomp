#include "ui/PartyPanelState.h"

extern "C" {
extern PartyPanelState *g_partyPanel;
s32 uiSpriteGetOperationMode(const TimerSlot *timer);
s8 uiSpriteGetCompletionState(const TimerSlot *timer);

// Check whether the party panel accepts an action in its current scene and timer state.
u32 FUN_001ed80c()
{
    PartyPanelState *panel = g_partyPanel;
    if (panel == NULL)
        return 0;
    if (panel->sceneState == 23) {
        if ((s32)panel->lifecycle.phase > 4)
            return 0;
    } else if (panel->sceneState == 11) {
        return 0;
    } else if (panel->sceneState == 13) {
        if (panel->history.previousState != 8)
            return 0;
    }
    if ((uiSpriteGetOperationMode(&panel->timers[0]) != 8 && uiSpriteGetOperationMode(&panel->timers[0]) != 7) ||
        uiSpriteGetCompletionState(&panel->timers[0]) == 0)
        return 1;
    return 0;
}
}
