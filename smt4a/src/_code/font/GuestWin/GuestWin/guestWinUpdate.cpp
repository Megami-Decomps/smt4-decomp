#include "common.h"
#include "font/GuestWin/GuestWin.h"

extern "C" {

extern GuestWinOptionsA *gameGetOptions(void);
extern int FUN_00163aa4(u8 *ui, f32 speed);

extern GuestWinWorkA *g_guestWin;

/* Guest window update: while enabled, advances the open/close state machine and counts frames. */
u16 guestWinUpdate(void)
{
    GuestWinWorkA *guest;

    if (gameGetOptions()->guestWinEnabled == 0) {
        return 0;
    }
    guest = g_guestWin;
    switch (guest->state) {
    case 0:
        break;
    case 1:
        if (FUN_00163aa4(guest->ui, 1.0f) != 0) {
            guest->state = 2;
            guest->frames = 0;
        }
        break;
    case 2:
        break;
    case 3:
        if (FUN_00163aa4(guest->ui, 1.0f) != 0) {
            guest->state = 0;
        }
        break;
    }
    guest->frames++;
    return 0;
}

} /* extern "C" */
