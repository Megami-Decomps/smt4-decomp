#include "common.h"

extern "C" {

typedef struct PartyMember {
    /* 0x00 */ u8 unk00[0x8C];
} PartyMember;                              /* 0x8C bytes */

typedef struct PartyPanel {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ PartyMember members[0x11];
} PartyPanel;

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
