/* NON_MATCHING: guide positions and modes reconstructed; constant hoisting and VFP allocation differ. */
#include "gfx/DebugGuides.h"
#include "shard/S1ListPanel.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
s32 padButtonIsPressed(u32 button);
void FUN_0014e314(u32 color0, u32 color1, u32 color2, u32 color3,
                  f32 x, f32 y, f32 width, f32 height, f32 z);

// Cycle between no guides, a center guide, and quarter-screen guides.
u32 FUN_004f4938(DebugGuidesWork *work)
{
    if (padButtonIsPressed(9) != 0) {
        ++work->mode;
        if (work->mode >= 3)
            work->mode = 0;
    }
    renderCtxSelectTexture(g_renderCtx, 0);
    switch (work->mode) {
    case 1:
        FUN_0014e314(0xFF7F, 0xFF7F, 0xFF7F, 0xFF7F,
                     200.0f, 0.0f, 1.0f, 240.0f, 0.0f);
        break;
    case 2:
        FUN_0014e314(0xFF7F, 0xFF7F, 0xFF7F, 0xFF7F,
                     100.0f, 0.0f, 1.0f, 240.0f, 0.0f);
        FUN_0014e314(0xFF7F, 0xFF7F, 0xFF7F, 0xFF7F,
                     200.0f, 0.0f, 1.0f, 240.0f, 0.0f);
        FUN_0014e314(0xFF7F, 0xFF7F, 0xFF7F, 0xFF7F,
                     300.0f, 0.0f, 1.0f, 240.0f, 0.0f);
        break;
    }
    return 0;
}
}
