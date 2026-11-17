#include "ui/PartyPanelStateA.h"
#include "shard/Shard003A.h"

extern "C" {

void FUN_003a7788(void)
{
    if (g_partyPanel != NULL) {
        g_partyPanel->selectedCount = 0;
    }
}

} /* extern "C" */
