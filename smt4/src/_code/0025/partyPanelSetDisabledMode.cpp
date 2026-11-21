/* NON_MATCHING: redundant global-pointer and flag reloads are folded, with a shared epilogue. */
#include "ui/ButtonHelp.h"
#include "ui/PartyPanelState.h"
#include "shard/W4_Match1b_RegisteredHandle.h"

extern "C" {

void partyPanelSetDisabledMode(s32 mode)
{
    PartyPanelState *panel = g_partyPanel;
    if (panel == 0) {
        return;
    }
    panel->disabled = mode == 0;
    if (panel->disabled == 0) {
        if (buttonHelpGetEntryValue(3) != 0) {
            return;
        }
        buttonHelpSetSlot(3, 3, 0xb, 1);
        return;
    }
    buttonHelpSetSlot(3, 0x12, 0, 1);
}
}
