/* NON_MATCHING: the shared colour and line size are hoisted as in retail; remaining: retail loads the zero after the texture select and keeps the 300 line in s20 (d8-d10), and case 1 cross-jumps differently. */
#include "gfx/DebugGuides.h"
#include "gfx/ColoredQuad.h"
#include "camp/RenderCtxA.h"
#include "shard/S1ListPanel.h"

extern "C" {
s32 padButtonIsPressed(u32 button);

// Cycle between no guides, a center guide, and quarter-screen guides.
u32 btlEditorDrawGuides(DebugGuidesWork *work)
{
    if (padButtonIsPressed(9) != 0) {
        ++work->mode;
        if (work->mode >= 3)
            work->mode = 0;
    }
    /* Each guide is a one-pixel-wide, full-height vertical line. */
    u32 color = 0xFF7F;
    f32 width = 1.0f;
    f32 height = 240.0f;
    f32 top = 0.0f;
    renderCtxSelectTexture(g_renderCtx, 0);
    switch (work->mode) {
    case 1:
        gxSubmitDrawZeroExtraParams(200.0f, top, width, height, color, color, color, 0.0f, color);
        break;
    case 2:
        gxSubmitDrawZeroExtraParams(100.0f, top, width, height, color, color, color, 0.0f, color);
        gxSubmitDrawZeroExtraParams(200.0f, top, width, height, color, color, color, 0.0f, color);
        gxSubmitDrawZeroExtraParams(300.0f, top, width, height, color, color, color, 0.0f, color);
        break;
    }
    return 0;
}
}
