/* Guest window: returns 1 when the guest window is enabled and its UI object exists. */
#include "common.h"
#include "font/GuestWin/GuestWin.h"

extern "C" {

extern GuestWinOptions *gameGetSupportUnitData(void);

extern GuestWinWork *g_guestWin;

u32 guestWinIsShown(void)
{
    u32 shown = (u16)gameGetSupportUnitData()->guestWinEnabled;

    if (shown != 0) {
        shown = g_guestWin->state != 0;
    }
    return shown;
}

} /* extern "C" */
