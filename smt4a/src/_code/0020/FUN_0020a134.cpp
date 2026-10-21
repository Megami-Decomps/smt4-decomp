#include "camp/UIFade/UIFade.h"

extern "C" {

extern UIFadeGlobals g_uiFade;

/* Advances the fade-in or fade-out timer and clamps the opacity to its endpoint. */
s32 FUN_0020a134(void)
{
    UIFadeWork *fade = g_uiFade.work;
    if (fade->mode == 0) {
        return 0;
    }
    switch (fade->mode) {
    case 1:
        fade->alpha = 0.5f - fade->timer * 0.0625f;
        if (++fade->timer >= 8) {
            fade->alpha = 0.0f;
            fade->mode = 0;
        }
        break;
    case 2:
        fade->alpha = fade->timer * 0.0625f;
        if (++fade->timer >= 8) {
            fade->alpha = 0.5f;
            fade->mode = 0;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
