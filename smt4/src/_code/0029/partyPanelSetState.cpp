/* NON_MATCHING: widget clearing hoists zero and reschedules loop updates; -O2 candidate. */
#include "shard/Scene43dcf0.h"

extern "C" {
void FUN_00292be4(PartyPanelWidget *, s32, s32);
void FUN_00292bcc(PartyPanelWidget *, u32);
void FUN_00298d28(s32, s32);
void FUN_002a0cc8(s32);

static __inline void resetPartyWidgets(Scene43dcf0 *panel)
{
    for (s32 i = 0; i < 4; ++i) {
        FUN_00292be4(panel->characters[i], 0, 0);
        panel->characters[i]->transitionActive = 0;
        panel->characters[i]->transitionPending = 0;
    }
    for (s32 i = 0; i < 24; ++i) {
        FUN_00292be4(panel->demons[i], 0, 0);
        panel->demons[i]->transitionActive = 0;
        panel->demons[i]->transitionPending = 0;
    }
    FUN_00298d28(0, 0);
}

// Enter a party panel state, resetting and revealing the appropriate widgets.
void partyPanelSetState(s32 state, s32 rememberPrevious)
{
    Scene43dcf0 *panel = g_partyPanel;
    if (rememberPrevious)
        panel->history.previousState = panel->unk1C;
    panel->unk1C = state;
    panel->lifecycle.phase = 0;
    if (state == 23) {
        FUN_002a0cc8(0);
        state = panel->unk1C;
    }
    if (state == 19)
        resetPartyWidgets(panel);
    if (panel->unk1C == 20) {
        resetPartyWidgets(panel);
        if (panel->availability.activeSlots[0])
            FUN_00292bcc(panel->characters[0], 0xff);
        for (s32 i = 0; i < 3; ++i) {
            if (panel->availability.activeSlots[i + 1])
                FUN_00292bcc(panel->characters[i + 1], 0xff);
        }
        for (s32 i = 0; i < 24; ++i) {
            if (panel->entries[i].available)
                FUN_00292bcc(panel->demons[i], 0xff);
        }
    }
}
}
