#include "ui/PartyPanelState.h"
#include "shard/Shard003A.h"

extern "C" {
extern PartyPanelStateA *g_partyPanel;

void FUN_003a7788(void)
{
    if (g_partyPanel != NULL) {
        g_partyPanel->animation.unk884 = 0;
    }
}

} /* extern "C" */
