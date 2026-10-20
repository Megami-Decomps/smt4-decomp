/* Guest window: returns 1 when the guest window is enabled and its UI object exists. */
#include "common.h"
#include "font/GuestWin/GuestWin.h"

extern "C" {

extern GuestWinOptions *gameGetOptions(void);

extern GuestWinWork *g_guestWin;

u32 guestWinIsShown(void)
{
    return gameGetOptions()->guestWinEnabled != 0 && g_guestWin->state != 0;
}

} /* extern "C" */
