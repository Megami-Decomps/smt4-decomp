/* NON_MATCHING: the pointer and flag reloads now match; the mode comparison and address setup for the flag store are scheduled differently. */
#include "ui/ButtonHelp.h"
#include "ui/PartyPanelState.h"
#include "shard/W4_Match1b_RegisteredHandle.h"

extern "C" {

/* Enables or disables the party panel and updates its button-help prompt. */
void partyPanelSetDisabledMode(s32 mode)
{
    PartyPanelState *panel = g_partyPanel;
    if (panel != NULL) {
        if (mode != 0) {
            g_partyPanel->disabled = 0;
        } else {
            g_partyPanel->disabled = 1;
        }
        if (panel->disabled != 0) {
            buttonHelpSetSlot(3, 0x12, 0, 1);
        } else if (buttonHelpGetEntryValue(3) == 0) {
            buttonHelpSetSlot(3, 3, 0xb, 1);
        }
    }
}

} /* extern "C" */
