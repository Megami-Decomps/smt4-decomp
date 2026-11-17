#include "ui/PartyPanelStateA.h"

extern "C" {

/* The party panel's status word, or 0 when it is not open. */
u32 partyPanelGetState(void)
{
    if (g_partyPanel != NULL) {
        return g_partyPanel->statusValue;
    }
    return 0;
}

} /* extern "C" */
