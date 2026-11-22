/* Guest window: when enabled, moves it to state 1 and starts its UI object with 0. */
#include "common.h"
#include "font/GuestWin/GuestWin.h"
#include "ui/UiSpriteApi.h"

extern "C" {

extern GuestWinOptions *gameGetSupportUnitData(void);

extern GuestWinWork *g_guestWin;

void guestWinRequestOpen(void)
{
    GuestWinWork *guest;

    if (gameGetSupportUnitData()->guestWinEnabled != 0) {
        guest = g_guestWin;
        guest->state = 1;
        spriteStartAnimationByIndex(&guest->sprite, 0);
    }
}

} /* extern "C" */
