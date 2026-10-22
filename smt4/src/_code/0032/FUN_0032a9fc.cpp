#include "font/PlaceWin.h"

extern "C" {
s32 FUN_002b8ee0(void *animation, u32 mode);
s32 FUN_002bf818(void *animation);
extern PlaceWindow *g_placeWin;

/* Advances opening and closing animations and the window's frame counter. */
u32 FUN_0032a9fc(void)
{
    PlaceWindow *window = g_placeWin;
    switch (window->state) {
    case 0:
        break;
    case 1:
        if (FUN_002b8ee0(window->animation, 1)) {
            window->state = 2;
            window->frame = 0;
        }
        break;
    case 2:
        break;
    case 3:
        if (FUN_002bf818(window->animation)) {
            window->state = 0;
        }
        break;
    }
    ++window->frame;
    return 0;
}
}
