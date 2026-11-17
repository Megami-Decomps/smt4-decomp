#include "ui/PartyPanelState.h"

extern "C" {

/* Clears the party selection if the panel exists. */
void partyPanelClearSelection()
{
    if (g_partyPanel != NULL)
        g_partyPanel->selectedCount = 0;
}

}
