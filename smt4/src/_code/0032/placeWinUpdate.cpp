#include "ui/UiSpriteApi.h"
#include "font/PlaceWin.h"

extern "C" {
extern PlaceWindow *g_placeWin;

/* Advances opening and closing animations and the window's frame counter. */
u32 placeWinUpdate(void)
{
    PlaceWindow *window = g_placeWin;
    switch (window->state) {
    case 0:
        break;
    case 1:
        if (uiSlidingSpriteAdvance(&window->animation, 1)) {
            window->state = 2;
            window->frame = 0;
        }
        break;
    case 2:
        break;
    case 3:
        if (uiSpriteAdvanceAnimation(&window->animation)) {
            window->state = 0;
        }
        break;
    }
    ++window->frame;
    return 0;
}
}
