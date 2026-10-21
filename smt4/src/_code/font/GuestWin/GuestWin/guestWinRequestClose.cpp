/* Guest window: when enabled, moves it to state 3 and starts its UI object with 1. */
#include "common.h"
#include "font/GuestWin/GuestWin.h"

extern "C" {

extern GuestWinOptions *gameGetSupportUnitData(void);
int FUN_002bee58(u8 *ui, int arg);

extern GuestWinWork *g_guestWin;

void guestWinRequestClose(void)
{
    GuestWinWork *guest;

    if (gameGetSupportUnitData()->guestWinEnabled != 0) {
        guest = g_guestWin;
        guest->state = 3;
        FUN_002bee58(guest->ui, 1);
    }
}

} /* extern "C" */
