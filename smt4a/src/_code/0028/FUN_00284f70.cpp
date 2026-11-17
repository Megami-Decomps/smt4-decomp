#include "font/PlaceWin.h"
#include "code/Code0028_Smt4a.h"
#include "ui/UiSpriteApi.h"

extern "C" {

extern PlaceWindow *g_placeWin;

/* Calls vec2GetYInt on the place window's animation sprite, if there is one. */
void FUN_00284f70(void)
{
    if (g_placeWin != NULL) {
        vec2GetYInt(&g_placeWin->animation);
        return;
    }
}

} /* extern "C" */
