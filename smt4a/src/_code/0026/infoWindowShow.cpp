#include "ui/UiSpriteApi.h"
#include "font/InfoWinA.h"

extern "C" {


void infoWindowShow(u32 argA, u32 argB, u8 style)
{
    InfoWindowA *window = g_infoWin;

    window->state = 1;
    uiSpriteSetKeyframe(&window->background, 0, 0);
    uiSpriteSetImageKeyframe(&window->background, 0, 0);
    window->style = style;
    window->shown = 1;
    window->timer = 30;
    window->active = 1;
    window->argA = argA;
    window->argB = argB;
    window->unk32D = 0;
}

} /* extern "C" */
