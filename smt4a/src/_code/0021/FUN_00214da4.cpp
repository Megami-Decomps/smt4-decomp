#include "ui/UiSpriteApi.h"
#include "font/PlaceWin.h"
#include "code/Code0021_Smt4a.h"

extern "C" {

extern PlaceWindow *g_placeWin;

/* Starts the place window's closing state and its animation. */
void FUN_00214da4(void)
{
    PlaceWindow *object;

    object = g_placeWin;
    g_placeWin->state = 3;
    uiSpriteSelectAnim(&object->animation, 1);
}

} /* extern "C" */
