/* NON_MATCHING: Retail ldr r1, [pc, #128] differs from recovered ldr r1, [pc, #112]. */
#include "ui/ButtonHelp.h"
#include "ui/PartyPanelStateA.h"
#include "shard/W4_Match1b_RegisteredHandle.h"

extern "C" {

// Update the panel flag and issue the corresponding group-3 command.
void FUN_00331380(s32 active)
{
    PartyPanelStateA* panel = g_partyPanel;
    if (panel != NULL) {
        g_partyPanel->disabled = (active == 0);
        if (panel->disabled != 0) {
            buttonHelpSelectSlot(3, 0x12, 0, 1);
        } else if (buttonHelpGetEntryValue(3) == 0) {
            buttonHelpSelectSlot(3, 3, 0x0b, 1);
        }
    }
}
}
