/* Starts fade request 2: the overlay goes fully transparent. */
#include "common.h"
#include "camp/UIFade/UIFade.h"

extern "C" {

extern UIFadeGlobals g_uiFade;

void uiFadeRequestClear(void)
{
    UIFadeWork *fade = g_uiFade.work;

    if (fade != NULL) {
        fade->mode = 2;
        fade->alpha = 0.0f;
        fade->timer = 0;
    }
}

} /* extern "C" */
