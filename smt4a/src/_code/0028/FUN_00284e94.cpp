#include "ui/PartyPanelState.h"
#include "event/2dEvent/EventEffect.h"

extern "C" {
extern PartyPanelStateA *g_partyPanel;

u32 FUN_0026c3a0(void);

/* Returns 1 unless the screen is in state 0x1B with a mode other than 1, 6, 7, 0xD and 0xC, where FUN_0026c3a0's answer is used; returns 0 for any other state. */
u32 FUN_00284e94(void)
{
    u8 mode;
    u32 result;

    if (g_partyPanel != NULL) {
        if (g_partyPanel->state != 0x1B) {
            return 0;
        }
        mode = g_partyPanel->animation.mode;
        if ((mode != 1 && mode != 6) && ((mode != 7 && mode != 0xD) && mode != 0xC)) {
            result = FUN_0026c3a0();
            return result;
        }
    }
    return 1;
}

} /* extern "C" */
