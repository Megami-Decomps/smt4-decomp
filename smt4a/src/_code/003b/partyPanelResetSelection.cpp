#include "ui/PartyPanelStateA.h"

extern "C" {

/* Clears the panel's requested unit and the two words after it (the second to 0xFFFF). */
void partyPanelResetSelection(void)
{
    PartyPanelStateA *panel = g_partyPanel;

    if (panel != NULL) {
        panel->requestedUnitId = 0;
        panel->unk0040 = 0xffff;
        panel->unk003E = 0;
    }
}

} /* extern "C" */
