#include "mobiclip_ctrl/MobiclipCtrl.h"

extern "C" {
extern S4Player DAT_00617f40;
void registerBlockRequestGroups(u32 mask);
void FUN_0016182c(u32 mask, s32 enabled);
u32 nngxGetError(void);
void gxLcdClearForceBlack(void);
void FUN_0015842c(S4Player *player);
void asdSndApplyPendingVoiceState(void);

// Restore display request groups and normal shared-frame processing.
void FUN_0013f4c4(s32 mode)
{
    S4Player *player = &DAT_00617f40;
    switch (mode) {
    case 2:
        gxLcdClearForceBlack();
        break;
    default:
        registerBlockRequestGroups(0x3fff);
        FUN_0016182c(0x3fff, 1);
        nngxGetError();
        break;
    }
    FUN_0015842c(player);
    if (player->handle)
        asdSndApplyPendingVoiceState();
}
}
