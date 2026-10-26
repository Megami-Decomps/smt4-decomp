/* NON_MATCHING: packed-color swaps become REV rather than retail shifts, and zero-depth/VFP scheduling differs; CPU5TE/O2 candidates. */
#include "camp/RenderCtx.h"

namespace {
struct DrawOffset {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
};

inline u32 swapColorBytes(u32 color)
{
    return (color << 24) | (((color >> 8) & 0xFF) << 16) |
           (((color >> 16) & 0xFF) << 8) | (color >> 24);
}
}

extern "C" {
extern RenderCtxA* g_renderCtx;
extern DrawOffset g_uiDrawOffset;
u32 FUN_001692ac(u32 value, bool enabled);
void FUN_0014e314(u32 first, u32 second, u32 third, u32 fourth,
                 f32 x, f32 y, f32 width, f32 height, f32 depth);

/* Draw a two-color rectangle after offsetting and truncating its integer origin. */
void gfxDrawOffsetTwoColorRect(s32 x, s32 y, s32 width, s32 height, u32 firstColor, u32 secondColor)
{
    RenderCtxA* context = g_renderCtx;
    const DrawOffset offset = g_uiDrawOffset;
    const s32 screenX = static_cast<s32>(static_cast<f32>(x) + offset.x);
    const s32 screenY = static_cast<s32>(static_cast<f32>(y) + offset.y);
    const u32 first = swapColorBytes(firstColor);
    const u32 second = swapColorBytes(secondColor);
    const u32 state = FUN_001692ac(1, true);
    renderStackPush(&context->stackA, state);
    renderCtxSelectTexture(g_renderCtx, 0);
    FUN_0014e314(first, first, second, second,
                 static_cast<f32>(screenX), static_cast<f32>(screenY),
                 static_cast<f32>(width), static_cast<f32>(height), 0.0f);
    renderStackPop(&g_renderCtx->stackA);
}
} // extern "C"
