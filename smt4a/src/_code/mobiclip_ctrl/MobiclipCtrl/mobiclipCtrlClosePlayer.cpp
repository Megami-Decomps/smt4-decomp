/* Closes the Mobiclip player; when `reason` is 3, flags that the movie ended on its own. */
#include "common.h"
#include "mobiclip_ctrl/MobiclipCtrl.h"

extern "C" {

int mobiclipPlayerReleaseHandle(u32 handle);
int FUN_0015836c(S4Player *player);

extern u8 g_mobiclipCtrl;
extern S4Player DAT_00617f40;

void mobiclipCtrlClosePlayer(int reason)
{
    S4Player *player = &DAT_00617f40;

    if (player->handle != 0) {
        mobiclipPlayerReleaseHandle(player->handle);
    }
    FUN_0015836c(player);
    if (reason == 3) {
        g_mobiclipCtrl = 1;
    }
}

} /* extern "C" */
