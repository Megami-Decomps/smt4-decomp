/* NON_MATCHING: the help-value comparison chains are grouped differently by armcc (retail groups them 1,2,3 per chain; here pairs). */
#include "common.h"
#include "code/Code002a.h"
#include "code/Code002c.h"
#include "code/Code0037.h"

/* The party panel: the selected demon and slot, and the panel mode at +0x9B4. */
struct PartyPanelView {
    /* 0x000 */ u8 unk000[0x3A];
    /* 0x03A */ s16 selectedDemon;
    /* 0x03C */ u8 unk03C[6];
    /* 0x042 */ u8 flag;
    /* 0x043 */ u8 unk043;
    /* 0x044 */ s8 selectedSlot;
    /* 0x045 */ u8 unk045[0x96F];
    /* 0x9B4 */ u8 mode;
};

extern "C" {
extern PartyPanelView *g_partyPanel;
u16 ifTouchGetButtonHelpValue(void);
s32 FUN_002cad18(void);
s32 partyPanelGetSelectedDemonId(void);
void FUN_0023fc38(void);
void FUN_0023f900(void);

/* Refreshes the party panel's help text and selection when the button help value or selection changed. */
void FUN_0034cda0(void)
{
    if (FUN_002a7410() == 0) {
        PartyPanelView *panel = g_partyPanel;
        bool refresh = false;
        FUN_002c7e24();
        u32 help = ifTouchGetButtonHelpValue();
        s32 slot = FUN_002cad18();
        s32 demon = partyPanelGetSelectedDemonId();
        if (help == 0x1C || help == 0x1E || help == 0xBA || help == 0xC1 || help == 0xCE || help == 0x28) {
            if (slot == 0 || panel->flag == 0)
                refresh = true;
        }
        if ((((help == 0x1B || help == 0x1D) || (help == 0xB9 || help == 0xC0)) || (help == 0xE5 || help == 0x27)) &&
            (slot == 0 || panel->flag != 0))
            refresh = true;
        if ((((help == 0x22 || help == 0x24) || (help == 0xB8 || help == 0xC3)) || (help == 0xCE || help == 0x28)) &&
            (slot != 0 || demon < 0 || panel->flag == 0))
            refresh = true;
        if ((((help == 0x21 || help == 0x23) || (help == 0xB7 || help == 0xC2)) || (help == 0xE5 || help == 0x27)) &&
            (slot != 0 || demon < 0 || panel->flag != 0))
            refresh = true;
        if (((help == 0x26 || help == 4) || ((help == 0xBD || help == 0xC5) || help == 0xCE)) &&
            (slot != 0 || demon >= 0 || panel->flag == 0))
            refresh = true;
        if ((((help == 0x25 || help == 3) || ((help == 0xBC || help == 0xC4) || help == 0xE5)) &&
             (slot != 0 || demon >= 0 || panel->flag != 0)) ||
            refresh)
            FUN_0023fc38();
        if (!(panel->selectedDemon == demon && panel->selectedSlot == slot) &&
            (((panel->mode == 3 || panel->mode == 2 || (panel->mode == 4 || panel->mode == 15)) || (panel->mode == 17 || panel->mode == 12)) ||
             ((panel->mode == 13 || panel->mode == 14 || (panel->mode == 16 || panel->mode == 19)))))
            FUN_0023f900();
    }
}
}
