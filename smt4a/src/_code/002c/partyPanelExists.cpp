#include "ui/PartyPanelStateA.h"

extern "C" {

/* Returns whether the party panel is open. */
u8 partyPanelExists(void)
{
    return g_partyPanel != NULL;
}

} /* extern "C" */
