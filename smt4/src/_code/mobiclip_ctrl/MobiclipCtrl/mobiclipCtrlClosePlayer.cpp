/* Closes the Mobiclip player; when `reason` is 3, flags that the movie ended on its own. */
#include "common.h"
#include "mobiclip_ctrl/MobiclipCtrl.h"

extern "C" {

int mobiclipPlayerReleaseHandle(u32 handle);
int timedJobBeginStop(S4Player *player);

extern u8 g_mobiclipCtrl;
extern S4Player g_mobiclipPlayer;

void mobiclipCtrlClosePlayer(int reason)
{
    S4Player *player = &g_mobiclipPlayer;

    mobiclipPlayerReleaseHandle(player->handle);
    timedJobBeginStop(player);
    if (reason == 3) {
        g_mobiclipCtrl = 1;
    }
}

} /* extern "C" */
