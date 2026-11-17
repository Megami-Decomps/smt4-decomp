#include "ui/UiSpriteApi.h"
#include "font/InfoWinA.h"

extern "C" {


void infoWinShowDefault(void)
{
    InfoWindowA *window = g_infoWin;

    window->state = 1;
    uiSpriteSetKeyframe(&window->background, 0, 0);
    uiSpriteSetImageKeyframe(&window->background, 0, 0);
    window->style = 1;
    window->shown = 1;
    window->timer = 30;
    window->active = 3;
    window->unk32D = 0;
}

} /* extern "C" */
