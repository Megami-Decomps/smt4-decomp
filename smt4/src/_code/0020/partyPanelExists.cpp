#include "ui/PartyPanelState.h"

extern "C" {

u8 partyPanelExists(void)
{
    return g_partyPanel != NULL;
}

} /* extern "C" */
