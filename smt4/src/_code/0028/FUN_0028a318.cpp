#include "ui/PartyPanelState.h"
#include "camp/CommonBg/CommonBg.h"

extern "C" {
extern PartyPanelState *g_partyPanel;

extern u32 FUN_00295618(void);

u32 FUN_0028a318(void)
{
    u8 state;
    u32 result;

    if (g_partyPanel != NULL) {
        if (g_partyPanel->sceneState != 0x17) {
            return 0;
        }
        state = g_partyPanel->panelState;
        if ((state != 1 && state != 6) && ((state != 7 && state != 13) && state != 12)) {
            result = FUN_00295618();
            return result;
        }
    }
    return 1;
}

} /* extern "C" */
