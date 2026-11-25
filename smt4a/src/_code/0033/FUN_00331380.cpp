/* NON_MATCHING: retail returns on a null panel before opening the frame, reloads g_partyPanel for
 * the visibility store, then reloads the stored flag. This build keeps the address and value. */
#include "ui/ButtonHelp.h"
#include "ui/PartyPanelStateA.h"
#include "shard/W4_Match1b_RegisteredHandle.h"

extern "C" {

/* Updates party-panel visibility and the corresponding group-3 button help. */
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

} /* extern "C" */
