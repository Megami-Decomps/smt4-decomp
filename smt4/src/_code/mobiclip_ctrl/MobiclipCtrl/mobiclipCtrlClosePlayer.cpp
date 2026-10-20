/* Closes the Mobiclip player; when `reason` is 3, flags that the movie ended on its own. */
#include "common.h"
#include "mobiclip_ctrl/MobiclipCtrl.h"

extern "C" {

int FUN_0011b638(u32 handle);
int FUN_0011b6c8(S4Player *player);

extern u8 DAT_0044d020;
extern S4Player DAT_004c3b20;

void mobiclipCtrlClosePlayer(int reason)
{
    S4Player *player = &DAT_004c3b20;

    FUN_0011b638(player->handle);
    FUN_0011b6c8(player);
    if (reason == 3) {
        DAT_0044d020 = 1;
    }
}

} /* extern "C" */
