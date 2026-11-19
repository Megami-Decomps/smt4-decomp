#include "ui/AnimatedMessage.h"
#include "Terminal/tmnlMain.h"
#include "shard/S1ListPanel.h"
#include "camp/RenderCtxA.h"
#include "text/TextDraw.h"

extern "C" {
extern TmnlGlobalsA g_tmnl;

// Draw the current terminal's name on opening and run its render-state pass.
s32 tmnlDrawDestinationName(u32 task)
{
    const TmnlWorkA *work = g_tmnl.work;
    if (work->openingMode - 1 < 17) {
        if (work->openingMode == 1) {
            textDrawString(150.0f, 0.0f, 0.0f, 3, 1.0f, 0xFFFFFFFF, 1.0f,
                           g_tmnlEntries[work->destination].name);
        }
        RenderCtxA *context = g_renderCtx;
        renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
        renderStackPop(&g_renderCtx->stackA);
    }
    return 0;
}
}
