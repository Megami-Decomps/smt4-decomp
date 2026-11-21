/* NON_MATCHING: retail computes 256 - adjustment before the push and keeps the result and the zero constant in separate registers (s17/s21). */
#include "common.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "text/TextDraw.h"

extern "C" {
extern TextDrawDefaultsPrefixA g_asdTextDefaults;

f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 fraction);
}

extern "C" f32 FUN_00163ec4(TextDrawStatePrefixA *state, s32 x, s32 y,
                            s32 adjustment, f32 opacity)
{
    f32 fraction = (f32)(256 - adjustment) / 256.0f;
    f32 originalX = (f32)x;
    f32 drawY = (f32)y;
    f32 result = 0.0f;

    if (state->enabled != 0 && state->text[0] != 0) {
        u32 alpha;
        if (opacity == 0.0f)
            alpha = 0;
        else if (opacity == 1.0f)
            alpha = 255;
        else
            alpha = (u32)(opacity * 255.0f) & 255u;

        u32 color = g_asdTextDefaults.colorBits | alpha;
        f32 drawX = originalX;
        if (g_asdTextDefaults.adjustmentEnabled != 0)
            drawX = renderCtxCalculateStereoParallax(g_renderCtx, fraction) + drawX;

        f32 advance = textDrawString(drawX, drawY, 0.0f,
                                     state->resource, state->scale, color, opacity, state->text);
        f32 displacement = (advance + drawX) - originalX;
        result = displacement > 0.0f ? displacement : 0.0f;
    }
    return result;
}
