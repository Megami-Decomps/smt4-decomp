/* NON_MATCHING: same instructions as retail (including the g_partyPanel reload); retail compares the argument before reloading the panel pointer into r0 and builds the flag in r1. */
#include "common.h"

extern "C" {

struct PartyPanel { u8 unk0000[0x1210]; u8 hidden; };
extern PartyPanel *g_partyPanel;

/* Hides the party panel when `visible` is zero and shows it otherwise. */
void partyPanelSetHidden(s32 visible)
{
    if (g_partyPanel != NULL) {
        if (visible) {
            g_partyPanel->hidden = 0;
        } else {
            g_partyPanel->hidden = 1;
        }
    }
}

} /* extern "C" */
