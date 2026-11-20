#include "ui/UiSpriteApi.h"
#include "font/InfoWin.h"
#include "code/Code0029_Smt4.h"

extern "C" {




void infoWinStartTimer(void)
{
    InfoWindow *obj = g_infoWin;

    g_infoWin->state = 5;
    obj->timer = 0x1e;
    uiSpriteSetKeyframe(&obj->background, 1, 0);
}

} /* extern "C" */
