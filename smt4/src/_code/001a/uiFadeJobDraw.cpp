#include "camp/UIFade/UIFade.h"

extern "C" {

extern UIFadeGlobals g_uiFade;
extern void uiFadeDraw(u32 flags);

/* Draws the visible fade overlay for its job callback. */
s32 uiFadeJobDraw(u32 job)
{
    if (g_uiFade.work->visible == 0) {
        return 0;
    }
    uiFadeDraw(0x81);
    return 0;
}

} /* extern "C" */
