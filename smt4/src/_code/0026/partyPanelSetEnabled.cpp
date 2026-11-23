/* NON_MATCHING: 8 lines, the same instructions as retail: retail tests the argument before it reloads g_partyPanel
 * and builds the flag in r1 (as in smt4a partyPanelSetHidden); the build reloads the panel first. */
#include "ui/PartyPanelState.h"

extern "C" {

/* Shows or hides the party panel if it exists. */
void partyPanelSetEnabled(s32 enabled)
{
    if (g_partyPanel != NULL) {
        if (enabled) {
            g_partyPanel->disabled = 0;
        } else {
            g_partyPanel->disabled = 1;
        }
    }
}

} /* extern "C" */
