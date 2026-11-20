/* NON_MATCHING: only the flag register differs: retail loads flag42 into r0 and normalizes it into r3 with `adds r3, r0, #0; movne r3, #1`; built loads straight into r3 and compares. */
#include "ui/PartyPanelStateA.h"

extern "C" {

void partyPanelChangeState(s32 a, s32 b);
void FUN_00230ac0(s32 mode, s16 imageFrame, u32 flags, s32 resetAuxiliary);
void partyPanelPlayInputCue(void);

/* Clears the party panel's two flags, optionally starts FUN_00230ac0, and runs partyPanelPlayInputCue unless the panel is in state 0 or 1. */
void FUN_00284ee4(s32 start)
{
    PartyPanelStateA *panel = g_partyPanel;

    if (panel != NULL) {
        panel->unk0034 = 0;
        panel->unk0035 = 0;
        if (start != 0) {
            FUN_00230ac0(4, -1, 0, panel->alternate ? 1 : panel->alternate);
        }
        if (panel->panelState != 0 && panel->panelState != 1) {
            partyPanelPlayInputCue();
        }
        partyPanelChangeState(0, 1);
    }
}

} /* extern "C" */
