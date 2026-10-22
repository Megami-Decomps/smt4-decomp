#include "ui/PartyPanel.h"

extern "C" {


extern PartyPanel *g_partyPanel; /* 0x57f268 */

/* Pointer to the party panel's member `index` (0-16), or NULL when the panel is closed or the index is out of range. */
PartyMember *partyPanelGetMember(int index)
{
    if (index >= 0) {
        if (index < 0x11) {
            if (g_partyPanel != NULL) {
                return &g_partyPanel->members[index];
            }
        }
    }
    return NULL;
}

} /* extern "C" */
