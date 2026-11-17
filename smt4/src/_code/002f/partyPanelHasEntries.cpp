#include "ui/PartyPanelState.h"

extern "C" {

/* Tests whether the party panel has any entries. */
s32 partyPanelHasEntries(void)
{
    if (g_partyPanel == NULL) {
        return 0;
    }
    return g_partyPanel->selectedCount > 0;
}
}
