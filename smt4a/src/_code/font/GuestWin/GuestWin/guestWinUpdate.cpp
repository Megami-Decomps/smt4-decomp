#include "common.h"
#include "font/GuestWin/GuestWin.h"
#include "ui/UiSpriteApi.h"

extern "C" {

GuestWinOptionsA *gameGetOptions(void);
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
        if (uiSpriteAdvanceAnimation(&guest->sprite, 1.0f) != 0) {
            guest->state = 2;
            guest->frames = 0;
        }
        break;
    case 2:
        break;
    case 3:
        if (uiSpriteAdvanceAnimation(&guest->sprite, 1.0f) != 0) {
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
