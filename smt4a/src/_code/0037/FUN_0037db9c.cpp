#include "common.h"

extern "C" {

typedef struct PartyPanel {
    /* 0x000 */ u8 unk000[0xA04];
    /* 0xA04 */ s16 count;
} PartyPanel;

extern PartyPanel *g_partyPanel;

/* Returns whether the party panel exists and has a positive count. */
u32 FUN_0037db9c(void)
{
    if (g_partyPanel != NULL) {
        if (g_partyPanel->count <= 0) {
            return 0;
        }
        return 1;
    }
    return 0;
}

} /* extern "C" */
