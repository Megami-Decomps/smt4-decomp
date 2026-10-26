/* NON_MATCHING: inline stack scheduling, removed target-query hooks, and VFP argument scheduling differ. */
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match3_SlotState.h"

extern "C" {
extern W6Match3SlotState DAT_004d9758[2];
extern RenderCtx *g_titleScene;
s32 FUN_002c5d80(u32, u32);
u32 asdGxPresetsGetByKind(u32);
u32 FUN_002c15ac(u32);
void FUN_002c0944(u32 topLeft, u32 topRight, u32 bottomLeft, u32 bottomRight,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);

/* Draw the selected screen-fade color with its current interpolated opacity. */
void FUN_00107784(s32 index)
{
    W6Match3SlotState *fade = &DAT_004d9758[index];
    u32 color = fade->index;
    u32 alpha = static_cast<u32>(fade->value * static_cast<f32>(color & 0xFF));
    if (alpha == 0)
        return;
    if (alpha > 255)
        alpha = 255;
    color = (color & 0xFFFFFF00) | alpha;
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, FUN_002c5d80(1, 0));
    renderCtxSelectTexture(g_titleScene, 0);
    f32 height = static_cast<f32>(asdGxPresetsGetByKind(g_titleScene->unk0528));
    f32 width = static_cast<f32>(FUN_002c15ac(g_titleScene->unk0528));
    FUN_002c0944(color, color, color, color, 0.0f, 0.0f, width, height, 0.0f);
    renderStackPop(&g_titleScene->stackA);
}
}
