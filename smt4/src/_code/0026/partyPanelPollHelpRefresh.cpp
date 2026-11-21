#include "ui/PartyPanelState.h"

extern "C" {
s32 FUN_0029e02c(void);
s32 buttonHelpGetStatus(void);
s32 FUN_00282e70(void);
s32 FUN_00282ccc(void);
void FUN_0026c214(void);
void FUN_001b0558(void);

/* Refreshes the party panel's help when a navigation button applies to the current mode and side, and
 * restarts the panel's state when the selection or the help mode changed. */
void partyPanelPollHelpRefresh(void)
{
    if (FUN_0029e02c() != 0)
        return;
    PartyPanelState *panel = g_partyPanel;
    bool refresh = false;
    FUN_0029acb0();
    s32 help = buttonHelpGetStatus();
    s32 mode = FUN_00282e70();
    s32 selection = FUN_00282ccc();
    if ((help == 0x1C || help == 0x1E || help == 0xB8 || help == 0xBF || help == 0xCC) &&
        (!mode || !panel->alternate))
        refresh = true;
    if ((help == 0x1B || help == 0x1D || help == 0xB7 || help == 0xBE || help == 0xE3) &&
        (!mode || panel->alternate))
        refresh = true;
    if ((help == 0x22 || help == 0x24 || help == 0xB6 || help == 0xC1 || help == 0xCC) &&
        (mode || selection < 0 || !panel->alternate))
        refresh = true;
    if ((help == 0x21 || help == 0x23 || help == 0xB5 || help == 0xC0 || help == 0xE3) &&
        (mode || selection < 0 || panel->alternate))
        refresh = true;
    if ((help == 0x26 || help == 4 || help == 0xBB || help == 0xC3 || help == 0xCC) &&
        (mode || selection >= 0 || !panel->alternate))
        refresh = true;
    if (((help == 0x25 || help == 3 || help == 0xBA || help == 0xC2 || help == 0xE3) &&
         (mode || selection >= 0 || panel->alternate)) || refresh)
        FUN_0026c214();
    if (panel->previousSelection != selection || panel->helpMode != mode) {
        u8 state = panel->panelState;
        if (state == 3 || state == 2 || state == 4 || state == 15 ||
            state == 12 || state == 13 || state == 14 || state == 16)
            FUN_001b0558();
    }
}
}
