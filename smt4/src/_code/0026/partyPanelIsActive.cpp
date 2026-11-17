#include "ui/PartyPanelState.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {

/* True when the party panel exists and shows its alternate layout. */
bool partyPanelIsActive(void)
{
    if (g_partyPanel == NULL) {
        return false;
    }
    if (g_partyPanel->alternate == 0) {
        return false;
    }
    return true;
}

} /* extern "C" */
