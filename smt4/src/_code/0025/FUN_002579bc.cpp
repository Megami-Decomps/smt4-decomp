/* NON_MATCHING: redundant global-pointer and flag reloads are folded, with a shared epilogue. */
#include "ui/PartyPanelState.h"

extern "C" {
void FUN_002b8454(u32 entry, u32 value, u32 subvalue, u32 enabled);
u32 buttonHelpGetEntryValue(u32 entry);
extern PartyPanelState *g_partyPanel;

void FUN_002579bc(s32 mode)
{
    PartyPanelState *panel = g_partyPanel;
    if (panel == 0) {
        return;
    }
    panel->unk17F0 = mode == 0;
    if (panel->unk17F0 == 0) {
        if (buttonHelpGetEntryValue(3) != 0) {
            return;
        }
        FUN_002b8454(3, 3, 0xb, 1);
        return;
    }
    FUN_002b8454(3, 0x12, 0, 1);
}
}
