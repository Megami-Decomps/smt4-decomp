#include "ui/PartyPanelStateA.h"

extern "C" {

/* The party panel's value word, or 0 while there is no panel. */
u32 partyPanelValueGet(void)
{
    return g_partyPanel != NULL ? g_partyPanel->value : 0;
}

} /* extern "C" */
