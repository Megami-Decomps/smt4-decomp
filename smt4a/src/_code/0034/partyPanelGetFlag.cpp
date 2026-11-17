#include "ui/PartyPanelStateA.h"
#include "result/WhisperEffect.h"

extern "C" {

/* What the party panel was opened for, or 0 when there is no panel. */
u8 partyPanelGetFlag(void)
{
    if (g_partyPanel != NULL) {
        return g_partyPanel->panelState;
    }
    return 0;
}

}
