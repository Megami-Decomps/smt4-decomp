/* NON_MATCHING: retail preserves the panel in r4 and repeats timer loads with compiler hint NOPs; this source folds the tests. */
#include "ui/PartyPanelState.h"

// A timer's status fields are shared with animation work, whose full layout is not known.
struct PartyPanelTimerView {
    u8 unk00[0x50];
    s16 state; // 0x50
    u8 unk52[0x38];
    s8 active; // 0x8a
};
extern "C" {
extern PartyPanelState *g_partyPanel;

// Check whether the party panel accepts an action in its current scene and timer state.
u32 FUN_001ed80c()
{
    PartyPanelState *panel = g_partyPanel;
    if (panel == NULL)
        return 0;
    if (panel->sceneState != 23) {
        if (panel->sceneState == 11)
            return 0;
        if (panel->sceneState == 13 && panel->history.previousState != 8)
            return 0;
    } else if ((s32)panel->lifecycle.phase >= 5) {
        return 0;
    }
    const PartyPanelTimerView *timer = (const PartyPanelTimerView *)&panel->timers[0];
    if ((timer->state != 8 && timer->state != 7) || timer->active == 0)
        return 1;
    return 0;
}
}
