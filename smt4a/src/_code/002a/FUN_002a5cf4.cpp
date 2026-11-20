#include "ui/PartyPanelStateA.h"
#include "network/DataStore/DataStoreMain.h"

extern "C" {

extern void partyPanelChangeState(s32 a, s32 b);
extern void statusPanelClose(void);
extern void FUN_00230ac0(s32 a, s32 b, s32 c, s32 d);
extern void FUN_0038b548(s32 a);

void FUN_002a5cf4(void)
{
    PartyPanelStateA *panel = g_partyPanel;

    if (panel != NULL) {
        if (panel->panelState != 12 && panel->panelState != 4 && panel->panelState != 15 && panel->panelState != 17 && panel->panelState != 19) {
            FUN_00230ac0(7, -1, 0, 0);
        }
        statusPreviewMpChange(0, 0);
        if (panel->panelState != 1 && panel->panelState != 6 && panel->panelState != 7 && panel->panelState != 18) {
            statusPanelClose();
        }
        FUN_0038b548(1);
        partyPanelChangeState(0x17, 1);
    }
}

} /* extern "C" */
