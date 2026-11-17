#include "ui/PartyPanelStateA.h"

extern "C" {

/* Returns whether the party panel exists and has picked units. */
u32 partyPanelHasMembers(void)
{
    if (g_partyPanel != NULL) {
        if (g_partyPanel->selectedCount <= 0) {
            return 0;
        }
        return 1;
    }
    return 0;
}

} /* extern "C" */
