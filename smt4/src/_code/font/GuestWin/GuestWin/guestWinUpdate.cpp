/* Guest window update: while enabled, advances the open/close state machine and counts frames. */
#include "common.h"
#include "font/GuestWin/GuestWin.h"
#include "ui/UiSpriteApi.h"

extern "C" {

extern GuestWinOptions *gameGetSupportUnitData(void);

extern GuestWinWork *g_guestWin;

u16 guestWinUpdate(void)
{
    GuestWinWork *guest;

    if (gameGetSupportUnitData()->guestWinEnabled == 0) {
        return 0;
    }
    guest = g_guestWin;
    switch (guest->state) {
    case 0:
        break;
    case 1:
        if (uiSpriteAdvanceAnimation(&guest->sprite) != 0) {
            guest->state = 2;
            guest->frames = 0;
        }
        break;
    case 2:
        break;
    case 3:
        if (uiSpriteAdvanceAnimation(&guest->sprite) != 0) {
            guest->state = 0;
        }
        break;
    }
    guest->frames++;
    return 0;
}

} /* extern "C" */
