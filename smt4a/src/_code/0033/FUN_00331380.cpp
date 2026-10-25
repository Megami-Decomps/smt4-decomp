/* NON_MATCHING: Retail ldr r1, [pc, #128] differs from recovered ldr r1, [pc, #112]. */
#include "common.h"
#include "shard/buttonHelpGetEntryValue.h"

struct PartyPanelLocalView {
    u8 unk00[0x1210]; // 0x0000
    u8 unk1210;       // 0x1210
};

extern "C" {
extern PartyPanelLocalView* g_partyPanel;
s32 FUN_00183f58(s32 group, s32 command, s32 value, s32 enabled);

// Update the panel flag and issue the corresponding group-3 command.
void FUN_00331380(s32 active)
{
    PartyPanelLocalView* panel = g_partyPanel;
    if (panel == 0) {
        return;
    }

    g_partyPanel->unk1210 = (active == 0);
    if (panel->unk1210 != 0) {
        FUN_00183f58(3, 0x12, 0, 1);
    } else if (buttonHelpGetEntryValue(3) == 0) {
        FUN_00183f58(3, 3, 0x0b, 1);
    }
}
}
