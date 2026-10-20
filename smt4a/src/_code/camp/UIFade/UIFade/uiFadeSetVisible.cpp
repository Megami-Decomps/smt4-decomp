/* Shows or hides the fade overlay, if it is open. */
#include "common.h"
#include "camp/UIFade/UIFade.h"

extern "C" {

extern UIFadeGlobals g_uiFade;

void uiFadeSetVisible(u8 visible)
{
    if (g_uiFade.work != NULL) {
        g_uiFade.work->visible = visible;
    }
}

} /* extern "C" */
