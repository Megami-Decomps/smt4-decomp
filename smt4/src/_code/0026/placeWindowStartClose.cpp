#include "ui/UiSpriteApi.h"
#include "font/PlaceWin.h"

extern "C" {

extern PlaceWindow *g_placeWin;

void placeWindowStartClose(void)
{
    PlaceWindow *obj = g_placeWin;

    g_placeWin->state = 3;
    spriteStartAnimationByIndex(&obj->animation, 1);
}

} /* extern "C" */
