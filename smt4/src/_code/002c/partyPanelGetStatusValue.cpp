#include "ui/PartyPanelState.h"

extern "C" {
extern PartyPanelState *g_partyPanel;

/* Reads the current status value when the owner exists. */
s32 partyPanelGetStatusValue(void)
{
    return g_partyPanel != NULL ? g_partyPanel->statusValue : 0;
}
}
