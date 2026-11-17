#include "ui/PartyPanelStateA.h"
#include "map/mapRndMaze.h"
#include "network/DataStore/DataStoreMain.h"
#include "code/Code0020_Smt4a.h"

extern "C" {
s32 aocDataBlockHasEntries();
int gameGlobalsSetMenuOpenFlag(int value);
void pair40Set(PartyPanelWidget *widget, s32 first, s32 second);
void obj48Arm(PartyPanelWidget *widget, u8 value);
void partyWidgetSetTransitionActive(PartyPanelWidget *widget, u8 value);
void partyWidgetSetTransitionPending(PartyPanelWidget *widget, u8 value);

void partyPanelChangeState(s32 state, s32 rememberPrevious)
{
    PartyPanelStateA *panel = g_partyPanel;
    if (rememberPrevious != 0)
        panel->previousState = panel->sceneState;
    panel->sceneState = state;
    panel->phase = 0;
    if (state == 0x1B) {
        if (aocDataBlockHasEntries() == 0) {
            panel->sceneState = 0x1C;
            return;
        }
        s32 ready = FUN_002ef9f0();
        if (ready == 0)
            gameGlobalsSetMenuOpenFlag(ready);
        state = panel->sceneState;
    }
    if (state == 0x15) {
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
        FUN_003344b4(0, 0);
    }
    if (panel->sceneState == 0x16) {
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
        FUN_003344b4(0, 0);
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
