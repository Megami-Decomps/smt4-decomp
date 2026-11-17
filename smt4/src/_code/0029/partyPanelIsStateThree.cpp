#include "ui/PartyPanelState.h"

namespace {  }

extern "C" {
/* Reads or updates the requested state. */
s32 partyPanelIsStateThree(void)
{
    if (g_partyPanel == NULL)
        return 0;
    return g_partyPanel->sceneState == 3;
}
}
