#include "shard/Shard0031.h"

extern "C" {

extern StateHolder1C *g_partyPanel;

/* True unless the party panel exists and is in state fifteen. */
u32 partyPanelIsNotStateF(void)
{
    if (g_partyPanel == NULL || g_partyPanel->state != 0xF) {
        return 1;
    }
    return 0;
}

}
