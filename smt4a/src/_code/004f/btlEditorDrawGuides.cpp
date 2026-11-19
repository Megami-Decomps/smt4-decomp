/* NON_MATCHING: guide positions and modes reconstructed; constant hoisting and VFP allocation differ. */
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
    renderCtxSelectTexture(g_renderCtx, 0);
    switch (work->mode) {
    case 1:
        gxSubmitDrawZeroExtraParams(200.0f, 0.0f, 1.0f, 240.0f, 0xFF7F, 0xFF7F, 0xFF7F, 0.0f, 0xFF7F);
        break;
    case 2:
        gxSubmitDrawZeroExtraParams(100.0f, 0.0f, 1.0f, 240.0f, 0xFF7F, 0xFF7F, 0xFF7F, 0.0f, 0xFF7F);
        gxSubmitDrawZeroExtraParams(200.0f, 0.0f, 1.0f, 240.0f, 0xFF7F, 0xFF7F, 0xFF7F, 0.0f, 0xFF7F);
        gxSubmitDrawZeroExtraParams(300.0f, 0.0f, 1.0f, 240.0f, 0xFF7F, 0xFF7F, 0xFF7F, 0.0f, 0xFF7F);
        break;
    }
    return 0;
}
}
