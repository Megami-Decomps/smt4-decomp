#include "ui/UiSpriteApi.h"
#include "font/PlaceWin.h"

extern "C" {
extern PlaceWindow *g_placeWin;

// Advance the place-name window's opening or closing animation and its frame counter.
u32 placeWindowUpdateAnimation(void)
{
    PlaceWindow *window = g_placeWin;
    switch (window->state) {
    case 0:
    case 2:
        break;
    case 1:
        if (FUN_00167458(&window->animation, 1)) {
            window->state = 2;
            window->frame = 0;
        }
        break;
    case 3:
        if (uiSpriteAdvanceAnimation(&window->animation, 1.0f))
            window->state = 0;
        break;
    }
    ++window->frame;
    return 0;
}
}
