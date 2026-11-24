#ifndef BATTLE_COLOR_OVERLAY_H
#define BATTLE_COLOR_OVERLAY_H

#include "camp/RenderCtxA.h"
#include "gfx/ColoredQuad.h"
#include "code/Code0023_Smt4a.h"

/* Both fade draw callbacks submit the same quad with the target screen's pass and width. */
template<bool top>
static __inline void btlDrawColorOverlay(u32 color)
{
    enum { OVERLAY_PASS_BOTTOM = 1, OVERLAY_PASS_TOP = 5 };

    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(top ? OVERLAY_PASS_TOP : OVERLAY_PASS_BOTTOM, top));
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxSelectTexture(g_renderCtx, 0);
    gxSubmitDrawZeroExtraParams(0.0f, 0.0f, top ? 400.0f : 320.0f, 240.0f,
                               color, color, color, 0.0f, color);
    effectSubmitDefaultDrawParameters();
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
}

extern "C" {
s32 btlDrawTopColorOverlay(u32 job);
s32 btlDrawBottomColorOverlay(u32 job);
} /* extern "C" */

#endif
