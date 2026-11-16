#include "ui/PartyPanelState.h"
#include "status/StatusCamera.h"

extern "C" {
extern PartyPanelState *g_partyPanel;
void pair40Set(PartyPanelWidget *widget, s32 first, s32 second);
void FUN_00292bcc(PartyPanelWidget *widget, u32 value);
void FUN_00298d28(s32, s32);
void partyWidgetSetTransitionActive(PartyPanelWidget *widget, u8 value);
void partyWidgetSetTransitionPending(PartyPanelWidget *widget, u8 value);

// Enter a party panel state, resetting and revealing the appropriate widgets.
void partyPanelSetState(s32 state, s32 rememberPrevious)
{
    PartyPanelState *panel = g_partyPanel;
    if (rememberPrevious != 0)
        panel->history.previousState = panel->sceneState;
    panel->sceneState = state;
    panel->lifecycle.phase = 0;
    if (state == 23) {
        FUN_002a0cc8(0);
        state = panel->sceneState;
    }
    if (state == 19) {
        for (s32 index = 0; index < 4; ++index) {
            pair40Set(panel->characters[index], 0, 0);
            partyWidgetSetTransitionActive(panel->characters[index], 0);
            partyWidgetSetTransitionPending(panel->characters[index], 0);
        }
        for (s32 index = 0; index < 24; ++index) {
            pair40Set(panel->demons[index], 0, 0);
            partyWidgetSetTransitionActive(panel->demons[index], 0);
            partyWidgetSetTransitionPending(panel->demons[index], 0);
        }
        FUN_00298d28(0, 0);
    }
    if (panel->sceneState == 20) {
        for (s32 index = 0; index < 4; ++index) {
            pair40Set(panel->characters[index], 0, 0);
            partyWidgetSetTransitionActive(panel->characters[index], 0);
            partyWidgetSetTransitionPending(panel->characters[index], 0);
        }
        for (s32 index = 0; index < 24; ++index) {
            pair40Set(panel->demons[index], 0, 0);
            partyWidgetSetTransitionActive(panel->demons[index], 0);
            partyWidgetSetTransitionPending(panel->demons[index], 0);
        }
        FUN_00298d28(0, 0);
        if (panel->availability.activeSlots[0] != 0)
            FUN_00292bcc(panel->characters[0], 0xFF);
        for (s32 index = 0; index < 3; ++index) {
            if (panel->availability.activeSlots[index + 1] != 0)
                FUN_00292bcc(panel->characters[index + 1], 0xFF);
        }
        for (s32 index = 0; index < 24; ++index) {
            if (panel->entryView.entries[index].available != 0)
                FUN_00292bcc(panel->demons[index], 0xFF);
        }
    }
}
}
