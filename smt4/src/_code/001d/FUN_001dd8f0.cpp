#include "ui/UiSpriteApi.h"
#include "common.h"
#include "camp/RenderCtx.h"
#include "font/PlaceWin.h"

extern "C" {

extern PlaceWindow *g_placeWin;

s32 FUN_001dd8f0(void)
{
    if (g_placeWin != NULL) {
        vec2GetXInt(&g_placeWin->animation);
    }
}

} /* extern "C" */
