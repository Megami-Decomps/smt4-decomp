#include "ui/PartyPanelStateA.h"
#include "code/Code002a.h"
#include "code/Code002c.h"
#include "code/Code0037.h"

extern "C" {
u16 ifTouchGetButtonHelpValue(void);
s32 FUN_002cad18(void);
s32 partyPanelGetSelectedDemonId(void);
void partyPanelPlayInputCue(void);
void FUN_0023f900(void);

/* Refreshes the party panel's help text and selection when the button help value or selection changed. */
void partyPanelPollHelpRefresh(void)
{
    if (FUN_002a7410() != 0)
        return;
    PartyPanelStateA *panel = g_partyPanel;
    bool refresh = false;
    gameGlobalsGetBlock1390();
    u32 help = ifTouchGetButtonHelpValue();
    s32 slot = FUN_002cad18();
    s32 demon = partyPanelGetSelectedDemonId();
    if ((help == 0x1C || help == 0x1E || help == 0xBA || help == 0xC1 || help == 0xCE || help == 0x28) &&
        (slot == 0 || panel->alternate == 0))
        refresh = true;
    if ((help == 0x1B || help == 0x1D || help == 0xB9 || help == 0xC0 || help == 0xE5 || help == 0x27) &&
        (slot == 0 || panel->alternate != 0))
        refresh = true;
    if ((help == 0x22 || help == 0x24 || help == 0xB8 || help == 0xC3 || help == 0xCE || help == 0x28) &&
        (slot != 0 || demon < 0 || panel->alternate == 0))
        refresh = true;
    if ((help == 0x21 || help == 0x23 || help == 0xB7 || help == 0xC2 || help == 0xE5 || help == 0x27) &&
        (slot != 0 || demon < 0 || panel->alternate != 0))
        refresh = true;
    if ((help == 0x26 || help == 4 || help == 0xBD || help == 0xC5 || help == 0xCE) &&
        (slot != 0 || demon >= 0 || panel->alternate == 0))
        refresh = true;
    if (((help == 0x25 || help == 3 || help == 0xBC || help == 0xC4 || help == 0xE5) &&
         (slot != 0 || demon >= 0 || panel->alternate != 0)) || refresh)
        partyPanelPlayInputCue();
    if (panel->previousSelection != demon || panel->helpMode != slot) {
        u8 state = panel->panelState;
        if (state == 3 || state == 2 || state == 4 || state == 15 || state == 17 || state == 12 ||
            state == 13 || state == 14 || state == 16 || state == 19)
            FUN_0023f900();
    }
}
}
