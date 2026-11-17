#include "ui/PartyPanelStateA.h"

extern "C" {

void partyPanelChangeState(s32 kind, s32 enabled);

void partyPanelEnableKinds(s32 visible)
{
    if (g_partyPanel != NULL) {
        if (visible) {
            partyPanelChangeState(8, 1);
        } else {
            partyPanelChangeState(24, 1);
        }
    }
}

} /* extern "C" */
