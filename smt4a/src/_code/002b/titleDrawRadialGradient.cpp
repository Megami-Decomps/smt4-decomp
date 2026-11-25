#include "code/Code0023_Smt4a.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "gfx/TitleRadialGradient.h"

extern "C" {
void FUN_00186940(void);
void effectSpawnPositionDefault(u32 color, f32 x, f32 y, f32 z);
f32 phaseCosine(f32);
f32 phaseSine(f32);

/* nn::math::SinRad and CosRad: the table sine and cosine take the angle as a table index (see nw/math/Trig.h). */
static __inline f32 sinRad(f32 radians)
{
    return phaseSine(radians * 40.743664f);
}

static __inline f32 cosRad(f32 radians)
{
    return phaseCosine(radians * 40.743664f);
}

enum { GRADIENT_RING_SEGMENTS = 18 };

/* Draws a coloured centre and a transparent rim under a temporary render state. */
void titleDrawRadialGradient(const TitleRadialGradient *gradient, u32)
{
    const f32 depth = 0.0f;
    const TitleGradientBlock *block = &gradient->block;
    RgbaWord centerColor = block->color;
    centerColor.word = (__rev(centerColor.word) & ~0xFFu) | block->color.rgba.a;
    RgbaWord edgeColor;
    edgeColor.word = centerColor.word & ~0xFFu;
    renderCtxSelectTexture(g_renderCtx, 0);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, false));
    f32 centerX = block->first.x + (block->last.x - block->first.x) * 0.5f;
    f32 centerY = block->first.y + (block->last.y - block->first.y) * 0.5f;
    f32 radius = (block->last.x - block->first.x) * 0.5f;
    FUN_00186940();
    effectSpawnPositionDefault(centerColor.word, centerX, centerY, depth);
    for (s32 i = 0; i < GRADIENT_RING_SEGMENTS + 1; ++i) {
        f32 x = centerX + radius * cosRad((f32)i * 6.2831855f / GRADIENT_RING_SEGMENTS);
        f32 y = centerY + radius * sinRad((f32)i * 6.2831855f / GRADIENT_RING_SEGMENTS);
        effectSpawnPositionDefault(edgeColor.word, x, y, depth);
    }
    effectSubmitDefaultDrawParameters();
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
}
} /* extern "C" */
