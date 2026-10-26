#include "common.h"
#include "gfx/StereoParallax.h"
#include "shard/TextureDrawCall.h"
#include "code/Code003f.h"

struct RenderCtx;

extern "C" {
extern RenderCtx *g_renderCtx;
void efctSetSpeed(f32 alpha);

/* Draws glyphs 0x65.. as a three-glyph row at firstX and a four-glyph row at secondX, faded by
 * alpha. */
void FUN_003f5b14(void *owner, s32 y, u32 color, s32 firstX, s32 secondX, f32 alpha)
{
    s32 offset = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    efctSetSpeed(alpha);
    for (s32 i = 0; i < 3; i++) {
        FUN_001835b4(2, 0x31, firstX + i, offset + y, color, 0x65 + i);
    }
    for (s32 i = 0; i < 4; i++) {
        FUN_001835b4(2, 0x31, secondX + i, offset + y, color, 0x65 + i);
    }
    efctSetSpeed(1.0f);
}
}
