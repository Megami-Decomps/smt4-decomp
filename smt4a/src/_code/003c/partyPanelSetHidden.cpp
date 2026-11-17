/* NON_MATCHING: same instructions as retail (including the g_partyPanel reload); retail compares the argument before reloading the panel pointer into r0 and builds the flag in r1. */
#include "ui/PartyPanelStateA.h"

extern "C" {


/* Hides the party panel when `visible` is zero and shows it otherwise. */
void partyPanelSetHidden(s32 visible)
{
    if (g_partyPanel != NULL) {
        if (visible) {
            g_partyPanel->disabled = 0;
        } else {
            g_partyPanel->disabled = 1;
        }
    }
}

} /* extern "C" */
