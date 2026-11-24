/* NON_MATCHING: the 0.0f spawn depth is loaded into s23 at the top in retail (here after FUN_00186940), the colour word/alpha loads use different registers, and the pool loads of the angle constants are ordered differently (same residue as smt4 FUN_001f67ec). */
#include "code/Code0023_Smt4a.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/Shard0036.h"

struct TitleGradientPoint {
    f32 x, y;
};
struct TitleGradientBlock {
    RgbaWord color;
    u8 unk04[4];
    TitleGradientPoint first;
    TitleGradientPoint last;
};
struct TitleRadialGradient {
    u8 prefix[0xC];
    TitleGradientBlock block;
};
typedef char TitleRadialGradientOffsets[offsetof(TitleRadialGradient, block) == 0xC &&
    offsetof(TitleGradientBlock, first) == 8 && offsetof(TitleGradientBlock, last) == 0x10 ? 1 : -1];

extern "C" {
void FUN_00186940(void);
void effectSpawnPositionDefault(u32 color, f32 x, f32 y, f32 z);
f32 phaseCosine(f32);
f32 phaseSine(f32);

/* Angle of the i-th of the 19 points on the ring (a full turn in 18 steps, in the interpolation tables' units). */
static __inline f32 titleRingPhase(s32 i)
{
    return static_cast<f32>(i) * 6.2831855f * (1.0f / 18.0f) * 40.743664f;
}

/* The gradient colour with its stored byte order swapped, alpha byte kept as stored. */
static __inline u32 titleGradientColorWord(const RgbaWord *color)
{
    return (__rev(color->word) & ~0xFFu) | color->rgba.a;
}

/* Draws a coloured centre and an eighteen-segment transparent rim under a temporary render state. */
void FUN_002b3178(const TitleRadialGradient *gradient)
{
    const TitleGradientBlock *block = &gradient->block;
    RgbaWord centerColor;
    centerColor.word = titleGradientColorWord(&block->color);
    RgbaWord edgeColor;
    edgeColor.word = centerColor.word & ~0xFFu;
    renderCtxSelectTexture(g_renderCtx, 0);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    f32 centerX = block->first.x + (block->last.x - block->first.x) * 0.5f;
    f32 centerY = block->first.y + (block->last.y - block->first.y) * 0.5f;
    f32 radius = (block->last.x - block->first.x) * 0.5f;
    FUN_00186940();
    effectSpawnPositionDefault(centerColor.word, centerX, centerY, 0.0f);
    for (s32 i = 0; i < 19; ++i) {
        f32 x = centerX + radius * phaseCosine(titleRingPhase(i));
        f32 y = centerY + radius * phaseSine(titleRingPhase(i));
        effectSpawnPositionDefault(edgeColor.word, x, y, 0.0f);
    }
    effectSubmitDefaultDrawParameters();
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
}
}
