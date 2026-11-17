#include "ui/UiSpriteApi.h"
#include "common.h"
#include "font/PlaceWin.h"
#include "code/Code001d_Smt4.h"

extern "C" {

extern PlaceWindow *g_placeWin;

void FUN_001dd910(void)
{
    if (g_placeWin != NULL) {
        vec2GetYInt(&g_placeWin->animation);
    }
}

} /* extern "C" */
