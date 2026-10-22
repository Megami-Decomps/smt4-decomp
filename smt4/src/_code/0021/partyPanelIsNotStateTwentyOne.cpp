#include "ui/PartyPanelState.h"
#include "shard/Shard0031.h"

extern "C" {
extern PartyPanelState *g_partyPanel;

/* True unless the party panel exists and is in state twenty-one. */
u32 partyPanelIsNotStateTwentyOne(void)
{
    if (g_partyPanel == NULL || g_partyPanel->sceneState != 21) {
        return 1;
    }
    return 0;
}

}
