#include "font/InfoWinA.h"

extern "C" {


/* Returns 1 when the scene state is 1, 2, 3 or 4. */
u32 dialogIsActive(void)
{
    s32 state;
    u32 result;

    state = g_infoWin->state;
    if ((state == 3 || state == 4) || (state == 1 || state == 2)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
