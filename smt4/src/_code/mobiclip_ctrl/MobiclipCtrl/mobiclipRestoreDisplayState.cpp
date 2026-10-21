#include "mobiclip_ctrl/MobiclipCtrl.h"

extern "C" {
extern S4Player DAT_004c3b20;
void registerBlockRequestGroups(u32 mask);
void FUN_00123750(u32 mask, s32 enabled);
u32 nngxGetError(void);
void gxLcdClearForceBlack(void);
void FUN_0011b788(S4Player* player);
void asdSndApplyPendingVoiceState(u32 handle);

// Restore display command groups and the movie player's active state.
void mobiclipRestoreDisplayState(s32 mode)
{
    S4Player* player = &DAT_004c3b20;
    switch (mode) {
    case 2:
        gxLcdClearForceBlack();
        break;
    default:
        registerBlockRequestGroups(0x3fff);
        FUN_00123750(0x3fff, 1);
        nngxGetError();
        break;
    }
    FUN_0011b788(player);
    asdSndApplyPendingVoiceState(player->handle);
}
}
