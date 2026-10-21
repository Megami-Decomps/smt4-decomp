#include "common.h"
#include "font/GuestWin/GuestWin.h"

extern "C" {

GuestWinOptionsA *gameGetOptions(void);
s32 FUN_00163aa4(u8 *ui, f32 speed);
extern GuestWinWorkA *g_guestWin;

u16 guestWinUpdate(void)
{
    if (gameGetOptions()->guestWinEnabled == 0) {
        return 0;
    }

    GuestWinWorkA *guest = g_guestWin;
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
    default:
        break;
    }

    ++guest->frames;
    return 0;
}

}
