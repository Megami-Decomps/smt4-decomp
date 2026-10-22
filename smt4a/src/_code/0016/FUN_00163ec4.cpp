/* NON_MATCHING: Adjusted-text fraction registers and return predication differ. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
extern TextDrawDefaultsPrefixA g_asdTextDefaults;

f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 fraction);
f32 FUN_00162790(u32 resource, u32 color, const char *text,
                 f32 x, f32 y, f32 z, f32 scale, f32 opacity);
}

extern "C" f32 FUN_00163ec4(TextDrawStatePrefixA *state, s32 x, s32 y,
                            s32 adjustment, f32 opacity)
{
    const f32 fraction = static_cast<f32>(
        static_cast<s32>(256u - static_cast<u32>(adjustment))) * (1.0f / 256.0f);
    const f32 originalX = static_cast<f32>(x);
    const f32 drawY = static_cast<f32>(y);

    if (state->enabled == 0 || state->text[0] == 0)
        return 0.0f;

    u32 alpha;
    if (opacity == 0.0f)
        alpha = 0;
    else if (opacity == 1.0f)
        alpha = 255;
    else
        alpha = static_cast<u32>(opacity * 255.0f) & 255u;

    const u32 color = g_asdTextDefaults.colorBits | alpha;
    f32 drawX = originalX;
    if (g_asdTextDefaults.adjustmentEnabled != 0)
        drawX = renderCtxCalculateStereoParallax(g_renderCtx, fraction) + drawX;

    const f32 advance = FUN_00162790(state->resource, color, state->text,
                                    drawX, drawY, 0.0f, state->scale, opacity);
    const f32 displacement = (advance + drawX) - originalX;
    return displacement > 0.0f ? displacement : 0.0f;
}
