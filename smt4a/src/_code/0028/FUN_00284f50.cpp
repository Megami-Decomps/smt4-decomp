#include "font/PlaceWin.h"
#include "Model/MoriModelShadowMap.h"
#include "ui/UiSpriteApi.h"

extern "C" {

extern PlaceWindow *g_placeWin;

/* Calls vec2GetXInt on the place window's animation sprite, if there is one. */
s32 FUN_00284f50(void)
{
    if (g_placeWin != NULL) {
        vec2GetXInt(&g_placeWin->animation);
        return;
    }
}

} /* extern "C" */
