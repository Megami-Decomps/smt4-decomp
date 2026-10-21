#include "common.h"

struct PartyPanelSelection {
    /* 0x000 */ u8 unk00[0x6bc];
    /* 0x6bc */ u16 selection;
};

extern "C" {

extern PartyPanelSelection *g_partyPanel;

/* Clears the party selection if the panel exists. */
void partyPanelClearSelection()
{
    if (g_partyPanel != NULL)
        g_partyPanel->selection = 0;
}

}
