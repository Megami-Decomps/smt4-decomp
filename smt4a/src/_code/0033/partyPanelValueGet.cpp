#include "common.h"

extern "C" {

typedef struct PartyPanel {
    /* 0x000 */ u8 unk000[0xfc8];
    /* 0xfc8 */ u32 value;
} PartyPanel;

extern PartyPanel *g_partyPanel;

/* The party panel's value word, or 0 while there is no panel. */
u32 partyPanelValueGet(void)
{
    return g_partyPanel != NULL ? g_partyPanel->value : 0;
}

} /* extern "C" */
