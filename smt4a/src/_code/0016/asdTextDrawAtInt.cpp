#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"
#include "camp/RenderCtxA.h"
#include "gfx/StereoParallax.h"
#include "text/TextDraw.h"

extern "C" AsdTextDefaultsA g_asdTextDefaults;

/* Draws at a floating-point origin and measures the advance from the unadjusted origin.
 * IV's asdTextDrawAtInt inlines the same draw without the parallax correction. */
static __inline f32 asdTextDrawAt(AsdText *state, f32 originalX, f32 drawY, f32 fraction, f32 opacity)
{
    f32 result = 0.0f;
    if (state->unk54 == 0)
        return 0.0f;
    if (state->text[0] == '\0')
        return 0.0f;

    u8 alpha;
    if (opacity == 0.0f) {
        alpha = 0;
    } else if (opacity == 1.0f) {
        alpha = 255;
    } else {
        alpha = (u8)(u32)(opacity * 255.0f);
    }
    u32 color = g_asdTextDefaults.flags | alpha;
    f32 drawX = originalX;
    if (g_asdTextDefaults.enabled != 0)
        drawX += renderCtxCalculateStereoParallax(g_renderCtx, fraction);

    f32 advance = textDrawString(drawX, drawY, 0.0f,
                                 state->drawLayer, state->scale, color, opacity, state->text);
    f32 displacement = (advance + drawX) - originalX;
    if (displacement > 0.0f) {
        result = displacement;
    }
    return result;
}

/* Draws text at an integer position with the requested stereo adjustment. */
extern "C" f32 asdTextDrawAtInt(AsdText *state, s32 x, s32 y, s32 adjustment, f32 opacity)
{
    return asdTextDrawAt(state, (f32)x, (f32)y, (f32)(256 - adjustment) / 256.0f, opacity);
}
