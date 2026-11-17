#include "ui/PartyPanelStateA.h"

extern "C" {

/* Pointer to the party panel's sprite `index` (0-16), or NULL when the panel is closed or the index is out of range. */
UiSpriteState *partyPanelGetMember(int index)
{
    if (index >= 0) {
        if (index < 0x11) {
            if (g_partyPanel != NULL) {
                return &g_partyPanel->sprites[index];
            }
        }
    }
    return NULL;
}

} /* extern "C" */
