/* NON_MATCHING: compiler reuses the loaded party-panel pointer instead of retail reloading it after flag normalization. */
#include "common.h"
extern "C" {
struct PartyPanelParent { u8 unk00[0x17F0]; u8 disabled; };
extern PartyPanelParent *g_partyPanel;
/* Store the inverse enabled flag when the party panel exists. */
void partyPanelSetEnabled(s32 enabled) { if (g_partyPanel!=NULL) g_partyPanel->disabled=enabled==0; }
}
