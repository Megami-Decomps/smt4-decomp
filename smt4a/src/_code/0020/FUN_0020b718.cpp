#include "ui/PartyPanelState.h"
#include "map/mapRndMaze.h"
#include "network/DataStore/DataStoreMain.h"
#include "code/Code0020_Smt4a.h"

namespace {
/* Demon availability extends past PartyPanelStateA's canonical prefix. */
struct PartyPanelTransitionEntriesView {
    PartyPanelStateA panel;
    u8 unkA80[4];
    PartyPanelEntry entries[24];
};
typedef char PartyPanelTransitionEntriesOffset[
    offsetof(PartyPanelTransitionEntriesView, entries) == 0xA84 ? 1 : -1];
}
extern "C" {
extern PartyPanelStateA *g_partyPanel;
s32 aocDataBlockHasEntries();
int FUN_003343f0(int value);
void pair40Set(PartyPanelWidget *widget, s32 first, s32 second);
void obj48Arm(PartyPanelWidget *widget, u8 value);
void partyWidgetSetTransitionActive(PartyPanelWidget *widget, u8 value);
void partyWidgetSetTransitionPending(PartyPanelWidget *widget, u8 value);

void FUN_0020b718(s32 state, s32 rememberPrevious)
{
    PartyPanelStateA *panel = g_partyPanel;
    if (rememberPrevious != 0)
        panel->previousState = panel->state;
    panel->state = state;
    panel->lifecycle.phase = 0;
    if (state == 0x1B) {
        if (aocDataBlockHasEntries() == 0) {
            panel->state = 0x1C;
            return;
        }
        s32 ready = FUN_002ef9f0();
        if (ready == 0)
            FUN_003343f0(ready);
        state = panel->state;
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
    if (panel->state == 0x16) {
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
        if (panel->animation.preview.protagonistAvailable != 0)
            obj48Arm(panel->characters[0], 0xFF);
        for (s32 index = 0; index < 3; ++index) {
            if (panel->animation.preview.partyAvailable[index] != 0)
                obj48Arm(panel->characters[index + 1], 0xFF);
        }
        PartyPanelTransitionEntriesView *extended = reinterpret_cast<PartyPanelTransitionEntriesView *>(panel);
        for (s32 index = 0; index < 24; ++index) {
            if (extended->entries[index].available != 0)
                obj48Arm(panel->demons[index], 0xFF);
        }
    }
}
}
