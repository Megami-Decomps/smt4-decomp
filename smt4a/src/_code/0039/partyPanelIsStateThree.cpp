#include "ui/PartyPanelStateA.h"

extern "C" {
/* True when the party panel is in scene state 3. */
s32 partyPanelIsStateThree(void)
{
    if (g_partyPanel == NULL)
        return 0;
    return g_partyPanel->sceneState == 3;
}
}
