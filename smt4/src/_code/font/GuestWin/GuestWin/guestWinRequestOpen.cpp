/* Guest window: when enabled, moves it to state 1 and starts its UI object with 0. */
#include "common.h"
#include "font/GuestWin/GuestWin.h"

extern "C" {

extern GuestWinOptions *gameGetSupportUnitData(void);
int FUN_002bee58(u8 *ui, int arg);

extern GuestWinWork *g_guestWin;

void guestWinRequestOpen(void)
{
    GuestWinWork *guest;

    if (gameGetSupportUnitData()->guestWinEnabled != 0) {
        guest = g_guestWin;
        guest->state = 1;
        FUN_002bee58(guest->ui, 0);
    }
}

} /* extern "C" */
