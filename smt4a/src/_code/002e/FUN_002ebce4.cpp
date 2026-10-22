#include "ui/PartyPanelState.h"

extern "C" {
extern PartyPanelStateA *g_partyPanel;

/* Returns 0 when the screen at 0x57F268 is in state 0x17, otherwise 1. */
u32 FUN_002ebce4(void)
{
    u32 result;

    if ((g_partyPanel == NULL) || (g_partyPanel->state != 0x17)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
