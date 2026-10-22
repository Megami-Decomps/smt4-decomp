#include "ui/PartyPanelState.h"
#include "shard/Shard0031.h"

extern "C" {
extern PartyPanelStateA *g_partyPanel;

/* True unless the global object exists and is in state 0xF. */
u32 objIsNotInState0xF(void)
{
    if (g_partyPanel == NULL || g_partyPanel->state != 0xF) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
