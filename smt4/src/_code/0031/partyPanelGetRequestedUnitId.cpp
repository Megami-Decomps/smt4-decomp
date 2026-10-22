#include "ui/PartyPanelState.h"

extern "C" {
extern PartyPanelState *g_partyPanel;

int partyPanelGetRequestedUnitId(void)
{
    int value = 0;

    if (g_partyPanel != NULL) {
        value = (int)*(s16 *)((u8 *)g_partyPanel + 0x3c);
    }
    return value;
}

} /* extern "C" */
