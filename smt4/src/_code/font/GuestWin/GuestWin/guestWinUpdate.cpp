/* NON_MATCHING: the early-out branch (guest window disabled) lands one instruction later in retail */
/* Guest window update: while enabled, advances the open/close state machine and counts frames. */
#include "common.h"
#include "font/GuestWin/GuestWin.h"

extern "C" {

extern GuestWinOptions *gameGetOptions(void);
extern int FUN_002bf818(u8 *ui);

extern GuestWinWork *g_guestWin;

u16 guestWinUpdate(void)
{
    GuestWinWork *guest;

    if (gameGetOptions()->guestWinEnabled != 0) {
        guest = g_guestWin;
        switch (guest->state) {
        case 0:
            break;
        case 1:
            if (FUN_002bf818(guest->ui) != 0) {
                guest->state = 2;
                guest->frames = 0;
            }
            break;
        case 2:
            break;
        case 3:
            if (FUN_002bf818(guest->ui) != 0) {
                guest->state = 0;
            }
            break;
        }
        guest->frames++;
    }
    return 0;
}

} /* extern "C" */
