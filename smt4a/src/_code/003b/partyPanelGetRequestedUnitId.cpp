#include "ui/PartyPanelStateA.h"
#include "shard/Shard003B.h"
#include "event/2dEvent/EventEffect.h"

extern "C" {

s32 partyPanelGetRequestedUnitId(void)
{
    s32 value = 0;

    if (g_partyPanel != NULL) {
        value = g_partyPanel->requestedUnitId;
    }
    return value;
}

} /* extern "C" */
