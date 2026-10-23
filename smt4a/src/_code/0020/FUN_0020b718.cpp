/* NON_MATCHING: repeated zero-byte resets are hoisted into a saved register rather than retail's per-store constants. */
#include "ui/PartyPanelState.h"

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
u8 FUN_002ef9f0();
void FUN_003343f0(u8 value);
void pair40Set(PartyPanelWidget *widget, s32 first, s32 second);
void FUN_003344b4(u32 first, u32 second);
void obj48Arm(PartyPanelWidget *widget, u8 value);

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
        if (FUN_002ef9f0() == 0)
            FUN_003343f0(0);
        state = panel->state;
    }
    if (state == 0x15) {
        for (s32 index = 0; index < 4; ++index) {
            pair40Set(panel->characters[index], 0, 0);
            panel->characters[index]->transitionActive = 0;
            panel->characters[index]->transitionPending = 0;
        }
        for (s32 index = 0; index < 24; ++index) {
            pair40Set(panel->demons[index], 0, 0);
            panel->demons[index]->transitionActive = 0;
            panel->demons[index]->transitionPending = 0;
        }
        FUN_003344b4(0, 0);
    }
    if (panel->state == 0x16) {
        for (s32 index = 0; index < 4; ++index) {
            pair40Set(panel->characters[index], 0, 0);
            panel->characters[index]->transitionActive = 0;
            panel->characters[index]->transitionPending = 0;
        }
        for (s32 index = 0; index < 24; ++index) {
            pair40Set(panel->demons[index], 0, 0);
            panel->demons[index]->transitionActive = 0;
            panel->demons[index]->transitionPending = 0;
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
