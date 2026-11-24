#include "shard/W6_W6Match5_CommonBackground.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "shard/S1ListPanel.h"

extern "C" {
void efctSetSpeed(f32 speed);

// Draw the active common background at its current playback speed, restoring render state.
s32 commonBackgroundDraw()
{
    CommonBackgroundState *background = g_commonBg.background;
    if (background == NULL)
        return 0;
    if (background->state != 0 && background->progress > 0.0f) {
        efctSetSpeed(background->progress);
        RenderCtxA *context = g_renderCtx;
        u32 drawState = renderCtxPackPassFlags(1, 0);
        renderCtxPushA(context, drawState);
        texDrawTableEntryAtStoredOrigin(2, 8, 0x10C, 0, 0, 0xFB);
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
        efctSetSpeed(1.0f);
    }
    return 0;
}
}
