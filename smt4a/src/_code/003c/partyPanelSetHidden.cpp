/* NON_MATCHING: retail uses `beq 2c` where armcc emits `beq 24`. */
#include "common.h"

extern "C" {

struct PartyPanel { u8 unk0000[0x1210]; u8 hidden; };
extern PartyPanel *g_partyPanel;

void partyPanelSetHidden(s32 visible)
{
    if (g_partyPanel != NULL) {
        g_partyPanel->hidden = visible == 0;
    }
}

} /* extern "C" */
