#include "common.h"
#include "result/WhisperEffect.h"

extern "C" {

typedef struct PartyPanel {
    /* 0x000 */ u8 unk000[0x9B4];
    /* 0x9B4 */ u8 flag;
} PartyPanel;

extern PartyPanel *g_partyPanel;

/* The party panel's flag byte at +0x9B4, or 0 when there is no panel. */
u8 partyPanelGetFlag(void)
{
    if (g_partyPanel != NULL) {
        return g_partyPanel->flag;
    }
    return 0;
}

}
