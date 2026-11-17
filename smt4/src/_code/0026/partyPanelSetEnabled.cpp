/* NON_MATCHING: compiler reuses the loaded party-panel pointer instead of retail reloading it after flag normalization. */
#include "ui/PartyPanelState.h"
extern "C" {
/* Store the inverse enabled flag when the party panel exists. */
void partyPanelSetEnabled(s32 enabled) { if (g_partyPanel!=NULL) g_partyPanel->disabled=enabled==0; }
}
