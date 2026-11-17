#include "ui/PartyPanelState.h"

namespace {  }

extern "C" {

/* Reads the current status value when the owner exists. */
s32 partyPanelGetValue(void)
{
    return g_partyPanel != NULL ? g_partyPanel->value : 0;
}
}
