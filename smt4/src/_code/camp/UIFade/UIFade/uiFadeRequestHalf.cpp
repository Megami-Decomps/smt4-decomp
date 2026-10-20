/* Starts fade request 1: the overlay jumps to half alpha. */
#include "common.h"
#include "camp/UIFade/UIFade.h"

extern "C" {

extern UIFadeGlobals g_uiFade;

void uiFadeRequestHalf(void)
{
    UIFadeWork *fade = g_uiFade.work;

    if (fade != NULL) {
        fade->mode = 1;
        fade->alpha = 0.5f;
        fade->timer = 0;
    }
}

} /* extern "C" */
