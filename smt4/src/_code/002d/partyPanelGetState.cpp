#include "ui/PartyPanelState.h"

extern "C" {
extern PartyPanelState *g_partyPanel;

/* Returns the party panel's state byte, or 0 when there is no panel. */
u8 partyPanelGetState(void)
{
    return g_partyPanel != NULL ? g_partyPanel->panelState : 0;
}

} /* extern "C" */
