#include "font/InfoWin.h"
#include "ui/UiControl.h"

extern "C" {



/* 1 for states 1-4. */
u32 dialogIsActive(void)
{
    int state = g_infoWin->state;
    u32 result;

    if ((state == 3 || state == 4) || (state == 1 || state == 2)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
