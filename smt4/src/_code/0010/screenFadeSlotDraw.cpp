#include "camp/RenderCtx.h"
#include "gfx/ColoredQuad.h"
#include "shard/W6_W6Match3_SlotState.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
extern W6Match3SlotState g_screenFadeSlots[2];
u32 asdGxPresetsGetByKind(u32);
u32 asdGxPresetsGetHeightByKind(u32);

/* Draw the selected screen-fade color with its current interpolated opacity. */
void screenFadeSlotDraw(s32 index)
{
    W6Match3SlotState *fade = &g_screenFadeSlots[index];
    u32 color = fade->index;
    u32 alpha = static_cast<u32>(fade->value * static_cast<f32>(color & 0xFF));
    if (alpha == 0)
        return;
    if (alpha > 255)
        alpha = 255;
    color = (color & 0xFFFFFF00) | alpha;
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    renderCtxSelectTexture(g_titleScene, 0);
    f32 height = static_cast<f32>(asdGxPresetsGetByKind(renderCtxGetStereoMode(g_titleScene)));
    f32 width = static_cast<f32>(asdGxPresetsGetHeightByKind(renderCtxGetStereoMode(g_titleScene)));
    gxSubmitDrawZeroExtraParams(0.0f, 0.0f, width, height, color, color, color, 0.0f, color);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
}
}
