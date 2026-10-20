#include "common.h"

extern "C" {

typedef struct PartyPanel {
    /* 0x000 */ u8 unk000[0xFC4];
    /* 0xFC4 */ u32 state;
} PartyPanel;

extern PartyPanel *g_partyPanel; /* 0x57f268 */

/* The party panel's state word, or 0 when it is not open. */
u32 partyPanelGetState(void)
{
    if (g_partyPanel != NULL) {
        return g_partyPanel->state;
    }
    return 0;
}

} /* extern "C" */
