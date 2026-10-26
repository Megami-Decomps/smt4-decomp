/* NON_MATCHING: stack-address evaluation order now matches retail (renderCtxPush wrappers); 29 diff lines remain, scheduling/register allocation only. */
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match3_SlotState.h"

extern "C" {
extern W6Match3SlotState DAT_006357d8[2];
extern RenderCtxA *g_renderCtx;
u32 FUN_001692ac(u32 kind, bool enabled);
u32 asdGxPresetsGetByKind(u32 kind);
u32 asdGxPresetsGetHeightByKind(u32 kind);
void FUN_0014e314(u32 topLeft, u32 topRight, u32 bottomLeft, u32 bottomRight,
    f32 x, f32 y, f32 width, f32 height, f32 depth);

// Draw the requested fade slot's color over the full selected render target.
void FUN_0013c00c(s32 index)
{
    W6Match3SlotState *fade = &DAT_006357d8[index];
    u32 color = fade->index;
    u32 alpha = static_cast<u32>(fade->value * static_cast<f32>(color & 0xFF));
    if (alpha != 0) {
        if (alpha > 255)
            alpha = 255;
        color = (color & 0xFFFFFF00) | alpha;
        RenderCtxA *context = g_renderCtx;
        renderCtxPushA(context, FUN_001692ac(1, false));
        renderCtxSelectTexture(g_renderCtx, NULL);
        f32 height = static_cast<f32>(asdGxPresetsGetByKind(g_renderCtx->stereoMode));
        f32 width = static_cast<f32>(asdGxPresetsGetHeightByKind(g_renderCtx->stereoMode));
        FUN_0014e314(color, color, color, color, 0.0f, 0.0f, width, height, 0.0f);
        renderStackPop(&g_renderCtx->stackA);
    }
}
}
