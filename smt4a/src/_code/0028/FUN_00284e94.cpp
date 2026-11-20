#include "ui/PartyPanelStateA.h"
#include "event/2dEvent/EventEffect.h"

extern "C" {

u32 gameGlobalsIsActiveStateFour(void);

/* Returns 1 unless the screen is in state 0x1B with a mode other than 1, 6, 7, 0xD and 0xC, where gameGlobalsIsActiveStateFour's answer is used; returns 0 for any other state. */
u32 FUN_00284e94(void)
{
    u8 mode;
    u32 result;

    if (g_partyPanel != NULL) {
        if (g_partyPanel->sceneState != 0x1B) {
            return 0;
        }
        mode = g_partyPanel->panelState;
        if ((mode != 1 && mode != 6) && ((mode != 7 && mode != 0xD) && mode != 0xC)) {
            result = gameGlobalsIsActiveStateFour();
            return result;
        }
    }
    return 1;
}

} /* extern "C" */
