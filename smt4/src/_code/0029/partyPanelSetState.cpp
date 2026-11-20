#include "ui/PartyPanelState.h"
#include "status/StatusCamera.h"

extern "C" {
void pair40Set(PartyPanelWidget *widget, s32 first, s32 second);
void obj48Arm(PartyPanelWidget *widget, u32 value); // declcheck: local (the shared declaration in code/Code0029_Smt4.h does not compile here: more than one instance of overloaded function "pair40Set" has "C" linkage)
void FUN_00298d28(s32, s32);
void partyWidgetSetTransitionActive(PartyPanelWidget *widget, u8 value);
void partyWidgetSetTransitionPending(PartyPanelWidget *widget, u8 value);

// Enter a party panel state, resetting and revealing the appropriate widgets.
void partyPanelSetState(s32 state, s32 rememberPrevious)
{
    PartyPanelState *panel = g_partyPanel;
    if (rememberPrevious != 0)
        panel->previousState = panel->sceneState;
    panel->sceneState = state;
    panel->phase = 0;
    if (state == 23) {
        gameGlobalsSetSubScreenActive(0);
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
        if (panel->activeSlots[0] != 0)
            obj48Arm(panel->characters[0], 0xFF);
        for (s32 index = 0; index < 3; ++index) {
            if (panel->activeSlots[index + 1] != 0)
                obj48Arm(panel->characters[index + 1], 0xFF);
        }
        for (s32 index = 0; index < 24; ++index) {
            if (panel->entries[index].available != 0)
                obj48Arm(panel->demons[index], 0xFF);
        }
    }
}
}
