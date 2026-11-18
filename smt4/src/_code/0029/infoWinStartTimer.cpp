#include "ui/UiSpriteApi.h"
#include "font/InfoWin.h"
#include "code/Code0029_Smt4.h"

extern "C" {




void infoWinStartTimer(s32 unused)
{
    InfoWindow *obj = g_infoWin;

    g_infoWin->state = 5;
    obj->timer = 0x1e;
    timerStart(&obj->background, 1, 0);
}

} /* extern "C" */
