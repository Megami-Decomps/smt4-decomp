#include "ui/PartyPanelState.h"
#include "network/DataStore/DataStoreMain.h"

extern "C" {
extern PartyPanelStateA *g_partyPanel;

extern void FUN_0020b718(s32 a, s32 b);
extern void FUN_0022e774(void);
extern void FUN_00230ac0(s32 a, s32 b, s32 c, s32 d);
extern void FUN_0038b548(s32 a);

void FUN_002a5cf4(void)
{
    PartyPanelStateA *panel = g_partyPanel;

    if (panel != NULL) {
        if (panel->animation.mode != 12 && panel->animation.mode != 4 && panel->animation.mode != 15 && panel->animation.mode != 17 && panel->animation.mode != 19) {
            FUN_00230ac0(7, -1, 0, 0);
        }
        FUN_003344b4(0, 0);
        if (panel->animation.mode != 1 && panel->animation.mode != 6 && panel->animation.mode != 7 && panel->animation.mode != 18) {
            FUN_0022e774();
        }
        FUN_0038b548(1);
        FUN_0020b718(0x17, 1);
    }
}

} /* extern "C" */
