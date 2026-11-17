#include "ui/PartyPanelState.h"

extern "C" {

int partyPanelGetRequestedUnitId(void)
{
    int value = 0;

    if (g_partyPanel != NULL) {
        value = g_partyPanel->requestedUnitId;
    }
    return value;
}

} /* extern "C" */
